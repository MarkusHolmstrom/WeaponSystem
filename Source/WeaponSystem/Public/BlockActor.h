// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BlockActor.generated.h"

class UBoxComponent;

UCLASS()
class WEAPONSYSTEM_API ABlockActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// The value determines the speed and direction
	UPROPERTY(EditAnywhere)
	FVector Movement = FVector::ZeroVector;
	// The maximum distance block can move, also respective negative value in the other direction
	UPROPERTY(EditAnywhere)
	float MaxBound = 500.0f;
	UPROPERTY(EditAnywhere)
	float RunningTime = 0.0f;

	UPROPERTY(EditAnywhere)
	UBoxComponent* RootBlock;

	UPROPERTY(EditAnywhere)
	UStaticMeshComponent* BlockMesh;

	// Sets default values for this actor's properties
	ABlockActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
