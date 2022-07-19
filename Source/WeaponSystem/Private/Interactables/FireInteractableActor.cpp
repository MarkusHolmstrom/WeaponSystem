// Fill out your copyright notice in the Description page of Project Settings.


#include "Interactables/FireInteractableActor.h"

// Sets default values
AFireInteractableActor::AFireInteractableActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	DefaultMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("DefMesh"));
	
	RootComponent = DefaultMesh;
}

// Called when the game starts or when spawned
void AFireInteractableActor::BeginPlay()
{
	Super::BeginPlay();
	Tags.Add(TagName);
}

// Called every frame
void AFireInteractableActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

bool AFireInteractableActor::Interact()
{
	if (ActorHasTag(FName("Burnable")))
	{
		DefaultMesh->SetMaterial(0, InteractMaterial);
		GEngine->AddOnScreenDebugMessage(INDEX_NONE, 2.f, FColor::Red, FString::Printf(TEXT(
			"Burn!")));
		return true;
	}
	else if (ActorHasTag(FName("Glowable")))
	{
		DefaultMesh->SetMaterial(1, InteractMaterial);
		GEngine->AddOnScreenDebugMessage(INDEX_NONE, 2.f, FColor::Red, FString::Printf(TEXT(
			"Glow!")));
		return true;
	}
	return false;
}

