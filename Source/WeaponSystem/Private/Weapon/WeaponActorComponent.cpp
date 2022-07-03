// Fill out your copyright notice in the Description page of Project Settings.
// grass and fire!!:
// https://www.youtube.com/watch?v=dnGge9algcc

// Flamethrower:
// https://www.youtube.com/watch?v=GHFbW4IuxJA

#include "Weapon/WeaponActorComponent.h"
#include "DrawDebugHelpers.h"
#include "Components/SceneComponent.h"
#include "GameFramework/Pawn.h"
#include "Kismet/GameplayStatics.h"

// Sets default values for this component's properties
UWeaponActorComponent::UWeaponActorComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	CurrentWeapon = nullptr;
	bCanMove = true;
	bInspecting = false;

	bPickupInRange = false;
	bHoldOnToObject = false;
}

// Called when the game starts
void UWeaponActorComponent::BeginPlay()
{
	Super::BeginPlay();

	AActor* Actor = GetOwner();

	if (!Actor)
	{
		GEngine->AddOnScreenDebugMessage(INDEX_NONE, 5.f, FColor::Red, FString::Printf(TEXT(
			"Error: Something is wrong, (actor not found, calling from pickup component here) can you hear me, Major Tom? x3")));

		return;
	}

	TArray<USceneComponent*> Components;
	Actor->GetComponents(Components);

	if (Components.Num() > 0)
	{
		for (auto& Comp : Components) {
			if (Comp->GetName().Compare("HoldingComponent") == 0)
			{
				HoldComponent = Cast<USceneComponent>(Comp);
			}
		}
	}

	if (!HoldComponent)
	{
		GEngine->AddOnScreenDebugMessage(INDEX_NONE, 5.f, FColor::Red, FString::Printf(TEXT(
			"Error: Something is wrong, (hold comp not found) can you hear me, Major Tom? x3")));
	}

	PitchMax = GetWorld()->GetFirstPlayerController()->PlayerCameraManager->ViewPitchMax;
	PitchMin = GetWorld()->GetFirstPlayerController()->PlayerCameraManager->ViewPitchMin;

	CameraComponent = Actor->FindComponentByClass<UCameraComponent>();

	if (!CameraComponent)
	{
		GEngine->AddOnScreenDebugMessage(INDEX_NONE, 5.f, FColor::Red, FString::Printf(TEXT(
			"Error: Something is wrong, (camera not found) can you hear me, Major Tom? x3")));
	}

	InputComp = Actor->InputComponent;

	if (InputComp)
	{
		InputComp->BindAction(TEXT("Interact"), IE_Pressed, this, &UWeaponActorComponent::OnAction);
		InputComp->BindAction(TEXT("Fire"), IE_Pressed, this, &UWeaponActorComponent::OnFireWeapon);
		InputComp->BindAction(TEXT("Fire"), IE_Released, this, &UWeaponActorComponent::OnReleaseFire);
		
		InputComp->BindAction(TEXT("Inspect"), IE_Pressed, this, &UWeaponActorComponent::OnInspect);
		InputComp->BindAction(TEXT("Inspect"), IE_Released, this, &UWeaponActorComponent::OnInspectReleased);
		InputComp->BindAction(TEXT("Reload"), IE_Pressed, this, &UWeaponActorComponent::StartReloading);
		// TODO fixa reload knapp sync o kolla vad som händer när vapen släpps, varför försvinna?
	}
	else
	{
		GEngine->AddOnScreenDebugMessage(INDEX_NONE, 5.f, FColor::Red, FString::Printf(TEXT(
			"Error: Something is wrong, (input from owner not found) can you hear me, Major Tom? x3")));
	}
}


// Called every frame
void UWeaponActorComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	Start = CameraComponent->GetComponentLocation() +
		(CameraComponent->GetForwardVector() * SearchOffset);
	ForwardVector = CameraComponent->GetForwardVector();
	End = ((ForwardVector * PickupReach) + Start);

	FHitResult Hit;

	if (!bHoldingItem)
	{
		if (GetWorld()->LineTraceSingleByChannel(Hit, Start, End, ECC_Visibility, DefaultComponentQueryParams,
			DefaultResponseParams))
		{
			// Is player aiming towards a weapon?
			if (Hit.GetActor()->GetClass()->IsChildOf(AWeaponActor::StaticClass()))
			{
				if (CurrentWeapon == nullptr) // needs to be nested
				{
					CurrentWeapon = Cast<AWeaponActor>(Hit.GetActor());
				}
			}
			else
			{
				CurrentWeapon = nullptr;
			}
		}
		else if (CurrentWeapon != nullptr)
		{
			CurrentWeapon = nullptr;
		}
	}

	if (bInspecting)
	{
		// Rotate the item during inspection mode
		if (bHoldingItem)
		{
			CameraComponent->SetFieldOfView(FMath::Lerp(CameraComponent->FieldOfView, DefaultCameraFOV, 0.1f));
			GetWorld()->GetFirstPlayerController()->PlayerCameraManager->ViewPitchMax = 179.9000002f;
			GetWorld()->GetFirstPlayerController()->PlayerCameraManager->ViewPitchMin = -179.9000002f;
			CurrentWeapon->RotateActor();
		}
		else
		{
			CameraComponent->SetFieldOfView(FMath::Lerp(CameraComponent->FieldOfView, ZoomInCameraFOV, 0.1f));
		}
	}
	else
	{
		CameraComponent->SetFieldOfView(FMath::Lerp(CameraComponent->FieldOfView, DefaultCameraFOV, 0.1f));

	}
}

