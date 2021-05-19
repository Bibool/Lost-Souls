// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USoundBase;
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef GCAA_CPlayer_generated_h
#error "CPlayer.generated.h already included, missing '#pragma once' in CPlayer.h"
#endif
#define GCAA_CPlayer_generated_h

#define GCAA_Source_GCAA_Player_CPlayer_h_52_SPARSE_DATA
#define GCAA_Source_GCAA_Player_CPlayer_h_52_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetMainMenuSound); \
	DECLARE_FUNCTION(execGet_IsLockedOn); \
	DECLARE_FUNCTION(execOnOverlapBegin); \
	DECLARE_FUNCTION(execDoubleJump); \
	DECLARE_FUNCTION(execSetWalkSpeed); \
	DECLARE_FUNCTION(execSprint); \
	DECLARE_FUNCTION(execResetDodge); \
	DECLARE_FUNCTION(execStopDodge); \
	DECLARE_FUNCTION(execDodge);


#define GCAA_Source_GCAA_Player_CPlayer_h_52_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetMainMenuSound); \
	DECLARE_FUNCTION(execGet_IsLockedOn); \
	DECLARE_FUNCTION(execOnOverlapBegin); \
	DECLARE_FUNCTION(execDoubleJump); \
	DECLARE_FUNCTION(execSetWalkSpeed); \
	DECLARE_FUNCTION(execSprint); \
	DECLARE_FUNCTION(execResetDodge); \
	DECLARE_FUNCTION(execStopDodge); \
	DECLARE_FUNCTION(execDodge);


#define GCAA_Source_GCAA_Player_CPlayer_h_52_EVENT_PARMS
#define GCAA_Source_GCAA_Player_CPlayer_h_52_CALLBACK_WRAPPERS
#define GCAA_Source_GCAA_Player_CPlayer_h_52_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACPlayer(); \
	friend struct Z_Construct_UClass_ACPlayer_Statics; \
public: \
	DECLARE_CLASS(ACPlayer, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GCAA"), NO_API) \
	DECLARE_SERIALIZER(ACPlayer) \
	virtual UObject* _getUObject() const override { return const_cast<ACPlayer*>(this); }


#define GCAA_Source_GCAA_Player_CPlayer_h_52_INCLASS \
private: \
	static void StaticRegisterNativesACPlayer(); \
	friend struct Z_Construct_UClass_ACPlayer_Statics; \
public: \
	DECLARE_CLASS(ACPlayer, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GCAA"), NO_API) \
	DECLARE_SERIALIZER(ACPlayer) \
	virtual UObject* _getUObject() const override { return const_cast<ACPlayer*>(this); }


#define GCAA_Source_GCAA_Player_CPlayer_h_52_STANDARD_CONSTRUCTORS \
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


#define GCAA_Source_GCAA_Player_CPlayer_h_52_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACPlayer(ACPlayer&&); \
	NO_API ACPlayer(const ACPlayer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACPlayer); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACPlayer); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACPlayer)


