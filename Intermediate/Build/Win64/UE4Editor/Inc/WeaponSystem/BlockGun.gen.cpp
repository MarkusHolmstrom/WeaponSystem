// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WeaponSystem/Public/Weapon/BlockGun.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlockGun() {}
// Cross Module References
	WEAPONSYSTEM_API UClass* Z_Construct_UClass_UBlockGun_NoRegister();
	WEAPONSYSTEM_API UClass* Z_Construct_UClass_UBlockGun();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_WeaponSystem();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UBlockGun::execAddNewBlockDirection)
	{
		P_GET_STRUCT(FVector,Z_Param_AddDir);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->AddNewBlockDirection(Z_Param_AddDir);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlockGun::execGenerateRandomNewDir)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GenerateRandomNewDir();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlockGun::execGetSpawnTransform)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTransform*)Z_Param__Result=P_THIS->GetSpawnTransform();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlockGun::execStopFire)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopFire();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlockGun::execOnFire)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnFire();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlockGun::execToggleCanFire)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ToggleCanFire();
		P_NATIVE_END;
	}
	void UBlockGun::StaticRegisterNativesUBlockGun()
	{
		UClass* Class = UBlockGun::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddNewBlockDirection", &UBlockGun::execAddNewBlockDirection },
			{ "GenerateRandomNewDir", &UBlockGun::execGenerateRandomNewDir },
			{ "GetSpawnTransform", &UBlockGun::execGetSpawnTransform },
			{ "OnFire", &UBlockGun::execOnFire },
			{ "StopFire", &UBlockGun::execStopFire },
			{ "ToggleCanFire", &UBlockGun::execToggleCanFire },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBlockGun_AddNewBlockDirection_Statics
	{
		struct BlockGun_eventAddNewBlockDirection_Parms
		{
			FVector AddDir;
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AddDir;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlockGun_AddNewBlockDirection_Statics::NewProp_AddDir = { "AddDir", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlockGun_eventAddNewBlockDirection_Parms, AddDir), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlockGun_AddNewBlockDirection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlockGun_eventAddNewBlockDirection_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlockGun_AddNewBlockDirection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlockGun_AddNewBlockDirection_Statics::NewProp_AddDir,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlockGun_AddNewBlockDirection_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlockGun_AddNewBlockDirection_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Weapon/BlockGun.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlockGun_AddNewBlockDirection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlockGun, nullptr, "AddNewBlockDirection", nullptr, nullptr, sizeof(BlockGun_eventAddNewBlockDirection_Parms), Z_Construct_UFunction_UBlockGun_AddNewBlockDirection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlockGun_AddNewBlockDirection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlockGun_AddNewBlockDirection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlockGun_AddNewBlockDirection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlockGun_AddNewBlockDirection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlockGun_AddNewBlockDirection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlockGun_GenerateRandomNewDir_Statics
	{
		struct BlockGun_eventGenerateRandomNewDir_Parms
		{
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlockGun_GenerateRandomNewDir_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlockGun_eventGenerateRandomNewDir_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlockGun_GenerateRandomNewDir_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlockGun_GenerateRandomNewDir_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlockGun_GenerateRandomNewDir_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// end interface functions\n" },
		{ "ModuleRelativePath", "Public/Weapon/BlockGun.h" },
		{ "ToolTip", "end interface functions" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlockGun_GenerateRandomNewDir_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlockGun, nullptr, "GenerateRandomNewDir", nullptr, nullptr, sizeof(BlockGun_eventGenerateRandomNewDir_Parms), Z_Construct_UFunction_UBlockGun_GenerateRandomNewDir_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlockGun_GenerateRandomNewDir_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlockGun_GenerateRandomNewDir_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlockGun_GenerateRandomNewDir_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlockGun_GenerateRandomNewDir()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlockGun_GenerateRandomNewDir_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlockGun_GetSpawnTransform_Statics
	{
		struct BlockGun_eventGetSpawnTransform_Parms
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlockGun_GetSpawnTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlockGun_eventGetSpawnTransform_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlockGun_GetSpawnTransform_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlockGun_GetSpawnTransform_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlockGun_GetSpawnTransform_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Weapon/BlockGun.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlockGun_GetSpawnTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlockGun, nullptr, "GetSpawnTransform", nullptr, nullptr, sizeof(BlockGun_eventGetSpawnTransform_Parms), Z_Construct_UFunction_UBlockGun_GetSpawnTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlockGun_GetSpawnTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlockGun_GetSpawnTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlockGun_GetSpawnTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlockGun_GetSpawnTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlockGun_GetSpawnTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlockGun_OnFire_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlockGun_OnFire_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Weapon/BlockGun.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlockGun_OnFire_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlockGun, nullptr, "OnFire", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlockGun_OnFire_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlockGun_OnFire_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlockGun_OnFire()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlockGun_OnFire_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlockGun_StopFire_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlockGun_StopFire_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Weapon/BlockGun.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlockGun_StopFire_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlockGun, nullptr, "StopFire", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlockGun_StopFire_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlockGun_StopFire_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlockGun_StopFire()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlockGun_StopFire_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlockGun_ToggleCanFire_Statics
	{
		struct BlockGun_eventToggleCanFire_Parms
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
	void Z_Construct_UFunction_UBlockGun_ToggleCanFire_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BlockGun_eventToggleCanFire_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBlockGun_ToggleCanFire_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BlockGun_eventToggleCanFire_Parms), &Z_Construct_UFunction_UBlockGun_ToggleCanFire_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlockGun_ToggleCanFire_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlockGun_ToggleCanFire_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlockGun_ToggleCanFire_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// interface functions\n" },
		{ "ModuleRelativePath", "Public/Weapon/BlockGun.h" },
		{ "ToolTip", "interface functions" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlockGun_ToggleCanFire_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlockGun, nullptr, "ToggleCanFire", nullptr, nullptr, sizeof(BlockGun_eventToggleCanFire_Parms), Z_Construct_UFunction_UBlockGun_ToggleCanFire_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlockGun_ToggleCanFire_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlockGun_ToggleCanFire_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlockGun_ToggleCanFire_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlockGun_ToggleCanFire()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlockGun_ToggleCanFire_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UBlockGun_NoRegister()
	{
		return UBlockGun::StaticClass();
	}
	struct Z_Construct_UClass_UBlockGun_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCanFire_MetaData[];
#endif
		static void NewProp_bCanFire_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCanFire;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlockDirection_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BlockDirection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Block_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_Block;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_SpawnDistance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBlockGun_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_WeaponSystem,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBlockGun_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBlockGun_AddNewBlockDirection, "AddNewBlockDirection" }, // 172077000
		{ &Z_Construct_UFunction_UBlockGun_GenerateRandomNewDir, "GenerateRandomNewDir" }, // 332002040
		{ &Z_Construct_UFunction_UBlockGun_GetSpawnTransform, "GetSpawnTransform" }, // 129707717
		{ &Z_Construct_UFunction_UBlockGun_OnFire, "OnFire" }, // 1605788277
		{ &Z_Construct_UFunction_UBlockGun_StopFire, "StopFire" }, // 1409939121
		{ &Z_Construct_UFunction_UBlockGun_ToggleCanFire, "ToggleCanFire" }, // 1590853411
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlockGun_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Weapon/BlockGun.h" },
		{ "ModuleRelativePath", "Public/Weapon/BlockGun.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlockGun_Statics::NewProp_PlayerPawn_MetaData[] = {
		{ "Category", "BlockGun" },
		{ "Comment", "//interfface variables\n" },
		{ "ModuleRelativePath", "Public/Weapon/BlockGun.h" },
		{ "ToolTip", "interfface variables" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBlockGun_Statics::NewProp_PlayerPawn = { "PlayerPawn", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBlockGun, PlayerPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBlockGun_Statics::NewProp_PlayerPawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlockGun_Statics::NewProp_PlayerPawn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlockGun_Statics::NewProp_PlayerCamera_MetaData[] = {
		{ "Category", "BlockGun" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Weapon/BlockGun.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBlockGun_Statics::NewProp_PlayerCamera = { "PlayerCamera", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBlockGun, PlayerCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBlockGun_Statics::NewProp_PlayerCamera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlockGun_Statics::NewProp_PlayerCamera_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlockGun_Statics::NewProp_bCanFire_MetaData[] = {
		{ "Category", "BlockGun" },
		{ "ModuleRelativePath", "Public/Weapon/BlockGun.h" },
	};
#endif
	void Z_Construct_UClass_UBlockGun_Statics::NewProp_bCanFire_SetBit(void* Obj)
	{
		((UBlockGun*)Obj)->bCanFire = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBlockGun_Statics::NewProp_bCanFire = { "bCanFire", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UBlockGun), &Z_Construct_UClass_UBlockGun_Statics::NewProp_bCanFire_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBlockGun_Statics::NewProp_bCanFire_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlockGun_Statics::NewProp_bCanFire_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlockGun_Statics::NewProp_BlockDirection_MetaData[] = {
		{ "Category", "BlockGun" },
		{ "Comment", "// Gets active when being carried\n/// interface variables end\n" },
		{ "ModuleRelativePath", "Public/Weapon/BlockGun.h" },
		{ "ToolTip", "Gets active when being carried\ninterface variables end" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBlockGun_Statics::NewProp_BlockDirection = { "BlockDirection", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBlockGun, BlockDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UBlockGun_Statics::NewProp_BlockDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlockGun_Statics::NewProp_BlockDirection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlockGun_Statics::NewProp_Block_MetaData[] = {
		{ "Category", "BlockGun" },
		{ "ModuleRelativePath", "Public/Weapon/BlockGun.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UBlockGun_Statics::NewProp_Block = { "Block", nullptr, (EPropertyFlags)0x0014000000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBlockGun, Block), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UBlockGun_Statics::NewProp_Block_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlockGun_Statics::NewProp_Block_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlockGun_Statics::NewProp_SpawnDistance_MetaData[] = {
		{ "Category", "BlockGun" },
		{ "ModuleRelativePath", "Public/Weapon/BlockGun.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UBlockGun_Statics::NewProp_SpawnDistance = { "SpawnDistance", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBlockGun, SpawnDistance), METADATA_PARAMS(Z_Construct_UClass_UBlockGun_Statics::NewProp_SpawnDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlockGun_Statics::NewProp_SpawnDistance_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBlockGun_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlockGun_Statics::NewProp_PlayerPawn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlockGun_Statics::NewProp_PlayerCamera,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlockGun_Statics::NewProp_bCanFire,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlockGun_Statics::NewProp_BlockDirection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlockGun_Statics::NewProp_Block,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlockGun_Statics::NewProp_SpawnDistance,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBlockGun_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBlockGun>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBlockGun_Statics::ClassParams = {
		&UBlockGun::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UBlockGun_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UBlockGun_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UBlockGun_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBlockGun_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBlockGun()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBlockGun_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBlockGun, 3975375292);
	template<> WEAPONSYSTEM_API UClass* StaticClass<UBlockGun>()
	{
		return UBlockGun::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBlockGun(Z_Construct_UClass_UBlockGun, &UBlockGun::StaticClass, TEXT("/Script/WeaponSystem"), TEXT("UBlockGun"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBlockGun);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
