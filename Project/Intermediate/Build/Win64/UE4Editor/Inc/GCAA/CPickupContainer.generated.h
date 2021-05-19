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
#ifdef GCAA_CPickupContainer_generated_h
#error "CPickupContainer.generated.h already included, missing '#pragma once' in CPickupContainer.h"
#endif
#define GCAA_CPickupContainer_generated_h

#define GCAA_Source_GCAA_Interactables_CPickupContainer_h_24_SPARSE_DATA
#define GCAA_Source_GCAA_Interactables_CPickupContainer_h_24_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnOverlapEnd); \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define GCAA_Source_GCAA_Interactables_CPickupContainer_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnOverlapEnd); \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define GCAA_Source_GCAA_Interactables_CPickupContainer_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACPickupContainer(); \
	friend struct Z_Construct_UClass_ACPickupContainer_Statics; \
public: \
	DECLARE_CLASS(ACPickupContainer, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GCAA"), NO_API) \
	DECLARE_SERIALIZER(ACPickupContainer)


#define GCAA_Source_GCAA_Interactables_CPickupContainer_h_24_INCLASS \
private: \
	static void StaticRegisterNativesACPickupContainer(); \
	friend struct Z_Construct_UClass_ACPickupContainer_Statics; \
public: \
	DECLARE_CLASS(ACPickupContainer, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GCAA"), NO_API) \
	DECLARE_SERIALIZER(ACPickupContainer)


#define GCAA_Source_GCAA_Interactables_CPickupContainer_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACPickupContainer(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACPickupContainer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACPickupContainer); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACPickupContainer); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACPickupContainer(ACPickupContainer&&); \
	NO_API ACPickupContainer(const ACPickupContainer&); \
public:


#define GCAA_Source_GCAA_Interactables_CPickupContainer_h_24_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACPickupContainer(ACPickupContainer&&); \
	NO_API ACPickupContainer(const ACPickupContainer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACPickupContainer); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACPickupContainer); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACPickupContainer)


#define GCAA_Source_GCAA_Interactables_CPickupContainer_h_24_PRIVATE_PROPERTY_OFFSET
#define GCAA_Source_GCAA_Interactables_CPickupContainer_h_21_PROLOG
#define GCAA_Source_GCAA_Interactables_CPickupContainer_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GCAA_Source_GCAA_Interactables_CPickupContainer_h_24_PRIVATE_PROPERTY_OFFSET \
	GCAA_Source_GCAA_Interactables_CPickupContainer_h_24_SPARSE_DATA \
	GCAA_Source_GCAA_Interactables_CPickupContainer_h_24_RPC_WRAPPERS \
	GCAA_Source_GCAA_Interactables_CPickupContainer_h_24_INCLASS \
	GCAA_Source_GCAA_Interactables_CPickupContainer_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GCAA_Source_GCAA_Interactables_CPickupContainer_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GCAA_Source_GCAA_Interactables_CPickupContainer_h_24_PRIVATE_PROPERTY_OFFSET \
	GCAA_Source_GCAA_Interactables_CPickupContainer_h_24_SPARSE_DATA \
	GCAA_Source_GCAA_Interactables_CPickupContainer_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	GCAA_Source_GCAA_Interactables_CPickupContainer_h_24_INCLASS_NO_PURE_DECLS \
	GCAA_Source_GCAA_Interactables_CPickupContainer_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GCAA_API UClass* StaticClass<class ACPickupContainer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GCAA_Source_GCAA_Interactables_CPickupContainer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
