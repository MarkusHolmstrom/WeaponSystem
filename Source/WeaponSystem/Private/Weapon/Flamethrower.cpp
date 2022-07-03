// Fill out your copyright notice in the Description page of Project Settings.


#include "Weapon/Flamethrower.h"
#include "Weapon/WeaponActor.h"
#include "Kismet/GameplayStatics.h"
#include "Particles/ParticleSystemComponent.h"
#include "Components/SceneComponent.h"

// Sets default values for this component's properties
UFlamethrower::UFlamethrower()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = false;
	
	FlameParticleComp = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("FlameParticles"));
	
	FlameParticleComp->SetRelativeLocation(FVector(80, 0, 10));
	FlameParticleComp->bAutoActivate = false;
}


// Called when the game starts
void UFlamethrower::BeginPlay()
{
	Super::BeginPlay();
	
	// Safeplay
	FlameParticleComp->SetRelativeLocation(FVector(80, 0, 10));
	FlameParticleComp->Template = ParticleSystem;
}


// Called every frame
void UFlamethrower::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}
bool UFlamethrower::ToggleCanFire()
{
	bCanFire = !bCanFire;
	return bCanFire;
}
// https://docs.unrealengine.com/4.27/en-US/ProgrammingAndScripting/ProgrammingWithCPP/UnrealArchitecture/Delegates/Events/
void UFlamethrower::OnFire()
{
	if (bCanFire && FlameParticleComp)
	{
		FlameParticleComp->ActivateSystem(true);
		/*GEngine->AddOnScreenDebugMessage(INDEX_NONE, 5.f, FColor::Red, FString::Printf(TEXT(
			"Fire")));*/
	}
}

void UFlamethrower::StopFire()
{
	if (FlameParticleComp)
	{
		FlameParticleComp->DeactivateSystem();
		/*GEngine->AddOnScreenDebugMessage(INDEX_NONE, 5.f, FColor::Blue, FString::Printf(TEXT(
			"No Fire")));*/
	}
}

