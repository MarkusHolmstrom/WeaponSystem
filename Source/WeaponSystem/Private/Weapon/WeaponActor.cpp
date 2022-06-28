// Fill out your copyright notice in the Description page of Project Settings.


#include "Weapon/WeaponActor.h"
#include "Weapon/WeaponActorComponent.h"
#include "Components/SceneComponent.h"
#include "Components/BoxComponent.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/Pawn.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
AWeaponActor::AWeaponActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	DefaultMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MyMesh"));
	DefaultMesh->SetSimulatePhysics(true);
	RootComponent = DefaultMesh;

	bHolding = false;
	bGravity = false;
	bDropped = false;
}

// Called when the game starts or when spawned
void AWeaponActor::BeginPlay()
{
	Super::BeginPlay();
	if (!PlayerPawn || !PlayerCamera)
	{
		NullCheck();
	}

	TArray<USceneComponent*> Components;
	PlayerPawn->GetComponents(Components);

	WeaponComp = PlayerPawn->GetComponentByClass(TSubclassOf<UWeaponActorComponent>());
	
	if (Components.Num() > 0)
	{
		for (auto& Comp : Components) {
			/*GEngine->AddOnScreenDebugMessage(INDEX_NONE, 19.f, FColor::Yellow, 
				Comp->GetName());*/

			if (Comp->GetName().Compare("HoldingComponent") == 0)
			{
				HoldingComp = Cast<USceneComponent>(Comp);
			}
			else if (Comp->GetName().Compare(MeshCompName) == 0)
			{
				MeshComp = Cast<USceneComponent>(Comp);
			}
		}
	}
}

// Called every frame
void AWeaponActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (bHolding && HoldingComp)
	{
		SetActorLocationAndRotation(HoldingComp->GetComponentLocation(), HoldingComp->GetComponentRotation());
	}
}


void AWeaponActor::RotateActor()
{
	ControlRotation = GetWorld()->GetFirstPlayerController()->GetControlRotation();
	SetActorRotation(FQuat(ControlRotation));
}

// Drop or pick up object
void AWeaponActor::Interact(bool bPickingUp, int DropForce)
{
	bHolding = bPickingUp;
	bGravity = !bPickingUp;
	if (DefaultMesh)
	{
		DefaultMesh->SetEnableGravity(bGravity);
		DefaultMesh->SetSimulatePhysics(bHolding ? false : true);
		DefaultMesh->SetCollisionEnabled(bHolding ? ECollisionEnabled::NoCollision : ECollisionEnabled::QueryAndPhysics);
	}
	else
	{
		GEngine->AddOnScreenDebugMessage(INDEX_NONE, 5.f, FColor::Red, FString::Printf(TEXT(
			"Error: Something is wrong, (MyMesh not found in this pick up, yell at Markus now!) can you hear me, Major Tom? x3")));

		return;
	}

	if (HoldingComp && bHolding)
	{
		DefaultMesh->AttachToComponent(HoldingComp, 
			FAttachmentTransformRules::KeepRelativeTransform);

		SetActorRelativeLocation(FVector::ZeroVector);
	}

	if (bHolding)
	{
		if (!PlayerPawn || !PlayerCamera)
		{
			NullCheck();
		}

		if (MeshComp)
		{
			AttachToPlayerMesh();
		}
	}

	if (!bHolding)
	{
		if (DefaultMesh->IsAttachedTo(HoldingComp))
		{
			DefaultMesh->DetachFromComponent(FDetachmentTransformRules::KeepWorldTransform);
		}

		if (!PlayerPawn || !PlayerCamera)
		{
			NullCheck();
		}
		if (PlayerCamera && DefaultMesh->IsSimulatingPhysics())
		{
			DefaultMesh->SetPhysicsLinearVelocity(PlayerPawn->GetActorForwardVector() * DropForce);		
		}
	}
}

void AWeaponActor::AttachToPlayerMesh()
{
	DefaultMesh->AttachToComponent(MeshComp,
		FAttachmentTransformRules::SnapToTargetIncludingScale, SocketName);

}

void AWeaponActor::NullCheck()
{
	PlayerPawn = UGameplayStatics::GetPlayerPawn(this, 0);
	PlayerCamera = PlayerPawn->FindComponentByClass<UCameraComponent>();
}


