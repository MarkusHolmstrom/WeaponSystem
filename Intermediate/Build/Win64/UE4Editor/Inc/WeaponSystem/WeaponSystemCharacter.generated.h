// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef WEAPONSYSTEM_WeaponSystemCharacter_generated_h
#error "WeaponSystemCharacter.generated.h already included, missing '#pragma once' in WeaponSystemCharacter.h"
#endif
#define WEAPONSYSTEM_WeaponSystemCharacter_generated_h

#define WeaponSystem_Source_WeaponSystem_WeaponSystemCharacter_h_20_SPARSE_DATA
#define WeaponSystem_Source_WeaponSystem_WeaponSystemCharacter_h_20_RPC_WRAPPERS
#define WeaponSystem_Source_WeaponSystem_WeaponSystemCharacter_h_20_RPC_WRAPPERS_NO_PURE_DECLS
#define WeaponSystem_Source_WeaponSystem_WeaponSystemCharacter_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAWeaponSystemCharacter(); \
	friend struct Z_Construct_UClass_AWeaponSystemCharacter_Statics; \
public: \
	DECLARE_CLASS(AWeaponSystemCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/WeaponSystem"), NO_API) \
	DECLARE_SERIALIZER(AWeaponSystemCharacter)


#define WeaponSystem_Source_WeaponSystem_WeaponSystemCharacter_h_20_INCLASS \
private: \
	static void StaticRegisterNativesAWeaponSystemCharacter(); \
	friend struct Z_Construct_UClass_AWeaponSystemCharacter_Statics; \
public: \
	DECLARE_CLASS(AWeaponSystemCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/WeaponSystem"), NO_API) \
	DECLARE_SERIALIZER(AWeaponSystemCharacter)


#define WeaponSystem_Source_WeaponSystem_WeaponSystemCharacter_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AWeaponSystemCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AWeaponSystemCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWeaponSystemCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWeaponSystemCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWeaponSystemCharacter(AWeaponSystemCharacter&&); \
	NO_API AWeaponSystemCharacter(const AWeaponSystemCharacter&); \
public:


#define WeaponSystem_Source_WeaponSystem_WeaponSystemCharacter_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWeaponSystemCharacter(AWeaponSystemCharacter&&); \
	NO_API AWeaponSystemCharacter(const AWeaponSystemCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWeaponSystemCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWeaponSystemCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AWeaponSystemCharacter)


#define WeaponSystem_Source_WeaponSystem_WeaponSystemCharacter_h_20_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Mesh1P() { return STRUCT_OFFSET(AWeaponSystemCharacter, Mesh1P); } \
	FORCEINLINE static uint32 __PPO__VR_MuzzleLocation() { return STRUCT_OFFSET(AWeaponSystemCharacter, VR_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__FirstPersonCameraComponent() { return STRUCT_OFFSET(AWeaponSystemCharacter, FirstPersonCameraComponent); } \
	FORCEINLINE static uint32 __PPO__R_MotionController() { return STRUCT_OFFSET(AWeaponSystemCharacter, R_MotionController); } \
	FORCEINLINE static uint32 __PPO__L_MotionController() { return STRUCT_OFFSET(AWeaponSystemCharacter, L_MotionController); }


#define WeaponSystem_Source_WeaponSystem_WeaponSystemCharacter_h_17_PROLOG
#define WeaponSystem_Source_WeaponSystem_WeaponSystemCharacter_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	WeaponSystem_Source_WeaponSystem_WeaponSystemCharacter_h_20_PRIVATE_PROPERTY_OFFSET \
	WeaponSystem_Source_WeaponSystem_WeaponSystemCharacter_h_20_SPARSE_DATA \
	WeaponSystem_Source_WeaponSystem_WeaponSystemCharacter_h_20_RPC_WRAPPERS \
	WeaponSystem_Source_WeaponSystem_WeaponSystemCharacter_h_20_INCLASS \
	WeaponSystem_Source_WeaponSystem_WeaponSystemCharacter_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define WeaponSystem_Source_WeaponSystem_WeaponSystemCharacter_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	WeaponSystem_Source_WeaponSystem_WeaponSystemCharacter_h_20_PRIVATE_PROPERTY_OFFSET \
	WeaponSystem_Source_WeaponSystem_WeaponSystemCharacter_h_20_SPARSE_DATA \
	WeaponSystem_Source_WeaponSystem_WeaponSystemCharacter_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	WeaponSystem_Source_WeaponSystem_WeaponSystemCharacter_h_20_INCLASS_NO_PURE_DECLS \
	WeaponSystem_Source_WeaponSystem_WeaponSystemCharacter_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WEAPONSYSTEM_API UClass* StaticClass<class AWeaponSystemCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID WeaponSystem_Source_WeaponSystem_WeaponSystemCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
