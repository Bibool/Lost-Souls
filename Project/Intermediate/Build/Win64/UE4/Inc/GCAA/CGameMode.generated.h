// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GCAA_CGameMode_generated_h
#error "CGameMode.generated.h already included, missing '#pragma once' in CGameMode.h"
#endif
#define GCAA_CGameMode_generated_h

#define GCAA_Source_GCAA_CGameMode_h_17_SPARSE_DATA
#define GCAA_Source_GCAA_CGameMode_h_17_RPC_WRAPPERS
#define GCAA_Source_GCAA_CGameMode_h_17_RPC_WRAPPERS_NO_PURE_DECLS
#define GCAA_Source_GCAA_CGameMode_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACGameMode(); \
	friend struct Z_Construct_UClass_ACGameMode_Statics; \
public: \
	DECLARE_CLASS(ACGameMode, AGameMode, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/GCAA"), NO_API) \
	DECLARE_SERIALIZER(ACGameMode)


#define GCAA_Source_GCAA_CGameMode_h_17_INCLASS \
private: \
	static void StaticRegisterNativesACGameMode(); \
	friend struct Z_Construct_UClass_ACGameMode_Statics; \
public: \
	DECLARE_CLASS(ACGameMode, AGameMode, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/GCAA"), NO_API) \
	DECLARE_SERIALIZER(ACGameMode)


#define GCAA_Source_GCAA_CGameMode_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACGameMode(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACGameMode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACGameMode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACGameMode(ACGameMode&&); \
	NO_API ACGameMode(const ACGameMode&); \
public:


#define GCAA_Source_GCAA_CGameMode_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACGameMode(ACGameMode&&); \
	NO_API ACGameMode(const ACGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACGameMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACGameMode)


#define GCAA_Source_GCAA_CGameMode_h_17_PRIVATE_PROPERTY_OFFSET
#define GCAA_Source_GCAA_CGameMode_h_14_PROLOG
#define GCAA_Source_GCAA_CGameMode_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GCAA_Source_GCAA_CGameMode_h_17_PRIVATE_PROPERTY_OFFSET \
	GCAA_Source_GCAA_CGameMode_h_17_SPARSE_DATA \
	GCAA_Source_GCAA_CGameMode_h_17_RPC_WRAPPERS \
	GCAA_Source_GCAA_CGameMode_h_17_INCLASS \
	GCAA_Source_GCAA_CGameMode_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GCAA_Source_GCAA_CGameMode_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GCAA_Source_GCAA_CGameMode_h_17_PRIVATE_PROPERTY_OFFSET \
	GCAA_Source_GCAA_CGameMode_h_17_SPARSE_DATA \
	GCAA_Source_GCAA_CGameMode_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	GCAA_Source_GCAA_CGameMode_h_17_INCLASS_NO_PURE_DECLS \
	GCAA_Source_GCAA_CGameMode_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GCAA_API UClass* StaticClass<class ACGameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GCAA_Source_GCAA_CGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
