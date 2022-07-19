// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef WEAPONSYSTEM_HUDWidget_generated_h
#error "HUDWidget.generated.h already included, missing '#pragma once' in HUDWidget.h"
#endif
#define WEAPONSYSTEM_HUDWidget_generated_h

#define WeaponSystem_Source_WeaponSystem_Public_UI_HUDWidget_h_16_SPARSE_DATA
#define WeaponSystem_Source_WeaponSystem_Public_UI_HUDWidget_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execUpdateWeaponType); \
	DECLARE_FUNCTION(execUpdateAmmo);


#define WeaponSystem_Source_WeaponSystem_Public_UI_HUDWidget_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execUpdateWeaponType); \
	DECLARE_FUNCTION(execUpdateAmmo);


#define WeaponSystem_Source_WeaponSystem_Public_UI_HUDWidget_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHUDWidget(); \
	friend struct Z_Construct_UClass_UHUDWidget_Statics; \
public: \
	DECLARE_CLASS(UHUDWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/WeaponSystem"), NO_API) \
	DECLARE_SERIALIZER(UHUDWidget)


#define WeaponSystem_Source_WeaponSystem_Public_UI_HUDWidget_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUHUDWidget(); \
	friend struct Z_Construct_UClass_UHUDWidget_Statics; \
public: \
	DECLARE_CLASS(UHUDWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/WeaponSystem"), NO_API) \
	DECLARE_SERIALIZER(UHUDWidget)


#define WeaponSystem_Source_WeaponSystem_Public_UI_HUDWidget_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHUDWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHUDWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHUDWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHUDWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHUDWidget(UHUDWidget&&); \
	NO_API UHUDWidget(const UHUDWidget&); \
public:


#define WeaponSystem_Source_WeaponSystem_Public_UI_HUDWidget_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHUDWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHUDWidget(UHUDWidget&&); \
	NO_API UHUDWidget(const UHUDWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHUDWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHUDWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHUDWidget)


#define WeaponSystem_Source_WeaponSystem_Public_UI_HUDWidget_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__AmmoTB() { return STRUCT_OFFSET(UHUDWidget, AmmoTB); } \
	FORCEINLINE static uint32 __PPO__WeaponType() { return STRUCT_OFFSET(UHUDWidget, WeaponType); }


#define WeaponSystem_Source_WeaponSystem_Public_UI_HUDWidget_h_13_PROLOG
#define WeaponSystem_Source_WeaponSystem_Public_UI_HUDWidget_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	WeaponSystem_Source_WeaponSystem_Public_UI_HUDWidget_h_16_PRIVATE_PROPERTY_OFFSET \
	WeaponSystem_Source_WeaponSystem_Public_UI_HUDWidget_h_16_SPARSE_DATA \
	WeaponSystem_Source_WeaponSystem_Public_UI_HUDWidget_h_16_RPC_WRAPPERS \
	WeaponSystem_Source_WeaponSystem_Public_UI_HUDWidget_h_16_INCLASS \
	WeaponSystem_Source_WeaponSystem_Public_UI_HUDWidget_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define WeaponSystem_Source_WeaponSystem_Public_UI_HUDWidget_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	WeaponSystem_Source_WeaponSystem_Public_UI_HUDWidget_h_16_PRIVATE_PROPERTY_OFFSET \
	WeaponSystem_Source_WeaponSystem_Public_UI_HUDWidget_h_16_SPARSE_DATA \
	WeaponSystem_Source_WeaponSystem_Public_UI_HUDWidget_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	WeaponSystem_Source_WeaponSystem_Public_UI_HUDWidget_h_16_INCLASS_NO_PURE_DECLS \
	WeaponSystem_Source_WeaponSystem_Public_UI_HUDWidget_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WEAPONSYSTEM_API UClass* StaticClass<class UHUDWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID WeaponSystem_Source_WeaponSystem_Public_UI_HUDWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
