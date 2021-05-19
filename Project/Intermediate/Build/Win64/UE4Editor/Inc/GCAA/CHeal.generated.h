// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GCAA_CHeal_generated_h
#error "CHeal.generated.h already included, missing '#pragma once' in CHeal.h"
#endif
#define GCAA_CHeal_generated_h

#define GCAA_Source_GCAA_SpellManager_Spells_CHeal_h_21_SPARSE_DATA
#define GCAA_Source_GCAA_SpellManager_Spells_CHeal_h_21_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCB_Heal);


#define GCAA_Source_GCAA_SpellManager_Spells_CHeal_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCB_Heal);


#define GCAA_Source_GCAA_SpellManager_Spells_CHeal_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACHeal(); \
	friend struct Z_Construct_UClass_ACHeal_Statics; \
public: \
	DECLARE_CLASS(ACHeal, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GCAA"), NO_API) \
	DECLARE_SERIALIZER(ACHeal) \
	virtual UObject* _getUObject() const override { return const_cast<ACHeal*>(this); }


#define GCAA_Source_GCAA_SpellManager_Spells_CHeal_h_21_INCLASS \
private: \
	static void StaticRegisterNativesACHeal(); \
	friend struct Z_Construct_UClass_ACHeal_Statics; \
public: \
	DECLARE_CLASS(ACHeal, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GCAA"), NO_API) \
	DECLARE_SERIALIZER(ACHeal) \
	virtual UObject* _getUObject() const override { return const_cast<ACHeal*>(this); }


#define GCAA_Source_GCAA_SpellManager_Spells_CHeal_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACHeal(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACHeal) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACHeal); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACHeal); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACHeal(ACHeal&&); \
	NO_API ACHeal(const ACHeal&); \
public:


#define GCAA_Source_GCAA_SpellManager_Spells_CHeal_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACHeal(ACHeal&&); \
	NO_API ACHeal(const ACHeal&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACHeal); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACHeal); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACHeal)


#define GCAA_Source_GCAA_SpellManager_Spells_CHeal_h_21_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__m_pcPlayer() { return STRUCT_OFFSET(ACHeal, m_pcPlayer); } \
	FORCEINLINE static uint32 __PPO__m_pcManager() { return STRUCT_OFFSET(ACHeal, m_pcManager); } \
	FORCEINLINE static uint32 __PPO__m_sHealTick() { return STRUCT_OFFSET(ACHeal, m_sHealTick); }


#define GCAA_Source_GCAA_SpellManager_Spells_CHeal_h_18_PROLOG
#define GCAA_Source_GCAA_SpellManager_Spells_CHeal_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GCAA_Source_GCAA_SpellManager_Spells_CHeal_h_21_PRIVATE_PROPERTY_OFFSET \
	GCAA_Source_GCAA_SpellManager_Spells_CHeal_h_21_SPARSE_DATA \
	GCAA_Source_GCAA_SpellManager_Spells_CHeal_h_21_RPC_WRAPPERS \
	GCAA_Source_GCAA_SpellManager_Spells_CHeal_h_21_INCLASS \
	GCAA_Source_GCAA_SpellManager_Spells_CHeal_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GCAA_Source_GCAA_SpellManager_Spells_CHeal_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GCAA_Source_GCAA_SpellManager_Spells_CHeal_h_21_PRIVATE_PROPERTY_OFFSET \
	GCAA_Source_GCAA_SpellManager_Spells_CHeal_h_21_SPARSE_DATA \
	GCAA_Source_GCAA_SpellManager_Spells_CHeal_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	GCAA_Source_GCAA_SpellManager_Spells_CHeal_h_21_INCLASS_NO_PURE_DECLS \
	GCAA_Source_GCAA_SpellManager_Spells_CHeal_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GCAA_API UClass* StaticClass<class ACHeal>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GCAA_Source_GCAA_SpellManager_Spells_CHeal_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
