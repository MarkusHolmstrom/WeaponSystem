// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UHUDWidget;
#ifdef WEAPONSYSTEM_WeaponActor_generated_h
#error "WeaponActor.generated.h already included, missing '#pragma once' in WeaponActor.h"
#endif
#define WEAPONSYSTEM_WeaponActor_generated_h

#define WeaponSystem_Source_WeaponSystem_Public_Weapon_WeaponActor_h_37_SPARSE_DATA
#define WeaponSystem_Source_WeaponSystem_Public_Weapon_WeaponActor_h_37_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetAmmoRemaining); \
	DECLARE_FUNCTION(execUpdateDuringReloading); \
	DECLARE_FUNCTION(execReloading); \
	DECLARE_FUNCTION(execStopFireWeapon); \
	DECLARE_FUNCTION(execFireWeapon); \
	DECLARE_FUNCTION(execNullCheck); \
	DECLARE_FUNCTION(execAttachToPlayerMesh); \
	DECLARE_FUNCTION(execGetWeaponName); \
	DECLARE_FUNCTION(execInteract); \
	DECLARE_FUNCTION(execRotateActor); \
	DECLARE_FUNCTION(execGetHUDWidget); \
	DECLARE_FUNCTION(execGetReloadingTime); \
	DECLARE_FUNCTION(execUpdateHUDAmmo); \
	DECLARE_FUNCTION(execUpdateAmmoLeft); \
	DECLARE_FUNCTION(execSetupWeaponStats);


#define WeaponSystem_Source_WeaponSystem_Public_Weapon_WeaponActor_h_37_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetAmmoRemaining); \
	DECLARE_FUNCTION(execUpdateDuringReloading); \
	DECLARE_FUNCTION(execReloading); \
	DECLARE_FUNCTION(execStopFireWeapon); \
	DECLARE_FUNCTION(execFireWeapon); \
	DECLARE_FUNCTION(execNullCheck); \
	DECLARE_FUNCTION(execAttachToPlayerMesh); \
	DECLARE_FUNCTION(execGetWeaponName); \
	DECLARE_FUNCTION(execInteract); \
	DECLARE_FUNCTION(execRotateActor); \
	DECLARE_FUNCTION(execGetHUDWidget); \
	DECLARE_FUNCTION(execGetReloadingTime); \
	DECLARE_FUNCTION(execUpdateHUDAmmo); \
	DECLARE_FUNCTION(execUpdateAmmoLeft); \
	DECLARE_FUNCTION(execSetupWeaponStats);


#define WeaponSystem_Source_WeaponSystem_Public_Weapon_WeaponActor_h_37_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAWeaponActor(); \
	friend struct Z_Construct_UClass_AWeaponActor_Statics; \
public: \
	DECLARE_CLASS(AWeaponActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/WeaponSystem"), NO_API) \
	DECLARE_SERIALIZER(AWeaponActor)


#define WeaponSystem_Source_WeaponSystem_Public_Weapon_WeaponActor_h_37_INCLASS \
private: \
	static void StaticRegisterNativesAWeaponActor(); \
	friend struct Z_Construct_UClass_AWeaponActor_Statics; \
public: \
	DECLARE_CLASS(AWeaponActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/WeaponSystem"), NO_API) \
	DECLARE_SERIALIZER(AWeaponActor)


#define WeaponSystem_Source_WeaponSystem_Public_Weapon_WeaponActor_h_37_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AWeaponActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AWeaponActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWeaponActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWeaponActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWeaponActor(AWeaponActor&&); \
	NO_API AWeaponActor(const AWeaponActor&); \
public:


#define WeaponSystem_Source_WeaponSystem_Public_Weapon_WeaponActor_h_37_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWeaponActor(AWeaponActor&&); \
	NO_API AWeaponActor(const AWeaponActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWeaponActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWeaponActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AWeaponActor)


#define WeaponSystem_Source_WeaponSystem_Public_Weapon_WeaponActor_h_37_PRIVATE_PROPERTY_OFFSET
#define WeaponSystem_Source_WeaponSystem_Public_Weapon_WeaponActor_h_32_PROLOG
#define WeaponSystem_Source_WeaponSystem_Public_Weapon_WeaponActor_h_37_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	WeaponSystem_Source_WeaponSystem_Public_Weapon_WeaponActor_h_37_PRIVATE_PROPERTY_OFFSET \
	WeaponSystem_Source_WeaponSystem_Public_Weapon_WeaponActor_h_37_SPARSE_DATA \
	WeaponSystem_Source_WeaponSystem_Public_Weapon_WeaponActor_h_37_RPC_WRAPPERS \
	WeaponSystem_Source_WeaponSystem_Public_Weapon_WeaponActor_h_37_INCLASS \
	WeaponSystem_Source_WeaponSystem_Public_Weapon_WeaponActor_h_37_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define WeaponSystem_Source_WeaponSystem_Public_Weapon_WeaponActor_h_37_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	WeaponSystem_Source_WeaponSystem_Public_Weapon_WeaponActor_h_37_PRIVATE_PROPERTY_OFFSET \
	WeaponSystem_Source_WeaponSystem_Public_Weapon_WeaponActor_h_37_SPARSE_DATA \
	WeaponSystem_Source_WeaponSystem_Public_Weapon_WeaponActor_h_37_RPC_WRAPPERS_NO_PURE_DECLS \
	WeaponSystem_Source_WeaponSystem_Public_Weapon_WeaponActor_h_37_INCLASS_NO_PURE_DECLS \
	WeaponSystem_Source_WeaponSystem_Public_Weapon_WeaponActor_h_37_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WEAPONSYSTEM_API UClass* StaticClass<class AWeaponActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID WeaponSystem_Source_WeaponSystem_Public_Weapon_WeaponActor_h


#define FOREACH_ENUM_EKINDOFWEAPON(op) \
	op(None) \
	op(Flamethrower) \
	op(BlockGun) \
	op(Bow) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
