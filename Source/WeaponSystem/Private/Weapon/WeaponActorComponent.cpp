// Fill out your copyright notice in the Description page of Project Settings.


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

	CurrentItem = nullptr;
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
			if (Comp->GetName().Compare("HoldComponent") == 0)
			{
				HoldComponent = Cast<USceneComponent>(Comp);
			}
			else if (Comp->GetName().Compare("CenterComponent") == 0)
			{
				CenterComponent = Cast<USceneComponent>(Comp);
			}
		}
	}

	if (!HoldComponent || !CenterComponent)
	{
		GEngine->AddOnScreenDebugMessage(INDEX_NONE, 5.f, FColor::Red, FString::Printf(TEXT(
			"Error: Something is wrong, (comp(s) not found) can you hear me, Major Tom? x3")));
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
		InputComp->BindAction(TEXT("Inspect"), IE_Pressed, this, &UWeaponActorComponent::OnInspect);
		InputComp->BindAction(TEXT("Inspect"), IE_Released, this, &UWeaponActorComponent::OnInspectReleased);
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
				if (CurrentItem == nullptr) // needs to be nested
				{
					OnItemInSight.Broadcast();
					CurrentItem = Cast<AWeaponActor>(Hit.GetActor());
				}
			}
			else if (CurrentItem != nullptr)
			{
				OnItemOutOfSight.Broadcast();
				CurrentItem = nullptr;
			}
		}
		else if (CurrentItem != nullptr)
		{
			OnItemOutOfSight.Broadcast();
			CurrentItem = nullptr;
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
			CurrentItem->RotateActor();
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
	if (CurrentItem && !bInspecting && !bHoldOnToObject)
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

void UWeaponActorComponent::OnItemInSightInternal()
{
	// gets read in blueprints for icon in crosshair to show up
}

void UWeaponActorComponent::OnItemOutOfSightInternal()
{
	// gets read in blueprints for icon in crosshair to disappear
}

void UWeaponActorComponent::ToggleItemPickup()
{
	if (CurrentItem)
	{
		bHoldingItem = !bHoldingItem;
		CurrentItem->Interact(bHoldingItem, ThrowAwayForce);

		if (!bHoldingItem)
		{
			CurrentItem = nullptr;
			OnItemOutOfSight.Broadcast();
		}
		else
		{
			OnItemOutOfSight.Broadcast();
		}
	}
}
