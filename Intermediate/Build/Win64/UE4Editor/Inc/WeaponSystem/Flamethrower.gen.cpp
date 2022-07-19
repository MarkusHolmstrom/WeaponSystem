// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WeaponSystem/Public/Weapon/Flamethrower.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFlamethrower() {}
// Cross Module References
	WEAPONSYSTEM_API UClass* Z_Construct_UClass_UFlamethrower_NoRegister();
	WEAPONSYSTEM_API UClass* Z_Construct_UClass_UFlamethrower();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_WeaponSystem();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystemComponent_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UFlamethrower::execGetSpawnTransform)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTransform*)Z_Param__Result=P_THIS->GetSpawnTransform();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFlamethrower::execSpawnFires)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SpawnFires();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFlamethrower::execStopFire)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopFire();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFlamethrower::execOnFire)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnFire();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFlamethrower::execToggleCanFire)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ToggleCanFire();
		P_NATIVE_END;
	}
	void UFlamethrower::StaticRegisterNativesUFlamethrower()
	{
		UClass* Class = UFlamethrower::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetSpawnTransform", &UFlamethrower::execGetSpawnTransform },
			{ "OnFire", &UFlamethrower::execOnFire },
			{ "SpawnFires", &UFlamethrower::execSpawnFires },
			{ "StopFire", &UFlamethrower::execStopFire },
			{ "ToggleCanFire", &UFlamethrower::execToggleCanFire },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFlamethrower_GetSpawnTransform_Statics
	{
		struct Flamethrower_eventGetSpawnTransform_Parms
		{
			FTransform ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFlamethrower_GetSpawnTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Flamethrower_eventGetSpawnTransform_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFlamethrower_GetSpawnTransform_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlamethrower_GetSpawnTransform_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFlamethrower_GetSpawnTransform_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Weapon/Flamethrower.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFlamethrower_GetSpawnTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFlamethrower, nullptr, "GetSpawnTransform", nullptr, nullptr, sizeof(Flamethrower_eventGetSpawnTransform_Parms), Z_Construct_UFunction_UFlamethrower_GetSpawnTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlamethrower_GetSpawnTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFlamethrower_GetSpawnTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlamethrower_GetSpawnTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFlamethrower_GetSpawnTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFlamethrower_GetSpawnTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFlamethrower_OnFire_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFlamethrower_OnFire_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Weapon/Flamethrower.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFlamethrower_OnFire_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFlamethrower, nullptr, "OnFire", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFlamethrower_OnFire_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlamethrower_OnFire_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFlamethrower_OnFire()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFlamethrower_OnFire_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFlamethrower_SpawnFires_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFlamethrower_SpawnFires_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Weapon/Flamethrower.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFlamethrower_SpawnFires_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFlamethrower, nullptr, "SpawnFires", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFlamethrower_SpawnFires_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlamethrower_SpawnFires_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFlamethrower_SpawnFires()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFlamethrower_SpawnFires_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFlamethrower_StopFire_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFlamethrower_StopFire_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Weapon/Flamethrower.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFlamethrower_StopFire_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFlamethrower, nullptr, "StopFire", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFlamethrower_StopFire_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlamethrower_StopFire_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFlamethrower_StopFire()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFlamethrower_StopFire_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFlamethrower_ToggleCanFire_Statics
	{
		struct Flamethrower_eventToggleCanFire_Parms
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
	void Z_Construct_UFunction_UFlamethrower_ToggleCanFire_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Flamethrower_eventToggleCanFire_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFlamethrower_ToggleCanFire_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Flamethrower_eventToggleCanFire_Parms), &Z_Construct_UFunction_UFlamethrower_ToggleCanFire_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFlamethrower_ToggleCanFire_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlamethrower_ToggleCanFire_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFlamethrower_ToggleCanFire_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Weapon/Flamethrower.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFlamethrower_ToggleCanFire_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFlamethrower, nullptr, "ToggleCanFire", nullptr, nullptr, sizeof(Flamethrower_eventToggleCanFire_Parms), Z_Construct_UFunction_UFlamethrower_ToggleCanFire_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlamethrower_ToggleCanFire_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFlamethrower_ToggleCanFire_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlamethrower_ToggleCanFire_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFlamethrower_ToggleCanFire()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFlamethrower_ToggleCanFire_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFlamethrower_NoRegister()
	{
		return UFlamethrower::StaticClass();
	}
	struct Z_Construct_UClass_UFlamethrower_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerPawn_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerPawn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerCamera_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerCamera;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParticleSystem_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ParticleSystem;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FlameParticleComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FlameParticleComp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Fire_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_Fire;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FireInterval_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FireInterval;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Timer_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Timer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RandomNr_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RandomNr;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AddPerFrameAtRandomNr_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AddPerFrameAtRandomNr;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinSpawnDistFromPlayer_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinSpawnDistFromPlayer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MiddleFireDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_MiddleFireDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCanFire_MetaData[];
#endif
		static void NewProp_bCanFire_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCanFire;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFlamethrower_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_WeaponSystem,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFlamethrower_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFlamethrower_GetSpawnTransform, "GetSpawnTransform" }, // 3528660337
		{ &Z_Construct_UFunction_UFlamethrower_OnFire, "OnFire" }, // 994951226
		{ &Z_Construct_UFunction_UFlamethrower_SpawnFires, "SpawnFires" }, // 1403272078
		{ &Z_Construct_UFunction_UFlamethrower_StopFire, "StopFire" }, // 3441289768
		{ &Z_Construct_UFunction_UFlamethrower_ToggleCanFire, "ToggleCanFire" }, // 1348418567
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlamethrower_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Weapon/Flamethrower.h" },
		{ "ModuleRelativePath", "Public/Weapon/Flamethrower.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlamethrower_Statics::NewProp_PlayerPawn_MetaData[] = {
		{ "Category", "Flamethrower" },
		{ "ModuleRelativePath", "Public/Weapon/Flamethrower.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFlamethrower_Statics::NewProp_PlayerPawn = { "PlayerPawn", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFlamethrower, PlayerPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFlamethrower_Statics::NewProp_PlayerPawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlamethrower_Statics::NewProp_PlayerPawn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlamethrower_Statics::NewProp_PlayerCamera_MetaData[] = {
		{ "Category", "Flamethrower" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Weapon/Flamethrower.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFlamethrower_Statics::NewProp_PlayerCamera = { "PlayerCamera", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFlamethrower, PlayerCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFlamethrower_Statics::NewProp_PlayerCamera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlamethrower_Statics::NewProp_PlayerCamera_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlamethrower_Statics::NewProp_ParticleSystem_MetaData[] = {
		{ "Category", "Flamethrower" },
		{ "ModuleRelativePath", "Public/Weapon/Flamethrower.h" },
		{ "ToolTip", "Set position rel location to 80, 0, 10 if this particle system is not visible in game play" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFlamethrower_Statics::NewProp_ParticleSystem = { "ParticleSystem", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFlamethrower, ParticleSystem), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFlamethrower_Statics::NewProp_ParticleSystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlamethrower_Statics::NewProp_ParticleSystem_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlamethrower_Statics::NewProp_FlameParticleComp_MetaData[] = {
		{ "Category", "Flamethrower" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Weapon/Flamethrower.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFlamethrower_Statics::NewProp_FlameParticleComp = { "FlameParticleComp", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFlamethrower, FlameParticleComp), Z_Construct_UClass_UParticleSystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFlamethrower_Statics::NewProp_FlameParticleComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlamethrower_Statics::NewProp_FlameParticleComp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlamethrower_Statics::NewProp_Fire_MetaData[] = {
		{ "Category", "Flamethrower" },
		{ "ModuleRelativePath", "Public/Weapon/Flamethrower.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UFlamethrower_Statics::NewProp_Fire = { "Fire", nullptr, (EPropertyFlags)0x0014000000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFlamethrower, Fire), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UFlamethrower_Statics::NewProp_Fire_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlamethrower_Statics::NewProp_Fire_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlamethrower_Statics::NewProp_FireInterval_MetaData[] = {
		{ "Category", "Flamethrower" },
		{ "ModuleRelativePath", "Public/Weapon/Flamethrower.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFlamethrower_Statics::NewProp_FireInterval = { "FireInterval", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFlamethrower, FireInterval), METADATA_PARAMS(Z_Construct_UClass_UFlamethrower_Statics::NewProp_FireInterval_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlamethrower_Statics::NewProp_FireInterval_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlamethrower_Statics::NewProp_Timer_MetaData[] = {
		{ "Category", "Flamethrower" },
		{ "ModuleRelativePath", "Public/Weapon/Flamethrower.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFlamethrower_Statics::NewProp_Timer = { "Timer", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFlamethrower, Timer), METADATA_PARAMS(Z_Construct_UClass_UFlamethrower_Statics::NewProp_Timer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlamethrower_Statics::NewProp_Timer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlamethrower_Statics::NewProp_RandomNr_MetaData[] = {
		{ "Category", "Flamethrower" },
		{ "ModuleRelativePath", "Public/Weapon/Flamethrower.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFlamethrower_Statics::NewProp_RandomNr = { "RandomNr", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFlamethrower, RandomNr), METADATA_PARAMS(Z_Construct_UClass_UFlamethrower_Statics::NewProp_RandomNr_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlamethrower_Statics::NewProp_RandomNr_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlamethrower_Statics::NewProp_AddPerFrameAtRandomNr_MetaData[] = {
		{ "Category", "Flamethrower" },
		{ "ModuleRelativePath", "Public/Weapon/Flamethrower.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFlamethrower_Statics::NewProp_AddPerFrameAtRandomNr = { "AddPerFrameAtRandomNr", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFlamethrower, AddPerFrameAtRandomNr), METADATA_PARAMS(Z_Construct_UClass_UFlamethrower_Statics::NewProp_AddPerFrameAtRandomNr_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlamethrower_Statics::NewProp_AddPerFrameAtRandomNr_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlamethrower_Statics::NewProp_MinSpawnDistFromPlayer_MetaData[] = {
		{ "Category", "Flamethrower" },
		{ "ModuleRelativePath", "Public/Weapon/Flamethrower.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFlamethrower_Statics::NewProp_MinSpawnDistFromPlayer = { "MinSpawnDistFromPlayer", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFlamethrower, MinSpawnDistFromPlayer), METADATA_PARAMS(Z_Construct_UClass_UFlamethrower_Statics::NewProp_MinSpawnDistFromPlayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlamethrower_Statics::NewProp_MinSpawnDistFromPlayer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlamethrower_Statics::NewProp_MiddleFireDistance_MetaData[] = {
		{ "Category", "Flamethrower" },
		{ "ModuleRelativePath", "Public/Weapon/Flamethrower.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UFlamethrower_Statics::NewProp_MiddleFireDistance = { "MiddleFireDistance", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFlamethrower, MiddleFireDistance), METADATA_PARAMS(Z_Construct_UClass_UFlamethrower_Statics::NewProp_MiddleFireDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlamethrower_Statics::NewProp_MiddleFireDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlamethrower_Statics::NewProp_bCanFire_MetaData[] = {
		{ "Category", "Flamethrower" },
		{ "ModuleRelativePath", "Public/Weapon/Flamethrower.h" },
	};
#endif
	void Z_Construct_UClass_UFlamethrower_Statics::NewProp_bCanFire_SetBit(void* Obj)
	{
		((UFlamethrower*)Obj)->bCanFire = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFlamethrower_Statics::NewProp_bCanFire = { "bCanFire", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UFlamethrower), &Z_Construct_UClass_UFlamethrower_Statics::NewProp_bCanFire_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFlamethrower_Statics::NewProp_bCanFire_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlamethrower_Statics::NewProp_bCanFire_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFlamethrower_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlamethrower_Statics::NewProp_PlayerPawn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlamethrower_Statics::NewProp_PlayerCamera,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlamethrower_Statics::NewProp_ParticleSystem,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlamethrower_Statics::NewProp_FlameParticleComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlamethrower_Statics::NewProp_Fire,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlamethrower_Statics::NewProp_FireInterval,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlamethrower_Statics::NewProp_Timer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlamethrower_Statics::NewProp_RandomNr,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlamethrower_Statics::NewProp_AddPerFrameAtRandomNr,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlamethrower_Statics::NewProp_MinSpawnDistFromPlayer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlamethrower_Statics::NewProp_MiddleFireDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlamethrower_Statics::NewProp_bCanFire,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFlamethrower_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFlamethrower>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFlamethrower_Statics::ClassParams = {
		&UFlamethrower::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UFlamethrower_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UFlamethrower_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UFlamethrower_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFlamethrower_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFlamethrower()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFlamethrower_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFlamethrower, 236909651);
	template<> WEAPONSYSTEM_API UClass* StaticClass<UFlamethrower>()
	{
		return UFlamethrower::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFlamethrower(Z_Construct_UClass_UFlamethrower, &UFlamethrower::StaticClass, TEXT("/Script/WeaponSystem"), TEXT("UFlamethrower"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFlamethrower);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
