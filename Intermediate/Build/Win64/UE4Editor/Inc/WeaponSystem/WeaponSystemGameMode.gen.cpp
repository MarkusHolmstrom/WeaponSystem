// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WeaponSystem/WeaponSystemGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWeaponSystemGameMode() {}
// Cross Module References
	WEAPONSYSTEM_API UClass* Z_Construct_UClass_AWeaponSystemGameMode_NoRegister();
	WEAPONSYSTEM_API UClass* Z_Construct_UClass_AWeaponSystemGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_WeaponSystem();
// End Cross Module References
	void AWeaponSystemGameMode::StaticRegisterNativesAWeaponSystemGameMode()
	{
	}
	UClass* Z_Construct_UClass_AWeaponSystemGameMode_NoRegister()
	{
		return AWeaponSystemGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AWeaponSystemGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AWeaponSystemGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_WeaponSystem,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeaponSystemGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "WeaponSystemGameMode.h" },
		{ "ModuleRelativePath", "WeaponSystemGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AWeaponSystemGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWeaponSystemGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AWeaponSystemGameMode_Statics::ClassParams = {
		&AWeaponSystemGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_AWeaponSystemGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponSystemGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AWeaponSystemGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AWeaponSystemGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AWeaponSystemGameMode, 424371267);
	template<> WEAPONSYSTEM_API UClass* StaticClass<AWeaponSystemGameMode>()
	{
		return AWeaponSystemGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AWeaponSystemGameMode(Z_Construct_UClass_AWeaponSystemGameMode, &AWeaponSystemGameMode::StaticClass, TEXT("/Script/WeaponSystem"), TEXT("AWeaponSystemGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AWeaponSystemGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
