// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WeaponSystem/Public/BlockActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlockActor() {}
// Cross Module References
	WEAPONSYSTEM_API UClass* Z_Construct_UClass_ABlockActor_NoRegister();
	WEAPONSYSTEM_API UClass* Z_Construct_UClass_ABlockActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_WeaponSystem();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void ABlockActor::StaticRegisterNativesABlockActor()
	{
	}
	UClass* Z_Construct_UClass_ABlockActor_NoRegister()
	{
		return ABlockActor::StaticClass();
	}
	struct Z_Construct_UClass_ABlockActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Movement_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Movement;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxBound_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxBound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RunningTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RunningTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RootBlock_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RootBlock;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlockMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BlockMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABlockActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_WeaponSystem,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABlockActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BlockActor.h" },
		{ "ModuleRelativePath", "Public/BlockActor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABlockActor_Statics::NewProp_Movement_MetaData[] = {
		{ "Category", "BlockActor" },
		{ "Comment", "// The value determines the speed and direction\n" },
		{ "ModuleRelativePath", "Public/BlockActor.h" },
		{ "ToolTip", "The value determines the speed and direction" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABlockActor_Statics::NewProp_Movement = { "Movement", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABlockActor, Movement), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ABlockActor_Statics::NewProp_Movement_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABlockActor_Statics::NewProp_Movement_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABlockActor_Statics::NewProp_MaxBound_MetaData[] = {
		{ "Category", "BlockActor" },
		{ "Comment", "// The maximum distance block can move, also respective negative value in the other direction\n" },
		{ "ModuleRelativePath", "Public/BlockActor.h" },
		{ "ToolTip", "The maximum distance block can move, also respective negative value in the other direction" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABlockActor_Statics::NewProp_MaxBound = { "MaxBound", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABlockActor, MaxBound), METADATA_PARAMS(Z_Construct_UClass_ABlockActor_Statics::NewProp_MaxBound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABlockActor_Statics::NewProp_MaxBound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABlockActor_Statics::NewProp_RunningTime_MetaData[] = {
		{ "Category", "BlockActor" },
		{ "ModuleRelativePath", "Public/BlockActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABlockActor_Statics::NewProp_RunningTime = { "RunningTime", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABlockActor, RunningTime), METADATA_PARAMS(Z_Construct_UClass_ABlockActor_Statics::NewProp_RunningTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABlockActor_Statics::NewProp_RunningTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABlockActor_Statics::NewProp_RootBlock_MetaData[] = {
		{ "Category", "BlockActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BlockActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABlockActor_Statics::NewProp_RootBlock = { "RootBlock", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABlockActor, RootBlock), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABlockActor_Statics::NewProp_RootBlock_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABlockActor_Statics::NewProp_RootBlock_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABlockActor_Statics::NewProp_BlockMesh_MetaData[] = {
		{ "Category", "BlockActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BlockActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABlockActor_Statics::NewProp_BlockMesh = { "BlockMesh", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABlockActor, BlockMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABlockActor_Statics::NewProp_BlockMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABlockActor_Statics::NewProp_BlockMesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABlockActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlockActor_Statics::NewProp_Movement,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlockActor_Statics::NewProp_MaxBound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlockActor_Statics::NewProp_RunningTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlockActor_Statics::NewProp_RootBlock,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlockActor_Statics::NewProp_BlockMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABlockActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABlockActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABlockActor_Statics::ClassParams = {
		&ABlockActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ABlockActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ABlockActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABlockActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABlockActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABlockActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABlockActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABlockActor, 2345742202);
	template<> WEAPONSYSTEM_API UClass* StaticClass<ABlockActor>()
	{
		return ABlockActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABlockActor(Z_Construct_UClass_ABlockActor, &ABlockActor::StaticClass, TEXT("/Script/WeaponSystem"), TEXT("ABlockActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABlockActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
