// Fill out your copyright notice in the Description page of Project Settings.


#include "Weapon/WeaponActor.h"
#include "Weapon/WeaponActorComponent.h"
#include "Weapon/Flamethrower.h"
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
	DefaultMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("WeaponMesh"));
	DefaultMesh->SetSimulatePhysics(true);
	RootComponent = DefaultMesh;

	bHolding = false;
	bGravity = false;
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

	WAC = PlayerPawn->FindComponentByClass<UWeaponActorComponent>();
	SetupWeaponStats();

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
				MeshComp = Cast<USkeletalMeshComponent>(Comp);
				GEngine->AddOnScreenDebugMessage(INDEX_NONE, 19.f, FColor::Yellow,
					Comp->GetName());
			}
		}
	}
}

void AWeaponActor::SetupWeaponStats() 
{
	TotalAmmoLeft = AmmoCapacity * MagCapacity;
	switch (KindOfWeapon)
	{
	case EKindOfWeapon::None:
		break;
	case EKindOfWeapon::Flamethrower:
		FlamethrowerInstance = FindComponentByClass<UFlamethrower>();
		if (FlamethrowerInstance)
		{
			/*GEngine->AddOnScreenDebugMessage(INDEX_NONE, 19.f, FColor::Yellow,
				FlamethrowerInstance->GetName());*/
		}
		break;
	case EKindOfWeapon::BlockGun:
		break;

	default:
		break;
	}
}

void AWeaponActor::ToggleCanShoot()
{
	switch (KindOfWeapon)
	{
	case EKindOfWeapon::None:
		break;
	case EKindOfWeapon::Flamethrower:
		bIsFiring = false;
		FlamethrowerInstance->ToggleCanFire();
		break;
	case EKindOfWeapon::BlockGun:
		break;

	default:
		break;
	}

}

void AWeaponActor::ShootFromComp()
{
	// Reduce ammo remaining
	AmmoLeft -= FireRate;
	TotalAmmoLeft -= FireRate;
	GEngine->AddOnScreenDebugMessage(INDEX_NONE, 19.f, FColor::Yellow, 
		FString::Printf(TEXT("%f"), AmmoLeft));
	switch (KindOfWeapon)
	{
	case EKindOfWeapon::None:
		break;
	case EKindOfWeapon::Flamethrower:
		bIsFiring = true;
		FlamethrowerInstance->OnFire();
		break;
	case EKindOfWeapon::BlockGun:
		break;

	default:
		break;
	}

}

// Called every frame
void AWeaponActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (bHolding)
	{
		if (bIsFiring)
		{
			FlamethrowerInstance->OnFire();
			AmmoLeft -= FireRate; 
			TotalAmmoLeft -= FireRate;
			if (AmmoLeft <= 0)
			{
				bIsReloading = true;
			}
			GEngine->AddOnScreenDebugMessage(INDEX_NONE, 19.f, FColor::Yellow,
				FString::Printf(TEXT("%f"), AmmoLeft));
		}
		else if (FlamethrowerInstance)
		{
			FlamethrowerInstance->StopFire();
		}
	}

	if (bIsReloading)
	{
		Reloading(DeltaTime);
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
		if (WAC)
		{
			WAC->OnFire.BindUObject(this, &AWeaponActor::FireWeapon);
			WAC->OnRelease.BindUObject(this, &AWeaponActor::StopFireWeapon);
			//WAC->OnReloading.BindUObject(this, &AWeaponActor::Reloading);

		}
		// https://www.coursera.org/lecture/intermediate-object-oriented-programming--unreal-games/single-delegates-in-unreal-bgxJ6
		
		ToggleCanShoot();

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
		ToggleCanShoot();
		WAC->OnFire.Unbind();

		DefaultMesh->DetachFromComponent(FDetachmentTransformRules::KeepWorldTransform);
		
	}
}

void AWeaponActor::AttachToPlayerMesh()
{
	DefaultMesh->AttachToComponent(MeshComp,
		FAttachmentTransformRules(EAttachmentRule::SnapToTarget, true), TEXT("GripPoint"));
	
	SetActorRelativeRotation(FQuat(RelRot));
	SetActorRelativeLocation(RelLoc);
	
}

void AWeaponActor::NullCheck()
{
	PlayerPawn = UGameplayStatics::GetPlayerPawn(this, 0);
	PlayerCamera = PlayerPawn->FindComponentByClass<UCameraComponent>();
}

void AWeaponActor::FireWeapon(float Damage)
{
	ShootFromComp();
}

void AWeaponActor::StopFireWeapon(float Damage)
{
	if (KindOfWeapon == EKindOfWeapon::Flamethrower)
	{
		bIsFiring = false;
	}
}

void AWeaponActor::Reloading(float DeltaTime)
{
	StopFireWeapon(0);
	// Avoid reloading if there is no more mags left
	if (TotalAmmoLeft < AmmoCapacity)
	{
		//loopar här a vngn anledning..
		GEngine->AddOnScreenDebugMessage(INDEX_NONE, 5.f, FColor::Green, FString::Printf(TEXT(
			"Out of mags, man....")));
		return;
	}
	Timer += DeltaTime;
	if (Timer >= ReloadingTime)
	{
		bIsReloading = false;
		Timer = 0;
		AmmoLeft = GetAmmoRemaining();
		GEngine->AddOnScreenDebugMessage(INDEX_NONE, 5.f, FColor::Green, FString::Printf(TEXT(
			"Done Reloading....")));
	}
}

float AWeaponActor::GetAmmoRemaining()
{
	if (AmmoCapacity <= TotalAmmoLeft)
	{
		return AmmoCapacity;
	}
	else
	{
		return TotalAmmoLeft;
	}
}


