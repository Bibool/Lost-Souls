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
#ifdef GCAA_CPlayer_generated_h
#error "CPlayer.generated.h already included, missing '#pragma once' in CPlayer.h"
#endif
#define GCAA_CPlayer_generated_h

#define GCAA_Source_GCAA_CPlayer_h_22_SPARSE_DATA
#define GCAA_Source_GCAA_CPlayer_h_22_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execHeal); \
	DECLARE_FUNCTION(execTakeDamage); \
	DECLARE_FUNCTION(execDoubleJump); \
	DECLARE_FUNCTION(execVOnBeginOverlap); \
	DECLARE_FUNCTION(execSetWalkSpeed); \
	DECLARE_FUNCTION(execSprint); \
	DECLARE_FUNCTION(execResetDodge); \
	DECLARE_FUNCTION(execStopDodge); \
	DECLARE_FUNCTION(execDodge);


#define GCAA_Source_GCAA_CPlayer_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHeal); \
	DECLARE_FUNCTION(execTakeDamage); \
	DECLARE_FUNCTION(execDoubleJump); \
	DECLARE_FUNCTION(execVOnBeginOverlap); \
	DECLARE_FUNCTION(execSetWalkSpeed); \
	DECLARE_FUNCTION(execSprint); \
	DECLARE_FUNCTION(execResetDodge); \
	DECLARE_FUNCTION(execStopDodge); \
	DECLARE_FUNCTION(execDodge);


#define GCAA_Source_GCAA_CPlayer_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACPlayer(); \
	friend struct Z_Construct_UClass_ACPlayer_Statics; \
public: \
	DECLARE_CLASS(ACPlayer, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GCAA"), NO_API) \
	DECLARE_SERIALIZER(ACPlayer)


#define GCAA_Source_GCAA_CPlayer_h_22_INCLASS \
private: \
	static void StaticRegisterNativesACPlayer(); \
	friend struct Z_Construct_UClass_ACPlayer_Statics; \
public: \
	DECLARE_CLASS(ACPlayer, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GCAA"), NO_API) \
	DECLARE_SERIALIZER(ACPlayer)


#define GCAA_Source_GCAA_CPlayer_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACPlayer(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACPlayer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACPlayer); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACPlayer); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACPlayer(ACPlayer&&); \
	NO_API ACPlayer(const ACPlayer&); \
public:


#define GCAA_Source_GCAA_CPlayer_h_22_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACPlayer(ACPlayer&&); \
	NO_API ACPlayer(const ACPlayer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACPlayer); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACPlayer); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACPlayer)


#define GCAA_Source_GCAA_CPlayer_h_22_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(ACPlayer, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__FollowCamera() { return STRUCT_OFFSET(ACPlayer, FollowCamera); } \
	FORCEINLINE static uint32 __PPO__SpellSpawnLocation() { return STRUCT_OFFSET(ACPlayer, SpellSpawnLocation); } \
	FORCEINLINE static uint32 __PPO__m_iDoubleJumpCounter() { return STRUCT_OFFSET(ACPlayer, m_iDoubleJumpCounter); } \
	FORCEINLINE static uint32 __PPO__fJumpHeight() { return STRUCT_OFFSET(ACPlayer, fJumpHeight); } \
	FORCEINLINE static uint32 __PPO__bLockedOn() { return STRUCT_OFFSET(ACPlayer, bLockedOn); } \
	FORCEINLINE static uint32 __PPO__Distraction_sound() { return STRUCT_OFFSET(ACPlayer, Distraction_sound); } \
	FORCEINLINE static uint32 __PPO__actorTarget() { return STRUCT_OFFSET(ACPlayer, actorTarget); } \
	FORCEINLINE static uint32 __PPO__pSpellManager() { return STRUCT_OFFSET(ACPlayer, pSpellManager); } \
	FORCEINLINE static uint32 __PPO__mpcCurrentTarget() { return STRUCT_OFFSET(ACPlayer, mpcCurrentTarget); } \
	FORCEINLINE static uint32 __PPO__masSortedActors() { return STRUCT_OFFSET(ACPlayer, masSortedActors); } \
	FORCEINLINE static uint32 __PPO__macTargets() { return STRUCT_OFFSET(ACPlayer, macTargets); }


#define GCAA_Source_GCAA_CPlayer_h_19_PROLOG
#define GCAA_Source_GCAA_CPlayer_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GCAA_Source_GCAA_CPlayer_h_22_PRIVATE_PROPERTY_OFFSET \
	GCAA_Source_GCAA_CPlayer_h_22_SPARSE_DATA \
	GCAA_Source_GCAA_CPlayer_h_22_RPC_WRAPPERS \
	GCAA_Source_GCAA_CPlayer_h_22_INCLASS \
	GCAA_Source_GCAA_CPlayer_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GCAA_Source_GCAA_CPlayer_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GCAA_Source_GCAA_CPlayer_h_22_PRIVATE_PROPERTY_OFFSET \
	GCAA_Source_GCAA_CPlayer_h_22_SPARSE_DATA \
	GCAA_Source_GCAA_CPlayer_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	GCAA_Source_GCAA_CPlayer_h_22_INCLASS_NO_PURE_DECLS \
	GCAA_Source_GCAA_CPlayer_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GCAA_API UClass* StaticClass<class ACPlayer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GCAA_Source_GCAA_CPlayer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
