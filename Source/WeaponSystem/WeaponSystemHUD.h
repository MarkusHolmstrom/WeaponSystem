// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "WeaponSystemHUD.generated.h"

UCLASS()
class AWeaponSystemHUD : public AHUD
{
	GENERATED_BODY()

public:
	AWeaponSystemHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

