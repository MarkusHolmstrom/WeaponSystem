// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
struct FTransform;
#ifdef WEAPONSYSTEM_BlockGun_generated_h
#error "BlockGun.generated.h already included, missing '#pragma once' in BlockGun.h"
#endif
#define WEAPONSYSTEM_BlockGun_generated_h

#define WeaponSystem_Source_WeaponSystem_Public_Weapon_BlockGun_h_16_SPARSE_DATA
#define WeaponSystem_Source_WeaponSystem_Public_Weapon_BlockGun_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAddNewBlockDirection); \
	DECLARE_FUNCTION(execGenerateRandomNewDir); \
	DECLARE_FUNCTION(execGetSpawnTransform); \
	DECLARE_FUNCTION(execStopFire); \
	DECLARE_FUNCTION(execOnFire); \
	DECLARE_FUNCTION(execToggleCanFire);


#define WeaponSystem_Source_WeaponSystem_Public_Weapon_BlockGun_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAddNewBlockDirection); \
	DECLARE_FUNCTION(execGenerateRandomNewDir); \
	DECLARE_FUNCTION(execGetSpawnTransform); \
	DECLARE_FUNCTION(execStopFire); \
	DECLARE_FUNCTION(execOnFire); \
	DECLARE_FUNCTION(execToggleCanFire);


#define WeaponSystem_Source_WeaponSystem_Public_Weapon_BlockGun_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBlockGun(); \
	friend struct Z_Construct_UClass_UBlockGun_Statics; \
public: \
	DECLARE_CLASS(UBlockGun, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/WeaponSystem"), NO_API) \
	DECLARE_SERIALIZER(UBlockGun)


#define WeaponSystem_Source_WeaponSystem_Public_Weapon_BlockGun_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUBlockGun(); \
	friend struct Z_Construct_UClass_UBlockGun_Statics; \
public: \
	DECLARE_CLASS(UBlockGun, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/WeaponSystem"), NO_API) \
	DECLARE_SERIALIZER(UBlockGun)


#define WeaponSystem_Source_WeaponSystem_Public_Weapon_BlockGun_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBlockGun(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBlockGun) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBlockGun); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBlockGun); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBlockGun(UBlockGun&&); \
	NO_API UBlockGun(const UBlockGun&); \
public:


#define WeaponSystem_Source_WeaponSystem_Public_Weapon_BlockGun_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBlockGun(UBlockGun&&); \
	NO_API UBlockGun(const UBlockGun&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBlockGun); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBlockGun); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UBlockGun)


#define WeaponSystem_Source_WeaponSystem_Public_Weapon_BlockGun_h_16_PRIVATE_PROPERTY_OFFSET
#define WeaponSystem_Source_WeaponSystem_Public_Weapon_BlockGun_h_13_PROLOG
#define WeaponSystem_Source_WeaponSystem_Public_Weapon_BlockGun_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	WeaponSystem_Source_WeaponSystem_Public_Weapon_BlockGun_h_16_PRIVATE_PROPERTY_OFFSET \
	WeaponSystem_Source_WeaponSystem_Public_Weapon_BlockGun_h_16_SPARSE_DATA \
	WeaponSystem_Source_WeaponSystem_Public_Weapon_BlockGun_h_16_RPC_WRAPPERS \
	WeaponSystem_Source_WeaponSystem_Public_Weapon_BlockGun_h_16_INCLASS \
	WeaponSystem_Source_WeaponSystem_Public_Weapon_BlockGun_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define WeaponSystem_Source_WeaponSystem_Public_Weapon_BlockGun_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	WeaponSystem_Source_WeaponSystem_Public_Weapon_BlockGun_h_16_PRIVATE_PROPERTY_OFFSET \
	WeaponSystem_Source_WeaponSystem_Public_Weapon_BlockGun_h_16_SPARSE_DATA \
	WeaponSystem_Source_WeaponSystem_Public_Weapon_BlockGun_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	WeaponSystem_Source_WeaponSystem_Public_Weapon_BlockGun_h_16_INCLASS_NO_PURE_DECLS \
	WeaponSystem_Source_WeaponSystem_Public_Weapon_BlockGun_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WEAPONSYSTEM_API UClass* StaticClass<class UBlockGun>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID WeaponSystem_Source_WeaponSystem_Public_Weapon_BlockGun_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
