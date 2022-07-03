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
class UFlamethrower;

	UENUM(BlueprintType)
	enum EKindOfWeapon
	{
		None			UMETA(DisplayName = "None"),
		Flamethrower    UMETA(DisplayName = "Flamethrower"),
		BlockGun		UMETA(DisplayName = "BlockGun"),
		Bow				UMETA(DisplayName = "Bow"),
	};


UCLASS()
class WEAPONSYSTEM_API AWeaponActor : public AActor
{
	// base class for weapons, handles how they get picked up and have default values

	GENERATED_BODY()
	
public:	

	UPROPERTY(VisibleAnywhere, Category = Enums)
	UFlamethrower* FlamethrowerInstance;



	UPROPERTY(EditAnywhere)
	UStaticMeshComponent* DefaultMesh;

	UPROPERTY(VisibleAnywhere, Category = Holding)
	USceneComponent* HoldingComp;

	UPROPERTY(VisibleAnywhere, Category = Holding)
	bool bHolding;

	UPROPERTY(VisibleAnywhere)
	bool bGravity;
	/*UPROPERTY(VisibleAnywhere)
	bool bDropped;*/
	/*UPROPERTY(EditAnywhere)
	UActorComponent* PLayerHoldingComp;*/

	UPROPERTY(VisibleAnywhere)
	UWeaponActorComponent* WAC;
	UPROPERTY(VisibleAnywhere)
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

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = WeaponInformation)
	TEnumAsByte<EKindOfWeapon> KindOfWeapon; // Set in plueprint
	UPROPERTY(EditAnywhere, Category = WeaponInformation)
	float AmmoLeft = 32;
	UPROPERTY(EditAnywhere, Category = WeaponInformation)
	int AmmoCapacity = 32;
	UPROPERTY(EditAnywhere, Category = WeaponInformation)
	float FireRate = 1.0f;
	UPROPERTY(VisibleAnywhere, Category = WeaponInformation)
	bool bIsReloading = false;
	UPROPERTY(EditAnywhere, Category = WeaponInformation)
	float ReloadingTime = 1.0f;
	UPROPERTY(VisibleAnywhere, Category = WeaponInformation)
	float Timer = 0.0f;
	UPROPERTY(EditAnywhere, Category = WeaponInformation)
	int MagCapacity = 4; //Number of magazines player can carry (MagCap x AmmoCap)
	UPROPERTY(VisibleAnywhere, Category = WeaponInformation)
	float TotalAmmoLeft = 128.0f;

	UPROPERTY(VisibleAnywhere, Category = Flamethrower)
	bool bIsFiring = false;
	// End variables

	// Sets default values for this actor's properties
	AWeaponActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	UFUNCTION()
	void SetupWeaponStats();
	void ToggleCanShoot();
	void ShootFromComp();

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

	UFUNCTION()
	void FireWeapon(float Damage);
	UFUNCTION()
	void StopFireWeapon(float Damage);

	UFUNCTION()
	void Reloading(float DeltaTime);
	UFUNCTION()
	float GetAmmoRemaining();

};
