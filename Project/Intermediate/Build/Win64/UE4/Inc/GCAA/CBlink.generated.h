// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GCAA_CBlink_generated_h
#error "CBlink.generated.h already included, missing '#pragma once' in CBlink.h"
#endif
#define GCAA_CBlink_generated_h

#define GCAA_Source_GCAA_SpellManager_Spells_CBlink_h_19_SPARSE_DATA
#define GCAA_Source_GCAA_SpellManager_Spells_CBlink_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execZoomOut); \
	DECLARE_FUNCTION(execZoomIn);


#define GCAA_Source_GCAA_SpellManager_Spells_CBlink_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execZoomOut); \
	DECLARE_FUNCTION(execZoomIn);


#define GCAA_Source_GCAA_SpellManager_Spells_CBlink_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACBlink(); \
	friend struct Z_Construct_UClass_ACBlink_Statics; \
public: \
	DECLARE_CLASS(ACBlink, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GCAA"), NO_API) \
	DECLARE_SERIALIZER(ACBlink)


#define GCAA_Source_GCAA_SpellManager_Spells_CBlink_h_19_INCLASS \
private: \
	static void StaticRegisterNativesACBlink(); \
	friend struct Z_Construct_UClass_ACBlink_Statics; \
public: \
	DECLARE_CLASS(ACBlink, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GCAA"), NO_API) \
	DECLARE_SERIALIZER(ACBlink)


#define GCAA_Source_GCAA_SpellManager_Spells_CBlink_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACBlink(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACBlink) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACBlink); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACBlink); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACBlink(ACBlink&&); \
	NO_API ACBlink(const ACBlink&); \
public:


#define GCAA_Source_GCAA_SpellManager_Spells_CBlink_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACBlink(ACBlink&&); \
	NO_API ACBlink(const ACBlink&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACBlink); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACBlink); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACBlink)


#define GCAA_Source_GCAA_SpellManager_Spells_CBlink_h_19_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__mpcSpellManager() { return STRUCT_OFFSET(ACBlink, mpcSpellManager); } \
	FORCEINLINE static uint32 __PPO__mpcPlayer() { return STRUCT_OFFSET(ACBlink, mpcPlayer); }


#define GCAA_Source_GCAA_SpellManager_Spells_CBlink_h_16_PROLOG
#define GCAA_Source_GCAA_SpellManager_Spells_CBlink_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GCAA_Source_GCAA_SpellManager_Spells_CBlink_h_19_PRIVATE_PROPERTY_OFFSET \
	GCAA_Source_GCAA_SpellManager_Spells_CBlink_h_19_SPARSE_DATA \
	GCAA_Source_GCAA_SpellManager_Spells_CBlink_h_19_RPC_WRAPPERS \
	GCAA_Source_GCAA_SpellManager_Spells_CBlink_h_19_INCLASS \
	GCAA_Source_GCAA_SpellManager_Spells_CBlink_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GCAA_Source_GCAA_SpellManager_Spells_CBlink_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GCAA_Source_GCAA_SpellManager_Spells_CBlink_h_19_PRIVATE_PROPERTY_OFFSET \
	GCAA_Source_GCAA_SpellManager_Spells_CBlink_h_19_SPARSE_DATA \
	GCAA_Source_GCAA_SpellManager_Spells_CBlink_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	GCAA_Source_GCAA_SpellManager_Spells_CBlink_h_19_INCLASS_NO_PURE_DECLS \
	GCAA_Source_GCAA_SpellManager_Spells_CBlink_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GCAA_API UClass* StaticClass<class ACBlink>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GCAA_Source_GCAA_SpellManager_Spells_CBlink_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
