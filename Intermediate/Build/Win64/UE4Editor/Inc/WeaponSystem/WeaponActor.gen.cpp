// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WeaponSystem/Public/Weapon/WeaponActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWeaponActor() {}
// Cross Module References
	WEAPONSYSTEM_API UClass* Z_Construct_UClass_AWeaponActor_NoRegister();
	WEAPONSYSTEM_API UClass* Z_Construct_UClass_AWeaponActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_WeaponSystem();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AWeaponActor::execNullCheck)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->NullCheck();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AWeaponActor::execAttachToPlayerMesh)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AttachToPlayerMesh();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AWeaponActor::execInteract)
	{
		P_GET_UBOOL(Z_Param_bPickingUp);
		P_GET_PROPERTY(FIntProperty,Z_Param_ThrowAwayForce);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Interact(Z_Param_bPickingUp,Z_Param_ThrowAwayForce);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AWeaponActor::execRotateActor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RotateActor();
		P_NATIVE_END;
	}
	void AWeaponActor::StaticRegisterNativesAWeaponActor()
	{
		UClass* Class = AWeaponActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AttachToPlayerMesh", &AWeaponActor::execAttachToPlayerMesh },
			{ "Interact", &AWeaponActor::execInteract },
			{ "NullCheck", &AWeaponActor::execNullCheck },
			{ "RotateActor", &AWeaponActor::execRotateActor },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AWeaponActor_AttachToPlayerMesh_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWeaponActor_AttachToPlayerMesh_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Weapon/WeaponActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeaponActor_AttachToPlayerMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWeaponActor, nullptr, "AttachToPlayerMesh", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWeaponActor_AttachToPlayerMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponActor_AttachToPlayerMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWeaponActor_AttachToPlayerMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AWeaponActor_AttachToPlayerMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWeaponActor_Interact_Statics
	{
		struct WeaponActor_eventInteract_Parms
		{
			bool bPickingUp;
			int32 ThrowAwayForce;
		};
		static void NewProp_bPickingUp_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPickingUp;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ThrowAwayForce;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AWeaponActor_Interact_Statics::NewProp_bPickingUp_SetBit(void* Obj)
	{
		((WeaponActor_eventInteract_Parms*)Obj)->bPickingUp = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AWeaponActor_Interact_Statics::NewProp_bPickingUp = { "bPickingUp", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(WeaponActor_eventInteract_Parms), &Z_Construct_UFunction_AWeaponActor_Interact_Statics::NewProp_bPickingUp_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AWeaponActor_Interact_Statics::NewProp_ThrowAwayForce = { "ThrowAwayForce", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WeaponActor_eventInteract_Parms, ThrowAwayForce), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWeaponActor_Interact_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeaponActor_Interact_Statics::NewProp_bPickingUp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeaponActor_Interact_Statics::NewProp_ThrowAwayForce,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWeaponActor_Interact_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Weapon/WeaponActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeaponActor_Interact_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWeaponActor, nullptr, "Interact", nullptr, nullptr, sizeof(WeaponActor_eventInteract_Parms), Z_Construct_UFunction_AWeaponActor_Interact_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponActor_Interact_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWeaponActor_Interact_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponActor_Interact_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWeaponActor_Interact()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AWeaponActor_Interact_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWeaponActor_NullCheck_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWeaponActor_NullCheck_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Weapon/WeaponActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeaponActor_NullCheck_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWeaponActor, nullptr, "NullCheck", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWeaponActor_NullCheck_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponActor_NullCheck_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWeaponActor_NullCheck()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AWeaponActor_NullCheck_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWeaponActor_RotateActor_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWeaponActor_RotateActor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Weapon/WeaponActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeaponActor_RotateActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWeaponActor, nullptr, "RotateActor", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWeaponActor_RotateActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponActor_RotateActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWeaponActor_RotateActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AWeaponActor_RotateActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AWeaponActor_NoRegister()
	{
		return AWeaponActor::StaticClass();
	}
	struct Z_Construct_UClass_AWeaponActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DefaultMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HoldingComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HoldingComp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHolding_MetaData[];
#endif
		static void NewProp_bHolding_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHolding;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bGravity_MetaData[];
#endif
		static void NewProp_bGravity_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bGravity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDropped_MetaData[];
#endif
		static void NewProp_bDropped_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDropped;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WeaponComp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MeshComp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshCompName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MeshCompName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SocketName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SocketName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerPawn_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerPawn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerCamera_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerCamera;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AWeaponActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_WeaponSystem,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AWeaponActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AWeaponActor_AttachToPlayerMesh, "AttachToPlayerMesh" }, // 3962745798
		{ &Z_Construct_UFunction_AWeaponActor_Interact, "Interact" }, // 1436843477
		{ &Z_Construct_UFunction_AWeaponActor_NullCheck, "NullCheck" }, // 3230006242
		{ &Z_Construct_UFunction_AWeaponActor_RotateActor, "RotateActor" }, // 753198855
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeaponActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Weapon/WeaponActor.h" },
		{ "ModuleRelativePath", "Public/Weapon/WeaponActor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeaponActor_Statics::NewProp_DefaultMesh_MetaData[] = {
		{ "Category", "WeaponActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Weapon/WeaponActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeaponActor_Statics::NewProp_DefaultMesh = { "DefaultMesh", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeaponActor, DefaultMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWeaponActor_Statics::NewProp_DefaultMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponActor_Statics::NewProp_DefaultMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeaponActor_Statics::NewProp_HoldingComp_MetaData[] = {
		{ "Category", "Holding" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Weapon/WeaponActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeaponActor_Statics::NewProp_HoldingComp = { "HoldingComp", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeaponActor, HoldingComp), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWeaponActor_Statics::NewProp_HoldingComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponActor_Statics::NewProp_HoldingComp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeaponActor_Statics::NewProp_bHolding_MetaData[] = {
		{ "Category", "Holding" },
		{ "ModuleRelativePath", "Public/Weapon/WeaponActor.h" },
	};
#endif
	void Z_Construct_UClass_AWeaponActor_Statics::NewProp_bHolding_SetBit(void* Obj)
	{
		((AWeaponActor*)Obj)->bHolding = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AWeaponActor_Statics::NewProp_bHolding = { "bHolding", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AWeaponActor), &Z_Construct_UClass_AWeaponActor_Statics::NewProp_bHolding_SetBit, METADATA_PARAMS(Z_Construct_UClass_AWeaponActor_Statics::NewProp_bHolding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponActor_Statics::NewProp_bHolding_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeaponActor_Statics::NewProp_bGravity_MetaData[] = {
		{ "Category", "WeaponActor" },
		{ "ModuleRelativePath", "Public/Weapon/WeaponActor.h" },
	};
#endif
	void Z_Construct_UClass_AWeaponActor_Statics::NewProp_bGravity_SetBit(void* Obj)
	{
		((AWeaponActor*)Obj)->bGravity = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AWeaponActor_Statics::NewProp_bGravity = { "bGravity", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AWeaponActor), &Z_Construct_UClass_AWeaponActor_Statics::NewProp_bGravity_SetBit, METADATA_PARAMS(Z_Construct_UClass_AWeaponActor_Statics::NewProp_bGravity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponActor_Statics::NewProp_bGravity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeaponActor_Statics::NewProp_bDropped_MetaData[] = {
		{ "Category", "WeaponActor" },
		{ "ModuleRelativePath", "Public/Weapon/WeaponActor.h" },
	};
#endif
	void Z_Construct_UClass_AWeaponActor_Statics::NewProp_bDropped_SetBit(void* Obj)
	{
		((AWeaponActor*)Obj)->bDropped = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AWeaponActor_Statics::NewProp_bDropped = { "bDropped", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AWeaponActor), &Z_Construct_UClass_AWeaponActor_Statics::NewProp_bDropped_SetBit, METADATA_PARAMS(Z_Construct_UClass_AWeaponActor_Statics::NewProp_bDropped_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponActor_Statics::NewProp_bDropped_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeaponActor_Statics::NewProp_WeaponComp_MetaData[] = {
		{ "Category", "WeaponActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Weapon/WeaponActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeaponActor_Statics::NewProp_WeaponComp = { "WeaponComp", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeaponActor, WeaponComp), Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWeaponActor_Statics::NewProp_WeaponComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponActor_Statics::NewProp_WeaponComp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeaponActor_Statics::NewProp_MeshComp_MetaData[] = {
		{ "Category", "WeaponActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Weapon/WeaponActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeaponActor_Statics::NewProp_MeshComp = { "MeshComp", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeaponActor, MeshComp), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWeaponActor_Statics::NewProp_MeshComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponActor_Statics::NewProp_MeshComp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeaponActor_Statics::NewProp_MeshCompName_MetaData[] = {
		{ "Category", "WeaponActor" },
		{ "ModuleRelativePath", "Public/Weapon/WeaponActor.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_AWeaponActor_Statics::NewProp_MeshCompName = { "MeshCompName", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeaponActor, MeshCompName), METADATA_PARAMS(Z_Construct_UClass_AWeaponActor_Statics::NewProp_MeshCompName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponActor_Statics::NewProp_MeshCompName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeaponActor_Statics::NewProp_SocketName_MetaData[] = {
		{ "Category", "WeaponActor" },
		{ "ModuleRelativePath", "Public/Weapon/WeaponActor.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_AWeaponActor_Statics::NewProp_SocketName = { "SocketName", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeaponActor, SocketName), METADATA_PARAMS(Z_Construct_UClass_AWeaponActor_Statics::NewProp_SocketName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponActor_Statics::NewProp_SocketName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeaponActor_Statics::NewProp_PlayerPawn_MetaData[] = {
		{ "Category", "WeaponActor" },
		{ "ModuleRelativePath", "Public/Weapon/WeaponActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeaponActor_Statics::NewProp_PlayerPawn = { "PlayerPawn", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeaponActor, PlayerPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWeaponActor_Statics::NewProp_PlayerPawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponActor_Statics::NewProp_PlayerPawn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeaponActor_Statics::NewProp_PlayerCamera_MetaData[] = {
		{ "Category", "WeaponActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Weapon/WeaponActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeaponActor_Statics::NewProp_PlayerCamera = { "PlayerCamera", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeaponActor, PlayerCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWeaponActor_Statics::NewProp_PlayerCamera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponActor_Statics::NewProp_PlayerCamera_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AWeaponActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponActor_Statics::NewProp_DefaultMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponActor_Statics::NewProp_HoldingComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponActor_Statics::NewProp_bHolding,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponActor_Statics::NewProp_bGravity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponActor_Statics::NewProp_bDropped,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponActor_Statics::NewProp_WeaponComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponActor_Statics::NewProp_MeshComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponActor_Statics::NewProp_MeshCompName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponActor_Statics::NewProp_SocketName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponActor_Statics::NewProp_PlayerPawn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponActor_Statics::NewProp_PlayerCamera,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AWeaponActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWeaponActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AWeaponActor_Statics::ClassParams = {
		&AWeaponActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AWeaponActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AWeaponActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AWeaponActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AWeaponActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AWeaponActor, 19285365);
	template<> WEAPONSYSTEM_API UClass* StaticClass<AWeaponActor>()
	{
		return AWeaponActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AWeaponActor(Z_Construct_UClass_AWeaponActor, &AWeaponActor::StaticClass, TEXT("/Script/WeaponSystem"), TEXT("AWeaponActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AWeaponActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
