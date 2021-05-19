// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GCAA_NPCHealthBar_generated_h
#error "NPCHealthBar.generated.h already included, missing '#pragma once' in NPCHealthBar.h"
#endif
#define GCAA_NPCHealthBar_generated_h

#define GCAA_Source_GCAA_NPC_NPCHealthBar_h_16_SPARSE_DATA
#define GCAA_Source_GCAA_NPC_NPCHealthBar_h_16_RPC_WRAPPERS
#define GCAA_Source_GCAA_NPC_NPCHealthBar_h_16_RPC_WRAPPERS_NO_PURE_DECLS
#define GCAA_Source_GCAA_NPC_NPCHealthBar_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNPCHealthBar(); \
	friend struct Z_Construct_UClass_UNPCHealthBar_Statics; \
public: \
	DECLARE_CLASS(UNPCHealthBar, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GCAA"), NO_API) \
	DECLARE_SERIALIZER(UNPCHealthBar)


#define GCAA_Source_GCAA_NPC_NPCHealthBar_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUNPCHealthBar(); \
	friend struct Z_Construct_UClass_UNPCHealthBar_Statics; \
public: \
	DECLARE_CLASS(UNPCHealthBar, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GCAA"), NO_API) \
	DECLARE_SERIALIZER(UNPCHealthBar)


#define GCAA_Source_GCAA_NPC_NPCHealthBar_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNPCHealthBar(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNPCHealthBar) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNPCHealthBar); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNPCHealthBar); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNPCHealthBar(UNPCHealthBar&&); \
	NO_API UNPCHealthBar(const UNPCHealthBar&); \
public:


#define GCAA_Source_GCAA_NPC_NPCHealthBar_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNPCHealthBar(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNPCHealthBar(UNPCHealthBar&&); \
	NO_API UNPCHealthBar(const UNPCHealthBar&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNPCHealthBar); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNPCHealthBar); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNPCHealthBar)


#define GCAA_Source_GCAA_NPC_NPCHealthBar_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__health() { return STRUCT_OFFSET(UNPCHealthBar, health); }


#define GCAA_Source_GCAA_NPC_NPCHealthBar_h_13_PROLOG
#define GCAA_Source_GCAA_NPC_NPCHealthBar_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GCAA_Source_GCAA_NPC_NPCHealthBar_h_16_PRIVATE_PROPERTY_OFFSET \
	GCAA_Source_GCAA_NPC_NPCHealthBar_h_16_SPARSE_DATA \
	GCAA_Source_GCAA_NPC_NPCHealthBar_h_16_RPC_WRAPPERS \
	GCAA_Source_GCAA_NPC_NPCHealthBar_h_16_INCLASS \
	GCAA_Source_GCAA_NPC_NPCHealthBar_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GCAA_Source_GCAA_NPC_NPCHealthBar_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GCAA_Source_GCAA_NPC_NPCHealthBar_h_16_PRIVATE_PROPERTY_OFFSET \
	GCAA_Source_GCAA_NPC_NPCHealthBar_h_16_SPARSE_DATA \
	GCAA_Source_GCAA_NPC_NPCHealthBar_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	GCAA_Source_GCAA_NPC_NPCHealthBar_h_16_INCLASS_NO_PURE_DECLS \
	GCAA_Source_GCAA_NPC_NPCHealthBar_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GCAA_API UClass* StaticClass<class UNPCHealthBar>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GCAA_Source_GCAA_NPC_NPCHealthBar_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
