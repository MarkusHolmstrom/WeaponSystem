// Fill out your copyright notice in the Description page of Project Settings.


#include "FirePawn.h"
#include "Components/SphereComponent.h"
#include "DrawDebugHelpers.h"
#include "Particles/ParticleSystemComponent.h"

// Sets default values
AFirePawn::AFirePawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	FireCollision = CreateDefaultSubobject<USphereComponent>(TEXT("FireCollision"));
	FireCollision->SetSphereRadius(5);
	FireParticle = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("FireParticle"));

}

// Called when the game starts or when spawned
void AFirePawn::BeginPlay()
{
	Super::BeginPlay();
	FireCollision->SetRelativeLocation(FVector::ZeroVector);
	FireParticle->SetRelativeLocation(FVector::ZeroVector);

}

// Called every frame
void AFirePawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}


void AFirePawn::Propagate()
{

}

void AFirePawn::EndFireParticles()
{

}

