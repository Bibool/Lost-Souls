// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GCAA_PatrolPath_generated_h
#error "PatrolPath.generated.h already included, missing '#pragma once' in PatrolPath.h"
#endif
#define GCAA_PatrolPath_generated_h

#define GCAA_Source_GCAA_NPC_PatrolPath_h_10_SPARSE_DATA
#define GCAA_Source_GCAA_NPC_PatrolPath_h_10_RPC_WRAPPERS
#define GCAA_Source_GCAA_NPC_PatrolPath_h_10_RPC_WRAPPERS_NO_PURE_DECLS
#define GCAA_Source_GCAA_NPC_PatrolPath_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPatrolPath(); \
	friend struct Z_Construct_UClass_APatrolPath_Statics; \
public: \
	DECLARE_CLASS(APatrolPath, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GCAA"), NO_API) \
	DECLARE_SERIALIZER(APatrolPath)


#define GCAA_Source_GCAA_NPC_PatrolPath_h_10_INCLASS \
private: \
	static void StaticRegisterNativesAPatrolPath(); \
	friend struct Z_Construct_UClass_APatrolPath_Statics; \
public: \
	DECLARE_CLASS(APatrolPath, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GCAA"), NO_API) \
	DECLARE_SERIALIZER(APatrolPath)


#define GCAA_Source_GCAA_NPC_PatrolPath_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APatrolPath(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APatrolPath) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APatrolPath); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APatrolPath); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APatrolPath(APatrolPath&&); \
	NO_API APatrolPath(const APatrolPath&); \
public:


#define GCAA_Source_GCAA_NPC_PatrolPath_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APatrolPath(APatrolPath&&); \
	NO_API APatrolPath(const APatrolPath&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APatrolPath); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APatrolPath); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APatrolPath)


#define GCAA_Source_GCAA_NPC_PatrolPath_h_10_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__patrolPoints() { return STRUCT_OFFSET(APatrolPath, patrolPoints); }


#define GCAA_Source_GCAA_NPC_PatrolPath_h_7_PROLOG
#define GCAA_Source_GCAA_NPC_PatrolPath_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GCAA_Source_GCAA_NPC_PatrolPath_h_10_PRIVATE_PROPERTY_OFFSET \
	GCAA_Source_GCAA_NPC_PatrolPath_h_10_SPARSE_DATA \
	GCAA_Source_GCAA_NPC_PatrolPath_h_10_RPC_WRAPPERS \
	GCAA_Source_GCAA_NPC_PatrolPath_h_10_INCLASS \
	GCAA_Source_GCAA_NPC_PatrolPath_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GCAA_Source_GCAA_NPC_PatrolPath_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GCAA_Source_GCAA_NPC_PatrolPath_h_10_PRIVATE_PROPERTY_OFFSET \
	GCAA_Source_GCAA_NPC_PatrolPath_h_10_SPARSE_DATA \
	GCAA_Source_GCAA_NPC_PatrolPath_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	GCAA_Source_GCAA_NPC_PatrolPath_h_10_INCLASS_NO_PURE_DECLS \
	GCAA_Source_GCAA_NPC_PatrolPath_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GCAA_API UClass* StaticClass<class APatrolPath>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GCAA_Source_GCAA_NPC_PatrolPath_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
