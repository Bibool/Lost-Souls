// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GCAA_BaseHealthUI_generated_h
#error "BaseHealthUI.generated.h already included, missing '#pragma once' in BaseHealthUI.h"
#endif
#define GCAA_BaseHealthUI_generated_h

#define GCAA_Source_GCAA_UI_Health_BaseHealthUI_h_19_SPARSE_DATA
#define GCAA_Source_GCAA_UI_Health_BaseHealthUI_h_19_RPC_WRAPPERS
#define GCAA_Source_GCAA_UI_Health_BaseHealthUI_h_19_RPC_WRAPPERS_NO_PURE_DECLS
#define GCAA_Source_GCAA_UI_Health_BaseHealthUI_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBaseHealthUI(); \
	friend struct Z_Construct_UClass_UBaseHealthUI_Statics; \
public: \
	DECLARE_CLASS(UBaseHealthUI, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GCAA"), NO_API) \
	DECLARE_SERIALIZER(UBaseHealthUI)


#define GCAA_Source_GCAA_UI_Health_BaseHealthUI_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUBaseHealthUI(); \
	friend struct Z_Construct_UClass_UBaseHealthUI_Statics; \
public: \
	DECLARE_CLASS(UBaseHealthUI, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GCAA"), NO_API) \
	DECLARE_SERIALIZER(UBaseHealthUI)


#define GCAA_Source_GCAA_UI_Health_BaseHealthUI_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBaseHealthUI(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBaseHealthUI) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBaseHealthUI); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBaseHealthUI); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBaseHealthUI(UBaseHealthUI&&); \
	NO_API UBaseHealthUI(const UBaseHealthUI&); \
public:


#define GCAA_Source_GCAA_UI_Health_BaseHealthUI_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBaseHealthUI(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBaseHealthUI(UBaseHealthUI&&); \
	NO_API UBaseHealthUI(const UBaseHealthUI&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBaseHealthUI); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBaseHealthUI); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBaseHealthUI)


#define GCAA_Source_GCAA_UI_Health_BaseHealthUI_h_19_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__m_pcHealthBar() { return STRUCT_OFFSET(UBaseHealthUI, m_pcHealthBar); } \
	FORCEINLINE static uint32 __PPO__m_pcOwner() { return STRUCT_OFFSET(UBaseHealthUI, m_pcOwner); } \
	FORCEINLINE static uint32 __PPO__m_pcPlayer() { return STRUCT_OFFSET(UBaseHealthUI, m_pcPlayer); }


#define GCAA_Source_GCAA_UI_Health_BaseHealthUI_h_16_PROLOG
#define GCAA_Source_GCAA_UI_Health_BaseHealthUI_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GCAA_Source_GCAA_UI_Health_BaseHealthUI_h_19_PRIVATE_PROPERTY_OFFSET \
	GCAA_Source_GCAA_UI_Health_BaseHealthUI_h_19_SPARSE_DATA \
	GCAA_Source_GCAA_UI_Health_BaseHealthUI_h_19_RPC_WRAPPERS \
	GCAA_Source_GCAA_UI_Health_BaseHealthUI_h_19_INCLASS \
	GCAA_Source_GCAA_UI_Health_BaseHealthUI_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GCAA_Source_GCAA_UI_Health_BaseHealthUI_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GCAA_Source_GCAA_UI_Health_BaseHealthUI_h_19_PRIVATE_PROPERTY_OFFSET \
	GCAA_Source_GCAA_UI_Health_BaseHealthUI_h_19_SPARSE_DATA \
	GCAA_Source_GCAA_UI_Health_BaseHealthUI_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	GCAA_Source_GCAA_UI_Health_BaseHealthUI_h_19_INCLASS_NO_PURE_DECLS \
	GCAA_Source_GCAA_UI_Health_BaseHealthUI_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GCAA_API UClass* StaticClass<class UBaseHealthUI>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GCAA_Source_GCAA_UI_Health_BaseHealthUI_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
