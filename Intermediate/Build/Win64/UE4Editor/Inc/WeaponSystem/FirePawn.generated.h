// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef WEAPONSYSTEM_FirePawn_generated_h
#error "FirePawn.generated.h already included, missing '#pragma once' in FirePawn.h"
#endif
#define WEAPONSYSTEM_FirePawn_generated_h

#define WeaponSystem_Source_WeaponSystem_Public_FirePawn_h_26_SPARSE_DATA
#define WeaponSystem_Source_WeaponSystem_Public_FirePawn_h_26_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execEndFireParticles); \
	DECLARE_FUNCTION(execPropagate);


#define WeaponSystem_Source_WeaponSystem_Public_FirePawn_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execEndFireParticles); \
	DECLARE_FUNCTION(execPropagate);


#define WeaponSystem_Source_WeaponSystem_Public_FirePawn_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFirePawn(); \
	friend struct Z_Construct_UClass_AFirePawn_Statics; \
public: \
	DECLARE_CLASS(AFirePawn, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/WeaponSystem"), NO_API) \
	DECLARE_SERIALIZER(AFirePawn)


#define WeaponSystem_Source_WeaponSystem_Public_FirePawn_h_26_INCLASS \
private: \
	static void StaticRegisterNativesAFirePawn(); \
	friend struct Z_Construct_UClass_AFirePawn_Statics; \
public: \
	DECLARE_CLASS(AFirePawn, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/WeaponSystem"), NO_API) \
	DECLARE_SERIALIZER(AFirePawn)


#define WeaponSystem_Source_WeaponSystem_Public_FirePawn_h_26_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFirePawn(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFirePawn) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFirePawn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFirePawn); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFirePawn(AFirePawn&&); \
	NO_API AFirePawn(const AFirePawn&); \
public:


#define WeaponSystem_Source_WeaponSystem_Public_FirePawn_h_26_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFirePawn(AFirePawn&&); \
	NO_API AFirePawn(const AFirePawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFirePawn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFirePawn); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFirePawn)


#define WeaponSystem_Source_WeaponSystem_Public_FirePawn_h_26_PRIVATE_PROPERTY_OFFSET
#define WeaponSystem_Source_WeaponSystem_Public_FirePawn_h_23_PROLOG
#define WeaponSystem_Source_WeaponSystem_Public_FirePawn_h_26_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	WeaponSystem_Source_WeaponSystem_Public_FirePawn_h_26_PRIVATE_PROPERTY_OFFSET \
	WeaponSystem_Source_WeaponSystem_Public_FirePawn_h_26_SPARSE_DATA \
	WeaponSystem_Source_WeaponSystem_Public_FirePawn_h_26_RPC_WRAPPERS \
	WeaponSystem_Source_WeaponSystem_Public_FirePawn_h_26_INCLASS \
	WeaponSystem_Source_WeaponSystem_Public_FirePawn_h_26_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define WeaponSystem_Source_WeaponSystem_Public_FirePawn_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	WeaponSystem_Source_WeaponSystem_Public_FirePawn_h_26_PRIVATE_PROPERTY_OFFSET \
	WeaponSystem_Source_WeaponSystem_Public_FirePawn_h_26_SPARSE_DATA \
	WeaponSystem_Source_WeaponSystem_Public_FirePawn_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	WeaponSystem_Source_WeaponSystem_Public_FirePawn_h_26_INCLASS_NO_PURE_DECLS \
	WeaponSystem_Source_WeaponSystem_Public_FirePawn_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WEAPONSYSTEM_API UClass* StaticClass<class AFirePawn>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID WeaponSystem_Source_WeaponSystem_Public_FirePawn_h


#define FOREACH_ENUM_EWINDDIRECTION(op) \
	op(NoWind) \
	op(West) \
	op(North) \
	op(East) \
	op(South) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
