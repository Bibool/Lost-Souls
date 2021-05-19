// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GCAA/Interfaces/PoolStatusIdentifier.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePoolStatusIdentifier() {}
// Cross Module References
	GCAA_API UClass* Z_Construct_UClass_UPoolStatusIdentifier_NoRegister();
	GCAA_API UClass* Z_Construct_UClass_UPoolStatusIdentifier();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_GCAA();
// End Cross Module References
	void UPoolStatusIdentifier::StaticRegisterNativesUPoolStatusIdentifier()
	{
	}
	UClass* Z_Construct_UClass_UPoolStatusIdentifier_NoRegister()
	{
		return UPoolStatusIdentifier::StaticClass();
	}
	struct Z_Construct_UClass_UPoolStatusIdentifier_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPoolStatusIdentifier_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_GCAA,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoolStatusIdentifier_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Interfaces/PoolStatusIdentifier.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPoolStatusIdentifier_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IPoolStatusIdentifier>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPoolStatusIdentifier_Statics::ClassParams = {
		&UPoolStatusIdentifier::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000040A1u,
		METADATA_PARAMS(Z_Construct_UClass_UPoolStatusIdentifier_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPoolStatusIdentifier_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPoolStatusIdentifier()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPoolStatusIdentifier_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPoolStatusIdentifier, 359124680);
	template<> GCAA_API UClass* StaticClass<UPoolStatusIdentifier>()
	{
		return UPoolStatusIdentifier::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPoolStatusIdentifier(Z_Construct_UClass_UPoolStatusIdentifier, &UPoolStatusIdentifier::StaticClass, TEXT("/Script/GCAA"), TEXT("UPoolStatusIdentifier"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPoolStatusIdentifier);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
