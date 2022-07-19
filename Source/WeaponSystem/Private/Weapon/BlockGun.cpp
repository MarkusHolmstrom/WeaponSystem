// Fill out your copyright notice in the Description page of Project Settings.


#include "Weapon/BlockGun.h"
#include "Weapon/WeaponActor.h"
#include "Camera/CameraComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Components/SceneComponent.h"
#include "BlockActor.h"

// Sets default values for this component's properties
UBlockGun::UBlockGun()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = false;

	// ...
}


// Called when the game starts
void UBlockGun::BeginPlay()
{
	Super::BeginPlay();

	PlayerPawn = UGameplayStatics::GetPlayerPawn(this, 0);
	PlayerCamera = PlayerPawn->FindComponentByClass<UCameraComponent>();
}


// Called every frame
void UBlockGun::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

bool UBlockGun::ToggleCanFire()
{
	bCanFire = !bCanFire;
	return bCanFire;
}

void UBlockGun::OnFire()
{
	if (bCanFire)
	{
		FTransform TempTrans = GetSpawnTransform();
		ABlockActor* BlockActor = Cast<ABlockActor>(GetWorld()->SpawnActor(Block, &TempTrans));
		
		if (BlockActor)
		{
			BlockActor->Movement = GenerateRandomNewDir();
		}
	}
}

void UBlockGun::StopFire()
{

}

FTransform UBlockGun::GetSpawnTransform()
{
	FTransform SpawnTrans = PlayerPawn->GetActorTransform();
	SpawnTrans.AddToTranslation(PlayerCamera->GetForwardVector() * SpawnDistance);
	return SpawnTrans;
}

FVector UBlockGun::GenerateRandomNewDir()
{
	int RandLength = FMath::RandRange(0, 2);
	if (RandLength == 0)
	{
		BlockDirection = FVector(1, 0, 0);
	}
	else if (RandLength == 1)
	{
		BlockDirection = FVector(0, 1, 0);
	}
	else if (RandLength == 2)
	{
		BlockDirection = FVector(0, 0, 1);
	}
	else
	{
		BlockDirection = FVector(0, 0, 0);
	}
	return BlockDirection;
}

FVector UBlockGun::AddNewBlockDirection(FVector AddDir)
{
	return BlockDirection + AddDir;
}

