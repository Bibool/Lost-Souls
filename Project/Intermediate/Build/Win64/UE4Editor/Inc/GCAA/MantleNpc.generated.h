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
#ifdef GCAA_MantleNpc_generated_h
#error "MantleNpc.generated.h already included, missing '#pragma once' in MantleNpc.h"
#endif
#define GCAA_MantleNpc_generated_h

#define GCAA_Source_GCAA_NPC_MantleNpc_h_17_SPARSE_DATA
#define GCAA_Source_GCAA_NPC_MantleNpc_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnOverLapEnd); \
	DECLARE_FUNCTION(execOnOverLapBegin); \
	DECLARE_FUNCTION(execResetDodge); \
	DECLARE_FUNCTION(execTimerFunction);


#define GCAA_Source_GCAA_NPC_MantleNpc_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnOverLapEnd); \
	DECLARE_FUNCTION(execOnOverLapBegin); \
	DECLARE_FUNCTION(execResetDodge); \
	DECLARE_FUNCTION(execTimerFunction);


#define GCAA_Source_GCAA_NPC_MantleNpc_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMantleNpc(); \
	friend struct Z_Construct_UClass_AMantleNpc_Statics; \
public: \
	DECLARE_CLASS(AMantleNpc, AMovingNpc, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GCAA"), NO_API) \
	DECLARE_SERIALIZER(AMantleNpc)


#define GCAA_Source_GCAA_NPC_MantleNpc_h_17_INCLASS \
private: \
	static void StaticRegisterNativesAMantleNpc(); \
	friend struct Z_Construct_UClass_AMantleNpc_Statics; \
public: \
	DECLARE_CLASS(AMantleNpc, AMovingNpc, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GCAA"), NO_API) \
	DECLARE_SERIALIZER(AMantleNpc)


#define GCAA_Source_GCAA_NPC_MantleNpc_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMantleNpc(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMantleNpc) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMantleNpc); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMantleNpc); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMantleNpc(AMantleNpc&&); \
	NO_API AMantleNpc(const AMantleNpc&); \
public:


#define GCAA_Source_GCAA_NPC_MantleNpc_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMantleNpc(AMantleNpc&&); \
	NO_API AMantleNpc(const AMantleNpc&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMantleNpc); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMantleNpc); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMantleNpc)


#define GCAA_Source_GCAA_NPC_MantleNpc_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__m_numberOfShots() { return STRUCT_OFFSET(AMantleNpc, m_numberOfShots); } \
	FORCEINLINE static uint32 __PPO__BulletBP() { return STRUCT_OFFSET(AMantleNpc, BulletBP); } \
	FORCEINLINE static uint32 __PPO__UnusedHandle() { return STRUCT_OFFSET(AMantleNpc, UnusedHandle); } \
	FORCEINLINE static uint32 __PPO__fDodgeDistance() { return STRUCT_OFFSET(AMantleNpc, fDodgeDistance); } \
	FORCEINLINE static uint32 __PPO__fDodgeCooldown() { return STRUCT_OFFSET(AMantleNpc, fDodgeCooldown); } \
	FORCEINLINE static uint32 __PPO__ShootSound() { return STRUCT_OFFSET(AMantleNpc, ShootSound); } \
	FORCEINLINE static uint32 __PPO__bCanDodge() { return STRUCT_OFFSET(AMantleNpc, bCanDodge); } \
	FORCEINLINE static uint32 __PPO__fDodgeStop() { return STRUCT_OFFSET(AMantleNpc, fDodgeStop); } \
	FORCEINLINE static uint32 __PPO__Explosion() { return STRUCT_OFFSET(AMantleNpc, Explosion); } \
	FORCEINLINE static uint32 __PPO__traceDistance() { return STRUCT_OFFSET(AMantleNpc, traceDistance); } \
	FORCEINLINE static uint32 __PPO__ChargeCollision() { return STRUCT_OFFSET(AMantleNpc, ChargeCollision); } \
	FORCEINLINE static uint32 __PPO__ShieldCollider() { return STRUCT_OFFSET(AMantleNpc, ShieldCollider); } \
	FORCEINLINE static uint32 __PPO__ChargeSound() { return STRUCT_OFFSET(AMantleNpc, ChargeSound); }


#define GCAA_Source_GCAA_NPC_MantleNpc_h_14_PROLOG
#define GCAA_Source_GCAA_NPC_MantleNpc_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GCAA_Source_GCAA_NPC_MantleNpc_h_17_PRIVATE_PROPERTY_OFFSET \
	GCAA_Source_GCAA_NPC_MantleNpc_h_17_SPARSE_DATA \
	GCAA_Source_GCAA_NPC_MantleNpc_h_17_RPC_WRAPPERS \
	GCAA_Source_GCAA_NPC_MantleNpc_h_17_INCLASS \
	GCAA_Source_GCAA_NPC_MantleNpc_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GCAA_Source_GCAA_NPC_MantleNpc_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GCAA_Source_GCAA_NPC_MantleNpc_h_17_PRIVATE_PROPERTY_OFFSET \
	GCAA_Source_GCAA_NPC_MantleNpc_h_17_SPARSE_DATA \
	GCAA_Source_GCAA_NPC_MantleNpc_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	GCAA_Source_GCAA_NPC_MantleNpc_h_17_INCLASS_NO_PURE_DECLS \
	GCAA_Source_GCAA_NPC_MantleNpc_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GCAA_API UClass* StaticClass<class AMantleNpc>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GCAA_Source_GCAA_NPC_MantleNpc_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
