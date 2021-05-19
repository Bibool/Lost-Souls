// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GCAA_DeathInterface_generated_h
#error "DeathInterface.generated.h already included, missing '#pragma once' in DeathInterface.h"
#endif
#define GCAA_DeathInterface_generated_h

#define GCAA_Source_GCAA_Interfaces_DeathInterface_h_14_SPARSE_DATA
#define GCAA_Source_GCAA_Interfaces_DeathInterface_h_14_RPC_WRAPPERS
#define GCAA_Source_GCAA_Interfaces_DeathInterface_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define GCAA_Source_GCAA_Interfaces_DeathInterface_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GCAA_API UDeathInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDeathInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GCAA_API, UDeathInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDeathInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	GCAA_API UDeathInterface(UDeathInterface&&); \
	GCAA_API UDeathInterface(const UDeathInterface&); \
public:


#define GCAA_Source_GCAA_Interfaces_DeathInterface_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GCAA_API UDeathInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	GCAA_API UDeathInterface(UDeathInterface&&); \
	GCAA_API UDeathInterface(const UDeathInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GCAA_API, UDeathInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDeathInterface); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDeathInterface)


#define GCAA_Source_GCAA_Interfaces_DeathInterface_h_14_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUDeathInterface(); \
	friend struct Z_Construct_UClass_UDeathInterface_Statics; \
public: \
	DECLARE_CLASS(UDeathInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/GCAA"), GCAA_API) \
	DECLARE_SERIALIZER(UDeathInterface)


#define GCAA_Source_GCAA_Interfaces_DeathInterface_h_14_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	GCAA_Source_GCAA_Interfaces_DeathInterface_h_14_GENERATED_UINTERFACE_BODY() \
	GCAA_Source_GCAA_Interfaces_DeathInterface_h_14_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GCAA_Source_GCAA_Interfaces_DeathInterface_h_14_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	GCAA_Source_GCAA_Interfaces_DeathInterface_h_14_GENERATED_UINTERFACE_BODY() \
	GCAA_Source_GCAA_Interfaces_DeathInterface_h_14_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GCAA_Source_GCAA_Interfaces_DeathInterface_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IDeathInterface() {} \
public: \
	typedef UDeathInterface UClassType; \
	typedef IDeathInterface ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define GCAA_Source_GCAA_Interfaces_DeathInterface_h_14_INCLASS_IINTERFACE \
protected: \
	virtual ~IDeathInterface() {} \
public: \
	typedef UDeathInterface UClassType; \
	typedef IDeathInterface ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define GCAA_Source_GCAA_Interfaces_DeathInterface_h_11_PROLOG
#define GCAA_Source_GCAA_Interfaces_DeathInterface_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GCAA_Source_GCAA_Interfaces_DeathInterface_h_14_SPARSE_DATA \
	GCAA_Source_GCAA_Interfaces_DeathInterface_h_14_RPC_WRAPPERS \
	GCAA_Source_GCAA_Interfaces_DeathInterface_h_14_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GCAA_Source_GCAA_Interfaces_DeathInterface_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GCAA_Source_GCAA_Interfaces_DeathInterface_h_14_SPARSE_DATA \
	GCAA_Source_GCAA_Interfaces_DeathInterface_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	GCAA_Source_GCAA_Interfaces_DeathInterface_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GCAA_API UClass* StaticClass<class UDeathInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GCAA_Source_GCAA_Interfaces_DeathInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
