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
#ifdef GCAA_UpgradeSystemVolume_generated_h
#error "UpgradeSystemVolume.generated.h already included, missing '#pragma once' in UpgradeSystemVolume.h"
#endif
#define GCAA_UpgradeSystemVolume_generated_h

#define GCAA_Source_GCAA_UpgradeSystem_UpgradeSystemVolume_h_12_SPARSE_DATA
#define GCAA_Source_GCAA_UpgradeSystem_UpgradeSystemVolume_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define GCAA_Source_GCAA_UpgradeSystem_UpgradeSystemVolume_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define GCAA_Source_GCAA_UpgradeSystem_UpgradeSystemVolume_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAUpgradeSystemVolume(); \
	friend struct Z_Construct_UClass_AUpgradeSystemVolume_Statics; \
public: \
	DECLARE_CLASS(AUpgradeSystemVolume, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GCAA"), NO_API) \
	DECLARE_SERIALIZER(AUpgradeSystemVolume)


#define GCAA_Source_GCAA_UpgradeSystem_UpgradeSystemVolume_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAUpgradeSystemVolume(); \
	friend struct Z_Construct_UClass_AUpgradeSystemVolume_Statics; \
public: \
	DECLARE_CLASS(AUpgradeSystemVolume, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GCAA"), NO_API) \
	DECLARE_SERIALIZER(AUpgradeSystemVolume)


#define GCAA_Source_GCAA_UpgradeSystem_UpgradeSystemVolume_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AUpgradeSystemVolume(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AUpgradeSystemVolume) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AUpgradeSystemVolume); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AUpgradeSystemVolume); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AUpgradeSystemVolume(AUpgradeSystemVolume&&); \
	NO_API AUpgradeSystemVolume(const AUpgradeSystemVolume&); \
public:


#define GCAA_Source_GCAA_UpgradeSystem_UpgradeSystemVolume_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AUpgradeSystemVolume(AUpgradeSystemVolume&&); \
	NO_API AUpgradeSystemVolume(const AUpgradeSystemVolume&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AUpgradeSystemVolume); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AUpgradeSystemVolume); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AUpgradeSystemVolume)


#define GCAA_Source_GCAA_UpgradeSystem_UpgradeSystemVolume_h_12_PRIVATE_PROPERTY_OFFSET
#define GCAA_Source_GCAA_UpgradeSystem_UpgradeSystemVolume_h_9_PROLOG
#define GCAA_Source_GCAA_UpgradeSystem_UpgradeSystemVolume_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GCAA_Source_GCAA_UpgradeSystem_UpgradeSystemVolume_h_12_PRIVATE_PROPERTY_OFFSET \
	GCAA_Source_GCAA_UpgradeSystem_UpgradeSystemVolume_h_12_SPARSE_DATA \
	GCAA_Source_GCAA_UpgradeSystem_UpgradeSystemVolume_h_12_RPC_WRAPPERS \
	GCAA_Source_GCAA_UpgradeSystem_UpgradeSystemVolume_h_12_INCLASS \
	GCAA_Source_GCAA_UpgradeSystem_UpgradeSystemVolume_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GCAA_Source_GCAA_UpgradeSystem_UpgradeSystemVolume_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GCAA_Source_GCAA_UpgradeSystem_UpgradeSystemVolume_h_12_PRIVATE_PROPERTY_OFFSET \
	GCAA_Source_GCAA_UpgradeSystem_UpgradeSystemVolume_h_12_SPARSE_DATA \
	GCAA_Source_GCAA_UpgradeSystem_UpgradeSystemVolume_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	GCAA_Source_GCAA_UpgradeSystem_UpgradeSystemVolume_h_12_INCLASS_NO_PURE_DECLS \
	GCAA_Source_GCAA_UpgradeSystem_UpgradeSystemVolume_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GCAA_API UClass* StaticClass<class AUpgradeSystemVolume>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GCAA_Source_GCAA_UpgradeSystem_UpgradeSystemVolume_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
