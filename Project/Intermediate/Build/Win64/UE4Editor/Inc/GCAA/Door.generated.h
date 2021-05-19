// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GCAA_Door_generated_h
#error "Door.generated.h already included, missing '#pragma once' in Door.h"
#endif
#define GCAA_Door_generated_h

#define GCAA_Source_GCAA_DynamicEnvironment_Door_h_28_SPARSE_DATA
#define GCAA_Source_GCAA_DynamicEnvironment_Door_h_28_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execHandleMovementProgress);


#define GCAA_Source_GCAA_DynamicEnvironment_Door_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHandleMovementProgress);


#define GCAA_Source_GCAA_DynamicEnvironment_Door_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADoor(); \
	friend struct Z_Construct_UClass_ADoor_Statics; \
public: \
	DECLARE_CLASS(ADoor, AEnvironmentItem, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GCAA"), NO_API) \
	DECLARE_SERIALIZER(ADoor)


#define GCAA_Source_GCAA_DynamicEnvironment_Door_h_28_INCLASS \
private: \
	static void StaticRegisterNativesADoor(); \
	friend struct Z_Construct_UClass_ADoor_Statics; \
public: \
	DECLARE_CLASS(ADoor, AEnvironmentItem, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GCAA"), NO_API) \
	DECLARE_SERIALIZER(ADoor)


#define GCAA_Source_GCAA_DynamicEnvironment_Door_h_28_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ADoor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ADoor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADoor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADoor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADoor(ADoor&&); \
	NO_API ADoor(const ADoor&); \
public:


#define GCAA_Source_GCAA_DynamicEnvironment_Door_h_28_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADoor(ADoor&&); \
	NO_API ADoor(const ADoor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADoor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADoor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADoor)


#define GCAA_Source_GCAA_DynamicEnvironment_Door_h_28_PRIVATE_PROPERTY_OFFSET
#define GCAA_Source_GCAA_DynamicEnvironment_Door_h_25_PROLOG
#define GCAA_Source_GCAA_DynamicEnvironment_Door_h_28_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GCAA_Source_GCAA_DynamicEnvironment_Door_h_28_PRIVATE_PROPERTY_OFFSET \
	GCAA_Source_GCAA_DynamicEnvironment_Door_h_28_SPARSE_DATA \
	GCAA_Source_GCAA_DynamicEnvironment_Door_h_28_RPC_WRAPPERS \
	GCAA_Source_GCAA_DynamicEnvironment_Door_h_28_INCLASS \
	GCAA_Source_GCAA_DynamicEnvironment_Door_h_28_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GCAA_Source_GCAA_DynamicEnvironment_Door_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GCAA_Source_GCAA_DynamicEnvironment_Door_h_28_PRIVATE_PROPERTY_OFFSET \
	GCAA_Source_GCAA_DynamicEnvironment_Door_h_28_SPARSE_DATA \
	GCAA_Source_GCAA_DynamicEnvironment_Door_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	GCAA_Source_GCAA_DynamicEnvironment_Door_h_28_INCLASS_NO_PURE_DECLS \
	GCAA_Source_GCAA_DynamicEnvironment_Door_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GCAA_API UClass* StaticClass<class ADoor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GCAA_Source_GCAA_DynamicEnvironment_Door_h


#define FOREACH_ENUM_EDOORMOVEMENTDIRECTION(op) \
	op(Up) \
	op(Left) \
	op(Right) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
