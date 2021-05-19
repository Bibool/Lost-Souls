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
struct FVector;
struct FHitResult;
#ifdef GCAA_AIProjectileBase_generated_h
#error "AIProjectileBase.generated.h already included, missing '#pragma once' in AIProjectileBase.h"
#endif
#define GCAA_AIProjectileBase_generated_h

#define GCAA_Source_GCAA_NPC_AIProjectileBase_h_14_SPARSE_DATA
#define GCAA_Source_GCAA_NPC_AIProjectileBase_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define GCAA_Source_GCAA_NPC_AIProjectileBase_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define GCAA_Source_GCAA_NPC_AIProjectileBase_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAIProjectileBase(); \
	friend struct Z_Construct_UClass_AAIProjectileBase_Statics; \
public: \
	DECLARE_CLASS(AAIProjectileBase, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GCAA"), NO_API) \
	DECLARE_SERIALIZER(AAIProjectileBase)


#define GCAA_Source_GCAA_NPC_AIProjectileBase_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAAIProjectileBase(); \
	friend struct Z_Construct_UClass_AAIProjectileBase_Statics; \
public: \
	DECLARE_CLASS(AAIProjectileBase, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GCAA"), NO_API) \
	DECLARE_SERIALIZER(AAIProjectileBase)


#define GCAA_Source_GCAA_NPC_AIProjectileBase_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AAIProjectileBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAIProjectileBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAIProjectileBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAIProjectileBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAIProjectileBase(AAIProjectileBase&&); \
	NO_API AAIProjectileBase(const AAIProjectileBase&); \
public:


#define GCAA_Source_GCAA_NPC_AIProjectileBase_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAIProjectileBase(AAIProjectileBase&&); \
	NO_API AAIProjectileBase(const AAIProjectileBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAIProjectileBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAIProjectileBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AAIProjectileBase)


#define GCAA_Source_GCAA_NPC_AIProjectileBase_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(AAIProjectileBase, ProjectileMovement); } \
	FORCEINLINE static uint32 __PPO__ProjectileMesh() { return STRUCT_OFFSET(AAIProjectileBase, ProjectileMesh); } \
	FORCEINLINE static uint32 __PPO__DamageType() { return STRUCT_OFFSET(AAIProjectileBase, DamageType); } \
	FORCEINLINE static uint32 __PPO__MovementSpeed() { return STRUCT_OFFSET(AAIProjectileBase, MovementSpeed); } \
	FORCEINLINE static uint32 __PPO__Damage() { return STRUCT_OFFSET(AAIProjectileBase, Damage); } \
	FORCEINLINE static uint32 __PPO__ParticleTrail() { return STRUCT_OFFSET(AAIProjectileBase, ParticleTrail); }


#define GCAA_Source_GCAA_NPC_AIProjectileBase_h_11_PROLOG
#define GCAA_Source_GCAA_NPC_AIProjectileBase_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GCAA_Source_GCAA_NPC_AIProjectileBase_h_14_PRIVATE_PROPERTY_OFFSET \
	GCAA_Source_GCAA_NPC_AIProjectileBase_h_14_SPARSE_DATA \
	GCAA_Source_GCAA_NPC_AIProjectileBase_h_14_RPC_WRAPPERS \
	GCAA_Source_GCAA_NPC_AIProjectileBase_h_14_INCLASS \
	GCAA_Source_GCAA_NPC_AIProjectileBase_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GCAA_Source_GCAA_NPC_AIProjectileBase_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GCAA_Source_GCAA_NPC_AIProjectileBase_h_14_PRIVATE_PROPERTY_OFFSET \
	GCAA_Source_GCAA_NPC_AIProjectileBase_h_14_SPARSE_DATA \
	GCAA_Source_GCAA_NPC_AIProjectileBase_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	GCAA_Source_GCAA_NPC_AIProjectileBase_h_14_INCLASS_NO_PURE_DECLS \
	GCAA_Source_GCAA_NPC_AIProjectileBase_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GCAA_API UClass* StaticClass<class AAIProjectileBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GCAA_Source_GCAA_NPC_AIProjectileBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
