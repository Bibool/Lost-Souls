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
#ifdef GCAA_Spell_generated_h
#error "Spell.generated.h already included, missing '#pragma once' in Spell.h"
#endif
#define GCAA_Spell_generated_h

#define GCAA_Source_GCAA_SpellManager_Spells_Spell_h_20_SPARSE_DATA
#define GCAA_Source_GCAA_SpellManager_Spells_Spell_h_20_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnOverlapEnd); \
	DECLARE_FUNCTION(execOnOverlapBegin); \
	DECLARE_FUNCTION(execOnHit);


#define GCAA_Source_GCAA_SpellManager_Spells_Spell_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnOverlapEnd); \
	DECLARE_FUNCTION(execOnOverlapBegin); \
	DECLARE_FUNCTION(execOnHit);


#define GCAA_Source_GCAA_SpellManager_Spells_Spell_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASpell(); \
	friend struct Z_Construct_UClass_ASpell_Statics; \
public: \
	DECLARE_CLASS(ASpell, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GCAA"), NO_API) \
	DECLARE_SERIALIZER(ASpell) \
	virtual UObject* _getUObject() const override { return const_cast<ASpell*>(this); }


#define GCAA_Source_GCAA_SpellManager_Spells_Spell_h_20_INCLASS \
private: \
	static void StaticRegisterNativesASpell(); \
	friend struct Z_Construct_UClass_ASpell_Statics; \
public: \
	DECLARE_CLASS(ASpell, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GCAA"), NO_API) \
	DECLARE_SERIALIZER(ASpell) \
	virtual UObject* _getUObject() const override { return const_cast<ASpell*>(this); }


#define GCAA_Source_GCAA_SpellManager_Spells_Spell_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASpell(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASpell) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASpell); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASpell); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASpell(ASpell&&); \
	NO_API ASpell(const ASpell&); \
public:


#define GCAA_Source_GCAA_SpellManager_Spells_Spell_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASpell(ASpell&&); \
	NO_API ASpell(const ASpell&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASpell); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASpell); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASpell)


#define GCAA_Source_GCAA_SpellManager_Spells_Spell_h_20_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__m_pcPlayer() { return STRUCT_OFFSET(ASpell, m_pcPlayer); } \
	FORCEINLINE static uint32 __PPO__m_pcSpellManager() { return STRUCT_OFFSET(ASpell, m_pcSpellManager); }


#define GCAA_Source_GCAA_SpellManager_Spells_Spell_h_17_PROLOG
#define GCAA_Source_GCAA_SpellManager_Spells_Spell_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GCAA_Source_GCAA_SpellManager_Spells_Spell_h_20_PRIVATE_PROPERTY_OFFSET \
	GCAA_Source_GCAA_SpellManager_Spells_Spell_h_20_SPARSE_DATA \
	GCAA_Source_GCAA_SpellManager_Spells_Spell_h_20_RPC_WRAPPERS \
	GCAA_Source_GCAA_SpellManager_Spells_Spell_h_20_INCLASS \
	GCAA_Source_GCAA_SpellManager_Spells_Spell_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GCAA_Source_GCAA_SpellManager_Spells_Spell_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GCAA_Source_GCAA_SpellManager_Spells_Spell_h_20_PRIVATE_PROPERTY_OFFSET \
	GCAA_Source_GCAA_SpellManager_Spells_Spell_h_20_SPARSE_DATA \
	GCAA_Source_GCAA_SpellManager_Spells_Spell_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	GCAA_Source_GCAA_SpellManager_Spells_Spell_h_20_INCLASS_NO_PURE_DECLS \
	GCAA_Source_GCAA_SpellManager_Spells_Spell_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GCAA_API UClass* StaticClass<class ASpell>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GCAA_Source_GCAA_SpellManager_Spells_Spell_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
