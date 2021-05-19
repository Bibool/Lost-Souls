// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GCAA_GCAACharacter_generated_h
#error "GCAACharacter.generated.h already included, missing '#pragma once' in GCAACharacter.h"
#endif
#define GCAA_GCAACharacter_generated_h

#define GCAA_Source_GCAA_GCAACharacter_h_12_SPARSE_DATA
#define GCAA_Source_GCAA_GCAACharacter_h_12_RPC_WRAPPERS
#define GCAA_Source_GCAA_GCAACharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define GCAA_Source_GCAA_GCAACharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGCAACharacter(); \
	friend struct Z_Construct_UClass_AGCAACharacter_Statics; \
public: \
	DECLARE_CLASS(AGCAACharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GCAA"), NO_API) \
	DECLARE_SERIALIZER(AGCAACharacter)


#define GCAA_Source_GCAA_GCAACharacter_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAGCAACharacter(); \
	friend struct Z_Construct_UClass_AGCAACharacter_Statics; \
public: \
	DECLARE_CLASS(AGCAACharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GCAA"), NO_API) \
	DECLARE_SERIALIZER(AGCAACharacter)


#define GCAA_Source_GCAA_GCAACharacter_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGCAACharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGCAACharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGCAACharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGCAACharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGCAACharacter(AGCAACharacter&&); \
	NO_API AGCAACharacter(const AGCAACharacter&); \
public:


#define GCAA_Source_GCAA_GCAACharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGCAACharacter(AGCAACharacter&&); \
	NO_API AGCAACharacter(const AGCAACharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGCAACharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGCAACharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGCAACharacter)


#define GCAA_Source_GCAA_GCAACharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(AGCAACharacter, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__FollowCamera() { return STRUCT_OFFSET(AGCAACharacter, FollowCamera); }


#define GCAA_Source_GCAA_GCAACharacter_h_9_PROLOG
#define GCAA_Source_GCAA_GCAACharacter_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GCAA_Source_GCAA_GCAACharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	GCAA_Source_GCAA_GCAACharacter_h_12_SPARSE_DATA \
	GCAA_Source_GCAA_GCAACharacter_h_12_RPC_WRAPPERS \
	GCAA_Source_GCAA_GCAACharacter_h_12_INCLASS \
	GCAA_Source_GCAA_GCAACharacter_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GCAA_Source_GCAA_GCAACharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GCAA_Source_GCAA_GCAACharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	GCAA_Source_GCAA_GCAACharacter_h_12_SPARSE_DATA \
	GCAA_Source_GCAA_GCAACharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	GCAA_Source_GCAA_GCAACharacter_h_12_INCLASS_NO_PURE_DECLS \
	GCAA_Source_GCAA_GCAACharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GCAA_API UClass* StaticClass<class AGCAACharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GCAA_Source_GCAA_GCAACharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
