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
struct FVector;
#ifdef GCAA_NPCRangedSpell_generated_h
#error "NPCRangedSpell.generated.h already included, missing '#pragma once' in NPCRangedSpell.h"
#endif
#define GCAA_NPCRangedSpell_generated_h

#define GCAA_Source_GCAA_NPC_NPCRangedSpell_h_16_SPARSE_DATA
#define GCAA_Source_GCAA_NPC_NPCRangedSpell_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnOverlapBegin); \
	DECLARE_FUNCTION(execOnHit);


#define GCAA_Source_GCAA_NPC_NPCRangedSpell_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnOverlapBegin); \
	DECLARE_FUNCTION(execOnHit);


#define GCAA_Source_GCAA_NPC_NPCRangedSpell_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesANPCRangedSpell(); \
	friend struct Z_Construct_UClass_ANPCRangedSpell_Statics; \
public: \
	DECLARE_CLASS(ANPCRangedSpell, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GCAA"), NO_API) \
	DECLARE_SERIALIZER(ANPCRangedSpell)


#define GCAA_Source_GCAA_NPC_NPCRangedSpell_h_16_INCLASS \
private: \
	static void StaticRegisterNativesANPCRangedSpell(); \
	friend struct Z_Construct_UClass_ANPCRangedSpell_Statics; \
public: \
	DECLARE_CLASS(ANPCRangedSpell, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GCAA"), NO_API) \
	DECLARE_SERIALIZER(ANPCRangedSpell)


#define GCAA_Source_GCAA_NPC_NPCRangedSpell_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ANPCRangedSpell(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ANPCRangedSpell) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANPCRangedSpell); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANPCRangedSpell); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ANPCRangedSpell(ANPCRangedSpell&&); \
	NO_API ANPCRangedSpell(const ANPCRangedSpell&); \
public:


#define GCAA_Source_GCAA_NPC_NPCRangedSpell_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ANPCRangedSpell(ANPCRangedSpell&&); \
	NO_API ANPCRangedSpell(const ANPCRangedSpell&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANPCRangedSpell); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANPCRangedSpell); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ANPCRangedSpell)


#define GCAA_Source_GCAA_NPC_NPCRangedSpell_h_16_PRIVATE_PROPERTY_OFFSET
#define GCAA_Source_GCAA_NPC_NPCRangedSpell_h_13_PROLOG
#define GCAA_Source_GCAA_NPC_NPCRangedSpell_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GCAA_Source_GCAA_NPC_NPCRangedSpell_h_16_PRIVATE_PROPERTY_OFFSET \
	GCAA_Source_GCAA_NPC_NPCRangedSpell_h_16_SPARSE_DATA \
	GCAA_Source_GCAA_NPC_NPCRangedSpell_h_16_RPC_WRAPPERS \
	GCAA_Source_GCAA_NPC_NPCRangedSpell_h_16_INCLASS \
	GCAA_Source_GCAA_NPC_NPCRangedSpell_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GCAA_Source_GCAA_NPC_NPCRangedSpell_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GCAA_Source_GCAA_NPC_NPCRangedSpell_h_16_PRIVATE_PROPERTY_OFFSET \
	GCAA_Source_GCAA_NPC_NPCRangedSpell_h_16_SPARSE_DATA \
	GCAA_Source_GCAA_NPC_NPCRangedSpell_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	GCAA_Source_GCAA_NPC_NPCRangedSpell_h_16_INCLASS_NO_PURE_DECLS \
	GCAA_Source_GCAA_NPC_NPCRangedSpell_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GCAA_API UClass* StaticClass<class ANPCRangedSpell>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GCAA_Source_GCAA_NPC_NPCRangedSpell_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
