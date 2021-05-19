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
#ifdef GCAA_CLevelTransition_generated_h
#error "CLevelTransition.generated.h already included, missing '#pragma once' in CLevelTransition.h"
#endif
#define GCAA_CLevelTransition_generated_h

#define GCAA_Source_GCAA_UpgradeSystem_CLevelTransition_h_12_SPARSE_DATA
#define GCAA_Source_GCAA_UpgradeSystem_CLevelTransition_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define GCAA_Source_GCAA_UpgradeSystem_CLevelTransition_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define GCAA_Source_GCAA_UpgradeSystem_CLevelTransition_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACLevelTransition(); \
	friend struct Z_Construct_UClass_ACLevelTransition_Statics; \
public: \
	DECLARE_CLASS(ACLevelTransition, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GCAA"), NO_API) \
	DECLARE_SERIALIZER(ACLevelTransition)


#define GCAA_Source_GCAA_UpgradeSystem_CLevelTransition_h_12_INCLASS \
private: \
	static void StaticRegisterNativesACLevelTransition(); \
	friend struct Z_Construct_UClass_ACLevelTransition_Statics; \
public: \
	DECLARE_CLASS(ACLevelTransition, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GCAA"), NO_API) \
	DECLARE_SERIALIZER(ACLevelTransition)


#define GCAA_Source_GCAA_UpgradeSystem_CLevelTransition_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACLevelTransition(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACLevelTransition) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACLevelTransition); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACLevelTransition); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACLevelTransition(ACLevelTransition&&); \
	NO_API ACLevelTransition(const ACLevelTransition&); \
public:


#define GCAA_Source_GCAA_UpgradeSystem_CLevelTransition_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACLevelTransition(ACLevelTransition&&); \
	NO_API ACLevelTransition(const ACLevelTransition&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACLevelTransition); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACLevelTransition); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACLevelTransition)


#define GCAA_Source_GCAA_UpgradeSystem_CLevelTransition_h_12_PRIVATE_PROPERTY_OFFSET
#define GCAA_Source_GCAA_UpgradeSystem_CLevelTransition_h_9_PROLOG
#define GCAA_Source_GCAA_UpgradeSystem_CLevelTransition_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GCAA_Source_GCAA_UpgradeSystem_CLevelTransition_h_12_PRIVATE_PROPERTY_OFFSET \
	GCAA_Source_GCAA_UpgradeSystem_CLevelTransition_h_12_SPARSE_DATA \
	GCAA_Source_GCAA_UpgradeSystem_CLevelTransition_h_12_RPC_WRAPPERS \
	GCAA_Source_GCAA_UpgradeSystem_CLevelTransition_h_12_INCLASS \
	GCAA_Source_GCAA_UpgradeSystem_CLevelTransition_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GCAA_Source_GCAA_UpgradeSystem_CLevelTransition_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GCAA_Source_GCAA_UpgradeSystem_CLevelTransition_h_12_PRIVATE_PROPERTY_OFFSET \
	GCAA_Source_GCAA_UpgradeSystem_CLevelTransition_h_12_SPARSE_DATA \
	GCAA_Source_GCAA_UpgradeSystem_CLevelTransition_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	GCAA_Source_GCAA_UpgradeSystem_CLevelTransition_h_12_INCLASS_NO_PURE_DECLS \
	GCAA_Source_GCAA_UpgradeSystem_CLevelTransition_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GCAA_API UClass* StaticClass<class ACLevelTransition>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GCAA_Source_GCAA_UpgradeSystem_CLevelTransition_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
