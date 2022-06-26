// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef WEAPONSYSTEM_WeaponActorComponent_generated_h
#error "WeaponActorComponent.generated.h already included, missing '#pragma once' in WeaponActorComponent.h"
#endif
#define WEAPONSYSTEM_WeaponActorComponent_generated_h

#define WeaponSystem_Source_WeaponSystem_Public_Weapon_WeaponActorComponent_h_16_DELEGATE \
static inline void FItemSightDelegate_DelegateWrapper(const FMulticastScriptDelegate& ItemSightDelegate) \
{ \
	ItemSightDelegate.ProcessMulticastDelegate<UObject>(NULL); \
}


#define WeaponSystem_Source_WeaponSystem_Public_Weapon_WeaponActorComponent_h_21_SPARSE_DATA
#define WeaponSystem_Source_WeaponSystem_Public_Weapon_WeaponActorComponent_h_21_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnAction); \
	DECLARE_FUNCTION(execToggleItemPickup);


#define WeaponSystem_Source_WeaponSystem_Public_Weapon_WeaponActorComponent_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnAction); \
	DECLARE_FUNCTION(execToggleItemPickup);


#define WeaponSystem_Source_WeaponSystem_Public_Weapon_WeaponActorComponent_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWeaponActorComponent(); \
	friend struct Z_Construct_UClass_UWeaponActorComponent_Statics; \
public: \
	DECLARE_CLASS(UWeaponActorComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/WeaponSystem"), NO_API) \
	DECLARE_SERIALIZER(UWeaponActorComponent)


#define WeaponSystem_Source_WeaponSystem_Public_Weapon_WeaponActorComponent_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUWeaponActorComponent(); \
	friend struct Z_Construct_UClass_UWeaponActorComponent_Statics; \
public: \
	DECLARE_CLASS(UWeaponActorComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/WeaponSystem"), NO_API) \
	DECLARE_SERIALIZER(UWeaponActorComponent)


#define WeaponSystem_Source_WeaponSystem_Public_Weapon_WeaponActorComponent_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWeaponActorComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWeaponActorComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWeaponActorComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWeaponActorComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWeaponActorComponent(UWeaponActorComponent&&); \
	NO_API UWeaponActorComponent(const UWeaponActorComponent&); \
public:


#define WeaponSystem_Source_WeaponSystem_Public_Weapon_WeaponActorComponent_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWeaponActorComponent(UWeaponActorComponent&&); \
	NO_API UWeaponActorComponent(const UWeaponActorComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWeaponActorComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWeaponActorComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UWeaponActorComponent)


#define WeaponSystem_Source_WeaponSystem_Public_Weapon_WeaponActorComponent_h_21_PRIVATE_PROPERTY_OFFSET
#define WeaponSystem_Source_WeaponSystem_Public_Weapon_WeaponActorComponent_h_18_PROLOG
#define WeaponSystem_Source_WeaponSystem_Public_Weapon_WeaponActorComponent_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	WeaponSystem_Source_WeaponSystem_Public_Weapon_WeaponActorComponent_h_21_PRIVATE_PROPERTY_OFFSET \
	WeaponSystem_Source_WeaponSystem_Public_Weapon_WeaponActorComponent_h_21_SPARSE_DATA \
	WeaponSystem_Source_WeaponSystem_Public_Weapon_WeaponActorComponent_h_21_RPC_WRAPPERS \
	WeaponSystem_Source_WeaponSystem_Public_Weapon_WeaponActorComponent_h_21_INCLASS \
	WeaponSystem_Source_WeaponSystem_Public_Weapon_WeaponActorComponent_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define WeaponSystem_Source_WeaponSystem_Public_Weapon_WeaponActorComponent_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	WeaponSystem_Source_WeaponSystem_Public_Weapon_WeaponActorComponent_h_21_PRIVATE_PROPERTY_OFFSET \
	WeaponSystem_Source_WeaponSystem_Public_Weapon_WeaponActorComponent_h_21_SPARSE_DATA \
	WeaponSystem_Source_WeaponSystem_Public_Weapon_WeaponActorComponent_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	WeaponSystem_Source_WeaponSystem_Public_Weapon_WeaponActorComponent_h_21_INCLASS_NO_PURE_DECLS \
	WeaponSystem_Source_WeaponSystem_Public_Weapon_WeaponActorComponent_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WEAPONSYSTEM_API UClass* StaticClass<class UWeaponActorComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID WeaponSystem_Source_WeaponSystem_Public_Weapon_WeaponActorComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
