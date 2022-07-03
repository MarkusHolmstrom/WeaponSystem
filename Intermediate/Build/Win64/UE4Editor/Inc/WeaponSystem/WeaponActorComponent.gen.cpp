// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WeaponSystem/Public/Weapon/WeaponActorComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWeaponActorComponent() {}
// Cross Module References
	WEAPONSYSTEM_API UClass* Z_Construct_UClass_UWeaponActorComponent_NoRegister();
	WEAPONSYSTEM_API UClass* Z_Construct_UClass_UWeaponActorComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_WeaponSystem();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	WEAPONSYSTEM_API UClass* Z_Construct_UClass_AWeaponActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInputComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UWeaponActorComponent::execStartReloading)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartReloading();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWeaponActorComponent::execCheckStartReloading)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_ReloadTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CheckStartReloading(Z_Param_ReloadTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWeaponActorComponent::execOnReleaseFire)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnReleaseFire();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWeaponActorComponent::execHaveAmmoLeft)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HaveAmmoLeft();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWeaponActorComponent::execOnFireWeapon)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnFireWeapon();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWeaponActorComponent::execOnAction)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnAction();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWeaponActorComponent::execToggleItemPickup)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ToggleItemPickup();
		P_NATIVE_END;
	}
	void UWeaponActorComponent::StaticRegisterNativesUWeaponActorComponent()
	{
		UClass* Class = UWeaponActorComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CheckStartReloading", &UWeaponActorComponent::execCheckStartReloading },
			{ "HaveAmmoLeft", &UWeaponActorComponent::execHaveAmmoLeft },
			{ "OnAction", &UWeaponActorComponent::execOnAction },
			{ "OnFireWeapon", &UWeaponActorComponent::execOnFireWeapon },
			{ "OnReleaseFire", &UWeaponActorComponent::execOnReleaseFire },
			{ "StartReloading", &UWeaponActorComponent::execStartReloading },
			{ "ToggleItemPickup", &UWeaponActorComponent::execToggleItemPickup },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UWeaponActorComponent_CheckStartReloading_Statics
	{
		struct WeaponActorComponent_eventCheckStartReloading_Parms
		{
			float ReloadTime;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReloadTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UWeaponActorComponent_CheckStartReloading_Statics::NewProp_ReloadTime = { "ReloadTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WeaponActorComponent_eventCheckStartReloading_Parms, ReloadTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWeaponActorComponent_CheckStartReloading_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeaponActorComponent_CheckStartReloading_Statics::NewProp_ReloadTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWeaponActorComponent_CheckStartReloading_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Weapon/WeaponActorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWeaponActorComponent_CheckStartReloading_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWeaponActorComponent, nullptr, "CheckStartReloading", nullptr, nullptr, sizeof(WeaponActorComponent_eventCheckStartReloading_Parms), Z_Construct_UFunction_UWeaponActorComponent_CheckStartReloading_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponActorComponent_CheckStartReloading_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWeaponActorComponent_CheckStartReloading_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponActorComponent_CheckStartReloading_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWeaponActorComponent_CheckStartReloading()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWeaponActorComponent_CheckStartReloading_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWeaponActorComponent_HaveAmmoLeft_Statics
	{
		struct WeaponActorComponent_eventHaveAmmoLeft_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UWeaponActorComponent_HaveAmmoLeft_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((WeaponActorComponent_eventHaveAmmoLeft_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWeaponActorComponent_HaveAmmoLeft_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(WeaponActorComponent_eventHaveAmmoLeft_Parms), &Z_Construct_UFunction_UWeaponActorComponent_HaveAmmoLeft_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWeaponActorComponent_HaveAmmoLeft_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeaponActorComponent_HaveAmmoLeft_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWeaponActorComponent_HaveAmmoLeft_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Weapon/WeaponActorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWeaponActorComponent_HaveAmmoLeft_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWeaponActorComponent, nullptr, "HaveAmmoLeft", nullptr, nullptr, sizeof(WeaponActorComponent_eventHaveAmmoLeft_Parms), Z_Construct_UFunction_UWeaponActorComponent_HaveAmmoLeft_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponActorComponent_HaveAmmoLeft_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWeaponActorComponent_HaveAmmoLeft_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponActorComponent_HaveAmmoLeft_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWeaponActorComponent_HaveAmmoLeft()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWeaponActorComponent_HaveAmmoLeft_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWeaponActorComponent_OnAction_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWeaponActorComponent_OnAction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Weapon/WeaponActorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWeaponActorComponent_OnAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWeaponActorComponent, nullptr, "OnAction", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWeaponActorComponent_OnAction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponActorComponent_OnAction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWeaponActorComponent_OnAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWeaponActorComponent_OnAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWeaponActorComponent_OnFireWeapon_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWeaponActorComponent_OnFireWeapon_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Weapon/WeaponActorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWeaponActorComponent_OnFireWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWeaponActorComponent, nullptr, "OnFireWeapon", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWeaponActorComponent_OnFireWeapon_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponActorComponent_OnFireWeapon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWeaponActorComponent_OnFireWeapon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWeaponActorComponent_OnFireWeapon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWeaponActorComponent_OnReleaseFire_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWeaponActorComponent_OnReleaseFire_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Weapon/WeaponActorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWeaponActorComponent_OnReleaseFire_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWeaponActorComponent, nullptr, "OnReleaseFire", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWeaponActorComponent_OnReleaseFire_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponActorComponent_OnReleaseFire_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWeaponActorComponent_OnReleaseFire()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWeaponActorComponent_OnReleaseFire_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWeaponActorComponent_StartReloading_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWeaponActorComponent_StartReloading_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Weapon/WeaponActorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWeaponActorComponent_StartReloading_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWeaponActorComponent, nullptr, "StartReloading", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWeaponActorComponent_StartReloading_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponActorComponent_StartReloading_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWeaponActorComponent_StartReloading()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWeaponActorComponent_StartReloading_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWeaponActorComponent_ToggleItemPickup_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWeaponActorComponent_ToggleItemPickup_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Weapon/WeaponActorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWeaponActorComponent_ToggleItemPickup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWeaponActorComponent, nullptr, "ToggleItemPickup", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWeaponActorComponent_ToggleItemPickup_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponActorComponent_ToggleItemPickup_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWeaponActorComponent_ToggleItemPickup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWeaponActorComponent_ToggleItemPickup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UWeaponActorComponent_NoRegister()
	{
		return UWeaponActorComponent::StaticClass();
	}
	struct Z_Construct_UClass_UWeaponActorComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPickupInRange_MetaData[];
#endif
		static void NewProp_bPickupInRange_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPickupInRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHoldOnToObject_MetaData[];
#endif
		static void NewProp_bHoldOnToObject_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHoldOnToObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HoldComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HoldComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InspectDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InspectDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InspectingHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InspectingHeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DistanceOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DistanceOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThrowAwayForce_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ThrowAwayForce;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentWeapon_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentWeapon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InputComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InputComp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHoldingItem_MetaData[];
#endif
		static void NewProp_bHoldingItem_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHoldingItem;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CameraComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultCameraFOV_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DefaultCameraFOV;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ZoomInCameraFOV_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ZoomInCameraFOV;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SearchOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SearchOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PickupReach_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PickupReach;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DamageFromWeapon_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DamageFromWeapon;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWeaponActorComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_WeaponSystem,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UWeaponActorComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UWeaponActorComponent_CheckStartReloading, "CheckStartReloading" }, // 2678717922
		{ &Z_Construct_UFunction_UWeaponActorComponent_HaveAmmoLeft, "HaveAmmoLeft" }, // 724976421
		{ &Z_Construct_UFunction_UWeaponActorComponent_OnAction, "OnAction" }, // 3265058434
		{ &Z_Construct_UFunction_UWeaponActorComponent_OnFireWeapon, "OnFireWeapon" }, // 755250354
		{ &Z_Construct_UFunction_UWeaponActorComponent_OnReleaseFire, "OnReleaseFire" }, // 1147427772
		{ &Z_Construct_UFunction_UWeaponActorComponent_StartReloading, "StartReloading" }, // 2710673274
		{ &Z_Construct_UFunction_UWeaponActorComponent_ToggleItemPickup, "ToggleItemPickup" }, // 762763527
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWeaponActorComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Weapon/WeaponActorComponent.h" },
		{ "ModuleRelativePath", "Public/Weapon/WeaponActorComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWeaponActorComponent_Statics::NewProp_bPickupInRange_MetaData[] = {
		{ "Category", "WeaponActorComponent" },
		{ "Comment", "// Properties\n" },
		{ "ModuleRelativePath", "Public/Weapon/WeaponActorComponent.h" },
		{ "ToolTip", "Properties" },
	};
#endif
	void Z_Construct_UClass_UWeaponActorComponent_Statics::NewProp_bPickupInRange_SetBit(void* Obj)
	{
		((UWeaponActorComponent*)Obj)->bPickupInRange = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWeaponActorComponent_Statics::NewProp_bPickupInRange = { "bPickupInRange", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UWeaponActorComponent), &Z_Construct_UClass_UWeaponActorComponent_Statics::NewProp_bPickupInRange_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWeaponActorComponent_Statics::NewProp_bPickupInRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponActorComponent_Statics::NewProp_bPickupInRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWeaponActorComponent_Statics::NewProp_bHoldOnToObject_MetaData[] = {
		{ "Category", "WeaponActorComponent" },
		{ "ModuleRelativePath", "Public/Weapon/WeaponActorComponent.h" },
	};
#endif
	void Z_Construct_UClass_UWeaponActorComponent_Statics::NewProp_bHoldOnToObject_SetBit(void* Obj)
	{
		((UWeaponActorComponent*)Obj)->bHoldOnToObject = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWeaponActorComponent_Statics::NewProp_bHoldOnToObject = { "bHoldOnToObject", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UWeaponActorComponent), &Z_Construct_UClass_UWeaponActorComponent_Statics::NewProp_bHoldOnToObject_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWeaponActorComponent_Statics::NewProp_bHoldOnToObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponActorComponent_Statics::NewProp_bHoldOnToObject_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWeaponActorComponent_Statics::NewProp_HoldComponent_MetaData[] = {
		{ "Category", "Holding" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Weapon/WeaponActorComponent.h" },
		{ "ToolTip", "Should be found in instance, else generates an error" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWeaponActorComponent_Statics::NewProp_HoldComponent = { "HoldComponent", nullptr, (EPropertyFlags)0x00100000000a000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWeaponActorComponent, HoldComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWeaponActorComponent_Statics::NewProp_HoldComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponActorComponent_Statics::NewProp_HoldComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWeaponActorComponent_Statics::NewProp_InspectDistance_MetaData[] = {
		{ "Category", "Inspecting" },
		{ "ModuleRelativePath", "Public/Weapon/WeaponActorComponent.h" },
		{ "ToolTip", "Default holding distance for inspection, X, should be shorter than HoldDistance" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWeaponActorComponent_Statics::NewProp_InspectDistance = { "InspectDistance", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWeaponActorComponent, InspectDistance), METADATA_PARAMS(Z_Construct_UClass_UWeaponActorComponent_Statics::NewProp_InspectDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponActorComponent_Statics::NewProp_InspectDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWeaponActorComponent_Statics::NewProp_InspectingHeight_MetaData[] = {
		{ "Category", "Inspecting" },
		{ "ModuleRelativePath", "Public/Weapon/WeaponActorComponent.h" },
		{ "ToolTip", "Default holding distance for inspection, X, should be shorter than HoldDistance" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWeaponActorComponent_Statics::NewProp_InspectingHeight = { "InspectingHeight", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWeaponActorComponent, InspectingHeight), METADATA_PARAMS(Z_Construct_UClass_UWeaponActorComponent_Statics::NewProp_InspectingHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponActorComponent_Statics::NewProp_InspectingHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWeaponActorComponent_Statics::NewProp_DistanceOffset_MetaData[] = {
		{ "Category", "Holding" },
		{ "ModuleRelativePath", "Public/Weapon/WeaponActorComponent.h" },
		{ "ToolTip", "Offset from walls, so its doesnt goes trough them, X, should be the same value as holddistance" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWeaponActorComponent_Statics::NewProp_DistanceOffset = { "DistanceOffset", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWeaponActorComponent, DistanceOffset), METADATA_PARAMS(Z_Construct_UClass_UWeaponActorComponent_Statics::NewProp_DistanceOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponActorComponent_Statics::NewProp_DistanceOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWeaponActorComponent_Statics::NewProp_ThrowAwayForce_MetaData[] = {
		{ "Category", "Holding" },
		{ "ModuleRelativePath", "Public/Weapon/WeaponActorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UWeaponActorComponent_Statics::NewProp_ThrowAwayForce = { "ThrowAwayForce", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWeaponActorComponent, ThrowAwayForce), METADATA_PARAMS(Z_Construct_UClass_UWeaponActorComponent_Statics::NewProp_ThrowAwayForce_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponActorComponent_Statics::NewProp_ThrowAwayForce_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWeaponActorComponent_Statics::NewProp_CurrentWeapon_MetaData[] = {
		{ "Category", "WeaponActorComponent" },
		{ "ModuleRelativePath", "Public/Weapon/WeaponActorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWeaponActorComponent_Statics::NewProp_CurrentWeapon = { "CurrentWeapon", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWeaponActorComponent, CurrentWeapon), Z_Construct_UClass_AWeaponActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWeaponActorComponent_Statics::NewProp_CurrentWeapon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponActorComponent_Statics::NewProp_CurrentWeapon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWeaponActorComponent_Statics::NewProp_InputComp_MetaData[] = {
		{ "Category", "WeaponActorComponent" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Weapon/WeaponActorComponent.h" },
		{ "ToolTip", "Should be found in instance, else generates an error" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWeaponActorComponent_Statics::NewProp_InputComp = { "InputComp", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWeaponActorComponent, InputComp), Z_Construct_UClass_UInputComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWeaponActorComponent_Statics::NewProp_InputComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponActorComponent_Statics::NewProp_InputComp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWeaponActorComponent_Statics::NewProp_bHoldingItem_MetaData[] = {
		{ "Category", "WeaponActorComponent" },
		{ "ModuleRelativePath", "Public/Weapon/WeaponActorComponent.h" },
	};
#endif
	void Z_Construct_UClass_UWeaponActorComponent_Statics::NewProp_bHoldingItem_SetBit(void* Obj)
	{
		((UWeaponActorComponent*)Obj)->bHoldingItem = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWeaponActorComponent_Statics::NewProp_bHoldingItem = { "bHoldingItem", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UWeaponActorComponent), &Z_Construct_UClass_UWeaponActorComponent_Statics::NewProp_bHoldingItem_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWeaponActorComponent_Statics::NewProp_bHoldingItem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponActorComponent_Statics::NewProp_bHoldingItem_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWeaponActorComponent_Statics::NewProp_CameraComponent_MetaData[] = {
		{ "Category", "WeaponActorComponent" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Weapon/WeaponActorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWeaponActorComponent_Statics::NewProp_CameraComponent = { "CameraComponent", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWeaponActorComponent, CameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWeaponActorComponent_Statics::NewProp_CameraComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponActorComponent_Statics::NewProp_CameraComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWeaponActorComponent_Statics::NewProp_DefaultCameraFOV_MetaData[] = {
		{ "Category", "Inspecting" },
		{ "ModuleRelativePath", "Public/Weapon/WeaponActorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWeaponActorComponent_Statics::NewProp_DefaultCameraFOV = { "DefaultCameraFOV", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWeaponActorComponent, DefaultCameraFOV), METADATA_PARAMS(Z_Construct_UClass_UWeaponActorComponent_Statics::NewProp_DefaultCameraFOV_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponActorComponent_Statics::NewProp_DefaultCameraFOV_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWeaponActorComponent_Statics::NewProp_ZoomInCameraFOV_MetaData[] = {
		{ "Category", "Inspecting" },
		{ "ModuleRelativePath", "Public/Weapon/WeaponActorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWeaponActorComponent_Statics::NewProp_ZoomInCameraFOV = { "ZoomInCameraFOV", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWeaponActorComponent, ZoomInCameraFOV), METADATA_PARAMS(Z_Construct_UClass_UWeaponActorComponent_Statics::NewProp_ZoomInCameraFOV_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponActorComponent_Statics::NewProp_ZoomInCameraFOV_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWeaponActorComponent_Statics::NewProp_SearchOffset_MetaData[] = {
		{ "Category", "Holding" },
		{ "ModuleRelativePath", "Public/Weapon/WeaponActorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWeaponActorComponent_Statics::NewProp_SearchOffset = { "SearchOffset", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWeaponActorComponent, SearchOffset), METADATA_PARAMS(Z_Construct_UClass_UWeaponActorComponent_Statics::NewProp_SearchOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponActorComponent_Statics::NewProp_SearchOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWeaponActorComponent_Statics::NewProp_PickupReach_MetaData[] = {
		{ "Category", "Holding" },
		{ "ModuleRelativePath", "Public/Weapon/WeaponActorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWeaponActorComponent_Statics::NewProp_PickupReach = { "PickupReach", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWeaponActorComponent, PickupReach), METADATA_PARAMS(Z_Construct_UClass_UWeaponActorComponent_Statics::NewProp_PickupReach_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponActorComponent_Statics::NewProp_PickupReach_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWeaponActorComponent_Statics::NewProp_DamageFromWeapon_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Public/Weapon/WeaponActorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWeaponActorComponent_Statics::NewProp_DamageFromWeapon = { "DamageFromWeapon", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWeaponActorComponent, DamageFromWeapon), METADATA_PARAMS(Z_Construct_UClass_UWeaponActorComponent_Statics::NewProp_DamageFromWeapon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponActorComponent_Statics::NewProp_DamageFromWeapon_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWeaponActorComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponActorComponent_Statics::NewProp_bPickupInRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponActorComponent_Statics::NewProp_bHoldOnToObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponActorComponent_Statics::NewProp_HoldComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponActorComponent_Statics::NewProp_InspectDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponActorComponent_Statics::NewProp_InspectingHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponActorComponent_Statics::NewProp_DistanceOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponActorComponent_Statics::NewProp_ThrowAwayForce,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponActorComponent_Statics::NewProp_CurrentWeapon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponActorComponent_Statics::NewProp_InputComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponActorComponent_Statics::NewProp_bHoldingItem,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponActorComponent_Statics::NewProp_CameraComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponActorComponent_Statics::NewProp_DefaultCameraFOV,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponActorComponent_Statics::NewProp_ZoomInCameraFOV,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponActorComponent_Statics::NewProp_SearchOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponActorComponent_Statics::NewProp_PickupReach,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponActorComponent_Statics::NewProp_DamageFromWeapon,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWeaponActorComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWeaponActorComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UWeaponActorComponent_Statics::ClassParams = {
		&UWeaponActorComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UWeaponActorComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponActorComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UWeaponActorComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponActorComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWeaponActorComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UWeaponActorComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UWeaponActorComponent, 1071372384);
	template<> WEAPONSYSTEM_API UClass* StaticClass<UWeaponActorComponent>()
	{
		return UWeaponActorComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UWeaponActorComponent(Z_Construct_UClass_UWeaponActorComponent, &UWeaponActorComponent::StaticClass, TEXT("/Script/WeaponSystem"), TEXT("UWeaponActorComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWeaponActorComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
