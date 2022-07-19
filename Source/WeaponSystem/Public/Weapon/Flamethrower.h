// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Flamethrower.generated.h"

class UParticleSystem;
class UParticleSystemComponent;
class AWeaponActor;
class USceneComponent;
class UCameraComponent;

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class WEAPONSYSTEM_API UFlamethrower : public UActorComponent
{
	GENERATED_BODY()

public:	

	UPROPERTY(VisibleAnywhere)
	APawn* PlayerPawn;
	UPROPERTY(VisibleAnywhere)
	UCameraComponent* PlayerCamera;

	UPROPERTY(EditAnywhere, meta = (ToolTip = 
		"Set position rel location to 80, 0, 10 if this particle system is not visible in game play"))
	UParticleSystem* ParticleSystem;
	UPROPERTY(EditAnywhere)
	UParticleSystemComponent* FlameParticleComp;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<AActor> Fire;
	UPROPERTY(EditAnywhere)
	float FireInterval = 0.4f;
	UPROPERTY(VisibleAnywhere)
	float Timer = 0;

	UPROPERTY(VisibleAnywhere)
	float RandomNr = 1;
	UPROPERTY(EditAnywhere)
	float AddPerFrameAtRandomNr = 0.08f;
	UPROPERTY(EditAnywhere)
	float MinSpawnDistFromPlayer = 0.5f;
	UPROPERTY(EditAnywhere)
	int MiddleFireDistance = 500.0f;

	UPROPERTY(VisibleAnywhere)
	bool bCanFire = false; // Gets active when being carried

	// Sets default values for this component's properties
	UFlamethrower();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UFUNCTION()
	bool ToggleCanFire();
	UFUNCTION()
	void OnFire();
	UFUNCTION()
	void StopFire();
	UFUNCTION()
	void SpawnFires();
	UFUNCTION()
	FTransform GetSpawnTransform();
};
