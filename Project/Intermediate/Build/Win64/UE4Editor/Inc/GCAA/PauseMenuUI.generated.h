// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GCAA_PauseMenuUI_generated_h
#error "PauseMenuUI.generated.h already included, missing '#pragma once' in PauseMenuUI.h"
#endif
#define GCAA_PauseMenuUI_generated_h

#define GCAA_Source_GCAA_UI_PauseMenuUI_h_30_SPARSE_DATA
#define GCAA_Source_GCAA_UI_PauseMenuUI_h_30_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execJournalButtonClicked); \
	DECLARE_FUNCTION(execOptionsButtonClicked); \
	DECLARE_FUNCTION(execResumeButtonClicked);


#define GCAA_Source_GCAA_UI_PauseMenuUI_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execJournalButtonClicked); \
	DECLARE_FUNCTION(execOptionsButtonClicked); \
	DECLARE_FUNCTION(execResumeButtonClicked);


#define GCAA_Source_GCAA_UI_PauseMenuUI_h_30_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPauseMenuUI(); \
	friend struct Z_Construct_UClass_UPauseMenuUI_Statics; \
public: \
	DECLARE_CLASS(UPauseMenuUI, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GCAA"), NO_API) \
	DECLARE_SERIALIZER(UPauseMenuUI)


#define GCAA_Source_GCAA_UI_PauseMenuUI_h_30_INCLASS \
private: \
	static void StaticRegisterNativesUPauseMenuUI(); \
	friend struct Z_Construct_UClass_UPauseMenuUI_Statics; \
public: \
	DECLARE_CLASS(UPauseMenuUI, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GCAA"), NO_API) \
	DECLARE_SERIALIZER(UPauseMenuUI)


#define GCAA_Source_GCAA_UI_PauseMenuUI_h_30_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPauseMenuUI(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPauseMenuUI) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPauseMenuUI); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPauseMenuUI); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPauseMenuUI(UPauseMenuUI&&); \
	NO_API UPauseMenuUI(const UPauseMenuUI&); \
public:


#define GCAA_Source_GCAA_UI_PauseMenuUI_h_30_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPauseMenuUI(UPauseMenuUI&&); \
	NO_API UPauseMenuUI(const UPauseMenuUI&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPauseMenuUI); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPauseMenuUI); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPauseMenuUI)


#define GCAA_Source_GCAA_UI_PauseMenuUI_h_30_PRIVATE_PROPERTY_OFFSET
#define GCAA_Source_GCAA_UI_PauseMenuUI_h_27_PROLOG
#define GCAA_Source_GCAA_UI_PauseMenuUI_h_30_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GCAA_Source_GCAA_UI_PauseMenuUI_h_30_PRIVATE_PROPERTY_OFFSET \
	GCAA_Source_GCAA_UI_PauseMenuUI_h_30_SPARSE_DATA \
	GCAA_Source_GCAA_UI_PauseMenuUI_h_30_RPC_WRAPPERS \
	GCAA_Source_GCAA_UI_PauseMenuUI_h_30_INCLASS \
	GCAA_Source_GCAA_UI_PauseMenuUI_h_30_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GCAA_Source_GCAA_UI_PauseMenuUI_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GCAA_Source_GCAA_UI_PauseMenuUI_h_30_PRIVATE_PROPERTY_OFFSET \
	GCAA_Source_GCAA_UI_PauseMenuUI_h_30_SPARSE_DATA \
	GCAA_Source_GCAA_UI_PauseMenuUI_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	GCAA_Source_GCAA_UI_PauseMenuUI_h_30_INCLASS_NO_PURE_DECLS \
	GCAA_Source_GCAA_UI_PauseMenuUI_h_30_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GCAA_API UClass* StaticClass<class UPauseMenuUI>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GCAA_Source_GCAA_UI_PauseMenuUI_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
