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
#ifdef GCAA_CPickup_generated_h
#error "CPickup.generated.h already included, missing '#pragma once' in CPickup.h"
#endif
#define GCAA_CPickup_generated_h

#define GCAA_Source_GCAA_Interactables_CPickup_h_34_SPARSE_DATA
#define GCAA_Source_GCAA_Interactables_CPickup_h_34_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define GCAA_Source_GCAA_Interactables_CPickup_h_34_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define GCAA_Source_GCAA_Interactables_CPickup_h_34_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACPickup(); \
	friend struct Z_Construct_UClass_ACPickup_Statics; \
public: \
	DECLARE_CLASS(ACPickup, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GCAA"), NO_API) \
	DECLARE_SERIALIZER(ACPickup)


#define GCAA_Source_GCAA_Interactables_CPickup_h_34_INCLASS \
private: \
	static void StaticRegisterNativesACPickup(); \
	friend struct Z_Construct_UClass_ACPickup_Statics; \
public: \
	DECLARE_CLASS(ACPickup, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GCAA"), NO_API) \
	DECLARE_SERIALIZER(ACPickup)


#define GCAA_Source_GCAA_Interactables_CPickup_h_34_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACPickup(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACPickup) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACPickup); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACPickup); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACPickup(ACPickup&&); \
	NO_API ACPickup(const ACPickup&); \
public:


#define GCAA_Source_GCAA_Interactables_CPickup_h_34_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACPickup(ACPickup&&); \
	NO_API ACPickup(const ACPickup&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACPickup); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACPickup); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACPickup)


#define GCAA_Source_GCAA_Interactables_CPickup_h_34_PRIVATE_PROPERTY_OFFSET
#define GCAA_Source_GCAA_Interactables_CPickup_h_31_PROLOG
#define GCAA_Source_GCAA_Interactables_CPickup_h_34_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GCAA_Source_GCAA_Interactables_CPickup_h_34_PRIVATE_PROPERTY_OFFSET \
	GCAA_Source_GCAA_Interactables_CPickup_h_34_SPARSE_DATA \
	GCAA_Source_GCAA_Interactables_CPickup_h_34_RPC_WRAPPERS \
	GCAA_Source_GCAA_Interactables_CPickup_h_34_INCLASS \
	GCAA_Source_GCAA_Interactables_CPickup_h_34_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GCAA_Source_GCAA_Interactables_CPickup_h_34_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GCAA_Source_GCAA_Interactables_CPickup_h_34_PRIVATE_PROPERTY_OFFSET \
	GCAA_Source_GCAA_Interactables_CPickup_h_34_SPARSE_DATA \
	GCAA_Source_GCAA_Interactables_CPickup_h_34_RPC_WRAPPERS_NO_PURE_DECLS \
	GCAA_Source_GCAA_Interactables_CPickup_h_34_INCLASS_NO_PURE_DECLS \
	GCAA_Source_GCAA_Interactables_CPickup_h_34_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GCAA_API UClass* StaticClass<class ACPickup>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GCAA_Source_GCAA_Interactables_CPickup_h


#define FOREACH_ENUM_EPICKUPTYPE(op) \
	op(EPickupType::Key) \
	op(EPickupType::JournalEntry) 

enum class EPickupType;
template<> GCAA_API UEnum* StaticEnum<EPickupType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
