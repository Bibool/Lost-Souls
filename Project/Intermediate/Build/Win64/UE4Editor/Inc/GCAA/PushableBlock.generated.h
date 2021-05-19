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
#ifdef GCAA_PushableBlock_generated_h
#error "PushableBlock.generated.h already included, missing '#pragma once' in PushableBlock.h"
#endif
#define GCAA_PushableBlock_generated_h

#define GCAA_Source_GCAA_DynamicEnvironment_PushableBlock_h_22_SPARSE_DATA
#define GCAA_Source_GCAA_DynamicEnvironment_PushableBlock_h_22_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnOverlapEnd); \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define GCAA_Source_GCAA_DynamicEnvironment_PushableBlock_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnOverlapEnd); \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define GCAA_Source_GCAA_DynamicEnvironment_PushableBlock_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPushableBlock(); \
	friend struct Z_Construct_UClass_APushableBlock_Statics; \
public: \
	DECLARE_CLASS(APushableBlock, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GCAA"), NO_API) \
	DECLARE_SERIALIZER(APushableBlock)


#define GCAA_Source_GCAA_DynamicEnvironment_PushableBlock_h_22_INCLASS \
private: \
	static void StaticRegisterNativesAPushableBlock(); \
	friend struct Z_Construct_UClass_APushableBlock_Statics; \
public: \
	DECLARE_CLASS(APushableBlock, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GCAA"), NO_API) \
	DECLARE_SERIALIZER(APushableBlock)


#define GCAA_Source_GCAA_DynamicEnvironment_PushableBlock_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APushableBlock(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APushableBlock) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APushableBlock); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APushableBlock); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APushableBlock(APushableBlock&&); \
	NO_API APushableBlock(const APushableBlock&); \
public:


#define GCAA_Source_GCAA_DynamicEnvironment_PushableBlock_h_22_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APushableBlock(APushableBlock&&); \
	NO_API APushableBlock(const APushableBlock&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APushableBlock); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APushableBlock); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APushableBlock)


#define GCAA_Source_GCAA_DynamicEnvironment_PushableBlock_h_22_PRIVATE_PROPERTY_OFFSET
#define GCAA_Source_GCAA_DynamicEnvironment_PushableBlock_h_19_PROLOG
#define GCAA_Source_GCAA_DynamicEnvironment_PushableBlock_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GCAA_Source_GCAA_DynamicEnvironment_PushableBlock_h_22_PRIVATE_PROPERTY_OFFSET \
	GCAA_Source_GCAA_DynamicEnvironment_PushableBlock_h_22_SPARSE_DATA \
	GCAA_Source_GCAA_DynamicEnvironment_PushableBlock_h_22_RPC_WRAPPERS \
	GCAA_Source_GCAA_DynamicEnvironment_PushableBlock_h_22_INCLASS \
	GCAA_Source_GCAA_DynamicEnvironment_PushableBlock_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GCAA_Source_GCAA_DynamicEnvironment_PushableBlock_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GCAA_Source_GCAA_DynamicEnvironment_PushableBlock_h_22_PRIVATE_PROPERTY_OFFSET \
	GCAA_Source_GCAA_DynamicEnvironment_PushableBlock_h_22_SPARSE_DATA \
	GCAA_Source_GCAA_DynamicEnvironment_PushableBlock_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	GCAA_Source_GCAA_DynamicEnvironment_PushableBlock_h_22_INCLASS_NO_PURE_DECLS \
	GCAA_Source_GCAA_DynamicEnvironment_PushableBlock_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GCAA_API UClass* StaticClass<class APushableBlock>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GCAA_Source_GCAA_DynamicEnvironment_PushableBlock_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
