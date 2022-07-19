// Fill out your copyright notice in the Description page of Project Settings.


#include "Weapon/WeaponActor.h"
#include "Weapon/WeaponActorComponent.h"
#include "Weapon/Flamethrower.h"
#include "Weapon/BlockGun.h"
#include "Components/SceneComponent.h"
#include "Components/BoxComponent.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/Pawn.h"
#include "Kismet/GameplayStatics.h"
#include "UI/HUDWidget.h"
#include "WeaponSystem/WeaponSystemCharacter.h"

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
	RemaingAmmo = AmmoCapacity * (MagCapacity - 1);
	MaxReloadingTime = ReloadingTime;
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
		BlockGunInstance = FindComponentByClass<UBlockGun>();
		if (BlockGunInstance)
		{
			GEngine->AddOnScreenDebugMessage(INDEX_NONE, 19.f, FColor::Yellow,
				BlockGunInstance->GetName());
		}
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
		BlockGunInstance->ToggleCanFire();
		break;

	default:
		break;
	}

}

void AWeaponActor::ShootFromComp()
{
	// Reduce ammo remaining
	UpdateAmmoLeft();
	UpdateHUDAmmo(AmmoLeft, RemaingAmmo);
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
		BlockGunInstance->OnFire();
		break;

	default:
		break;
	}

}

void AWeaponActor::UpdateAmmoLeft()
{
	AmmoLeft -= FireRate;
	if (AmmoLeft <= 0)
	{
		bIsReloading = true;
		ReloadingTime = MaxReloadingTime;
	}
}

void AWeaponActor::UpdateHUDAmmo(float Left, float TotalLeft)
{
	if (!HUDWidget)
	{
		HUDWidget = GetHUDWidget();
	}
	if (HUDWidget)
	{
		HUDWidget->UpdateAmmo(Left, TotalLeft);
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
			UpdateAmmoLeft();
			UpdateHUDAmmo(AmmoLeft, RemaingAmmo);
		}
		else if (FlamethrowerInstance)
		{
			FlamethrowerInstance->StopFire();
		}

		if (bIsReloading)
		{
			if (AmmoToLoad == 0)
			{
				AmmoToLoad = AmmoCapacity - AmmoLeft;
				if (AmmoCapacity < RemaingAmmo)
				{
					TargetAmmo = AmmoCapacity;
				}
				else
				{
					TargetAmmo = RemaingAmmo;
				}
				TargetTotalAmmo = RemaingAmmo - AmmoToLoad;
				GEngine->AddOnScreenDebugMessage(INDEX_NONE, 1.f, FColor::Yellow,
					FString::Printf(TEXT("%f"), ReloadingTime));
			}
			Reloading(DeltaTime);
		}
		else if (AmmoCapacity > 1)// && AmmoLeft < AmmoCapacity)
		{
			ReloadingTime = GetReloadingTime(MaxReloadingTime, AmmoLeft, AmmoCapacity);
			/*GEngine->AddOnScreenDebugMessage(INDEX_NONE, 1.f, FColor::Yellow,
				FString::Printf(TEXT("%f"), ReloadingTime));*/
		}
	}

}

float AWeaponActor::GetReloadingTime(float ReloadTime, float Left, float Capacity)
{
	return ReloadTime - (ReloadTime * Left / Capacity);
}

UHUDWidget* AWeaponActor::GetHUDWidget()
{
	if (WSC)
	{
		return WSC->HUD;
	}
	else
	{
		GEngine->AddOnScreenDebugMessage(INDEX_NONE, 5.f, FColor::Red,
			FString::Printf(TEXT("Error: No WSC found!")));
	}
	return nullptr;
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
			"Error: Something is wrong, (Mesh not found in this pick up, yell at Markus now!) can you hear me, Major Tom? x3")));

		return;
	}

	if (HoldingComp && bHolding)
	{
		if (WAC)
		{
			WAC->OnFire.BindUObject(this, &AWeaponActor::FireWeapon);
			WAC->OnRelease.BindUObject(this, &AWeaponActor::StopFireWeapon);

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
		// Update UI
		if (!HUDWidget)
		{
			HUDWidget = GetHUDWidget();
		}
		if (HUDWidget)
		{
			HUDWidget->UpdateWeaponType(GetWeaponName());
			UpdateHUDAmmo(AmmoLeft, RemaingAmmo);
		}
	}
	//Drop weapon
	if (!bHolding)
	{
		ToggleCanShoot();
		WAC->OnFire.Unbind();

		DefaultMesh->DetachFromComponent(FDetachmentTransformRules::KeepWorldTransform);
		if (HUDWidget)
		{
			HUDWidget->UpdateWeaponType("None");
			UpdateHUDAmmo(0, 0);
		}
	}
}

FString AWeaponActor::GetWeaponName()
{
	switch (KindOfWeapon)
	{
	case EKindOfWeapon::None:
		return "None";
	case EKindOfWeapon::Flamethrower:
		return "Flamethrower";
	case EKindOfWeapon::BlockGun:
		return "Block Gun";
	default:
		break;
	}
	return "None";
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
	if (bIsFiring)
	{
		StopFireWeapon(0);
	}/*
	GEngine->AddOnScreenDebugMessage(1, 1.f, FColor::Green, FString::Printf(TEXT(
		"Reloading....")));*/
	// Avoid reloading if there are no more mags left
	if (RemaingAmmo <= 0)
	{
		bIsReloading = false;
		GEngine->AddOnScreenDebugMessage(INDEX_NONE, 5.f, FColor::Green, FString::Printf(TEXT(
			"Out of ammo, man....")));
		return;
	}
	// Update the ammo being loaded, only for visuals...
	UpdateDuringReloading(ReloadingTime - Timer, DeltaTime, AmmoLeft, RemaingAmmo);
	// The correct ammo gets loaded here, when its all done
	Timer += DeltaTime;
	if (Timer >= ReloadingTime)
	{
		bIsReloading = false;
		Timer = 0;
		AmmoLeft = TargetAmmo;
		RemaingAmmo = TargetTotalAmmo;
		AmmoToLoad = 0;
		GEngine->AddOnScreenDebugMessage(INDEX_NONE, 5.f, FColor::Green, FString::Printf(TEXT(
			"Done Reloading....")));
	}
	// Update the ammo count in realtime
	UpdateHUDAmmo(AmmoLeft, RemaingAmmo);
}

void AWeaponActor::UpdateDuringReloading(float TimeLeft, float DeltaTime, float CurLoad, float TotAmmoLeft)
{
	if (AmmoLeft >= AmmoCapacity)
	{
		AmmoLeft = AmmoCapacity;
		return;
	}
	if (ReloadingTime == 0)
	{
		return;
	}

	// Calculate percentage of reloading process
	float Percentage = (ReloadingTime - TimeLeft) / ReloadingTime;
	// Calculate how much ammo should be added this frame
	float NewLoad = (AmmoCapacity - AmmoLeft) * Percentage * DeltaTime;
	AmmoLeft += NewLoad;
	RemaingAmmo -= NewLoad;
	if (RemaingAmmo <= 0)
	{
		RemaingAmmo = 0;
	}
}
// behvös inte
float AWeaponActor::GetAmmoRemaining()
{
	if (AmmoCapacity <= RemaingAmmo)
	{
		return AmmoCapacity;
	}
	else
	{
		return RemaingAmmo;
	}
}


