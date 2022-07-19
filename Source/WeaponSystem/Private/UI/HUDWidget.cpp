// Fill out your copyright notice in the Description page of Project Settings.


#include "UI/HUDWidget.h"
#include "Components/TextBlock.h"

// https://benui.ca/unreal/ui-bindwidget/

void UHUDWidget::UpdateAmmo(int Cur, int Left)
{
	if (AmmoTB)
	{
		//AmmoTB->SetText(FText::FromString(TEXT("Hello world!")));
		AmmoTB->SetText(FText::FromString(FString::Printf(TEXT("%d / %d"), Cur, Left)));
	}
}

void UHUDWidget::UpdateWeaponType(FString WeaponName)
{
	if (WeaponType)
	{
		WeaponType->SetText(FText::FromString(WeaponName));
	}
}

void UHUDWidget::NativeConstruct()
{
	Super::NativeConstruct();

	// ItemTitle can be nullptr if we haven't created it in the
	// Blueprint subclass
	if (AmmoTB)
	{
		//AmmoTB->SetText(FText::FromString(TEXT("Hello world!")));
	}
}