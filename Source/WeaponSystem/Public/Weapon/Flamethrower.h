// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Flamethrower.generated.h"

class UParticleSystem;
class AWeaponActor;
class USceneComponent;

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class WEAPONSYSTEM_API UFlamethrower : public UActorComponent
{
	GENERATED_BODY()

public:	

	UPROPERTY(EditAnywhere, meta = (ToolTip = 
		"Set position rel location to 80, 0, 10 if this particle system is not visible in game play"))
	UParticleSystem* ParticleSystem;
	UPROPERTY(EditAnywhere)
	UParticleSystemComponent* FlameParticleComp;

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
};
