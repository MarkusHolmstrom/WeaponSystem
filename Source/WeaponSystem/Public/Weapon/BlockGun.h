// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "BlockGun.generated.h"

class AWeaponActor;
class USceneComponent;
class UCameraComponent;

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class WEAPONSYSTEM_API UBlockGun : public UActorComponent
{
	GENERATED_BODY()

public:	
	//interfface variables
	UPROPERTY(VisibleAnywhere)
	APawn* PlayerPawn;
	UPROPERTY(VisibleAnywhere)
	UCameraComponent* PlayerCamera;

	UPROPERTY(VisibleAnywhere)
	bool bCanFire = false; // Gets active when being carried
/// interface variables end

	UPROPERTY(EditAnywhere)
	FVector BlockDirection = FVector::ZeroVector;
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<AActor> Block;
	UPROPERTY(EditAnywhere)
	int SpawnDistance = 600;
	// Sets default values for this component's properties
	UBlockGun();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	// interface functions
	UFUNCTION()
	bool ToggleCanFire();
	UFUNCTION()
	void OnFire();
	UFUNCTION()
	void StopFire();
	UFUNCTION()
	FTransform GetSpawnTransform();
	// end interface functions
	UFUNCTION()
	FVector GenerateRandomNewDir();
	UFUNCTION()
	FVector AddNewBlockDirection(FVector AddDir);
};
