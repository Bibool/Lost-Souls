// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef GCAA_PressurePlate_generated_h
#error "PressurePlate.generated.h already included, missing '#pragma once' in PressurePlate.h"
#endif
#define GCAA_PressurePlate_generated_h

#define GCAA_Source_GCAA_DynamicEnvironment_PressurePlate_h_23_SPARSE_DATA
#define GCAA_Source_GCAA_DynamicEnvironment_PressurePlate_h_23_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnOverlapEnd); \
	DECLARE_FUNCTION(execOnOverlapBegin); \
	DECLARE_FUNCTION(execHandleMovementProgress);


#define GCAA_Source_GCAA_DynamicEnvironment_PressurePlate_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnOverlapEnd); \
	DECLARE_FUNCTION(execOnOverlapBegin); \
	DECLARE_FUNCTION(execHandleMovementProgress);


#define GCAA_Source_GCAA_DynamicEnvironment_PressurePlate_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPressurePlate(); \
	friend struct Z_Construct_UClass_APressurePlate_Statics; \
public: \
	DECLARE_CLASS(APressurePlate, AEnvironmentController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GCAA"), NO_API) \
	DECLARE_SERIALIZER(APressurePlate)


#define GCAA_Source_GCAA_DynamicEnvironment_PressurePlate_h_23_INCLASS \
private: \
	static void StaticRegisterNativesAPressurePlate(); \
	friend struct Z_Construct_UClass_APressurePlate_Statics; \
public: \
	DECLARE_CLASS(APressurePlate, AEnvironmentController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GCAA"), NO_API) \
	DECLARE_SERIALIZER(APressurePlate)


#define GCAA_Source_GCAA_DynamicEnvironment_PressurePlate_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APressurePlate(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APressurePlate) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APressurePlate); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APressurePlate); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APressurePlate(APressurePlate&&); \
	NO_API APressurePlate(const APressurePlate&); \
public:


#define GCAA_Source_GCAA_DynamicEnvironment_PressurePlate_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APressurePlate(APressurePlate&&); \
	NO_API APressurePlate(const APressurePlate&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APressurePlate); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APressurePlate); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APressurePlate)


#define GCAA_Source_GCAA_DynamicEnvironment_PressurePlate_h_23_PRIVATE_PROPERTY_OFFSET
#define GCAA_Source_GCAA_DynamicEnvironment_PressurePlate_h_20_PROLOG
#define GCAA_Source_GCAA_DynamicEnvironment_PressurePlate_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GCAA_Source_GCAA_DynamicEnvironment_PressurePlate_h_23_PRIVATE_PROPERTY_OFFSET \
	GCAA_Source_GCAA_DynamicEnvironment_PressurePlate_h_23_SPARSE_DATA \
	GCAA_Source_GCAA_DynamicEnvironment_PressurePlate_h_23_RPC_WRAPPERS \
	GCAA_Source_GCAA_DynamicEnvironment_PressurePlate_h_23_INCLASS \
	GCAA_Source_GCAA_DynamicEnvironment_PressurePlate_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GCAA_Source_GCAA_DynamicEnvironment_PressurePlate_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GCAA_Source_GCAA_DynamicEnvironment_PressurePlate_h_23_PRIVATE_PROPERTY_OFFSET \
	GCAA_Source_GCAA_DynamicEnvironment_PressurePlate_h_23_SPARSE_DATA \
	GCAA_Source_GCAA_DynamicEnvironment_PressurePlate_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	GCAA_Source_GCAA_DynamicEnvironment_PressurePlate_h_23_INCLASS_NO_PURE_DECLS \
	GCAA_Source_GCAA_DynamicEnvironment_PressurePlate_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GCAA_API UClass* StaticClass<class APressurePlate>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GCAA_Source_GCAA_DynamicEnvironment_PressurePlate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
