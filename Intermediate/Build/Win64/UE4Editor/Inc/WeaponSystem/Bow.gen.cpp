// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WeaponSystem/Public/Weapon/Bow.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBow() {}
// Cross Module References
	WEAPONSYSTEM_API UClass* Z_Construct_UClass_UBow_NoRegister();
	WEAPONSYSTEM_API UClass* Z_Construct_UClass_UBow();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_WeaponSystem();
// End Cross Module References
	void UBow::StaticRegisterNativesUBow()
	{
	}
	UClass* Z_Construct_UClass_UBow_NoRegister()
	{
		return UBow::StaticClass();
	}
	struct Z_Construct_UClass_UBow_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBow_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_WeaponSystem,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBow_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Weapon/Bow.h" },
		{ "ModuleRelativePath", "Public/Weapon/Bow.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBow_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBow>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBow_Statics::ClassParams = {
		&UBow::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UBow_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBow_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBow()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBow_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBow, 849902067);
	template<> WEAPONSYSTEM_API UClass* StaticClass<UBow>()
	{
		return UBow::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBow(Z_Construct_UClass_UBow, &UBow::StaticClass, TEXT("/Script/WeaponSystem"), TEXT("UBow"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBow);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
