// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GCAA/Interactables/CKeyPickup.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCKeyPickup() {}
// Cross Module References
	GCAA_API UClass* Z_Construct_UClass_ACKeyPickup_NoRegister();
	GCAA_API UClass* Z_Construct_UClass_ACKeyPickup();
	GCAA_API UClass* Z_Construct_UClass_ACPickup();
	UPackage* Z_Construct_UPackage__Script_GCAA();
// End Cross Module References
	void ACKeyPickup::StaticRegisterNativesACKeyPickup()
	{
	}
	UClass* Z_Construct_UClass_ACKeyPickup_NoRegister()
	{
		return ACKeyPickup::StaticClass();
	}
	struct Z_Construct_UClass_ACKeyPickup_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACKeyPickup_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACPickup,
		(UObject* (*)())Z_Construct_UPackage__Script_GCAA,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACKeyPickup_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Interactables/CKeyPickup.h" },
		{ "ModuleRelativePath", "Interactables/CKeyPickup.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACKeyPickup_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACKeyPickup>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACKeyPickup_Statics::ClassParams = {
		&ACKeyPickup::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACKeyPickup_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACKeyPickup_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACKeyPickup()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACKeyPickup_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACKeyPickup, 3780437214);
	template<> GCAA_API UClass* StaticClass<ACKeyPickup>()
	{
		return ACKeyPickup::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACKeyPickup(Z_Construct_UClass_ACKeyPickup, &ACKeyPickup::StaticClass, TEXT("/Script/GCAA"), TEXT("ACKeyPickup"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACKeyPickup);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
