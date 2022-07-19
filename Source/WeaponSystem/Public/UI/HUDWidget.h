// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "HUDWidget.generated.h"

class UTextBlock;
/**
 * 
 */
UCLASS()
class WEAPONSYSTEM_API UHUDWidget : public UUserWidget
{
	GENERATED_BODY()

public:
	UFUNCTION()
	void UpdateAmmo(int Cur, int Left);
	UFUNCTION()
	void UpdateWeaponType(FString WeaponName);

protected:
	virtual void NativeConstruct() override;

	UPROPERTY(BlueprintReadOnly, meta = (BindWidget))
	UTextBlock* AmmoTB;

	UPROPERTY(BlueprintReadOnly, meta = (BindWidget))
	UTextBlock* WeaponType;
};
