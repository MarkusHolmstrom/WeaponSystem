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
	WEAPONSYSTEM_API UEnum* Z_Construct_UEnum_WeaponSystem_EKindOfWeapon();
	UPackage* Z_Construct_UPackage__Script_WeaponSystem();
	WEAPONSYSTEM_API UClass* Z_Construct_UClass_AWeaponActor_NoRegister();
	WEAPONSYSTEM_API UClass* Z_Construct_UClass_AWeaponActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	WEAPONSYSTEM_API UClass* Z_Construct_UClass_UHUDWidget_NoRegister();
	WEAPONSYSTEM_API UClass* Z_Construct_UClass_UFlamethrower_NoRegister();
	WEAPONSYSTEM_API UClass* Z_Construct_UClass_UBlockGun_NoRegister();
	WEAPONSYSTEM_API UClass* Z_Construct_UClass_AWeaponSystemCharacter_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	WEAPONSYSTEM_API UClass* Z_Construct_UClass_UWeaponActorComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	static UEnum* EKindOfWeapon_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_WeaponSystem_EKindOfWeapon, Z_Construct_UPackage__Script_WeaponSystem(), TEXT("EKindOfWeapon"));
		}
		return Singleton;
	}
	template<> WEAPONSYSTEM_API UEnum* StaticEnum<EKindOfWeapon>()
	{
		return EKindOfWeapon_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EKindOfWeapon(EKindOfWeapon_StaticEnum, TEXT("/Script/WeaponSystem"), TEXT("EKindOfWeapon"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_WeaponSystem_EKindOfWeapon_Hash() { return 3660652332U; }
	UEnum* Z_Construct_UEnum_WeaponSystem_EKindOfWeapon()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_WeaponSystem();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EKindOfWeapon"), 0, Get_Z_Construct_UEnum_WeaponSystem_EKindOfWeapon_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "None", (int64)None },
				{ "Flamethrower", (int64)Flamethrower },
				{ "BlockGun", (int64)BlockGun },
				{ "Bow", (int64)Bow },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlockGun.DisplayName", "BlockGun" },
				{ "BlockGun.Name", "BlockGun" },
				{ "BlueprintType", "true" },
				{ "Bow.DisplayName", "Bow" },
				{ "Bow.Name", "Bow" },
				{ "Flamethrower.DisplayName", "Flamethrower" },
				{ "Flamethrower.Name", "Flamethrower" },
				{ "ModuleRelativePath", "Public/Weapon/WeaponActor.h" },
				{ "None.DisplayName", "None" },
				{ "None.Name", "None" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_WeaponSystem,
				nullptr,
				"EKindOfWeapon",
				"EKindOfWeapon",
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
	DEFINE_FUNCTION(AWeaponActor::execGetAmmoRemaining)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetAmmoRemaining();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AWeaponActor::execUpdateDuringReloading)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_TimeLeft);
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
		P_GET_PROPERTY(FFloatProperty,Z_Param_CurLoad);
		P_GET_PROPERTY(FFloatProperty,Z_Param_TotAmmoLeft);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateDuringReloading(Z_Param_TimeLeft,Z_Param_DeltaTime,Z_Param_CurLoad,Z_Param_TotAmmoLeft);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AWeaponActor::execReloading)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Reloading(Z_Param_DeltaTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AWeaponActor::execStopFireWeapon)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Damage);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopFireWeapon(Z_Param_Damage);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AWeaponActor::execFireWeapon)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Damage);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FireWeapon(Z_Param_Damage);
		P_NATIVE_END;
	}
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
	DEFINE_FUNCTION(AWeaponActor::execGetWeaponName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetWeaponName();
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
	DEFINE_FUNCTION(AWeaponActor::execGetHUDWidget)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UHUDWidget**)Z_Param__Result=P_THIS->GetHUDWidget();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AWeaponActor::execGetReloadingTime)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_ReloadTime);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Left);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Capacity);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetReloadingTime(Z_Param_ReloadTime,Z_Param_Left,Z_Param_Capacity);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AWeaponActor::execUpdateHUDAmmo)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Left);
		P_GET_PROPERTY(FFloatProperty,Z_Param_TotalLeft);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateHUDAmmo(Z_Param_Left,Z_Param_TotalLeft);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AWeaponActor::execUpdateAmmoLeft)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateAmmoLeft();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AWeaponActor::execSetupWeaponStats)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetupWeaponStats();
		P_NATIVE_END;
	}
	void AWeaponActor::StaticRegisterNativesAWeaponActor()
	{
		UClass* Class = AWeaponActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AttachToPlayerMesh", &AWeaponActor::execAttachToPlayerMesh },
			{ "FireWeapon", &AWeaponActor::execFireWeapon },
			{ "GetAmmoRemaining", &AWeaponActor::execGetAmmoRemaining },
			{ "GetHUDWidget", &AWeaponActor::execGetHUDWidget },
			{ "GetReloadingTime", &AWeaponActor::execGetReloadingTime },
			{ "GetWeaponName", &AWeaponActor::execGetWeaponName },
			{ "Interact", &AWeaponActor::execInteract },
			{ "NullCheck", &AWeaponActor::execNullCheck },
			{ "Reloading", &AWeaponActor::execReloading },
			{ "RotateActor", &AWeaponActor::execRotateActor },
			{ "SetupWeaponStats", &AWeaponActor::execSetupWeaponStats },
			{ "StopFireWeapon", &AWeaponActor::execStopFireWeapon },
			{ "UpdateAmmoLeft", &AWeaponActor::execUpdateAmmoLeft },
			{ "UpdateDuringReloading", &AWeaponActor::execUpdateDuringReloading },
			{ "UpdateHUDAmmo", &AWeaponActor::execUpdateHUDAmmo },
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
	struct Z_Construct_UFunction_AWeaponActor_FireWeapon_Statics
	{
		struct WeaponActor_eventFireWeapon_Parms
		{
			float Damage;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Damage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AWeaponActor_FireWeapon_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WeaponActor_eventFireWeapon_Parms, Damage), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWeaponActor_FireWeapon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeaponActor_FireWeapon_Statics::NewProp_Damage,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWeaponActor_FireWeapon_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Weapon/WeaponActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeaponActor_FireWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWeaponActor, nullptr, "FireWeapon", nullptr, nullptr, sizeof(WeaponActor_eventFireWeapon_Parms), Z_Construct_UFunction_AWeaponActor_FireWeapon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponActor_FireWeapon_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWeaponActor_FireWeapon_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponActor_FireWeapon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWeaponActor_FireWeapon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AWeaponActor_FireWeapon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWeaponActor_GetAmmoRemaining_Statics
	{
		struct WeaponActor_eventGetAmmoRemaining_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AWeaponActor_GetAmmoRemaining_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WeaponActor_eventGetAmmoRemaining_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWeaponActor_GetAmmoRemaining_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeaponActor_GetAmmoRemaining_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWeaponActor_GetAmmoRemaining_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Weapon/WeaponActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeaponActor_GetAmmoRemaining_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWeaponActor, nullptr, "GetAmmoRemaining", nullptr, nullptr, sizeof(WeaponActor_eventGetAmmoRemaining_Parms), Z_Construct_UFunction_AWeaponActor_GetAmmoRemaining_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponActor_GetAmmoRemaining_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWeaponActor_GetAmmoRemaining_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponActor_GetAmmoRemaining_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWeaponActor_GetAmmoRemaining()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AWeaponActor_GetAmmoRemaining_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWeaponActor_GetHUDWidget_Statics
	{
		struct WeaponActor_eventGetHUDWidget_Parms
		{
			UHUDWidget* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWeaponActor_GetHUDWidget_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWeaponActor_GetHUDWidget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WeaponActor_eventGetHUDWidget_Parms, ReturnValue), Z_Construct_UClass_UHUDWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AWeaponActor_GetHUDWidget_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponActor_GetHUDWidget_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWeaponActor_GetHUDWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeaponActor_GetHUDWidget_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWeaponActor_GetHUDWidget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Weapon/WeaponActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeaponActor_GetHUDWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWeaponActor, nullptr, "GetHUDWidget", nullptr, nullptr, sizeof(WeaponActor_eventGetHUDWidget_Parms), Z_Construct_UFunction_AWeaponActor_GetHUDWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponActor_GetHUDWidget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWeaponActor_GetHUDWidget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponActor_GetHUDWidget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWeaponActor_GetHUDWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AWeaponActor_GetHUDWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWeaponActor_GetReloadingTime_Statics
	{
		struct WeaponActor_eventGetReloadingTime_Parms
		{
			float ReloadTime;
			float Left;
			float Capacity;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReloadTime;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Left;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Capacity;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AWeaponActor_GetReloadingTime_Statics::NewProp_ReloadTime = { "ReloadTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WeaponActor_eventGetReloadingTime_Parms, ReloadTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AWeaponActor_GetReloadingTime_Statics::NewProp_Left = { "Left", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WeaponActor_eventGetReloadingTime_Parms, Left), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AWeaponActor_GetReloadingTime_Statics::NewProp_Capacity = { "Capacity", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WeaponActor_eventGetReloadingTime_Parms, Capacity), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AWeaponActor_GetReloadingTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WeaponActor_eventGetReloadingTime_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWeaponActor_GetReloadingTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeaponActor_GetReloadingTime_Statics::NewProp_ReloadTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeaponActor_GetReloadingTime_Statics::NewProp_Left,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeaponActor_GetReloadingTime_Statics::NewProp_Capacity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeaponActor_GetReloadingTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWeaponActor_GetReloadingTime_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Weapon/WeaponActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeaponActor_GetReloadingTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWeaponActor, nullptr, "GetReloadingTime", nullptr, nullptr, sizeof(WeaponActor_eventGetReloadingTime_Parms), Z_Construct_UFunction_AWeaponActor_GetReloadingTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponActor_GetReloadingTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWeaponActor_GetReloadingTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponActor_GetReloadingTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWeaponActor_GetReloadingTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AWeaponActor_GetReloadingTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWeaponActor_GetWeaponName_Statics
	{
		struct WeaponActor_eventGetWeaponName_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AWeaponActor_GetWeaponName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WeaponActor_eventGetWeaponName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWeaponActor_GetWeaponName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeaponActor_GetWeaponName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWeaponActor_GetWeaponName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Weapon/WeaponActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeaponActor_GetWeaponName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWeaponActor, nullptr, "GetWeaponName", nullptr, nullptr, sizeof(WeaponActor_eventGetWeaponName_Parms), Z_Construct_UFunction_AWeaponActor_GetWeaponName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponActor_GetWeaponName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWeaponActor_GetWeaponName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponActor_GetWeaponName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWeaponActor_GetWeaponName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AWeaponActor_GetWeaponName_Statics::FuncParams);
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
	struct Z_Construct_UFunction_AWeaponActor_Reloading_Statics
	{
		struct WeaponActor_eventReloading_Parms
		{
			float DeltaTime;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AWeaponActor_Reloading_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WeaponActor_eventReloading_Parms, DeltaTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWeaponActor_Reloading_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeaponActor_Reloading_Statics::NewProp_DeltaTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWeaponActor_Reloading_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Weapon/WeaponActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeaponActor_Reloading_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWeaponActor, nullptr, "Reloading", nullptr, nullptr, sizeof(WeaponActor_eventReloading_Parms), Z_Construct_UFunction_AWeaponActor_Reloading_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponActor_Reloading_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWeaponActor_Reloading_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponActor_Reloading_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWeaponActor_Reloading()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AWeaponActor_Reloading_Statics::FuncParams);
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
	struct Z_Construct_UFunction_AWeaponActor_SetupWeaponStats_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWeaponActor_SetupWeaponStats_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Weapon/WeaponActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeaponActor_SetupWeaponStats_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWeaponActor, nullptr, "SetupWeaponStats", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWeaponActor_SetupWeaponStats_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponActor_SetupWeaponStats_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWeaponActor_SetupWeaponStats()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AWeaponActor_SetupWeaponStats_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWeaponActor_StopFireWeapon_Statics
	{
		struct WeaponActor_eventStopFireWeapon_Parms
		{
			float Damage;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Damage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AWeaponActor_StopFireWeapon_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WeaponActor_eventStopFireWeapon_Parms, Damage), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWeaponActor_StopFireWeapon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeaponActor_StopFireWeapon_Statics::NewProp_Damage,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWeaponActor_StopFireWeapon_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Weapon/WeaponActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeaponActor_StopFireWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWeaponActor, nullptr, "StopFireWeapon", nullptr, nullptr, sizeof(WeaponActor_eventStopFireWeapon_Parms), Z_Construct_UFunction_AWeaponActor_StopFireWeapon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponActor_StopFireWeapon_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWeaponActor_StopFireWeapon_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponActor_StopFireWeapon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWeaponActor_StopFireWeapon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AWeaponActor_StopFireWeapon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWeaponActor_UpdateAmmoLeft_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWeaponActor_UpdateAmmoLeft_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Weapon/WeaponActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeaponActor_UpdateAmmoLeft_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWeaponActor, nullptr, "UpdateAmmoLeft", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWeaponActor_UpdateAmmoLeft_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponActor_UpdateAmmoLeft_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWeaponActor_UpdateAmmoLeft()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AWeaponActor_UpdateAmmoLeft_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWeaponActor_UpdateDuringReloading_Statics
	{
		struct WeaponActor_eventUpdateDuringReloading_Parms
		{
			float TimeLeft;
			float DeltaTime;
			float CurLoad;
			float TotAmmoLeft;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeLeft;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CurLoad;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TotAmmoLeft;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AWeaponActor_UpdateDuringReloading_Statics::NewProp_TimeLeft = { "TimeLeft", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WeaponActor_eventUpdateDuringReloading_Parms, TimeLeft), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AWeaponActor_UpdateDuringReloading_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WeaponActor_eventUpdateDuringReloading_Parms, DeltaTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AWeaponActor_UpdateDuringReloading_Statics::NewProp_CurLoad = { "CurLoad", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WeaponActor_eventUpdateDuringReloading_Parms, CurLoad), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AWeaponActor_UpdateDuringReloading_Statics::NewProp_TotAmmoLeft = { "TotAmmoLeft", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WeaponActor_eventUpdateDuringReloading_Parms, TotAmmoLeft), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWeaponActor_UpdateDuringReloading_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeaponActor_UpdateDuringReloading_Statics::NewProp_TimeLeft,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeaponActor_UpdateDuringReloading_Statics::NewProp_DeltaTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeaponActor_UpdateDuringReloading_Statics::NewProp_CurLoad,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeaponActor_UpdateDuringReloading_Statics::NewProp_TotAmmoLeft,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWeaponActor_UpdateDuringReloading_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Weapon/WeaponActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeaponActor_UpdateDuringReloading_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWeaponActor, nullptr, "UpdateDuringReloading", nullptr, nullptr, sizeof(WeaponActor_eventUpdateDuringReloading_Parms), Z_Construct_UFunction_AWeaponActor_UpdateDuringReloading_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponActor_UpdateDuringReloading_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWeaponActor_UpdateDuringReloading_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponActor_UpdateDuringReloading_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWeaponActor_UpdateDuringReloading()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AWeaponActor_UpdateDuringReloading_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWeaponActor_UpdateHUDAmmo_Statics
	{
		struct WeaponActor_eventUpdateHUDAmmo_Parms
		{
			float Left;
			float TotalLeft;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Left;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TotalLeft;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AWeaponActor_UpdateHUDAmmo_Statics::NewProp_Left = { "Left", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WeaponActor_eventUpdateHUDAmmo_Parms, Left), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AWeaponActor_UpdateHUDAmmo_Statics::NewProp_TotalLeft = { "TotalLeft", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WeaponActor_eventUpdateHUDAmmo_Parms, TotalLeft), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWeaponActor_UpdateHUDAmmo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeaponActor_UpdateHUDAmmo_Statics::NewProp_Left,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeaponActor_UpdateHUDAmmo_Statics::NewProp_TotalLeft,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWeaponActor_UpdateHUDAmmo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Weapon/WeaponActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeaponActor_UpdateHUDAmmo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWeaponActor, nullptr, "UpdateHUDAmmo", nullptr, nullptr, sizeof(WeaponActor_eventUpdateHUDAmmo_Parms), Z_Construct_UFunction_AWeaponActor_UpdateHUDAmmo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponActor_UpdateHUDAmmo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWeaponActor_UpdateHUDAmmo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponActor_UpdateHUDAmmo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWeaponActor_UpdateHUDAmmo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AWeaponActor_UpdateHUDAmmo_Statics::FuncParams);
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FlamethrowerInstance_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FlamethrowerInstance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlockGunInstance_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BlockGunInstance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WSC_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WSC;
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WAC_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WAC;
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
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KindOfWeapon_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_KindOfWeapon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AmmoLeft_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AmmoLeft;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AmmoCapacity_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_AmmoCapacity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FireRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FireRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsReloading_MetaData[];
#endif
		static void NewProp_bIsReloading_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsReloading;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReloadingTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReloadingTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxReloadingTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxReloadingTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Timer_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Timer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MagCapacity_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_MagCapacity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RemaingAmmo_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RemaingAmmo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AmmoToLoad_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_AmmoToLoad;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetAmmo_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_TargetAmmo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetTotalAmmo_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_TargetTotalAmmo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsFiring_MetaData[];
#endif
		static void NewProp_bIsFiring_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsFiring;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RelRot_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RelRot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RelLoc_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RelLoc;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HUDWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HUDWidget;
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
		{ &Z_Construct_UFunction_AWeaponActor_FireWeapon, "FireWeapon" }, // 1458862708
		{ &Z_Construct_UFunction_AWeaponActor_GetAmmoRemaining, "GetAmmoRemaining" }, // 4252171540
		{ &Z_Construct_UFunction_AWeaponActor_GetHUDWidget, "GetHUDWidget" }, // 1611022836
		{ &Z_Construct_UFunction_AWeaponActor_GetReloadingTime, "GetReloadingTime" }, // 395229201
		{ &Z_Construct_UFunction_AWeaponActor_GetWeaponName, "GetWeaponName" }, // 4186876530
		{ &Z_Construct_UFunction_AWeaponActor_Interact, "Interact" }, // 1436843477
		{ &Z_Construct_UFunction_AWeaponActor_NullCheck, "NullCheck" }, // 3230006242
		{ &Z_Construct_UFunction_AWeaponActor_Reloading, "Reloading" }, // 3968771345
		{ &Z_Construct_UFunction_AWeaponActor_RotateActor, "RotateActor" }, // 753198855
		{ &Z_Construct_UFunction_AWeaponActor_SetupWeaponStats, "SetupWeaponStats" }, // 2052187330
		{ &Z_Construct_UFunction_AWeaponActor_StopFireWeapon, "StopFireWeapon" }, // 2071667847
		{ &Z_Construct_UFunction_AWeaponActor_UpdateAmmoLeft, "UpdateAmmoLeft" }, // 2929656191
		{ &Z_Construct_UFunction_AWeaponActor_UpdateDuringReloading, "UpdateDuringReloading" }, // 792916478
		{ &Z_Construct_UFunction_AWeaponActor_UpdateHUDAmmo, "UpdateHUDAmmo" }, // 2526590349
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeaponActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Weapon/WeaponActor.h" },
		{ "ModuleRelativePath", "Public/Weapon/WeaponActor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeaponActor_Statics::NewProp_FlamethrowerInstance_MetaData[] = {
		{ "Category", "Enums" },
		{ "Comment", "// Weapon classes:\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Weapon/WeaponActor.h" },
		{ "ToolTip", "Weapon classes:" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeaponActor_Statics::NewProp_FlamethrowerInstance = { "FlamethrowerInstance", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeaponActor, FlamethrowerInstance), Z_Construct_UClass_UFlamethrower_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWeaponActor_Statics::NewProp_FlamethrowerInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponActor_Statics::NewProp_FlamethrowerInstance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeaponActor_Statics::NewProp_BlockGunInstance_MetaData[] = {
		{ "Category", "Enums" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Weapon/WeaponActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeaponActor_Statics::NewProp_BlockGunInstance = { "BlockGunInstance", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeaponActor, BlockGunInstance), Z_Construct_UClass_UBlockGun_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWeaponActor_Statics::NewProp_BlockGunInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponActor_Statics::NewProp_BlockGunInstance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeaponActor_Statics::NewProp_WSC_MetaData[] = {
		{ "Category", "WeaponActor" },
		{ "Comment", "//\n" },
		{ "ModuleRelativePath", "Public/Weapon/WeaponActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeaponActor_Statics::NewProp_WSC = { "WSC", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeaponActor, WSC), Z_Construct_UClass_AWeaponSystemCharacter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWeaponActor_Statics::NewProp_WSC_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponActor_Statics::NewProp_WSC_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeaponActor_Statics::NewProp_DefaultMesh_MetaData[] = {
		{ "Category", "WeaponActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Weapon/WeaponActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeaponActor_Statics::NewProp_DefaultMesh = { "DefaultMesh", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeaponActor, DefaultMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWeaponActor_Statics::NewProp_DefaultMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponActor_Statics::NewProp_DefaultMesh_MetaData)) };
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeaponActor_Statics::NewProp_WAC_MetaData[] = {
		{ "Category", "WeaponActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Weapon/WeaponActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeaponActor_Statics::NewProp_WAC = { "WAC", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeaponActor, WAC), Z_Construct_UClass_UWeaponActorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWeaponActor_Statics::NewProp_WAC_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponActor_Statics::NewProp_WAC_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeaponActor_Statics::NewProp_MeshComp_MetaData[] = {
		{ "Category", "WeaponActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Weapon/WeaponActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeaponActor_Statics::NewProp_MeshComp = { "MeshComp", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeaponActor, MeshComp), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWeaponActor_Statics::NewProp_MeshComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponActor_Statics::NewProp_MeshComp_MetaData)) };
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
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeaponActor_Statics::NewProp_KindOfWeapon_MetaData[] = {
		{ "Category", "WeaponInformation" },
		{ "Comment", "// Set in blueprint\n" },
		{ "ModuleRelativePath", "Public/Weapon/WeaponActor.h" },
		{ "ToolTip", "Set in blueprint" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AWeaponActor_Statics::NewProp_KindOfWeapon = { "KindOfWeapon", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeaponActor, KindOfWeapon), Z_Construct_UEnum_WeaponSystem_EKindOfWeapon, METADATA_PARAMS(Z_Construct_UClass_AWeaponActor_Statics::NewProp_KindOfWeapon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponActor_Statics::NewProp_KindOfWeapon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeaponActor_Statics::NewProp_AmmoLeft_MetaData[] = {
		{ "Category", "WeaponInformation" },
		{ "ModuleRelativePath", "Public/Weapon/WeaponActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWeaponActor_Statics::NewProp_AmmoLeft = { "AmmoLeft", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeaponActor, AmmoLeft), METADATA_PARAMS(Z_Construct_UClass_AWeaponActor_Statics::NewProp_AmmoLeft_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponActor_Statics::NewProp_AmmoLeft_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeaponActor_Statics::NewProp_AmmoCapacity_MetaData[] = {
		{ "Category", "WeaponInformation" },
		{ "ModuleRelativePath", "Public/Weapon/WeaponActor.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AWeaponActor_Statics::NewProp_AmmoCapacity = { "AmmoCapacity", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeaponActor, AmmoCapacity), METADATA_PARAMS(Z_Construct_UClass_AWeaponActor_Statics::NewProp_AmmoCapacity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponActor_Statics::NewProp_AmmoCapacity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeaponActor_Statics::NewProp_FireRate_MetaData[] = {
		{ "Category", "WeaponInformation" },
		{ "ModuleRelativePath", "Public/Weapon/WeaponActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWeaponActor_Statics::NewProp_FireRate = { "FireRate", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeaponActor, FireRate), METADATA_PARAMS(Z_Construct_UClass_AWeaponActor_Statics::NewProp_FireRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponActor_Statics::NewProp_FireRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeaponActor_Statics::NewProp_bIsReloading_MetaData[] = {
		{ "Category", "WeaponInformation" },
		{ "ModuleRelativePath", "Public/Weapon/WeaponActor.h" },
	};
#endif
	void Z_Construct_UClass_AWeaponActor_Statics::NewProp_bIsReloading_SetBit(void* Obj)
	{
		((AWeaponActor*)Obj)->bIsReloading = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AWeaponActor_Statics::NewProp_bIsReloading = { "bIsReloading", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AWeaponActor), &Z_Construct_UClass_AWeaponActor_Statics::NewProp_bIsReloading_SetBit, METADATA_PARAMS(Z_Construct_UClass_AWeaponActor_Statics::NewProp_bIsReloading_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponActor_Statics::NewProp_bIsReloading_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeaponActor_Statics::NewProp_ReloadingTime_MetaData[] = {
		{ "Category", "WeaponInformation" },
		{ "ModuleRelativePath", "Public/Weapon/WeaponActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWeaponActor_Statics::NewProp_ReloadingTime = { "ReloadingTime", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeaponActor, ReloadingTime), METADATA_PARAMS(Z_Construct_UClass_AWeaponActor_Statics::NewProp_ReloadingTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponActor_Statics::NewProp_ReloadingTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeaponActor_Statics::NewProp_MaxReloadingTime_MetaData[] = {
		{ "Category", "WeaponInformation" },
		{ "ModuleRelativePath", "Public/Weapon/WeaponActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWeaponActor_Statics::NewProp_MaxReloadingTime = { "MaxReloadingTime", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeaponActor, MaxReloadingTime), METADATA_PARAMS(Z_Construct_UClass_AWeaponActor_Statics::NewProp_MaxReloadingTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponActor_Statics::NewProp_MaxReloadingTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeaponActor_Statics::NewProp_Timer_MetaData[] = {
		{ "Category", "WeaponInformation" },
		{ "ModuleRelativePath", "Public/Weapon/WeaponActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWeaponActor_Statics::NewProp_Timer = { "Timer", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeaponActor, Timer), METADATA_PARAMS(Z_Construct_UClass_AWeaponActor_Statics::NewProp_Timer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponActor_Statics::NewProp_Timer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeaponActor_Statics::NewProp_MagCapacity_MetaData[] = {
		{ "Category", "WeaponInformation" },
		{ "Comment", "//Number of magazines player can carry (MagCap x AmmoCap)\n" },
		{ "ModuleRelativePath", "Public/Weapon/WeaponActor.h" },
		{ "ToolTip", "Number of magazines player can carry (MagCap x AmmoCap)" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AWeaponActor_Statics::NewProp_MagCapacity = { "MagCapacity", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeaponActor, MagCapacity), METADATA_PARAMS(Z_Construct_UClass_AWeaponActor_Statics::NewProp_MagCapacity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponActor_Statics::NewProp_MagCapacity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeaponActor_Statics::NewProp_RemaingAmmo_MetaData[] = {
		{ "Category", "WeaponInformation" },
		{ "Comment", "// Set as (MagCapacity x AmmoCapacity) in BeginPlay if values changed in editor\n" },
		{ "ModuleRelativePath", "Public/Weapon/WeaponActor.h" },
		{ "ToolTip", "Set as (MagCapacity x AmmoCapacity) in BeginPlay if values changed in editor" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWeaponActor_Statics::NewProp_RemaingAmmo = { "RemaingAmmo", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeaponActor, RemaingAmmo), METADATA_PARAMS(Z_Construct_UClass_AWeaponActor_Statics::NewProp_RemaingAmmo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponActor_Statics::NewProp_RemaingAmmo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeaponActor_Statics::NewProp_AmmoToLoad_MetaData[] = {
		{ "Category", "WeaponInformation" },
		{ "ModuleRelativePath", "Public/Weapon/WeaponActor.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AWeaponActor_Statics::NewProp_AmmoToLoad = { "AmmoToLoad", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeaponActor, AmmoToLoad), METADATA_PARAMS(Z_Construct_UClass_AWeaponActor_Statics::NewProp_AmmoToLoad_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponActor_Statics::NewProp_AmmoToLoad_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeaponActor_Statics::NewProp_TargetAmmo_MetaData[] = {
		{ "Category", "WeaponInformation" },
		{ "ModuleRelativePath", "Public/Weapon/WeaponActor.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AWeaponActor_Statics::NewProp_TargetAmmo = { "TargetAmmo", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeaponActor, TargetAmmo), METADATA_PARAMS(Z_Construct_UClass_AWeaponActor_Statics::NewProp_TargetAmmo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponActor_Statics::NewProp_TargetAmmo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeaponActor_Statics::NewProp_TargetTotalAmmo_MetaData[] = {
		{ "Category", "WeaponInformation" },
		{ "ModuleRelativePath", "Public/Weapon/WeaponActor.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AWeaponActor_Statics::NewProp_TargetTotalAmmo = { "TargetTotalAmmo", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeaponActor, TargetTotalAmmo), METADATA_PARAMS(Z_Construct_UClass_AWeaponActor_Statics::NewProp_TargetTotalAmmo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponActor_Statics::NewProp_TargetTotalAmmo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeaponActor_Statics::NewProp_bIsFiring_MetaData[] = {
		{ "Category", "Flamethrower" },
		{ "ModuleRelativePath", "Public/Weapon/WeaponActor.h" },
	};
#endif
	void Z_Construct_UClass_AWeaponActor_Statics::NewProp_bIsFiring_SetBit(void* Obj)
	{
		((AWeaponActor*)Obj)->bIsFiring = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AWeaponActor_Statics::NewProp_bIsFiring = { "bIsFiring", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AWeaponActor), &Z_Construct_UClass_AWeaponActor_Statics::NewProp_bIsFiring_SetBit, METADATA_PARAMS(Z_Construct_UClass_AWeaponActor_Statics::NewProp_bIsFiring_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponActor_Statics::NewProp_bIsFiring_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeaponActor_Statics::NewProp_RelRot_MetaData[] = {
		{ "Category", "WeaponPosInformation" },
		{ "Comment", "// relative rotation if weapon BP is rotated wrong way\n" },
		{ "ModuleRelativePath", "Public/Weapon/WeaponActor.h" },
		{ "ToolTip", "relative rotation if weapon BP is rotated wrong way" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AWeaponActor_Statics::NewProp_RelRot = { "RelRot", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeaponActor, RelRot), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_AWeaponActor_Statics::NewProp_RelRot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponActor_Statics::NewProp_RelRot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeaponActor_Statics::NewProp_RelLoc_MetaData[] = {
		{ "Category", "WeaponPosInformation" },
		{ "Comment", "// relative position if weapon is a bit away from players hands\n" },
		{ "ModuleRelativePath", "Public/Weapon/WeaponActor.h" },
		{ "ToolTip", "relative position if weapon is a bit away from players hands" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AWeaponActor_Statics::NewProp_RelLoc = { "RelLoc", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeaponActor, RelLoc), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AWeaponActor_Statics::NewProp_RelLoc_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponActor_Statics::NewProp_RelLoc_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeaponActor_Statics::NewProp_HUDWidget_MetaData[] = {
		{ "Category", "HUD" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Weapon/WeaponActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeaponActor_Statics::NewProp_HUDWidget = { "HUDWidget", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeaponActor, HUDWidget), Z_Construct_UClass_UHUDWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWeaponActor_Statics::NewProp_HUDWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponActor_Statics::NewProp_HUDWidget_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AWeaponActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponActor_Statics::NewProp_FlamethrowerInstance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponActor_Statics::NewProp_BlockGunInstance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponActor_Statics::NewProp_WSC,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponActor_Statics::NewProp_DefaultMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponActor_Statics::NewProp_HoldingComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponActor_Statics::NewProp_bHolding,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponActor_Statics::NewProp_bGravity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponActor_Statics::NewProp_WAC,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponActor_Statics::NewProp_MeshComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponActor_Statics::NewProp_MeshCompName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponActor_Statics::NewProp_SocketName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponActor_Statics::NewProp_PlayerPawn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponActor_Statics::NewProp_PlayerCamera,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponActor_Statics::NewProp_KindOfWeapon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponActor_Statics::NewProp_AmmoLeft,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponActor_Statics::NewProp_AmmoCapacity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponActor_Statics::NewProp_FireRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponActor_Statics::NewProp_bIsReloading,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponActor_Statics::NewProp_ReloadingTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponActor_Statics::NewProp_MaxReloadingTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponActor_Statics::NewProp_Timer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponActor_Statics::NewProp_MagCapacity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponActor_Statics::NewProp_RemaingAmmo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponActor_Statics::NewProp_AmmoToLoad,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponActor_Statics::NewProp_TargetAmmo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponActor_Statics::NewProp_TargetTotalAmmo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponActor_Statics::NewProp_bIsFiring,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponActor_Statics::NewProp_RelRot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponActor_Statics::NewProp_RelLoc,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponActor_Statics::NewProp_HUDWidget,
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
	IMPLEMENT_CLASS(AWeaponActor, 1700349845);
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
