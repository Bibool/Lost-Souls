// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GCAA_CPlayerController_generated_h
#error "CPlayerController.generated.h already included, missing '#pragma once' in CPlayerController.h"
#endif
#define GCAA_CPlayerController_generated_h

#define GCAA_Source_GCAA_UpgradeSystem_CPlayerController_h_15_SPARSE_DATA
#define GCAA_Source_GCAA_UpgradeSystem_CPlayerController_h_15_RPC_WRAPPERS
#define GCAA_Source_GCAA_UpgradeSystem_CPlayerController_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define GCAA_Source_GCAA_UpgradeSystem_CPlayerController_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACPlayerController(); \
	friend struct Z_Construct_UClass_ACPlayerController_Statics; \
public: \
	DECLARE_CLASS(ACPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GCAA"), NO_API) \
	DECLARE_SERIALIZER(ACPlayerController)


#define GCAA_Source_GCAA_UpgradeSystem_CPlayerController_h_15_INCLASS \
private: \
	static void StaticRegisterNativesACPlayerController(); \
	friend struct Z_Construct_UClass_ACPlayerController_Statics; \
public: \
	DECLARE_CLASS(ACPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GCAA"), NO_API) \
	DECLARE_SERIALIZER(ACPlayerController)


#define GCAA_Source_GCAA_UpgradeSystem_CPlayerController_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACPlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACPlayerController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACPlayerController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACPlayerController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACPlayerController(ACPlayerController&&); \
	NO_API ACPlayerController(const ACPlayerController&); \
public:


#define GCAA_Source_GCAA_UpgradeSystem_CPlayerController_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACPlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACPlayerController(ACPlayerController&&); \
	NO_API ACPlayerController(const ACPlayerController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACPlayerController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACPlayerController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACPlayerController)


#define GCAA_Source_GCAA_UpgradeSystem_CPlayerController_h_15_PRIVATE_PROPERTY_OFFSET
#define GCAA_Source_GCAA_UpgradeSystem_CPlayerController_h_12_PROLOG
#define GCAA_Source_GCAA_UpgradeSystem_CPlayerController_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GCAA_Source_GCAA_UpgradeSystem_CPlayerController_h_15_PRIVATE_PROPERTY_OFFSET \
	GCAA_Source_GCAA_UpgradeSystem_CPlayerController_h_15_SPARSE_DATA \
	GCAA_Source_GCAA_UpgradeSystem_CPlayerController_h_15_RPC_WRAPPERS \
	GCAA_Source_GCAA_UpgradeSystem_CPlayerController_h_15_INCLASS \
	GCAA_Source_GCAA_UpgradeSystem_CPlayerController_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GCAA_Source_GCAA_UpgradeSystem_CPlayerController_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GCAA_Source_GCAA_UpgradeSystem_CPlayerController_h_15_PRIVATE_PROPERTY_OFFSET \
	GCAA_Source_GCAA_UpgradeSystem_CPlayerController_h_15_SPARSE_DATA \
	GCAA_Source_GCAA_UpgradeSystem_CPlayerController_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	GCAA_Source_GCAA_UpgradeSystem_CPlayerController_h_15_INCLASS_NO_PURE_DECLS \
	GCAA_Source_GCAA_UpgradeSystem_CPlayerController_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GCAA_API UClass* StaticClass<class ACPlayerController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GCAA_Source_GCAA_UpgradeSystem_CPlayerController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
