// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GCAA_CUpgradeSystemWidget_generated_h
#error "CUpgradeSystemWidget.generated.h already included, missing '#pragma once' in CUpgradeSystemWidget.h"
#endif
#define GCAA_CUpgradeSystemWidget_generated_h

#define GCAA_Source_GCAA_UpgradeSystem_CUpgradeSystemWidget_h_15_SPARSE_DATA
#define GCAA_Source_GCAA_UpgradeSystem_CUpgradeSystemWidget_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execVUpgradeDamage); \
	DECLARE_FUNCTION(execVUpgradeSkill); \
	DECLARE_FUNCTION(execVQuitUpgradeMenu);


#define GCAA_Source_GCAA_UpgradeSystem_CUpgradeSystemWidget_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execVUpgradeDamage); \
	DECLARE_FUNCTION(execVUpgradeSkill); \
	DECLARE_FUNCTION(execVQuitUpgradeMenu);


#define GCAA_Source_GCAA_UpgradeSystem_CUpgradeSystemWidget_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCUpgradeSystemWidget(); \
	friend struct Z_Construct_UClass_UCUpgradeSystemWidget_Statics; \
public: \
	DECLARE_CLASS(UCUpgradeSystemWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GCAA"), NO_API) \
	DECLARE_SERIALIZER(UCUpgradeSystemWidget)


#define GCAA_Source_GCAA_UpgradeSystem_CUpgradeSystemWidget_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUCUpgradeSystemWidget(); \
	friend struct Z_Construct_UClass_UCUpgradeSystemWidget_Statics; \
public: \
	DECLARE_CLASS(UCUpgradeSystemWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GCAA"), NO_API) \
	DECLARE_SERIALIZER(UCUpgradeSystemWidget)


#define GCAA_Source_GCAA_UpgradeSystem_CUpgradeSystemWidget_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCUpgradeSystemWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCUpgradeSystemWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCUpgradeSystemWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCUpgradeSystemWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCUpgradeSystemWidget(UCUpgradeSystemWidget&&); \
	NO_API UCUpgradeSystemWidget(const UCUpgradeSystemWidget&); \
public:


#define GCAA_Source_GCAA_UpgradeSystem_CUpgradeSystemWidget_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCUpgradeSystemWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCUpgradeSystemWidget(UCUpgradeSystemWidget&&); \
	NO_API UCUpgradeSystemWidget(const UCUpgradeSystemWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCUpgradeSystemWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCUpgradeSystemWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCUpgradeSystemWidget)


#define GCAA_Source_GCAA_UpgradeSystem_CUpgradeSystemWidget_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__UpgradeSystemLabel() { return STRUCT_OFFSET(UCUpgradeSystemWidget, UpgradeSystemLabel); } \
	FORCEINLINE static uint32 __PPO__UpgradeSkill() { return STRUCT_OFFSET(UCUpgradeSystemWidget, UpgradeSkill); } \
	FORCEINLINE static uint32 __PPO__UpgradeDamage() { return STRUCT_OFFSET(UCUpgradeSystemWidget, UpgradeDamage); } \
	FORCEINLINE static uint32 __PPO__QuitUpgradeMenu() { return STRUCT_OFFSET(UCUpgradeSystemWidget, QuitUpgradeMenu); }


#define GCAA_Source_GCAA_UpgradeSystem_CUpgradeSystemWidget_h_12_PROLOG
#define GCAA_Source_GCAA_UpgradeSystem_CUpgradeSystemWidget_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GCAA_Source_GCAA_UpgradeSystem_CUpgradeSystemWidget_h_15_PRIVATE_PROPERTY_OFFSET \
	GCAA_Source_GCAA_UpgradeSystem_CUpgradeSystemWidget_h_15_SPARSE_DATA \
	GCAA_Source_GCAA_UpgradeSystem_CUpgradeSystemWidget_h_15_RPC_WRAPPERS \
	GCAA_Source_GCAA_UpgradeSystem_CUpgradeSystemWidget_h_15_INCLASS \
	GCAA_Source_GCAA_UpgradeSystem_CUpgradeSystemWidget_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GCAA_Source_GCAA_UpgradeSystem_CUpgradeSystemWidget_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GCAA_Source_GCAA_UpgradeSystem_CUpgradeSystemWidget_h_15_PRIVATE_PROPERTY_OFFSET \
	GCAA_Source_GCAA_UpgradeSystem_CUpgradeSystemWidget_h_15_SPARSE_DATA \
	GCAA_Source_GCAA_UpgradeSystem_CUpgradeSystemWidget_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	GCAA_Source_GCAA_UpgradeSystem_CUpgradeSystemWidget_h_15_INCLASS_NO_PURE_DECLS \
	GCAA_Source_GCAA_UpgradeSystem_CUpgradeSystemWidget_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GCAA_API UClass* StaticClass<class UCUpgradeSystemWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GCAA_Source_GCAA_UpgradeSystem_CUpgradeSystemWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
