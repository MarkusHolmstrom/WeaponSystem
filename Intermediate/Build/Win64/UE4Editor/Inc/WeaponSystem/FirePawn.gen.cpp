// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WeaponSystem/Public/FirePawn.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFirePawn() {}
// Cross Module References
	WEAPONSYSTEM_API UEnum* Z_Construct_UEnum_WeaponSystem_EWindDirection();
	UPackage* Z_Construct_UPackage__Script_WeaponSystem();
	WEAPONSYSTEM_API UClass* Z_Construct_UClass_AFirePawn_NoRegister();
	WEAPONSYSTEM_API UClass* Z_Construct_UClass_AFirePawn();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystemComponent_NoRegister();
// End Cross Module References
	static UEnum* EWindDirection_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_WeaponSystem_EWindDirection, Z_Construct_UPackage__Script_WeaponSystem(), TEXT("EWindDirection"));
		}
		return Singleton;
	}
	template<> WEAPONSYSTEM_API UEnum* StaticEnum<EWindDirection>()
	{
		return EWindDirection_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EWindDirection(EWindDirection_StaticEnum, TEXT("/Script/WeaponSystem"), TEXT("EWindDirection"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_WeaponSystem_EWindDirection_Hash() { return 3893855870U; }
	UEnum* Z_Construct_UEnum_WeaponSystem_EWindDirection()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_WeaponSystem();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EWindDirection"), 0, Get_Z_Construct_UEnum_WeaponSystem_EWindDirection_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "NoWind", (int64)NoWind },
				{ "West", (int64)West },
				{ "North", (int64)North },
				{ "East", (int64)East },
				{ "South", (int64)South },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "East.DisplayName", "East" },
				{ "East.Name", "East" },
				{ "ModuleRelativePath", "Public/FirePawn.h" },
				{ "North.DisplayName", "North" },
				{ "North.Name", "North" },
				{ "NoWind.DisplayName", "No Wind" },
				{ "NoWind.Name", "NoWind" },
				{ "South.DisplayName", "South" },
				{ "South.Name", "South" },
				{ "West.DisplayName", "West" },
				{ "West.Name", "West" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_WeaponSystem,
				nullptr,
				"EWindDirection",
				"EWindDirection",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Regular,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	DEFINE_FUNCTION(AFirePawn::execEndFireParticles)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EndFireParticles();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFirePawn::execPropagate)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Propagate();
		P_NATIVE_END;
	}
	void AFirePawn::StaticRegisterNativesAFirePawn()
	{
		UClass* Class = AFirePawn::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EndFireParticles", &AFirePawn::execEndFireParticles },
			{ "Propagate", &AFirePawn::execPropagate },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFirePawn_EndFireParticles_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFirePawn_EndFireParticles_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FirePawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFirePawn_EndFireParticles_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFirePawn, nullptr, "EndFireParticles", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFirePawn_EndFireParticles_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFirePawn_EndFireParticles_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFirePawn_EndFireParticles()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFirePawn_EndFireParticles_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFirePawn_Propagate_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFirePawn_Propagate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FirePawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFirePawn_Propagate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFirePawn, nullptr, "Propagate", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFirePawn_Propagate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFirePawn_Propagate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFirePawn_Propagate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFirePawn_Propagate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AFirePawn_NoRegister()
	{
		return AFirePawn::StaticClass();
	}
	struct Z_Construct_UClass_AFirePawn_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FireCollision_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FireCollision;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LifeSpan_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LifeSpan;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpreadSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SpreadSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FireParticle_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FireParticle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFirePawn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_WeaponSystem,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AFirePawn_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFirePawn_EndFireParticles, "EndFireParticles" }, // 4218125082
		{ &Z_Construct_UFunction_AFirePawn_Propagate, "Propagate" }, // 2159681537
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFirePawn_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "FirePawn.h" },
		{ "ModuleRelativePath", "Public/FirePawn.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFirePawn_Statics::NewProp_FireCollision_MetaData[] = {
		{ "Category", "FirePawn" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/FirePawn.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFirePawn_Statics::NewProp_FireCollision = { "FireCollision", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFirePawn, FireCollision), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFirePawn_Statics::NewProp_FireCollision_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFirePawn_Statics::NewProp_FireCollision_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFirePawn_Statics::NewProp_LifeSpan_MetaData[] = {
		{ "Category", "FirePawn" },
		{ "ModuleRelativePath", "Public/FirePawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFirePawn_Statics::NewProp_LifeSpan = { "LifeSpan", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFirePawn, LifeSpan), METADATA_PARAMS(Z_Construct_UClass_AFirePawn_Statics::NewProp_LifeSpan_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFirePawn_Statics::NewProp_LifeSpan_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFirePawn_Statics::NewProp_SpreadSpeed_MetaData[] = {
		{ "Category", "FirePawn" },
		{ "ModuleRelativePath", "Public/FirePawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFirePawn_Statics::NewProp_SpreadSpeed = { "SpreadSpeed", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFirePawn, SpreadSpeed), METADATA_PARAMS(Z_Construct_UClass_AFirePawn_Statics::NewProp_SpreadSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFirePawn_Statics::NewProp_SpreadSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFirePawn_Statics::NewProp_FireParticle_MetaData[] = {
		{ "Category", "FirePawn" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/FirePawn.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFirePawn_Statics::NewProp_FireParticle = { "FireParticle", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFirePawn, FireParticle), Z_Construct_UClass_UParticleSystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFirePawn_Statics::NewProp_FireParticle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFirePawn_Statics::NewProp_FireParticle_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFirePawn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFirePawn_Statics::NewProp_FireCollision,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFirePawn_Statics::NewProp_LifeSpan,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFirePawn_Statics::NewProp_SpreadSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFirePawn_Statics::NewProp_FireParticle,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFirePawn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFirePawn>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFirePawn_Statics::ClassParams = {
		&AFirePawn::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AFirePawn_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AFirePawn_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AFirePawn_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFirePawn_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFirePawn()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFirePawn_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFirePawn, 4020194010);
	template<> WEAPONSYSTEM_API UClass* StaticClass<AFirePawn>()
	{
		return AFirePawn::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFirePawn(Z_Construct_UClass_AFirePawn, &AFirePawn::StaticClass, TEXT("/Script/WeaponSystem"), TEXT("AFirePawn"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFirePawn);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
