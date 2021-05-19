// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GCAA_CWindblast_generated_h
#error "CWindblast.generated.h already included, missing '#pragma once' in CWindblast.h"
#endif
#define GCAA_CWindblast_generated_h

#define GCAA_Source_GCAA_SpellManager_Spells_CWindblast_h_25_SPARSE_DATA
#define GCAA_Source_GCAA_SpellManager_Spells_CWindblast_h_25_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execRestoreNPCState); \
	DECLARE_FUNCTION(execTimelineComplete); \
	DECLARE_FUNCTION(execApplyDisplacement);


#define GCAA_Source_GCAA_SpellManager_Spells_CWindblast_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRestoreNPCState); \
	DECLARE_FUNCTION(execTimelineComplete); \
	DECLARE_FUNCTION(execApplyDisplacement);


#define GCAA_Source_GCAA_SpellManager_Spells_CWindblast_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACWindblast(); \
	friend struct Z_Construct_UClass_ACWindblast_Statics; \
public: \
	DECLARE_CLASS(ACWindblast, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GCAA"), NO_API) \
	DECLARE_SERIALIZER(ACWindblast) \
	virtual UObject* _getUObject() const override { return const_cast<ACWindblast*>(this); }


#define GCAA_Source_GCAA_SpellManager_Spells_CWindblast_h_25_INCLASS \
private: \
	static void StaticRegisterNativesACWindblast(); \
	friend struct Z_Construct_UClass_ACWindblast_Statics; \
public: \
	DECLARE_CLASS(ACWindblast, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GCAA"), NO_API) \
	DECLARE_SERIALIZER(ACWindblast) \
	virtual UObject* _getUObject() const override { return const_cast<ACWindblast*>(this); }


#define GCAA_Source_GCAA_SpellManager_Spells_CWindblast_h_25_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACWindblast(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACWindblast) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACWindblast); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACWindblast); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACWindblast(ACWindblast&&); \
	NO_API ACWindblast(const ACWindblast&); \
public:


#define GCAA_Source_GCAA_SpellManager_Spells_CWindblast_h_25_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACWindblast(ACWindblast&&); \
	NO_API ACWindblast(const ACWindblast&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACWindblast); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACWindblast); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACWindblast)


#define GCAA_Source_GCAA_SpellManager_Spells_CWindblast_h_25_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__m_apsTargets() { return STRUCT_OFFSET(ACWindblast, m_apsTargets); } \
	FORCEINLINE static uint32 __PPO__m_sSpellStats() { return STRUCT_OFFSET(ACWindblast, m_sSpellStats); } \
	FORCEINLINE static uint32 __PPO__m_sRestoreControl() { return STRUCT_OFFSET(ACWindblast, m_sRestoreControl); } \
	FORCEINLINE static uint32 __PPO__m_pcSpellManager() { return STRUCT_OFFSET(ACWindblast, m_pcSpellManager); } \
	FORCEINLINE static uint32 __PPO__m_pcPlayer() { return STRUCT_OFFSET(ACWindblast, m_pcPlayer); } \
	FORCEINLINE static uint32 __PPO__m_sMoveBackWardTimeline() { return STRUCT_OFFSET(ACWindblast, m_sMoveBackWardTimeline); }


#define GCAA_Source_GCAA_SpellManager_Spells_CWindblast_h_22_PROLOG
#define GCAA_Source_GCAA_SpellManager_Spells_CWindblast_h_25_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GCAA_Source_GCAA_SpellManager_Spells_CWindblast_h_25_PRIVATE_PROPERTY_OFFSET \
	GCAA_Source_GCAA_SpellManager_Spells_CWindblast_h_25_SPARSE_DATA \
	GCAA_Source_GCAA_SpellManager_Spells_CWindblast_h_25_RPC_WRAPPERS \
	GCAA_Source_GCAA_SpellManager_Spells_CWindblast_h_25_INCLASS \
	GCAA_Source_GCAA_SpellManager_Spells_CWindblast_h_25_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GCAA_Source_GCAA_SpellManager_Spells_CWindblast_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GCAA_Source_GCAA_SpellManager_Spells_CWindblast_h_25_PRIVATE_PROPERTY_OFFSET \
	GCAA_Source_GCAA_SpellManager_Spells_CWindblast_h_25_SPARSE_DATA \
	GCAA_Source_GCAA_SpellManager_Spells_CWindblast_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	GCAA_Source_GCAA_SpellManager_Spells_CWindblast_h_25_INCLASS_NO_PURE_DECLS \
	GCAA_Source_GCAA_SpellManager_Spells_CWindblast_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GCAA_API UClass* StaticClass<class ACWindblast>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GCAA_Source_GCAA_SpellManager_Spells_CWindblast_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
