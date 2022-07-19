// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "FirePawn.generated.h"

class USphereComponent;
class UParticleSystemComponent;


UENUM(BlueprintType)
enum EWindDirection
{
	NoWind		UMETA(DisplayName = "No Wind"),
	West		UMETA(DisplayName = "West"),
	North		UMETA(DisplayName = "North"),
	East		UMETA(DisplayName = "East"),
	South		UMETA(DisplayName = "South"),
};

UCLASS()
class WEAPONSYSTEM_API AFirePawn : public APawn
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	USphereComponent* FireCollision;

	UPROPERTY(EditAnywhere)
	float LifeSpan = 10.0f;

	UPROPERTY(EditAnywhere)
	float SpreadSpeed = 1.0f;

	UPROPERTY(EditAnywhere)
	UParticleSystemComponent* FireParticle;

	// Sets default values for this pawn's properties
	AFirePawn();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION()
	void Propagate();

	UFUNCTION()
	void EndFireParticles();
};
