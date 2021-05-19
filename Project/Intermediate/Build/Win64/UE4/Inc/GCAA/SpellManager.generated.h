// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GCAA_SpellManager_generated_h
#error "SpellManager.generated.h already included, missing '#pragma once' in SpellManager.h"
#endif
#define GCAA_SpellManager_generated_h

#define GCAA_Source_GCAA_SpellManager_SpellManager_h_26_SPARSE_DATA
#define GCAA_Source_GCAA_SpellManager_SpellManager_h_26_RPC_WRAPPERS
#define GCAA_Source_GCAA_SpellManager_SpellManager_h_26_RPC_WRAPPERS_NO_PURE_DECLS
#define GCAA_Source_GCAA_SpellManager_SpellManager_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASpellManager(); \
	friend struct Z_Construct_UClass_ASpellManager_Statics; \
public: \
	DECLARE_CLASS(ASpellManager, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GCAA"), NO_API) \
	DECLARE_SERIALIZER(ASpellManager)


#define GCAA_Source_GCAA_SpellManager_SpellManager_h_26_INCLASS \
private: \
	static void StaticRegisterNativesASpellManager(); \
	friend struct Z_Construct_UClass_ASpellManager_Statics; \
public: \
	DECLARE_CLASS(ASpellManager, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GCAA"), NO_API) \
	DECLARE_SERIALIZER(ASpellManager)


#define GCAA_Source_GCAA_SpellManager_SpellManager_h_26_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASpellManager(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASpellManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASpellManager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASpellManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASpellManager(ASpellManager&&); \
	NO_API ASpellManager(const ASpellManager&); \
public:


#define GCAA_Source_GCAA_SpellManager_SpellManager_h_26_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASpellManager(ASpellManager&&); \
	NO_API ASpellManager(const ASpellManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASpellManager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASpellManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASpellManager)


#define GCAA_Source_GCAA_SpellManager_SpellManager_h_26_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__acSpellsAsleep() { return STRUCT_OFFSET(ASpellManager, acSpellsAsleep); } \
	FORCEINLINE static uint32 __PPO__mpcBlink() { return STRUCT_OFFSET(ASpellManager, mpcBlink); }


#define GCAA_Source_GCAA_SpellManager_SpellManager_h_23_PROLOG
#define GCAA_Source_GCAA_SpellManager_SpellManager_h_26_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GCAA_Source_GCAA_SpellManager_SpellManager_h_26_PRIVATE_PROPERTY_OFFSET \
	GCAA_Source_GCAA_SpellManager_SpellManager_h_26_SPARSE_DATA \
	GCAA_Source_GCAA_SpellManager_SpellManager_h_26_RPC_WRAPPERS \
	GCAA_Source_GCAA_SpellManager_SpellManager_h_26_INCLASS \
	GCAA_Source_GCAA_SpellManager_SpellManager_h_26_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GCAA_Source_GCAA_SpellManager_SpellManager_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GCAA_Source_GCAA_SpellManager_SpellManager_h_26_PRIVATE_PROPERTY_OFFSET \
	GCAA_Source_GCAA_SpellManager_SpellManager_h_26_SPARSE_DATA \
	GCAA_Source_GCAA_SpellManager_SpellManager_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	GCAA_Source_GCAA_SpellManager_SpellManager_h_26_INCLASS_NO_PURE_DECLS \
	GCAA_Source_GCAA_SpellManager_SpellManager_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GCAA_API UClass* StaticClass<class ASpellManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GCAA_Source_GCAA_SpellManager_SpellManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
