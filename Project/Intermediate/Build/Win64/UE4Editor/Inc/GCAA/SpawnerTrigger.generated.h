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
#ifdef GCAA_SpawnerTrigger_generated_h
#error "SpawnerTrigger.generated.h already included, missing '#pragma once' in SpawnerTrigger.h"
#endif
#define GCAA_SpawnerTrigger_generated_h

#define GCAA_Source_GCAA_NPC_SpawnerTrigger_h_16_SPARSE_DATA
#define GCAA_Source_GCAA_NPC_SpawnerTrigger_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnOverlapEnd); \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define GCAA_Source_GCAA_NPC_SpawnerTrigger_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnOverlapEnd); \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define GCAA_Source_GCAA_NPC_SpawnerTrigger_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASpawnerTrigger(); \
	friend struct Z_Construct_UClass_ASpawnerTrigger_Statics; \
public: \
	DECLARE_CLASS(ASpawnerTrigger, AEnvironmentController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GCAA"), NO_API) \
	DECLARE_SERIALIZER(ASpawnerTrigger)


#define GCAA_Source_GCAA_NPC_SpawnerTrigger_h_16_INCLASS \
private: \
	static void StaticRegisterNativesASpawnerTrigger(); \
	friend struct Z_Construct_UClass_ASpawnerTrigger_Statics; \
public: \
	DECLARE_CLASS(ASpawnerTrigger, AEnvironmentController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GCAA"), NO_API) \
	DECLARE_SERIALIZER(ASpawnerTrigger)


#define GCAA_Source_GCAA_NPC_SpawnerTrigger_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASpawnerTrigger(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASpawnerTrigger) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASpawnerTrigger); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASpawnerTrigger); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASpawnerTrigger(ASpawnerTrigger&&); \
	NO_API ASpawnerTrigger(const ASpawnerTrigger&); \
public:


#define GCAA_Source_GCAA_NPC_SpawnerTrigger_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASpawnerTrigger(ASpawnerTrigger&&); \
	NO_API ASpawnerTrigger(const ASpawnerTrigger&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASpawnerTrigger); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASpawnerTrigger); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASpawnerTrigger)


#define GCAA_Source_GCAA_NPC_SpawnerTrigger_h_16_PRIVATE_PROPERTY_OFFSET
#define GCAA_Source_GCAA_NPC_SpawnerTrigger_h_13_PROLOG
#define GCAA_Source_GCAA_NPC_SpawnerTrigger_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GCAA_Source_GCAA_NPC_SpawnerTrigger_h_16_PRIVATE_PROPERTY_OFFSET \
	GCAA_Source_GCAA_NPC_SpawnerTrigger_h_16_SPARSE_DATA \
	GCAA_Source_GCAA_NPC_SpawnerTrigger_h_16_RPC_WRAPPERS \
	GCAA_Source_GCAA_NPC_SpawnerTrigger_h_16_INCLASS \
	GCAA_Source_GCAA_NPC_SpawnerTrigger_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GCAA_Source_GCAA_NPC_SpawnerTrigger_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GCAA_Source_GCAA_NPC_SpawnerTrigger_h_16_PRIVATE_PROPERTY_OFFSET \
	GCAA_Source_GCAA_NPC_SpawnerTrigger_h_16_SPARSE_DATA \
	GCAA_Source_GCAA_NPC_SpawnerTrigger_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	GCAA_Source_GCAA_NPC_SpawnerTrigger_h_16_INCLASS_NO_PURE_DECLS \
	GCAA_Source_GCAA_NPC_SpawnerTrigger_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GCAA_API UClass* StaticClass<class ASpawnerTrigger>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GCAA_Source_GCAA_NPC_SpawnerTrigger_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
