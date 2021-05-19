// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GCAA_CMainPlayerController_generated_h
#error "CMainPlayerController.generated.h already included, missing '#pragma once' in CMainPlayerController.h"
#endif
#define GCAA_CMainPlayerController_generated_h

#define GCAA_Source_GCAA_CMainPlayerController_h_15_SPARSE_DATA
#define GCAA_Source_GCAA_CMainPlayerController_h_15_RPC_WRAPPERS
#define GCAA_Source_GCAA_CMainPlayerController_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define GCAA_Source_GCAA_CMainPlayerController_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACMainPlayerController(); \
	friend struct Z_Construct_UClass_ACMainPlayerController_Statics; \
public: \
	DECLARE_CLASS(ACMainPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GCAA"), NO_API) \
	DECLARE_SERIALIZER(ACMainPlayerController)


#define GCAA_Source_GCAA_CMainPlayerController_h_15_INCLASS \
private: \
	static void StaticRegisterNativesACMainPlayerController(); \
	friend struct Z_Construct_UClass_ACMainPlayerController_Statics; \
public: \
	DECLARE_CLASS(ACMainPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GCAA"), NO_API) \
	DECLARE_SERIALIZER(ACMainPlayerController)


#define GCAA_Source_GCAA_CMainPlayerController_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACMainPlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACMainPlayerController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACMainPlayerController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACMainPlayerController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACMainPlayerController(ACMainPlayerController&&); \
	NO_API ACMainPlayerController(const ACMainPlayerController&); \
public:


#define GCAA_Source_GCAA_CMainPlayerController_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACMainPlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACMainPlayerController(ACMainPlayerController&&); \
	NO_API ACMainPlayerController(const ACMainPlayerController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACMainPlayerController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACMainPlayerController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACMainPlayerController)


#define GCAA_Source_GCAA_CMainPlayerController_h_15_PRIVATE_PROPERTY_OFFSET
#define GCAA_Source_GCAA_CMainPlayerController_h_12_PROLOG
#define GCAA_Source_GCAA_CMainPlayerController_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GCAA_Source_GCAA_CMainPlayerController_h_15_PRIVATE_PROPERTY_OFFSET \
	GCAA_Source_GCAA_CMainPlayerController_h_15_SPARSE_DATA \
	GCAA_Source_GCAA_CMainPlayerController_h_15_RPC_WRAPPERS \
	GCAA_Source_GCAA_CMainPlayerController_h_15_INCLASS \
	GCAA_Source_GCAA_CMainPlayerController_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GCAA_Source_GCAA_CMainPlayerController_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GCAA_Source_GCAA_CMainPlayerController_h_15_PRIVATE_PROPERTY_OFFSET \
	GCAA_Source_GCAA_CMainPlayerController_h_15_SPARSE_DATA \
	GCAA_Source_GCAA_CMainPlayerController_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	GCAA_Source_GCAA_CMainPlayerController_h_15_INCLASS_NO_PURE_DECLS \
	GCAA_Source_GCAA_CMainPlayerController_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GCAA_API UClass* StaticClass<class ACMainPlayerController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GCAA_Source_GCAA_CMainPlayerController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
