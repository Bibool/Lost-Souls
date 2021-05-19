// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GCAA_GamepadDetection_generated_h
#error "GamepadDetection.generated.h already included, missing '#pragma once' in GamepadDetection.h"
#endif
#define GCAA_GamepadDetection_generated_h

#define GCAA_Source_GCAA_GamepadDetection_h_15_SPARSE_DATA
#define GCAA_Source_GCAA_GamepadDetection_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execIsGamePadConnected);


#define GCAA_Source_GCAA_GamepadDetection_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIsGamePadConnected);


#define GCAA_Source_GCAA_GamepadDetection_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGamepadDetection(); \
	friend struct Z_Construct_UClass_UGamepadDetection_Statics; \
public: \
	DECLARE_CLASS(UGamepadDetection, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GCAA"), NO_API) \
	DECLARE_SERIALIZER(UGamepadDetection)


#define GCAA_Source_GCAA_GamepadDetection_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUGamepadDetection(); \
	friend struct Z_Construct_UClass_UGamepadDetection_Statics; \
public: \
	DECLARE_CLASS(UGamepadDetection, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GCAA"), NO_API) \
	DECLARE_SERIALIZER(UGamepadDetection)


#define GCAA_Source_GCAA_GamepadDetection_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGamepadDetection(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGamepadDetection) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGamepadDetection); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGamepadDetection); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGamepadDetection(UGamepadDetection&&); \
	NO_API UGamepadDetection(const UGamepadDetection&); \
public:


#define GCAA_Source_GCAA_GamepadDetection_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGamepadDetection(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGamepadDetection(UGamepadDetection&&); \
	NO_API UGamepadDetection(const UGamepadDetection&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGamepadDetection); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGamepadDetection); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGamepadDetection)


#define GCAA_Source_GCAA_GamepadDetection_h_15_PRIVATE_PROPERTY_OFFSET
#define GCAA_Source_GCAA_GamepadDetection_h_12_PROLOG
#define GCAA_Source_GCAA_GamepadDetection_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GCAA_Source_GCAA_GamepadDetection_h_15_PRIVATE_PROPERTY_OFFSET \
	GCAA_Source_GCAA_GamepadDetection_h_15_SPARSE_DATA \
	GCAA_Source_GCAA_GamepadDetection_h_15_RPC_WRAPPERS \
	GCAA_Source_GCAA_GamepadDetection_h_15_INCLASS \
	GCAA_Source_GCAA_GamepadDetection_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GCAA_Source_GCAA_GamepadDetection_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GCAA_Source_GCAA_GamepadDetection_h_15_PRIVATE_PROPERTY_OFFSET \
	GCAA_Source_GCAA_GamepadDetection_h_15_SPARSE_DATA \
	GCAA_Source_GCAA_GamepadDetection_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	GCAA_Source_GCAA_GamepadDetection_h_15_INCLASS_NO_PURE_DECLS \
	GCAA_Source_GCAA_GamepadDetection_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GCAA_API UClass* StaticClass<class UGamepadDetection>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GCAA_Source_GCAA_GamepadDetection_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
