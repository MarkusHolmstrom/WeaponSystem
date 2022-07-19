// Fill out your copyright notice in the Description page of Project Settings.


#include "BlockActor.h"
#include "Components/BoxComponent.h"

// Sets default values
ABlockActor::ABlockActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	RootBlock = CreateDefaultSubobject<UBoxComponent>(TEXT("RootBlock"));
	RootComponent = RootBlock;

	BlockMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BlockMesh"));
	BlockMesh->AttachTo(RootComponent);
}

// Called when the game starts or when spawned
void ABlockActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABlockActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	FVector NewLocation = GetActorLocation();
	// fluctuating the value between -1 and 1
	float Delta = (FMath::Sin(RunningTime + DeltaTime) - FMath::Sin(RunningTime));

	NewLocation += Movement * Delta * MaxBound;
	RunningTime += DeltaTime;
	SetActorLocation(NewLocation);
}


