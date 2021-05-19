// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GCAA_PlayerUI_generated_h
#error "PlayerUI.generated.h already included, missing '#pragma once' in PlayerUI.h"
#endif
#define GCAA_PlayerUI_generated_h

#define GCAA_Source_GCAA_UI_PlayerUI_h_20_SPARSE_DATA
#define GCAA_Source_GCAA_UI_PlayerUI_h_20_RPC_WRAPPERS
#define GCAA_Source_GCAA_UI_PlayerUI_h_20_RPC_WRAPPERS_NO_PURE_DECLS
#define GCAA_Source_GCAA_UI_PlayerUI_h_20_EVENT_PARMS
#define GCAA_Source_GCAA_UI_PlayerUI_h_20_CALLBACK_WRAPPERS
#define GCAA_Source_GCAA_UI_PlayerUI_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPlayerUI(); \
	friend struct Z_Construct_UClass_UPlayerUI_Statics; \
public: \
	DECLARE_CLASS(UPlayerUI, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GCAA"), NO_API) \
	DECLARE_SERIALIZER(UPlayerUI)


#define GCAA_Source_GCAA_UI_PlayerUI_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUPlayerUI(); \
	friend struct Z_Construct_UClass_UPlayerUI_Statics; \
public: \
	DECLARE_CLASS(UPlayerUI, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GCAA"), NO_API) \
	DECLARE_SERIALIZER(UPlayerUI)


#define GCAA_Source_GCAA_UI_PlayerUI_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPlayerUI(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlayerUI) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayerUI); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayerUI); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlayerUI(UPlayerUI&&); \
	NO_API UPlayerUI(const UPlayerUI&); \
public:


#define GCAA_Source_GCAA_UI_PlayerUI_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPlayerUI(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlayerUI(UPlayerUI&&); \
	NO_API UPlayerUI(const UPlayerUI&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayerUI); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayerUI); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlayerUI)


#define GCAA_Source_GCAA_UI_PlayerUI_h_20_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__FireBallCooldownText() { return STRUCT_OFFSET(UPlayerUI, FireBallCooldownText); } \
	FORCEINLINE static uint32 __PPO__FireBallProgressBar() { return STRUCT_OFFSET(UPlayerUI, FireBallProgressBar); } \
	FORCEINLINE static uint32 __PPO__LightningCooldownText() { return STRUCT_OFFSET(UPlayerUI, LightningCooldownText); } \
	FORCEINLINE static uint32 __PPO__LightningProgressBar() { return STRUCT_OFFSET(UPlayerUI, LightningProgressBar); } \
	FORCEINLINE static uint32 __PPO__BlinkCooldownText() { return STRUCT_OFFSET(UPlayerUI, BlinkCooldownText); } \
	FORCEINLINE static uint32 __PPO__BlinkProgressBar() { return STRUCT_OFFSET(UPlayerUI, BlinkProgressBar); } \
	FORCEINLINE static uint32 __PPO__BlinkChargesCooldownText() { return STRUCT_OFFSET(UPlayerUI, BlinkChargesCooldownText); } \
	FORCEINLINE static uint32 __PPO__BlinkChargesProgressBar() { return STRUCT_OFFSET(UPlayerUI, BlinkChargesProgressBar); } \
	FORCEINLINE static uint32 __PPO__WindblastCooldownText() { return STRUCT_OFFSET(UPlayerUI, WindblastCooldownText); } \
	FORCEINLINE static uint32 __PPO__WindblastProgressBar() { return STRUCT_OFFSET(UPlayerUI, WindblastProgressBar); } \
	FORCEINLINE static uint32 __PPO__HealProgressBar() { return STRUCT_OFFSET(UPlayerUI, HealProgressBar); } \
	FORCEINLINE static uint32 __PPO__m_pcPlayer() { return STRUCT_OFFSET(UPlayerUI, m_pcPlayer); } \
	FORCEINLINE static uint32 __PPO__m_pcSpellManager() { return STRUCT_OFFSET(UPlayerUI, m_pcSpellManager); }


#define GCAA_Source_GCAA_UI_PlayerUI_h_17_PROLOG \
	GCAA_Source_GCAA_UI_PlayerUI_h_20_EVENT_PARMS


#define GCAA_Source_GCAA_UI_PlayerUI_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GCAA_Source_GCAA_UI_PlayerUI_h_20_PRIVATE_PROPERTY_OFFSET \
	GCAA_Source_GCAA_UI_PlayerUI_h_20_SPARSE_DATA \
	GCAA_Source_GCAA_UI_PlayerUI_h_20_RPC_WRAPPERS \
	GCAA_Source_GCAA_UI_PlayerUI_h_20_CALLBACK_WRAPPERS \
	GCAA_Source_GCAA_UI_PlayerUI_h_20_INCLASS \
	GCAA_Source_GCAA_UI_PlayerUI_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GCAA_Source_GCAA_UI_PlayerUI_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GCAA_Source_GCAA_UI_PlayerUI_h_20_PRIVATE_PROPERTY_OFFSET \
	GCAA_Source_GCAA_UI_PlayerUI_h_20_SPARSE_DATA \
	GCAA_Source_GCAA_UI_PlayerUI_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	GCAA_Source_GCAA_UI_PlayerUI_h_20_CALLBACK_WRAPPERS \
	GCAA_Source_GCAA_UI_PlayerUI_h_20_INCLASS_NO_PURE_DECLS \
	GCAA_Source_GCAA_UI_PlayerUI_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GCAA_API UClass* StaticClass<class UPlayerUI>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GCAA_Source_GCAA_UI_PlayerUI_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
