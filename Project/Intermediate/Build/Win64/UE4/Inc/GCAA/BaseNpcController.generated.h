// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef GCAA_BaseNpcController_generated_h
#error "BaseNpcController.generated.h already included, missing '#pragma once' in BaseNpcController.h"
#endif
#define GCAA_BaseNpcController_generated_h

#define GCAA_Source_GCAA_NPC_BaseNpcController_h_18_SPARSE_DATA
#define GCAA_Source_GCAA_NPC_BaseNpcController_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execon_updated);


#define GCAA_Source_GCAA_NPC_BaseNpcController_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execon_updated);


#define GCAA_Source_GCAA_NPC_BaseNpcController_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABaseNpcController(); \
	friend struct Z_Construct_UClass_ABaseNpcController_Statics; \
public: \
	DECLARE_CLASS(ABaseNpcController, AAIController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GCAA"), NO_API) \
	DECLARE_SERIALIZER(ABaseNpcController)


#define GCAA_Source_GCAA_NPC_BaseNpcController_h_18_INCLASS \
private: \
	static void StaticRegisterNativesABaseNpcController(); \
	friend struct Z_Construct_UClass_ABaseNpcController_Statics; \
public: \
	DECLARE_CLASS(ABaseNpcController, AAIController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GCAA"), NO_API) \
	DECLARE_SERIALIZER(ABaseNpcController)


#define GCAA_Source_GCAA_NPC_BaseNpcController_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABaseNpcController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABaseNpcController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABaseNpcController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaseNpcController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABaseNpcController(ABaseNpcController&&); \
	NO_API ABaseNpcController(const ABaseNpcController&); \
public:


#define GCAA_Source_GCAA_NPC_BaseNpcController_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABaseNpcController(ABaseNpcController&&); \
	NO_API ABaseNpcController(const ABaseNpcController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABaseNpcController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaseNpcController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABaseNpcController)


#define GCAA_Source_GCAA_NPC_BaseNpcController_h_18_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__BlackboardComponent() { return STRUCT_OFFSET(ABaseNpcController, BlackboardComponent); } \
	FORCEINLINE static uint32 __PPO__sightRadius() { return STRUCT_OFFSET(ABaseNpcController, sightRadius); } \
	FORCEINLINE static uint32 __PPO__loseSightRadius() { return STRUCT_OFFSET(ABaseNpcController, loseSightRadius); } \
	FORCEINLINE static uint32 __PPO__peripheralVisionAngleDegree() { return STRUCT_OFFSET(ABaseNpcController, peripheralVisionAngleDegree); } \
	FORCEINLINE static uint32 __PPO__maxAge() { return STRUCT_OFFSET(ABaseNpcController, maxAge); } \
	FORCEINLINE static uint32 __PPO__autoSuccessRange() { return STRUCT_OFFSET(ABaseNpcController, autoSuccessRange); } \
	FORCEINLINE static uint32 __PPO__hearingRange() { return STRUCT_OFFSET(ABaseNpcController, hearingRange); }


#define GCAA_Source_GCAA_NPC_BaseNpcController_h_15_PROLOG
#define GCAA_Source_GCAA_NPC_BaseNpcController_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GCAA_Source_GCAA_NPC_BaseNpcController_h_18_PRIVATE_PROPERTY_OFFSET \
	GCAA_Source_GCAA_NPC_BaseNpcController_h_18_SPARSE_DATA \
	GCAA_Source_GCAA_NPC_BaseNpcController_h_18_RPC_WRAPPERS \
	GCAA_Source_GCAA_NPC_BaseNpcController_h_18_INCLASS \
	GCAA_Source_GCAA_NPC_BaseNpcController_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GCAA_Source_GCAA_NPC_BaseNpcController_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GCAA_Source_GCAA_NPC_BaseNpcController_h_18_PRIVATE_PROPERTY_OFFSET \
	GCAA_Source_GCAA_NPC_BaseNpcController_h_18_SPARSE_DATA \
	GCAA_Source_GCAA_NPC_BaseNpcController_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	GCAA_Source_GCAA_NPC_BaseNpcController_h_18_INCLASS_NO_PURE_DECLS \
	GCAA_Source_GCAA_NPC_BaseNpcController_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GCAA_API UClass* StaticClass<class ABaseNpcController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GCAA_Source_GCAA_NPC_BaseNpcController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
