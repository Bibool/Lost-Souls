// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GCAA_MovingNpc_generated_h
#error "MovingNpc.generated.h already included, missing '#pragma once' in MovingNpc.h"
#endif
#define GCAA_MovingNpc_generated_h

#define GCAA_Source_GCAA_NPC_MovingNpc_h_15_SPARSE_DATA
#define GCAA_Source_GCAA_NPC_MovingNpc_h_15_RPC_WRAPPERS
#define GCAA_Source_GCAA_NPC_MovingNpc_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define GCAA_Source_GCAA_NPC_MovingNpc_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMovingNpc(); \
	friend struct Z_Construct_UClass_AMovingNpc_Statics; \
public: \
	DECLARE_CLASS(AMovingNpc, ABaseNpc, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GCAA"), NO_API) \
	DECLARE_SERIALIZER(AMovingNpc)


#define GCAA_Source_GCAA_NPC_MovingNpc_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAMovingNpc(); \
	friend struct Z_Construct_UClass_AMovingNpc_Statics; \
public: \
	DECLARE_CLASS(AMovingNpc, ABaseNpc, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GCAA"), NO_API) \
	DECLARE_SERIALIZER(AMovingNpc)


#define GCAA_Source_GCAA_NPC_MovingNpc_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMovingNpc(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMovingNpc) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMovingNpc); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMovingNpc); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMovingNpc(AMovingNpc&&); \
	NO_API AMovingNpc(const AMovingNpc&); \
public:


#define GCAA_Source_GCAA_NPC_MovingNpc_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMovingNpc(AMovingNpc&&); \
	NO_API AMovingNpc(const AMovingNpc&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMovingNpc); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMovingNpc); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMovingNpc)


#define GCAA_Source_GCAA_NPC_MovingNpc_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__BulletBP() { return STRUCT_OFFSET(AMovingNpc, BulletBP); } \
	FORCEINLINE static uint32 __PPO__walkSpeed() { return STRUCT_OFFSET(AMovingNpc, walkSpeed); } \
	FORCEINLINE static uint32 __PPO__runSpeed() { return STRUCT_OFFSET(AMovingNpc, runSpeed); } \
	FORCEINLINE static uint32 __PPO__patrollingNpc() { return STRUCT_OFFSET(AMovingNpc, patrollingNpc); } \
	FORCEINLINE static uint32 __PPO__PatrolPath() { return STRUCT_OFFSET(AMovingNpc, PatrolPath); } \
	FORCEINLINE static uint32 __PPO__spawnRandomPath() { return STRUCT_OFFSET(AMovingNpc, spawnRandomPath); } \
	FORCEINLINE static uint32 __PPO__PatrolPathClass() { return STRUCT_OFFSET(AMovingNpc, PatrolPathClass); } \
	FORCEINLINE static uint32 __PPO__numOfPatrolPoints() { return STRUCT_OFFSET(AMovingNpc, numOfPatrolPoints); } \
	FORCEINLINE static uint32 __PPO__pathSpawnRadius() { return STRUCT_OFFSET(AMovingNpc, pathSpawnRadius); }


#define GCAA_Source_GCAA_NPC_MovingNpc_h_12_PROLOG
#define GCAA_Source_GCAA_NPC_MovingNpc_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GCAA_Source_GCAA_NPC_MovingNpc_h_15_PRIVATE_PROPERTY_OFFSET \
	GCAA_Source_GCAA_NPC_MovingNpc_h_15_SPARSE_DATA \
	GCAA_Source_GCAA_NPC_MovingNpc_h_15_RPC_WRAPPERS \
	GCAA_Source_GCAA_NPC_MovingNpc_h_15_INCLASS \
	GCAA_Source_GCAA_NPC_MovingNpc_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GCAA_Source_GCAA_NPC_MovingNpc_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GCAA_Source_GCAA_NPC_MovingNpc_h_15_PRIVATE_PROPERTY_OFFSET \
	GCAA_Source_GCAA_NPC_MovingNpc_h_15_SPARSE_DATA \
	GCAA_Source_GCAA_NPC_MovingNpc_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	GCAA_Source_GCAA_NPC_MovingNpc_h_15_INCLASS_NO_PURE_DECLS \
	GCAA_Source_GCAA_NPC_MovingNpc_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GCAA_API UClass* StaticClass<class AMovingNpc>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GCAA_Source_GCAA_NPC_MovingNpc_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