#define GCAA_Source_GCAA_Player_CPlayer_h_52_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(ACPlayer, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__FollowCamera() { return STRUCT_OFFSET(ACPlayer, FollowCamera); } \
	FORCEINLINE static uint32 __PPO__SpellSpawnLocation() { return STRUCT_OFFSET(ACPlayer, SpellSpawnLocation); } \
	FORCEINLINE static uint32 __PPO__AutoLeftLocation() { return STRUCT_OFFSET(ACPlayer, AutoLeftLocation); } \
	FORCEINLINE static uint32 __PPO__AutoRightLocation() { return STRUCT_OFFSET(ACPlayer, AutoRightLocation); } \
	FORCEINLINE static uint32 __PPO__DamageableComponent() { return STRUCT_OFFSET(ACPlayer, DamageableComponent); } \
	FORCEINLINE static uint32 __PPO__m_iDoubleJumpCounter() { return STRUCT_OFFSET(ACPlayer, m_iDoubleJumpCounter); } \
	FORCEINLINE static uint32 __PPO__fJumpHeight() { return STRUCT_OFFSET(ACPlayer, fJumpHeight); } \
	FORCEINLINE static uint32 __PPO__MainTheme() { return STRUCT_OFFSET(ACPlayer, MainTheme); } \
	FORCEINLINE static uint32 __PPO__JumpSound() { return STRUCT_OFFSET(ACPlayer, JumpSound); } \
	FORCEINLINE static uint32 __PPO__DodgeSound() { return STRUCT_OFFSET(ACPlayer, DodgeSound); } \
	FORCEINLINE static uint32 __PPO__SprintSound() { return STRUCT_OFFSET(ACPlayer, SprintSound); } \
	FORCEINLINE static uint32 __PPO__FootStepSound() { return STRUCT_OFFSET(ACPlayer, FootStepSound); } \
	FORCEINLINE static uint32 __PPO__FireballSound() { return STRUCT_OFFSET(ACPlayer, FireballSound); } \
	FORCEINLINE static uint32 __PPO__LightningSound() { return STRUCT_OFFSET(ACPlayer, LightningSound); } \
	FORCEINLINE static uint32 __PPO__WindBlastSound() { return STRUCT_OFFSET(ACPlayer, WindBlastSound); } \
	FORCEINLINE static uint32 __PPO__AutoAttackSound() { return STRUCT_OFFSET(ACPlayer, AutoAttackSound); } \
	FORCEINLINE static uint32 __PPO__DeathSound() { return STRUCT_OFFSET(ACPlayer, DeathSound); } \
	FORCEINLINE static uint32 __PPO__Distraction_sound() { return STRUCT_OFFSET(ACPlayer, Distraction_sound); } \
	FORCEINLINE static uint32 __PPO__m_pcPlayerUI() { return STRUCT_OFFSET(ACPlayer, m_pcPlayerUI); } \
	FORCEINLINE static uint32 __PPO__m_pcSpellManager() { return STRUCT_OFFSET(ACPlayer, m_pcSpellManager); } \
	FORCEINLINE static uint32 __PPO__m_pcCurrentBasicSpellComponent() { return STRUCT_OFFSET(ACPlayer, m_pcCurrentBasicSpellComponent); } \
	FORCEINLINE static uint32 __PPO__m_pcCurrentTarget() { return STRUCT_OFFSET(ACPlayer, m_pcCurrentTarget); } \
	FORCEINLINE static uint32 __PPO__m_apcTargets() { return STRUCT_OFFSET(ACPlayer, m_apcTargets); } \
	FORCEINLINE static uint32 __PPO__m_asSortedActors() { return STRUCT_OFFSET(ACPlayer, m_asSortedActors); }


#define GCAA_Source_GCAA_Player_CPlayer_h_49_PROLOG \
	GCAA_Source_GCAA_Player_CPlayer_h_52_EVENT_PARMS


#define GCAA_Source_GCAA_Player_CPlayer_h_52_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GCAA_Source_GCAA_Player_CPlayer_h_52_PRIVATE_PROPERTY_OFFSET \
	GCAA_Source_GCAA_Player_CPlayer_h_52_SPARSE_DATA \
	GCAA_Source_GCAA_Player_CPlayer_h_52_RPC_WRAPPERS \
	GCAA_Source_GCAA_Player_CPlayer_h_52_CALLBACK_WRAPPERS \
	GCAA_Source_GCAA_Player_CPlayer_h_52_INCLASS \
	GCAA_Source_GCAA_Player_CPlayer_h_52_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GCAA_Source_GCAA_Player_CPlayer_h_52_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GCAA_Source_GCAA_Player_CPlayer_h_52_PRIVATE_PROPERTY_OFFSET \
	GCAA_Source_GCAA_Player_CPlayer_h_52_SPARSE_DATA \
	GCAA_Source_GCAA_Player_CPlayer_h_52_RPC_WRAPPERS_NO_PURE_DECLS \
	GCAA_Source_GCAA_Player_CPlayer_h_52_CALLBACK_WRAPPERS \
	GCAA_Source_GCAA_Player_CPlayer_h_52_INCLASS_NO_PURE_DECLS \
	GCAA_Source_GCAA_Player_CPlayer_h_52_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GCAA_API UClass* StaticClass<class ACPlayer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GCAA_Source_GCAA_Player_CPlayer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
