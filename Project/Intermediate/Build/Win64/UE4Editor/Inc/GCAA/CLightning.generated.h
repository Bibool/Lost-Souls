// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GCAA_CLightning_generated_h
#error "CLightning.generated.h already included, missing '#pragma once' in CLightning.h"
#endif
#define GCAA_CLightning_generated_h

#define GCAA_Source_GCAA_SpellManager_Spells_CLightning_h_17_SPARSE_DATA
#define GCAA_Source_GCAA_SpellManager_Spells_CLightning_h_17_RPC_WRAPPERS
#define GCAA_Source_GCAA_SpellManager_Spells_CLightning_h_17_RPC_WRAPPERS_NO_PURE_DECLS
#define GCAA_Source_GCAA_SpellManager_Spells_CLightning_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACLightning(); \
	friend struct Z_Construct_UClass_ACLightning_Statics; \
public: \
	DECLARE_CLASS(ACLightning, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GCAA"), NO_API) \
	DECLARE_SERIALIZER(ACLightning) \
	virtual UObject* _getUObject() const override { return const_cast<ACLightning*>(this); }


#define GCAA_Source_GCAA_SpellManager_Spells_CLightning_h_17_INCLASS \
private: \
	static void StaticRegisterNativesACLightning(); \
	friend struct Z_Construct_UClass_ACLightning_Statics; \
public: \
	DECLARE_CLASS(ACLightning, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GCAA"), NO_API) \
	DECLARE_SERIALIZER(ACLightning) \
	virtual UObject* _getUObject() const override { return const_cast<ACLightning*>(this); }


#define GCAA_Source_GCAA_SpellManager_Spells_CLightning_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACLightning(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACLightning) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACLightning); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACLightning); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACLightning(ACLightning&&); \
	NO_API ACLightning(const ACLightning&); \
public:


#define GCAA_Source_GCAA_SpellManager_Spells_CLightning_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACLightning(ACLightning&&); \
	NO_API ACLightning(const ACLightning&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACLightning); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACLightning); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACLightning)


#define GCAA_Source_GCAA_SpellManager_Spells_CLightning_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__m_pcSpellManager() { return STRUCT_OFFSET(ACLightning, m_pcSpellManager); } \
	FORCEINLINE static uint32 __PPO__m_pcPlayer() { return STRUCT_OFFSET(ACLightning, m_pcPlayer); } \
	FORCEINLINE static uint32 __PPO__m_sStats() { return STRUCT_OFFSET(ACLightning, m_sStats); } \
	FORCEINLINE static uint32 __PPO__m_pcPreviousTarget() { return STRUCT_OFFSET(ACLightning, m_pcPreviousTarget); } \
	FORCEINLINE static uint32 __PPO__m_pcCurrentTarget() { return STRUCT_OFFSET(ACLightning, m_pcCurrentTarget); } \
	FORCEINLINE static uint32 __PPO__m_sTriggerTimer() { return STRUCT_OFFSET(ACLightning, m_sTriggerTimer); } \
	FORCEINLINE static uint32 __PPO__m_sTypes() { return STRUCT_OFFSET(ACLightning, m_sTypes); }


#define GCAA_Source_GCAA_SpellManager_Spells_CLightning_h_14_PROLOG
#define GCAA_Source_GCAA_SpellManager_Spells_CLightning_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GCAA_Source_GCAA_SpellManager_Spells_CLightning_h_17_PRIVATE_PROPERTY_OFFSET \
	GCAA_Source_GCAA_SpellManager_Spells_CLightning_h_17_SPARSE_DATA \
	GCAA_Source_GCAA_SpellManager_Spells_CLightning_h_17_RPC_WRAPPERS \
	GCAA_Source_GCAA_SpellManager_Spells_CLightning_h_17_INCLASS \
	GCAA_Source_GCAA_SpellManager_Spells_CLightning_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GCAA_Source_GCAA_SpellManager_Spells_CLightning_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GCAA_Source_GCAA_SpellManager_Spells_CLightning_h_17_PRIVATE_PROPERTY_OFFSET \
	GCAA_Source_GCAA_SpellManager_Spells_CLightning_h_17_SPARSE_DATA \
	GCAA_Source_GCAA_SpellManager_Spells_CLightning_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	GCAA_Source_GCAA_SpellManager_Spells_CLightning_h_17_INCLASS_NO_PURE_DECLS \
	GCAA_Source_GCAA_SpellManager_Spells_CLightning_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GCAA_API UClass* StaticClass<class ACLightning>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GCAA_Source_GCAA_SpellManager_Spells_CLightning_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
