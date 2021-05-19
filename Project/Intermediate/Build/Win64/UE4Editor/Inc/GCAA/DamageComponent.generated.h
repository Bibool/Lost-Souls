// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef GCAA_DamageComponent_generated_h
#error "DamageComponent.generated.h already included, missing '#pragma once' in DamageComponent.h"
#endif
#define GCAA_DamageComponent_generated_h

#define GCAA_Source_GCAA_Components_DamageComponent_h_16_SPARSE_DATA
#define GCAA_Source_GCAA_Components_DamageComponent_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGet_Damage); \
	DECLARE_FUNCTION(execGet_Max_Health); \
	DECLARE_FUNCTION(execGet_Health); \
	DECLARE_FUNCTION(execUpgrade_Damage); \
	DECLARE_FUNCTION(execUpgrade_Health); \
	DECLARE_FUNCTION(execReceiveDamage);


#define GCAA_Source_GCAA_Components_DamageComponent_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGet_Damage); \
	DECLARE_FUNCTION(execGet_Max_Health); \
	DECLARE_FUNCTION(execGet_Health); \
	DECLARE_FUNCTION(execUpgrade_Damage); \
	DECLARE_FUNCTION(execUpgrade_Health); \
	DECLARE_FUNCTION(execReceiveDamage);


#define GCAA_Source_GCAA_Components_DamageComponent_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDamageComponent(); \
	friend struct Z_Construct_UClass_UDamageComponent_Statics; \
public: \
	DECLARE_CLASS(UDamageComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GCAA"), NO_API) \
	DECLARE_SERIALIZER(UDamageComponent)


#define GCAA_Source_GCAA_Components_DamageComponent_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUDamageComponent(); \
	friend struct Z_Construct_UClass_UDamageComponent_Statics; \
public: \
	DECLARE_CLASS(UDamageComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GCAA"), NO_API) \
	DECLARE_SERIALIZER(UDamageComponent)


#define GCAA_Source_GCAA_Components_DamageComponent_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDamageComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDamageComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDamageComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDamageComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDamageComponent(UDamageComponent&&); \
	NO_API UDamageComponent(const UDamageComponent&); \
public:


#define GCAA_Source_GCAA_Components_DamageComponent_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDamageComponent(UDamageComponent&&); \
	NO_API UDamageComponent(const UDamageComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDamageComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDamageComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDamageComponent)


#define GCAA_Source_GCAA_Components_DamageComponent_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__m_pcOwner() { return STRUCT_OFFSET(UDamageComponent, m_pcOwner); }


#define GCAA_Source_GCAA_Components_DamageComponent_h_13_PROLOG
#define GCAA_Source_GCAA_Components_DamageComponent_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GCAA_Source_GCAA_Components_DamageComponent_h_16_PRIVATE_PROPERTY_OFFSET \
	GCAA_Source_GCAA_Components_DamageComponent_h_16_SPARSE_DATA \
	GCAA_Source_GCAA_Components_DamageComponent_h_16_RPC_WRAPPERS \
	GCAA_Source_GCAA_Components_DamageComponent_h_16_INCLASS \
	GCAA_Source_GCAA_Components_DamageComponent_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GCAA_Source_GCAA_Components_DamageComponent_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GCAA_Source_GCAA_Components_DamageComponent_h_16_PRIVATE_PROPERTY_OFFSET \
	GCAA_Source_GCAA_Components_DamageComponent_h_16_SPARSE_DATA \
	GCAA_Source_GCAA_Components_DamageComponent_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	GCAA_Source_GCAA_Components_DamageComponent_h_16_INCLASS_NO_PURE_DECLS \
	GCAA_Source_GCAA_Components_DamageComponent_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GCAA_API UClass* StaticClass<class UDamageComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GCAA_Source_GCAA_Components_DamageComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
