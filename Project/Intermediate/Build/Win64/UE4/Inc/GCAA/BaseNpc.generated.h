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
struct FDamageEvent;
class AController;
#ifdef GCAA_BaseNpc_generated_h
#error "BaseNpc.generated.h already included, missing '#pragma once' in BaseNpc.h"
#endif
#define GCAA_BaseNpc_generated_h

#define GCAA_Source_GCAA_NPC_BaseNpc_h_17_SPARSE_DATA
#define GCAA_Source_GCAA_NPC_BaseNpc_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execonAttackOverlapEnd); \
	DECLARE_FUNCTION(execonAttackOverlapBegin); \
	DECLARE_FUNCTION(execTakeDamage);


#define GCAA_Source_GCAA_NPC_BaseNpc_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execonAttackOverlapEnd); \
	DECLARE_FUNCTION(execonAttackOverlapBegin); \
	DECLARE_FUNCTION(execTakeDamage);


#define GCAA_Source_GCAA_NPC_BaseNpc_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABaseNpc(); \
	friend struct Z_Construct_UClass_ABaseNpc_Statics; \
public: \
	DECLARE_CLASS(ABaseNpc, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GCAA"), NO_API) \
	DECLARE_SERIALIZER(ABaseNpc)


#define GCAA_Source_GCAA_NPC_BaseNpc_h_17_INCLASS \
private: \
	static void StaticRegisterNativesABaseNpc(); \
	friend struct Z_Construct_UClass_ABaseNpc_Statics; \
public: \
	DECLARE_CLASS(ABaseNpc, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GCAA"), NO_API) \
	DECLARE_SERIALIZER(ABaseNpc)


#define GCAA_Source_GCAA_NPC_BaseNpc_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABaseNpc(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABaseNpc) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABaseNpc); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaseNpc); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABaseNpc(ABaseNpc&&); \
	NO_API ABaseNpc(const ABaseNpc&); \
public:


#define GCAA_Source_GCAA_NPC_BaseNpc_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABaseNpc(ABaseNpc&&); \
	NO_API ABaseNpc(const ABaseNpc&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABaseNpc); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaseNpc); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABaseNpc)


#define GCAA_Source_GCAA_NPC_BaseNpc_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__movingNpc() { return STRUCT_OFFSET(ABaseNpc, movingNpc); } \
	FORCEINLINE static uint32 __PPO__attackRange() { return STRUCT_OFFSET(ABaseNpc, attackRange); } \
	FORCEINLINE static uint32 __PPO__widgetClass() { return STRUCT_OFFSET(ABaseNpc, widgetClass); } \
	FORCEINLINE static uint32 __PPO__BehaviorTree() { return STRUCT_OFFSET(ABaseNpc, BehaviorTree); } \
	FORCEINLINE static uint32 __PPO__maxHealth() { return STRUCT_OFFSET(ABaseNpc, maxHealth); } \
	FORCEINLINE static uint32 __PPO__Attackmontage() { return STRUCT_OFFSET(ABaseNpc, Attackmontage); } \
	FORCEINLINE static uint32 __PPO__meleeCollision() { return STRUCT_OFFSET(ABaseNpc, meleeCollision); } \
	FORCEINLINE static uint32 __PPO__damageAmount() { return STRUCT_OFFSET(ABaseNpc, damageAmount); }


#define GCAA_Source_GCAA_NPC_BaseNpc_h_14_PROLOG
#define GCAA_Source_GCAA_NPC_BaseNpc_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GCAA_Source_GCAA_NPC_BaseNpc_h_17_PRIVATE_PROPERTY_OFFSET \
	GCAA_Source_GCAA_NPC_BaseNpc_h_17_SPARSE_DATA \
	GCAA_Source_GCAA_NPC_BaseNpc_h_17_RPC_WRAPPERS \
	GCAA_Source_GCAA_NPC_BaseNpc_h_17_INCLASS \
	GCAA_Source_GCAA_NPC_BaseNpc_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GCAA_Source_GCAA_NPC_BaseNpc_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GCAA_Source_GCAA_NPC_BaseNpc_h_17_PRIVATE_PROPERTY_OFFSET \
	GCAA_Source_GCAA_NPC_BaseNpc_h_17_SPARSE_DATA \
	GCAA_Source_GCAA_NPC_BaseNpc_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	GCAA_Source_GCAA_NPC_BaseNpc_h_17_INCLASS_NO_PURE_DECLS \
	GCAA_Source_GCAA_NPC_BaseNpc_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GCAA_API UClass* StaticClass<class ABaseNpc>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GCAA_Source_GCAA_NPC_BaseNpc_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
