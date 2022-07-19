// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FireInteractableActor.generated.h"

UCLASS(Blueprintable)
class WEAPONSYSTEM_API AFireInteractableActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Have enum instead?
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName TagName = "Burnable";


	UPROPERTY(EditAnywhere)
	UStaticMeshComponent* DefaultMesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UMaterial* InteractMaterial;
	// Sets default values for this actor's properties
	AFireInteractableActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable)
	bool Interact();
};
