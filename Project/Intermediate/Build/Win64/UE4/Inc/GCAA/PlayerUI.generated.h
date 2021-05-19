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

#define GCAA_Source_GCAA_UI_PlayerUI_h_18_SPARSE_DATA
#define GCAA_Source_GCAA_UI_PlayerUI_h_18_RPC_WRAPPERS
#define GCAA_Source_GCAA_UI_PlayerUI_h_18_RPC_WRAPPERS_NO_PURE_DECLS
#define GCAA_Source_GCAA_UI_PlayerUI_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPlayerUI(); \
	friend struct Z_Construct_UClass_UPlayerUI_Statics; \
public: \
	DECLARE_CLASS(UPlayerUI, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GCAA"), NO_API) \
	DECLARE_SERIALIZER(UPlayerUI)


#define GCAA_Source_GCAA_UI_PlayerUI_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUPlayerUI(); \
	friend struct Z_Construct_UClass_UPlayerUI_Statics; \
public: \
	DECLARE_CLASS(UPlayerUI, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GCAA"), NO_API) \
	DECLARE_SERIALIZER(UPlayerUI)


#define GCAA_Source_GCAA_UI_PlayerUI_h_18_STANDARD_CONSTRUCTORS \
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


#define GCAA_Source_GCAA_UI_PlayerUI_h_18_ENHANCED_CONSTRUCTORS \
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


#define GCAA_Source_GCAA_UI_PlayerUI_h_18_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Ability1CD() { return STRUCT_OFFSET(UPlayerUI, Ability1CD); } \
	FORCEINLINE static uint32 __PPO__Ability1PB() { return STRUCT_OFFSET(UPlayerUI, Ability1PB); } \
	FORCEINLINE static uint32 __PPO__Ability2CD() { return STRUCT_OFFSET(UPlayerUI, Ability2CD); } \
	FORCEINLINE static uint32 __PPO__Ability2PB() { return STRUCT_OFFSET(UPlayerUI, Ability2PB); } \
	FORCEINLINE static uint32 __PPO__Ability3CD() { return STRUCT_OFFSET(UPlayerUI, Ability3CD); } \
	FORCEINLINE static uint32 __PPO__Ability3Charges() { return STRUCT_OFFSET(UPlayerUI, Ability3Charges); } \
	FORCEINLINE static uint32 __PPO__BlinkChargePB() { return STRUCT_OFFSET(UPlayerUI, BlinkChargePB); } \
	FORCEINLINE static uint32 __PPO__Ability3PB() { return STRUCT_OFFSET(UPlayerUI, Ability3PB); }


#define GCAA_Source_GCAA_UI_PlayerUI_h_15_PROLOG
#define GCAA_Source_GCAA_UI_PlayerUI_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GCAA_Source_GCAA_UI_PlayerUI_h_18_PRIVATE_PROPERTY_OFFSET \
	GCAA_Source_GCAA_UI_PlayerUI_h_18_SPARSE_DATA \
	GCAA_Source_GCAA_UI_PlayerUI_h_18_RPC_WRAPPERS \
	GCAA_Source_GCAA_UI_PlayerUI_h_18_INCLASS \
	GCAA_Source_GCAA_UI_PlayerUI_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GCAA_Source_GCAA_UI_PlayerUI_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GCAA_Source_GCAA_UI_PlayerUI_h_18_PRIVATE_PROPERTY_OFFSET \
	GCAA_Source_GCAA_UI_PlayerUI_h_18_SPARSE_DATA \
	GCAA_Source_GCAA_UI_PlayerUI_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	GCAA_Source_GCAA_UI_PlayerUI_h_18_INCLASS_NO_PURE_DECLS \
	GCAA_Source_GCAA_UI_PlayerUI_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GCAA_API UClass* StaticClass<class UPlayerUI>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GCAA_Source_GCAA_UI_PlayerUI_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
