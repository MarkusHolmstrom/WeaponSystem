// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "GameFramework/Pawn.h"
#include "WeaponActor.h"
#include "Camera/CameraComponent.h"
#include "Components/ActorComponent.h"
#include "WeaponActorComponent.generated.h"

class USceneComponent;
class AWeaponActor;

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FItemSightDelegate);

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class WEAPONSYSTEM_API UWeaponActorComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Properties
	UPROPERTY(VisibleAnywhere)
	bool bPickupInRange;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bHoldOnToObject; //This makes sure the player cant drop the weapon when this is true

	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = Holding,
		meta = (ToolTip = "Should be found in instance, else generates an error"))
		USceneComponent* HoldComponent;

	UPROPERTY(EditAnywhere, Category = Inspecting, meta = (ToolTip =
		"Default holding distance for inspection, X, should be shorter than HoldDistance"))
		float InspectDistance = 90.0f;

	UPROPERTY(EditAnywhere, Category = Inspecting, meta = (ToolTip =
		"Default holding distance for inspection, X, should be shorter than HoldDistance"))
		float InspectingHeight = 30.0f;


	UPROPERTY(EditAnywhere, Category = Holding, meta = (ToolTip =
		"Offset from walls, so its doesnt goes trough them, X, should be the same value as holddistance"))
	float DistanceOffset = 110.0f;

	UPROPERTY(EditAnywhere, Category = Holding)
	int ThrowAwayForce = 100;


	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	AWeaponActor* CurrentItem;

	UPROPERTY(EditAnywhere, meta = (ToolTip = "Should be found in instance, else generates an error"))
	UInputComponent* InputComp;

	bool bCanMove;
	UPROPERTY(BlueprintReadOnly)
	bool bHoldingItem;
	bool bInspecting;

	float PitchMax;
	float PitchMin;

	FVector HoldingComp;
	FRotator LastRotation;

	FVector Start;
	FVector ForwardVector;
	FVector End;

	FComponentQueryParams DefaultComponentQueryParams;
	FCollisionResponseParams DefaultResponseParams;

	UPROPERTY(EditAnywhere)
	UCameraComponent* CameraComponent;

	UPROPERTY(EditAnywhere, Category = Inspecting)
		float DefaultCameraFOV = 90.0f;
	UPROPERTY(EditAnywhere, Category = Inspecting)
		float ZoomInCameraFOV = 45.0f;

	UPROPERTY(EditAnywhere, Category = Holding)
		float SearchOffset = 5.0f;

	UPROPERTY(EditAnywhere, Category = Holding)
		float PickupReach = 400.0f;

	// Sets default values for this component's properties
	UWeaponActorComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

	void OnInspect();
	void OnInspectReleased();

	void ToggleMovement();

	// Internal Events
	virtual void OnItemInSightInternal();

	virtual void OnItemOutOfSightInternal();


public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;


	UFUNCTION(BlueprintCallable)
		void ToggleItemPickup();

	UFUNCTION(BlueprintCallable)
		void OnAction();
	// End public functions

	// Events
	UPROPERTY(BlueprintAssignable, Category = "Events")
		FItemSightDelegate OnItemInSight;

	UPROPERTY(BlueprintAssignable, Category = "Events")
		FItemSightDelegate OnItemOutOfSight;

};
