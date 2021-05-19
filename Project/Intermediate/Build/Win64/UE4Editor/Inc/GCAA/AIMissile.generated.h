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
#ifdef GCAA_AIMissile_generated_h
#error "AIMissile.generated.h already included, missing '#pragma once' in AIMissile.h"
#endif
#define GCAA_AIMissile_generated_h

#define GCAA_Source_GCAA_NPC_AIMissile_h_27_SPARSE_DATA
#define GCAA_Source_GCAA_NPC_AIMissile_h_27_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define GCAA_Source_GCAA_NPC_AIMissile_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define GCAA_Source_GCAA_NPC_AIMissile_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAIMissile(); \
	friend struct Z_Construct_UClass_AAIMissile_Statics; \
public: \
	DECLARE_CLASS(AAIMissile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GCAA"), NO_API) \
	DECLARE_SERIALIZER(AAIMissile)


#define GCAA_Source_GCAA_NPC_AIMissile_h_27_INCLASS \
private: \
	static void StaticRegisterNativesAAIMissile(); \
	friend struct Z_Construct_UClass_AAIMissile_Statics; \
public: \
	DECLARE_CLASS(AAIMissile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GCAA"), NO_API) \
	DECLARE_SERIALIZER(AAIMissile)


#define GCAA_Source_GCAA_NPC_AIMissile_h_27_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AAIMissile(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAIMissile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAIMissile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAIMissile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAIMissile(AAIMissile&&); \
	NO_API AAIMissile(const AAIMissile&); \
public:


#define GCAA_Source_GCAA_NPC_AIMissile_h_27_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAIMissile(AAIMissile&&); \
	NO_API AAIMissile(const AAIMissile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAIMissile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAIMissile); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAIMissile)


#define GCAA_Source_GCAA_NPC_AIMissile_h_27_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__fShakeRadius() { return STRUCT_OFFSET(AAIMissile, fShakeRadius); } \
	FORCEINLINE static uint32 __PPO__DamageableComponent() { return STRUCT_OFFSET(AAIMissile, DamageableComponent); } \
	FORCEINLINE static uint32 __PPO__fDamageAmount() { return STRUCT_OFFSET(AAIMissile, fDamageAmount); } \
	FORCEINLINE static uint32 __PPO__fUpwardsLaunchAmount() { return STRUCT_OFFSET(AAIMissile, fUpwardsLaunchAmount); } \
	FORCEINLINE static uint32 __PPO__CamShake() { return STRUCT_OFFSET(AAIMissile, CamShake); }


#define GCAA_Source_GCAA_NPC_AIMissile_h_24_PROLOG
#define GCAA_Source_GCAA_NPC_AIMissile_h_27_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GCAA_Source_GCAA_NPC_AIMissile_h_27_PRIVATE_PROPERTY_OFFSET \
	GCAA_Source_GCAA_NPC_AIMissile_h_27_SPARSE_DATA \
	GCAA_Source_GCAA_NPC_AIMissile_h_27_RPC_WRAPPERS \
	GCAA_Source_GCAA_NPC_AIMissile_h_27_INCLASS \
	GCAA_Source_GCAA_NPC_AIMissile_h_27_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GCAA_Source_GCAA_NPC_AIMissile_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GCAA_Source_GCAA_NPC_AIMissile_h_27_PRIVATE_PROPERTY_OFFSET \
	GCAA_Source_GCAA_NPC_AIMissile_h_27_SPARSE_DATA \
	GCAA_Source_GCAA_NPC_AIMissile_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	GCAA_Source_GCAA_NPC_AIMissile_h_27_INCLASS_NO_PURE_DECLS \
	GCAA_Source_GCAA_NPC_AIMissile_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GCAA_API UClass* StaticClass<class AAIMissile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GCAA_Source_GCAA_NPC_AIMissile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
