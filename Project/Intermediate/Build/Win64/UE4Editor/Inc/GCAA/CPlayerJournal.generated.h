// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ACJournalPickup;
#ifdef GCAA_CPlayerJournal_generated_h
#error "CPlayerJournal.generated.h already included, missing '#pragma once' in CPlayerJournal.h"
#endif
#define GCAA_CPlayerJournal_generated_h

#define GCAA_Source_GCAA_CPlayerJournal_h_28_SPARSE_DATA
#define GCAA_Source_GCAA_CPlayerJournal_h_28_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetPlayerJournal); \
	DECLARE_FUNCTION(execSearchForItemInJournal); \
	DECLARE_FUNCTION(execAddItemToJournal);


#define GCAA_Source_GCAA_CPlayerJournal_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetPlayerJournal); \
	DECLARE_FUNCTION(execSearchForItemInJournal); \
	DECLARE_FUNCTION(execAddItemToJournal);


#define GCAA_Source_GCAA_CPlayerJournal_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCPlayerJournal(); \
	friend struct Z_Construct_UClass_UCPlayerJournal_Statics; \
public: \
	DECLARE_CLASS(UCPlayerJournal, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GCAA"), NO_API) \
	DECLARE_SERIALIZER(UCPlayerJournal)


#define GCAA_Source_GCAA_CPlayerJournal_h_28_INCLASS \
private: \
	static void StaticRegisterNativesUCPlayerJournal(); \
	friend struct Z_Construct_UClass_UCPlayerJournal_Statics; \
public: \
	DECLARE_CLASS(UCPlayerJournal, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GCAA"), NO_API) \
	DECLARE_SERIALIZER(UCPlayerJournal)


#define GCAA_Source_GCAA_CPlayerJournal_h_28_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCPlayerJournal(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCPlayerJournal) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCPlayerJournal); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCPlayerJournal); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCPlayerJournal(UCPlayerJournal&&); \
	NO_API UCPlayerJournal(const UCPlayerJournal&); \
public:


#define GCAA_Source_GCAA_CPlayerJournal_h_28_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCPlayerJournal(UCPlayerJournal&&); \
	NO_API UCPlayerJournal(const UCPlayerJournal&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCPlayerJournal); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCPlayerJournal); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCPlayerJournal)


#define GCAA_Source_GCAA_CPlayerJournal_h_28_PRIVATE_PROPERTY_OFFSET
#define GCAA_Source_GCAA_CPlayerJournal_h_25_PROLOG
#define GCAA_Source_GCAA_CPlayerJournal_h_28_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GCAA_Source_GCAA_CPlayerJournal_h_28_PRIVATE_PROPERTY_OFFSET \
	GCAA_Source_GCAA_CPlayerJournal_h_28_SPARSE_DATA \
	GCAA_Source_GCAA_CPlayerJournal_h_28_RPC_WRAPPERS \
	GCAA_Source_GCAA_CPlayerJournal_h_28_INCLASS \
	GCAA_Source_GCAA_CPlayerJournal_h_28_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GCAA_Source_GCAA_CPlayerJournal_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GCAA_Source_GCAA_CPlayerJournal_h_28_PRIVATE_PROPERTY_OFFSET \
	GCAA_Source_GCAA_CPlayerJournal_h_28_SPARSE_DATA \
	GCAA_Source_GCAA_CPlayerJournal_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	GCAA_Source_GCAA_CPlayerJournal_h_28_INCLASS_NO_PURE_DECLS \
	GCAA_Source_GCAA_CPlayerJournal_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GCAA_API UClass* StaticClass<class UCPlayerJournal>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GCAA_Source_GCAA_CPlayerJournal_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
