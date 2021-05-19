// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
class ACPickup;
#ifdef GCAA_CPlayerInventory_generated_h
#error "CPlayerInventory.generated.h already included, missing '#pragma once' in CPlayerInventory.h"
#endif
#define GCAA_CPlayerInventory_generated_h

#define GCAA_Source_GCAA_CPlayerInventory_h_23_SPARSE_DATA
#define GCAA_Source_GCAA_CPlayerInventory_h_23_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCheckForValidDropDirection); \
	DECLARE_FUNCTION(execSearchForItemInInventory); \
	DECLARE_FUNCTION(execRemoveLastItemCollectedFromInventory); \
	DECLARE_FUNCTION(execAddItemToInventory);


#define GCAA_Source_GCAA_CPlayerInventory_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCheckForValidDropDirection); \
	DECLARE_FUNCTION(execSearchForItemInInventory); \
	DECLARE_FUNCTION(execRemoveLastItemCollectedFromInventory); \
	DECLARE_FUNCTION(execAddItemToInventory);


#define GCAA_Source_GCAA_CPlayerInventory_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCPlayerInventory(); \
	friend struct Z_Construct_UClass_UCPlayerInventory_Statics; \
public: \
	DECLARE_CLASS(UCPlayerInventory, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GCAA"), NO_API) \
	DECLARE_SERIALIZER(UCPlayerInventory)


#define GCAA_Source_GCAA_CPlayerInventory_h_23_INCLASS \
private: \
	static void StaticRegisterNativesUCPlayerInventory(); \
	friend struct Z_Construct_UClass_UCPlayerInventory_Statics; \
public: \
	DECLARE_CLASS(UCPlayerInventory, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GCAA"), NO_API) \
	DECLARE_SERIALIZER(UCPlayerInventory)


#define GCAA_Source_GCAA_CPlayerInventory_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCPlayerInventory(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCPlayerInventory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCPlayerInventory); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCPlayerInventory); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCPlayerInventory(UCPlayerInventory&&); \
	NO_API UCPlayerInventory(const UCPlayerInventory&); \
public:


#define GCAA_Source_GCAA_CPlayerInventory_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCPlayerInventory(UCPlayerInventory&&); \
	NO_API UCPlayerInventory(const UCPlayerInventory&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCPlayerInventory); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCPlayerInventory); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCPlayerInventory)


#define GCAA_Source_GCAA_CPlayerInventory_h_23_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__aPlayerInventory() { return STRUCT_OFFSET(UCPlayerInventory, aPlayerInventory); }


#define GCAA_Source_GCAA_CPlayerInventory_h_20_PROLOG
#define GCAA_Source_GCAA_CPlayerInventory_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GCAA_Source_GCAA_CPlayerInventory_h_23_PRIVATE_PROPERTY_OFFSET \
	GCAA_Source_GCAA_CPlayerInventory_h_23_SPARSE_DATA \
	GCAA_Source_GCAA_CPlayerInventory_h_23_RPC_WRAPPERS \
	GCAA_Source_GCAA_CPlayerInventory_h_23_INCLASS \
	GCAA_Source_GCAA_CPlayerInventory_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GCAA_Source_GCAA_CPlayerInventory_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GCAA_Source_GCAA_CPlayerInventory_h_23_PRIVATE_PROPERTY_OFFSET \
	GCAA_Source_GCAA_CPlayerInventory_h_23_SPARSE_DATA \
	GCAA_Source_GCAA_CPlayerInventory_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	GCAA_Source_GCAA_CPlayerInventory_h_23_INCLASS_NO_PURE_DECLS \
	GCAA_Source_GCAA_CPlayerInventory_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GCAA_API UClass* StaticClass<class UCPlayerInventory>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GCAA_Source_GCAA_CPlayerInventory_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
