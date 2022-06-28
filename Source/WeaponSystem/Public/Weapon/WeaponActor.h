// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/Actor.h"
#include "WeaponActor.generated.h"


class USceneComponent;
class UStaticMeshComponent;
class UBoxComponent;
class UWeaponActorComponent;

UCLASS()
class WEAPONSYSTEM_API AWeaponActor : public AActor
{
	GENERATED_BODY()
	
public:	
	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* DefaultMesh;

	UPROPERTY(VisibleAnywhere, Category = Holding)
	USceneComponent* HoldingComp;

	UPROPERTY(VisibleAnywhere, Category = Holding)
	bool bHolding;

	UPROPERTY(VisibleAnywhere)
	bool bGravity;
	UPROPERTY(VisibleAnywhere)
	bool bDropped;
	UPROPERTY(EditAnywhere)
	UActorComponent* WeaponComp;

	UPROPERTY(EditAnywhere)
	USceneComponent* MeshComp;
	UPROPERTY(EditAnywhere)
	FString MeshCompName = "CharacterMesh1P";

	UPROPERTY(EditAnywhere)
	FName SocketName = "hand_lSocket";

	FRotator ControlRotation;
	UPROPERTY(VisibleAnywhere)
	APawn* PlayerPawn;
	UPROPERTY(VisibleAnywhere)
	UCameraComponent* PlayerCamera;
	FVector ForwardVector;
	// End variables

	// Sets default values for this actor's properties
	AWeaponActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;


	UFUNCTION()
	void RotateActor();

	UFUNCTION()
	void Interact(bool bPickingUp, int ThrowAwayForce);

	UFUNCTION()
	void AttachToPlayerMesh();

	UFUNCTION()
	void NullCheck();

};
