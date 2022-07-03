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
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystemComponent_NoRegister();
// End Cross Module References
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
			{ "OnFire", &UFlamethrower::execOnFire },
			{ "StopFire", &UFlamethrower::execStopFire },
			{ "ToggleCanFire", &UFlamethrower::execToggleCanFire },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParticleSystem_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ParticleSystem;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FlameParticleComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FlameParticleComp;
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
		{ &Z_Construct_UFunction_UFlamethrower_OnFire, "OnFire" }, // 994951226
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
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlamethrower_Statics::NewProp_ParticleSystem,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlamethrower_Statics::NewProp_FlameParticleComp,
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
	IMPLEMENT_CLASS(UFlamethrower, 3840354149);
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
