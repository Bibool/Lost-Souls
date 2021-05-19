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
#ifdef GCAA_AIBullet_generated_h
#error "AIBullet.generated.h already included, missing '#pragma once' in AIBullet.h"
#endif
#define GCAA_AIBullet_generated_h

#define GCAA_Source_GCAA_NPC_AIBullet_h_22_SPARSE_DATA
#define GCAA_Source_GCAA_NPC_AIBullet_h_22_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define GCAA_Source_GCAA_NPC_AIBullet_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define GCAA_Source_GCAA_NPC_AIBullet_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAIBullet(); \
	friend struct Z_Construct_UClass_AAIBullet_Statics; \
public: \
	DECLARE_CLASS(AAIBullet, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GCAA"), NO_API) \
	DECLARE_SERIALIZER(AAIBullet)


#define GCAA_Source_GCAA_NPC_AIBullet_h_22_INCLASS \
private: \
	static void StaticRegisterNativesAAIBullet(); \
	friend struct Z_Construct_UClass_AAIBullet_Statics; \
public: \
	DECLARE_CLASS(AAIBullet, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GCAA"), NO_API) \
	DECLARE_SERIALIZER(AAIBullet)


#define GCAA_Source_GCAA_NPC_AIBullet_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AAIBullet(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAIBullet) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAIBullet); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAIBullet); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAIBullet(AAIBullet&&); \
	NO_API AAIBullet(const AAIBullet&); \
public:


#define GCAA_Source_GCAA_NPC_AIBullet_h_22_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAIBullet(AAIBullet&&); \
	NO_API AAIBullet(const AAIBullet&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAIBullet); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAIBullet); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAIBullet)


#define GCAA_Source_GCAA_NPC_AIBullet_h_22_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__DamageableComponent() { return STRUCT_OFFSET(AAIBullet, DamageableComponent); } \
	FORCEINLINE static uint32 __PPO__fDamageAmount() { return STRUCT_OFFSET(AAIBullet, fDamageAmount); }


#define GCAA_Source_GCAA_NPC_AIBullet_h_19_PROLOG
#define GCAA_Source_GCAA_NPC_AIBullet_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GCAA_Source_GCAA_NPC_AIBullet_h_22_PRIVATE_PROPERTY_OFFSET \
	GCAA_Source_GCAA_NPC_AIBullet_h_22_SPARSE_DATA \
	GCAA_Source_GCAA_NPC_AIBullet_h_22_RPC_WRAPPERS \
	GCAA_Source_GCAA_NPC_AIBullet_h_22_INCLASS \
	GCAA_Source_GCAA_NPC_AIBullet_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GCAA_Source_GCAA_NPC_AIBullet_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GCAA_Source_GCAA_NPC_AIBullet_h_22_PRIVATE_PROPERTY_OFFSET \
	GCAA_Source_GCAA_NPC_AIBullet_h_22_SPARSE_DATA \
	GCAA_Source_GCAA_NPC_AIBullet_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	GCAA_Source_GCAA_NPC_AIBullet_h_22_INCLASS_NO_PURE_DECLS \
	GCAA_Source_GCAA_NPC_AIBullet_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GCAA_API UClass* StaticClass<class AAIBullet>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GCAA_Source_GCAA_NPC_AIBullet_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
