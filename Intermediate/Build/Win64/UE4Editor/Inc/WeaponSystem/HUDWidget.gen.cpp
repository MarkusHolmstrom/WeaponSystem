// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WeaponSystem/Public/UI/HUDWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHUDWidget() {}
// Cross Module References
	WEAPONSYSTEM_API UClass* Z_Construct_UClass_UHUDWidget_NoRegister();
	WEAPONSYSTEM_API UClass* Z_Construct_UClass_UHUDWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_WeaponSystem();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UHUDWidget::execUpdateWeaponType)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_WeaponName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateWeaponType(Z_Param_WeaponName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHUDWidget::execUpdateAmmo)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Cur);
		P_GET_PROPERTY(FIntProperty,Z_Param_Left);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateAmmo(Z_Param_Cur,Z_Param_Left);
		P_NATIVE_END;
	}
	void UHUDWidget::StaticRegisterNativesUHUDWidget()
	{
		UClass* Class = UHUDWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "UpdateAmmo", &UHUDWidget::execUpdateAmmo },
			{ "UpdateWeaponType", &UHUDWidget::execUpdateWeaponType },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UHUDWidget_UpdateAmmo_Statics
	{
		struct HUDWidget_eventUpdateAmmo_Parms
		{
			int32 Cur;
			int32 Left;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Cur;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Left;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UHUDWidget_UpdateAmmo_Statics::NewProp_Cur = { "Cur", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HUDWidget_eventUpdateAmmo_Parms, Cur), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UHUDWidget_UpdateAmmo_Statics::NewProp_Left = { "Left", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HUDWidget_eventUpdateAmmo_Parms, Left), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHUDWidget_UpdateAmmo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHUDWidget_UpdateAmmo_Statics::NewProp_Cur,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHUDWidget_UpdateAmmo_Statics::NewProp_Left,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHUDWidget_UpdateAmmo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/HUDWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHUDWidget_UpdateAmmo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHUDWidget, nullptr, "UpdateAmmo", nullptr, nullptr, sizeof(HUDWidget_eventUpdateAmmo_Parms), Z_Construct_UFunction_UHUDWidget_UpdateAmmo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHUDWidget_UpdateAmmo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHUDWidget_UpdateAmmo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHUDWidget_UpdateAmmo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHUDWidget_UpdateAmmo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHUDWidget_UpdateAmmo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHUDWidget_UpdateWeaponType_Statics
	{
		struct HUDWidget_eventUpdateWeaponType_Parms
		{
			FString WeaponName;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_WeaponName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHUDWidget_UpdateWeaponType_Statics::NewProp_WeaponName = { "WeaponName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HUDWidget_eventUpdateWeaponType_Parms, WeaponName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHUDWidget_UpdateWeaponType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHUDWidget_UpdateWeaponType_Statics::NewProp_WeaponName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHUDWidget_UpdateWeaponType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/HUDWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHUDWidget_UpdateWeaponType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHUDWidget, nullptr, "UpdateWeaponType", nullptr, nullptr, sizeof(HUDWidget_eventUpdateWeaponType_Parms), Z_Construct_UFunction_UHUDWidget_UpdateWeaponType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHUDWidget_UpdateWeaponType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHUDWidget_UpdateWeaponType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHUDWidget_UpdateWeaponType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHUDWidget_UpdateWeaponType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHUDWidget_UpdateWeaponType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UHUDWidget_NoRegister()
	{
		return UHUDWidget::StaticClass();
	}
	struct Z_Construct_UClass_UHUDWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AmmoTB_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AmmoTB;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponType_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WeaponType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHUDWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_WeaponSystem,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UHUDWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UHUDWidget_UpdateAmmo, "UpdateAmmo" }, // 3765434326
		{ &Z_Construct_UFunction_UHUDWidget_UpdateWeaponType, "UpdateWeaponType" }, // 2304460998
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHUDWidget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "UI/HUDWidget.h" },
		{ "ModuleRelativePath", "Public/UI/HUDWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHUDWidget_Statics::NewProp_AmmoTB_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "HUDWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/HUDWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHUDWidget_Statics::NewProp_AmmoTB = { "AmmoTB", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHUDWidget, AmmoTB), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UHUDWidget_Statics::NewProp_AmmoTB_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHUDWidget_Statics::NewProp_AmmoTB_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHUDWidget_Statics::NewProp_WeaponType_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "HUDWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/HUDWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHUDWidget_Statics::NewProp_WeaponType = { "WeaponType", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHUDWidget, WeaponType), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UHUDWidget_Statics::NewProp_WeaponType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHUDWidget_Statics::NewProp_WeaponType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHUDWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHUDWidget_Statics::NewProp_AmmoTB,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHUDWidget_Statics::NewProp_WeaponType,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHUDWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHUDWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHUDWidget_Statics::ClassParams = {
		&UHUDWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UHUDWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UHUDWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UHUDWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHUDWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHUDWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHUDWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHUDWidget, 1299749256);
	template<> WEAPONSYSTEM_API UClass* StaticClass<UHUDWidget>()
	{
		return UHUDWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHUDWidget(Z_Construct_UClass_UHUDWidget, &UHUDWidget::StaticClass, TEXT("/Script/WeaponSystem"), TEXT("UHUDWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHUDWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
