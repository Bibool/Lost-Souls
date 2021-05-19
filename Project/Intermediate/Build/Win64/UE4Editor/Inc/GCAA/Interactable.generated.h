// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GCAA_Interactable_generated_h
#error "Interactable.generated.h already included, missing '#pragma once' in Interactable.h"
#endif
#define GCAA_Interactable_generated_h

#define GCAA_Source_GCAA_DynamicEnvironment_Interactable_h_20_SPARSE_DATA
#define GCAA_Source_GCAA_DynamicEnvironment_Interactable_h_20_RPC_WRAPPERS \
	virtual void PerformInteract_Implementation() {}; \
 \
	DECLARE_FUNCTION(execPerformInteract);


#define GCAA_Source_GCAA_DynamicEnvironment_Interactable_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void PerformInteract_Implementation() {}; \
 \
	DECLARE_FUNCTION(execPerformInteract);


#define GCAA_Source_GCAA_DynamicEnvironment_Interactable_h_20_EVENT_PARMS
#define GCAA_Source_GCAA_DynamicEnvironment_Interactable_h_20_CALLBACK_WRAPPERS
#define GCAA_Source_GCAA_DynamicEnvironment_Interactable_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInteractable(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInteractable) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInteractable); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInteractable); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInteractable(UInteractable&&); \
	NO_API UInteractable(const UInteractable&); \
public:


#define GCAA_Source_GCAA_DynamicEnvironment_Interactable_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInteractable(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInteractable(UInteractable&&); \
	NO_API UInteractable(const UInteractable&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInteractable); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInteractable); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInteractable)


#define GCAA_Source_GCAA_DynamicEnvironment_Interactable_h_20_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUInteractable(); \
	friend struct Z_Construct_UClass_UInteractable_Statics; \
public: \
	DECLARE_CLASS(UInteractable, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/GCAA"), NO_API) \
	DECLARE_SERIALIZER(UInteractable)


#define GCAA_Source_GCAA_DynamicEnvironment_Interactable_h_20_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	GCAA_Source_GCAA_DynamicEnvironment_Interactable_h_20_GENERATED_UINTERFACE_BODY() \
	GCAA_Source_GCAA_DynamicEnvironment_Interactable_h_20_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GCAA_Source_GCAA_DynamicEnvironment_Interactable_h_20_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	GCAA_Source_GCAA_DynamicEnvironment_Interactable_h_20_GENERATED_UINTERFACE_BODY() \
	GCAA_Source_GCAA_DynamicEnvironment_Interactable_h_20_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GCAA_Source_GCAA_DynamicEnvironment_Interactable_h_20_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IInteractable() {} \
public: \
	typedef UInteractable UClassType; \
	typedef IInteractable ThisClass; \
	static void Execute_PerformInteract(UObject* O); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define GCAA_Source_GCAA_DynamicEnvironment_Interactable_h_20_INCLASS_IINTERFACE \
protected: \
	virtual ~IInteractable() {} \
public: \
	typedef UInteractable UClassType; \
	typedef IInteractable ThisClass; \
	static void Execute_PerformInteract(UObject* O); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define GCAA_Source_GCAA_DynamicEnvironment_Interactable_h_17_PROLOG \
	GCAA_Source_GCAA_DynamicEnvironment_Interactable_h_20_EVENT_PARMS


#define GCAA_Source_GCAA_DynamicEnvironment_Interactable_h_26_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GCAA_Source_GCAA_DynamicEnvironment_Interactable_h_20_SPARSE_DATA \
	GCAA_Source_GCAA_DynamicEnvironment_Interactable_h_20_RPC_WRAPPERS \
	GCAA_Source_GCAA_DynamicEnvironment_Interactable_h_20_CALLBACK_WRAPPERS \
	GCAA_Source_GCAA_DynamicEnvironment_Interactable_h_20_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GCAA_Source_GCAA_DynamicEnvironment_Interactable_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GCAA_Source_GCAA_DynamicEnvironment_Interactable_h_20_SPARSE_DATA \
	GCAA_Source_GCAA_DynamicEnvironment_Interactable_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	GCAA_Source_GCAA_DynamicEnvironment_Interactable_h_20_CALLBACK_WRAPPERS \
	GCAA_Source_GCAA_DynamicEnvironment_Interactable_h_20_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GCAA_API UClass* StaticClass<class UInteractable>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GCAA_Source_GCAA_DynamicEnvironment_Interactable_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
