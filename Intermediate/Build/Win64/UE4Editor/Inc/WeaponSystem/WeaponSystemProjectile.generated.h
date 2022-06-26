// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef WEAPONSYSTEM_WeaponSystemProjectile_generated_h
#error "WeaponSystemProjectile.generated.h already included, missing '#pragma once' in WeaponSystemProjectile.h"
#endif
#define WEAPONSYSTEM_WeaponSystemProjectile_generated_h

#define WeaponSystem_Source_WeaponSystem_WeaponSystemProjectile_h_15_SPARSE_DATA
#define WeaponSystem_Source_WeaponSystem_WeaponSystemProjectile_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define WeaponSystem_Source_WeaponSystem_WeaponSystemProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define WeaponSystem_Source_WeaponSystem_WeaponSystemProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAWeaponSystemProjectile(); \
	friend struct Z_Construct_UClass_AWeaponSystemProjectile_Statics; \
public: \
	DECLARE_CLASS(AWeaponSystemProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/WeaponSystem"), NO_API) \
	DECLARE_SERIALIZER(AWeaponSystemProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define WeaponSystem_Source_WeaponSystem_WeaponSystemProjectile_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAWeaponSystemProjectile(); \
	friend struct Z_Construct_UClass_AWeaponSystemProjectile_Statics; \
public: \
	DECLARE_CLASS(AWeaponSystemProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/WeaponSystem"), NO_API) \
	DECLARE_SERIALIZER(AWeaponSystemProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define WeaponSystem_Source_WeaponSystem_WeaponSystemProjectile_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AWeaponSystemProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AWeaponSystemProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWeaponSystemProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWeaponSystemProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWeaponSystemProjectile(AWeaponSystemProjectile&&); \
	NO_API AWeaponSystemProjectile(const AWeaponSystemProjectile&); \
public:


#define WeaponSystem_Source_WeaponSystem_WeaponSystemProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWeaponSystemProjectile(AWeaponSystemProjectile&&); \
	NO_API AWeaponSystemProjectile(const AWeaponSystemProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWeaponSystemProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWeaponSystemProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AWeaponSystemProjectile)


#define WeaponSystem_Source_WeaponSystem_WeaponSystemProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CollisionComp() { return STRUCT_OFFSET(AWeaponSystemProjectile, CollisionComp); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(AWeaponSystemProjectile, ProjectileMovement); }


#define WeaponSystem_Source_WeaponSystem_WeaponSystemProjectile_h_12_PROLOG
#define WeaponSystem_Source_WeaponSystem_WeaponSystemProjectile_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	WeaponSystem_Source_WeaponSystem_WeaponSystemProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	WeaponSystem_Source_WeaponSystem_WeaponSystemProjectile_h_15_SPARSE_DATA \
	WeaponSystem_Source_WeaponSystem_WeaponSystemProjectile_h_15_RPC_WRAPPERS \
	WeaponSystem_Source_WeaponSystem_WeaponSystemProjectile_h_15_INCLASS \
	WeaponSystem_Source_WeaponSystem_WeaponSystemProjectile_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define WeaponSystem_Source_WeaponSystem_WeaponSystemProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	WeaponSystem_Source_WeaponSystem_WeaponSystemProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	WeaponSystem_Source_WeaponSystem_WeaponSystemProjectile_h_15_SPARSE_DATA \
	WeaponSystem_Source_WeaponSystem_WeaponSystemProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	WeaponSystem_Source_WeaponSystem_WeaponSystemProjectile_h_15_INCLASS_NO_PURE_DECLS \
	WeaponSystem_Source_WeaponSystem_WeaponSystemProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WEAPONSYSTEM_API UClass* StaticClass<class AWeaponSystemProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID WeaponSystem_Source_WeaponSystem_WeaponSystemProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
