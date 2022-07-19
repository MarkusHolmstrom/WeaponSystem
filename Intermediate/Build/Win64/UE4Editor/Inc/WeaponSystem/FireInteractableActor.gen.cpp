// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WeaponSystem/Public/Interactables/FireInteractableActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFireInteractableActor() {}
// Cross Module References
	WEAPONSYSTEM_API UClass* Z_Construct_UClass_AFireInteractableActor_NoRegister();
	WEAPONSYSTEM_API UClass* Z_Construct_UClass_AFireInteractableActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_WeaponSystem();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterial_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AFireInteractableActor::execInteract)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->Interact();
		P_NATIVE_END;
	}
	void AFireInteractableActor::StaticRegisterNativesAFireInteractableActor()
	{
		UClass* Class = AFireInteractableActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Interact", &AFireInteractableActor::execInteract },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFireInteractableActor_Interact_Statics
	{
		struct FireInteractableActor_eventInteract_Parms
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
	void Z_Construct_UFunction_AFireInteractableActor_Interact_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FireInteractableActor_eventInteract_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFireInteractableActor_Interact_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FireInteractableActor_eventInteract_Parms), &Z_Construct_UFunction_AFireInteractableActor_Interact_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFireInteractableActor_Interact_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFireInteractableActor_Interact_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFireInteractableActor_Interact_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interactables/FireInteractableActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFireInteractableActor_Interact_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFireInteractableActor, nullptr, "Interact", nullptr, nullptr, sizeof(FireInteractableActor_eventInteract_Parms), Z_Construct_UFunction_AFireInteractableActor_Interact_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFireInteractableActor_Interact_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFireInteractableActor_Interact_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFireInteractableActor_Interact_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFireInteractableActor_Interact()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFireInteractableActor_Interact_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AFireInteractableActor_NoRegister()
	{
		return AFireInteractableActor::StaticClass();
	}
	struct Z_Construct_UClass_AFireInteractableActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TagName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_TagName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DefaultMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InteractMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InteractMaterial;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFireInteractableActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_WeaponSystem,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AFireInteractableActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFireInteractableActor_Interact, "Interact" }, // 3312871331
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFireInteractableActor_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Interactables/FireInteractableActor.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Interactables/FireInteractableActor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFireInteractableActor_Statics::NewProp_TagName_MetaData[] = {
		{ "Category", "FireInteractableActor" },
		{ "Comment", "// Have enum instead?\n" },
		{ "ModuleRelativePath", "Public/Interactables/FireInteractableActor.h" },
		{ "ToolTip", "Have enum instead?" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_AFireInteractableActor_Statics::NewProp_TagName = { "TagName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFireInteractableActor, TagName), METADATA_PARAMS(Z_Construct_UClass_AFireInteractableActor_Statics::NewProp_TagName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFireInteractableActor_Statics::NewProp_TagName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFireInteractableActor_Statics::NewProp_DefaultMesh_MetaData[] = {
		{ "Category", "FireInteractableActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Interactables/FireInteractableActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFireInteractableActor_Statics::NewProp_DefaultMesh = { "DefaultMesh", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFireInteractableActor, DefaultMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFireInteractableActor_Statics::NewProp_DefaultMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFireInteractableActor_Statics::NewProp_DefaultMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFireInteractableActor_Statics::NewProp_InteractMaterial_MetaData[] = {
		{ "Category", "FireInteractableActor" },
		{ "ModuleRelativePath", "Public/Interactables/FireInteractableActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFireInteractableActor_Statics::NewProp_InteractMaterial = { "InteractMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFireInteractableActor, InteractMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFireInteractableActor_Statics::NewProp_InteractMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFireInteractableActor_Statics::NewProp_InteractMaterial_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFireInteractableActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFireInteractableActor_Statics::NewProp_TagName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFireInteractableActor_Statics::NewProp_DefaultMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFireInteractableActor_Statics::NewProp_InteractMaterial,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFireInteractableActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFireInteractableActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFireInteractableActor_Statics::ClassParams = {
		&AFireInteractableActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AFireInteractableActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AFireInteractableActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AFireInteractableActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFireInteractableActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFireInteractableActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFireInteractableActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFireInteractableActor, 81142302);
	template<> WEAPONSYSTEM_API UClass* StaticClass<AFireInteractableActor>()
	{
		return AFireInteractableActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFireInteractableActor(Z_Construct_UClass_AFireInteractableActor, &AFireInteractableActor::StaticClass, TEXT("/Script/WeaponSystem"), TEXT("AFireInteractableActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFireInteractableActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