void UWeaponActorComponent::OnAction()
{
	if (CurrentWeapon && !bInspecting && !bHoldOnToObject)
	{
		ToggleItemPickup();
	}
}

void UWeaponActorComponent::OnInspect()
{
	if (bHoldingItem)
	{
		LastRotation = UGameplayStatics::GetPlayerController(GetWorld(), 0)->GetControlRotation();
		ToggleMovement();
	}
	else
	{
		bInspecting = true;
	}
}

void UWeaponActorComponent::OnInspectReleased()
{
	if (bInspecting && bHoldingItem)
	{
		UGameplayStatics::GetPlayerController(GetWorld(), 0)->SetControlRotation(LastRotation);
		GetWorld()->GetFirstPlayerController()->PlayerCameraManager->ViewPitchMax = PitchMax;
		GetWorld()->GetFirstPlayerController()->PlayerCameraManager->ViewPitchMin = PitchMin;
		ToggleMovement();
	}
	else
	{
		bInspecting = false;
	}
}

void UWeaponActorComponent::OnFireWeapon()
{
	if (bInspecting || !CurrentWeapon)
	{
		return;
	}
	if (!CurrentWeapon->bIsReloading && HaveAmmoLeft())
	{
		OnFireWeapon(DamageFromWeapon);
	}
	else
	{
		GEngine->AddOnScreenDebugMessage(INDEX_NONE, 5.f, FColor::Cyan, FString::Printf(TEXT(
			"Reloading....")));
	}
}

bool UWeaponActorComponent::HaveAmmoLeft()
{
	if (CurrentWeapon)
	{
		if (CurrentWeapon->AmmoLeft <= 0)
		{
			CheckStartReloading(CurrentWeapon->ReloadingTime);
		}
		else
		{
			return true;
		}
	}
	return false;
}

void UWeaponActorComponent::OnFireWeapon(float Damage)
{
	if (CurrentWeapon)
	{
		if (!CurrentWeapon->bIsReloading)
		{
			OnFire.ExecuteIfBound(Damage);
			/*GEngine->AddOnScreenDebugMessage(INDEX_NONE, 5.f, FColor::Red, FString::Printf(TEXT(
				"Fire weapon!")));*/

		}
	}
	else // Gets called when LMB and no weapon in hand
	{
		OnFire.Unbind();
	}
}

void UWeaponActorComponent::OnReleaseFire()
{
	OnRelease.ExecuteIfBound(0);
	/*GEngine->AddOnScreenDebugMessage(INDEX_NONE, 5.f, FColor::Red, FString::Printf(TEXT(
		"stop Fire weapon!")));*/

}

void UWeaponActorComponent::CheckStartReloading(float ReloadTime)
{
	if (CurrentWeapon)
	{
		CurrentWeapon->bIsReloading = true;
	}
}

void UWeaponActorComponent::StartReloading()
{
	if (CurrentWeapon)
	{
		CheckStartReloading(CurrentWeapon->ReloadingTime);
	}
}

void UWeaponActorComponent::ToggleMovement()
{
	bCanMove = !bCanMove;
	bInspecting = !bInspecting;
	CameraComponent->bUsePawnControlRotation = ~CameraComponent->bUsePawnControlRotation;

	if (GetWorld()->GetFirstPlayerController()->GetPawn())
	{
		GetWorld()->GetFirstPlayerController()->GetPawn()->bUseControllerRotationYaw
			= ~GetWorld()->GetFirstPlayerController()->GetPawn()->bUseControllerRotationYaw;
	}
}

void UWeaponActorComponent::OnFireInternal()
{
	
}


void UWeaponActorComponent::ToggleItemPickup()
{
	if (CurrentWeapon)
	{
		bHoldingItem = !bHoldingItem;
		CurrentWeapon->Interact(bHoldingItem, ThrowAwayForce);

		if (!bHoldingItem)
		{
			CurrentWeapon = nullptr;
		}
	}
}
