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
#ifdef GCAA_InvisibleTriggerBox_generated_h
#error "InvisibleTriggerBox.generated.h already included, missing '#pragma once' in InvisibleTriggerBox.h"
#endif
#define GCAA_InvisibleTriggerBox_generated_h

#define GCAA_Source_GCAA_DynamicEnvironment_InvisibleTriggerBox_h_28_SPARSE_DATA
#define GCAA_Source_GCAA_DynamicEnvironment_InvisibleTriggerBox_h_28_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnOverlapEnd); \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define GCAA_Source_GCAA_DynamicEnvironment_InvisibleTriggerBox_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnOverlapEnd); \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define GCAA_Source_GCAA_DynamicEnvironment_InvisibleTriggerBox_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAInvisibleTriggerBox(); \
	friend struct Z_Construct_UClass_AInvisibleTriggerBox_Statics; \
public: \
	DECLARE_CLASS(AInvisibleTriggerBox, AEnvironmentController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GCAA"), NO_API) \
	DECLARE_SERIALIZER(AInvisibleTriggerBox)


#define GCAA_Source_GCAA_DynamicEnvironment_InvisibleTriggerBox_h_28_INCLASS \
private: \
	static void StaticRegisterNativesAInvisibleTriggerBox(); \
	friend struct Z_Construct_UClass_AInvisibleTriggerBox_Statics; \
public: \
	DECLARE_CLASS(AInvisibleTriggerBox, AEnvironmentController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GCAA"), NO_API) \
	DECLARE_SERIALIZER(AInvisibleTriggerBox)


#define GCAA_Source_GCAA_DynamicEnvironment_InvisibleTriggerBox_h_28_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AInvisibleTriggerBox(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AInvisibleTriggerBox) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AInvisibleTriggerBox); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AInvisibleTriggerBox); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AInvisibleTriggerBox(AInvisibleTriggerBox&&); \
	NO_API AInvisibleTriggerBox(const AInvisibleTriggerBox&); \
public:


#define GCAA_Source_GCAA_DynamicEnvironment_InvisibleTriggerBox_h_28_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AInvisibleTriggerBox(AInvisibleTriggerBox&&); \
	NO_API AInvisibleTriggerBox(const AInvisibleTriggerBox&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AInvisibleTriggerBox); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AInvisibleTriggerBox); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AInvisibleTriggerBox)


#define GCAA_Source_GCAA_DynamicEnvironment_InvisibleTriggerBox_h_28_PRIVATE_PROPERTY_OFFSET
#define GCAA_Source_GCAA_DynamicEnvironment_InvisibleTriggerBox_h_25_PROLOG
#define GCAA_Source_GCAA_DynamicEnvironment_InvisibleTriggerBox_h_28_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GCAA_Source_GCAA_DynamicEnvironment_InvisibleTriggerBox_h_28_PRIVATE_PROPERTY_OFFSET \
	GCAA_Source_GCAA_DynamicEnvironment_InvisibleTriggerBox_h_28_SPARSE_DATA \
	GCAA_Source_GCAA_DynamicEnvironment_InvisibleTriggerBox_h_28_RPC_WRAPPERS \
	GCAA_Source_GCAA_DynamicEnvironment_InvisibleTriggerBox_h_28_INCLASS \
	GCAA_Source_GCAA_DynamicEnvironment_InvisibleTriggerBox_h_28_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GCAA_Source_GCAA_DynamicEnvironment_InvisibleTriggerBox_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GCAA_Source_GCAA_DynamicEnvironment_InvisibleTriggerBox_h_28_PRIVATE_PROPERTY_OFFSET \
	GCAA_Source_GCAA_DynamicEnvironment_InvisibleTriggerBox_h_28_SPARSE_DATA \
	GCAA_Source_GCAA_DynamicEnvironment_InvisibleTriggerBox_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	GCAA_Source_GCAA_DynamicEnvironment_InvisibleTriggerBox_h_28_INCLASS_NO_PURE_DECLS \
	GCAA_Source_GCAA_DynamicEnvironment_InvisibleTriggerBox_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GCAA_API UClass* StaticClass<class AInvisibleTriggerBox>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GCAA_Source_GCAA_DynamicEnvironment_InvisibleTriggerBox_h


#define FOREACH_ENUM_EINVISIBLETRIGGERBOXMODE(op) \
	op(OneShot) \
	op(EntryAndExit) \
	op(EntryOnly) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
