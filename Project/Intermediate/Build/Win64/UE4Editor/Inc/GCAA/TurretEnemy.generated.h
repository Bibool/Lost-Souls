// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GCAA_TurretEnemy_generated_h
#error "TurretEnemy.generated.h already included, missing '#pragma once' in TurretEnemy.h"
#endif
#define GCAA_TurretEnemy_generated_h

#define GCAA_Source_GCAA_NPC_TurretEnemy_h_18_SPARSE_DATA
#define GCAA_Source_GCAA_NPC_TurretEnemy_h_18_RPC_WRAPPERS
#define GCAA_Source_GCAA_NPC_TurretEnemy_h_18_RPC_WRAPPERS_NO_PURE_DECLS
#define GCAA_Source_GCAA_NPC_TurretEnemy_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATurretEnemy(); \
	friend struct Z_Construct_UClass_ATurretEnemy_Statics; \
public: \
	DECLARE_CLASS(ATurretEnemy, ABaseNpc, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GCAA"), NO_API) \
	DECLARE_SERIALIZER(ATurretEnemy)


#define GCAA_Source_GCAA_NPC_TurretEnemy_h_18_INCLASS \
private: \
	static void StaticRegisterNativesATurretEnemy(); \
	friend struct Z_Construct_UClass_ATurretEnemy_Statics; \
public: \
	DECLARE_CLASS(ATurretEnemy, ABaseNpc, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GCAA"), NO_API) \
	DECLARE_SERIALIZER(ATurretEnemy)


#define GCAA_Source_GCAA_NPC_TurretEnemy_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATurretEnemy(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATurretEnemy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATurretEnemy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATurretEnemy); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATurretEnemy(ATurretEnemy&&); \
	NO_API ATurretEnemy(const ATurretEnemy&); \
public:


#define GCAA_Source_GCAA_NPC_TurretEnemy_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATurretEnemy(ATurretEnemy&&); \
	NO_API ATurretEnemy(const ATurretEnemy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATurretEnemy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATurretEnemy); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATurretEnemy)


#define GCAA_Source_GCAA_NPC_TurretEnemy_h_18_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__BaseMesh() { return STRUCT_OFFSET(ATurretEnemy, BaseMesh); } \
	FORCEINLINE static uint32 __PPO__ProjectileSpawnPoint() { return STRUCT_OFFSET(ATurretEnemy, ProjectileSpawnPoint); } \
	FORCEINLINE static uint32 __PPO__ProjectileClass() { return STRUCT_OFFSET(ATurretEnemy, ProjectileClass); } \
	FORCEINLINE static uint32 __PPO__TurretMesh() { return STRUCT_OFFSET(ATurretEnemy, TurretMesh); } \
	FORCEINLINE static uint32 __PPO__FireRate() { return STRUCT_OFFSET(ATurretEnemy, FireRate); } \
	FORCEINLINE static uint32 __PPO__FireRange() { return STRUCT_OFFSET(ATurretEnemy, FireRange); }


#define GCAA_Source_GCAA_NPC_TurretEnemy_h_15_PROLOG
#define GCAA_Source_GCAA_NPC_TurretEnemy_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GCAA_Source_GCAA_NPC_TurretEnemy_h_18_PRIVATE_PROPERTY_OFFSET \
	GCAA_Source_GCAA_NPC_TurretEnemy_h_18_SPARSE_DATA \
	GCAA_Source_GCAA_NPC_TurretEnemy_h_18_RPC_WRAPPERS \
	GCAA_Source_GCAA_NPC_TurretEnemy_h_18_INCLASS \
	GCAA_Source_GCAA_NPC_TurretEnemy_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GCAA_Source_GCAA_NPC_TurretEnemy_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GCAA_Source_GCAA_NPC_TurretEnemy_h_18_PRIVATE_PROPERTY_OFFSET \
	GCAA_Source_GCAA_NPC_TurretEnemy_h_18_SPARSE_DATA \
	GCAA_Source_GCAA_NPC_TurretEnemy_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	GCAA_Source_GCAA_NPC_TurretEnemy_h_18_INCLASS_NO_PURE_DECLS \
	GCAA_Source_GCAA_NPC_TurretEnemy_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GCAA_API UClass* StaticClass<class ATurretEnemy>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GCAA_Source_GCAA_NPC_TurretEnemy_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
