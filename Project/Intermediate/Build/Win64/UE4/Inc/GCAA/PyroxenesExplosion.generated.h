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
#ifdef GCAA_PyroxenesExplosion_generated_h
#error "PyroxenesExplosion.generated.h already included, missing '#pragma once' in PyroxenesExplosion.h"
#endif
#define GCAA_PyroxenesExplosion_generated_h

#define GCAA_Source_GCAA_NPC_PyroxenesExplosion_h_13_SPARSE_DATA
#define GCAA_Source_GCAA_NPC_PyroxenesExplosion_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit); \
	DECLARE_FUNCTION(execonAttackOverlapEnd); \
	DECLARE_FUNCTION(execonAttackOverlapBegin);


#define GCAA_Source_GCAA_NPC_PyroxenesExplosion_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit); \
	DECLARE_FUNCTION(execonAttackOverlapEnd); \
	DECLARE_FUNCTION(execonAttackOverlapBegin);


#define GCAA_Source_GCAA_NPC_PyroxenesExplosion_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPyroxenesExplosion(); \
	friend struct Z_Construct_UClass_APyroxenesExplosion_Statics; \
public: \
	DECLARE_CLASS(APyroxenesExplosion, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GCAA"), NO_API) \
	DECLARE_SERIALIZER(APyroxenesExplosion)


#define GCAA_Source_GCAA_NPC_PyroxenesExplosion_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAPyroxenesExplosion(); \
	friend struct Z_Construct_UClass_APyroxenesExplosion_Statics; \
public: \
	DECLARE_CLASS(APyroxenesExplosion, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GCAA"), NO_API) \
	DECLARE_SERIALIZER(APyroxenesExplosion)


#define GCAA_Source_GCAA_NPC_PyroxenesExplosion_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APyroxenesExplosion(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APyroxenesExplosion) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APyroxenesExplosion); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APyroxenesExplosion); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APyroxenesExplosion(APyroxenesExplosion&&); \
	NO_API APyroxenesExplosion(const APyroxenesExplosion&); \
public:


#define GCAA_Source_GCAA_NPC_PyroxenesExplosion_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APyroxenesExplosion(APyroxenesExplosion&&); \
	NO_API APyroxenesExplosion(const APyroxenesExplosion&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APyroxenesExplosion); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APyroxenesExplosion); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APyroxenesExplosion)


#define GCAA_Source_GCAA_NPC_PyroxenesExplosion_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__damageAmount() { return STRUCT_OFFSET(APyroxenesExplosion, damageAmount); } \
	FORCEINLINE static uint32 __PPO__lifeSpan() { return STRUCT_OFFSET(APyroxenesExplosion, lifeSpan); } \
	FORCEINLINE static uint32 __PPO__SphereRadius() { return STRUCT_OFFSET(APyroxenesExplosion, SphereRadius); } \
	FORCEINLINE static uint32 __PPO__ExplosionRadius() { return STRUCT_OFFSET(APyroxenesExplosion, ExplosionRadius); } \
	FORCEINLINE static uint32 __PPO__ExplosionVfx() { return STRUCT_OFFSET(APyroxenesExplosion, ExplosionVfx); } \
	FORCEINLINE static uint32 __PPO__ExplosionSound() { return STRUCT_OFFSET(APyroxenesExplosion, ExplosionSound); }


#define GCAA_Source_GCAA_NPC_PyroxenesExplosion_h_10_PROLOG
#define GCAA_Source_GCAA_NPC_PyroxenesExplosion_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GCAA_Source_GCAA_NPC_PyroxenesExplosion_h_13_PRIVATE_PROPERTY_OFFSET \
	GCAA_Source_GCAA_NPC_PyroxenesExplosion_h_13_SPARSE_DATA \
	GCAA_Source_GCAA_NPC_PyroxenesExplosion_h_13_RPC_WRAPPERS \
	GCAA_Source_GCAA_NPC_PyroxenesExplosion_h_13_INCLASS \
	GCAA_Source_GCAA_NPC_PyroxenesExplosion_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GCAA_Source_GCAA_NPC_PyroxenesExplosion_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GCAA_Source_GCAA_NPC_PyroxenesExplosion_h_13_PRIVATE_PROPERTY_OFFSET \
	GCAA_Source_GCAA_NPC_PyroxenesExplosion_h_13_SPARSE_DATA \
	GCAA_Source_GCAA_NPC_PyroxenesExplosion_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	GCAA_Source_GCAA_NPC_PyroxenesExplosion_h_13_INCLASS_NO_PURE_DECLS \
	GCAA_Source_GCAA_NPC_PyroxenesExplosion_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GCAA_API UClass* StaticClass<class APyroxenesExplosion>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GCAA_Source_GCAA_NPC_PyroxenesExplosion_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
