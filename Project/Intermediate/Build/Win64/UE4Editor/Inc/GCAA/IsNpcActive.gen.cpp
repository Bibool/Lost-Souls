// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GCAA/NPC/IsNpcActive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIsNpcActive() {}
// Cross Module References
	GCAA_API UClass* Z_Construct_UClass_UIsNpcActive_NoRegister();
	GCAA_API UClass* Z_Construct_UClass_UIsNpcActive();
	AIMODULE_API UClass* Z_Construct_UClass_UBTService();
	UPackage* Z_Construct_UPackage__Script_GCAA();
// End Cross Module References
	void UIsNpcActive::StaticRegisterNativesUIsNpcActive()
	{
	}
	UClass* Z_Construct_UClass_UIsNpcActive_NoRegister()
	{
		return UIsNpcActive::StaticClass();
	}
	struct Z_Construct_UClass_UIsNpcActive_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIsNpcActive_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTService,
		(UObject* (*)())Z_Construct_UPackage__Script_GCAA,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIsNpcActive_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "NPC/IsNpcActive.h" },
		{ "ModuleRelativePath", "NPC/IsNpcActive.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIsNpcActive_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIsNpcActive>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UIsNpcActive_Statics::ClassParams = {
		&UIsNpcActive::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UIsNpcActive_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UIsNpcActive_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UIsNpcActive()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UIsNpcActive_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UIsNpcActive, 2474572873);
	template<> GCAA_API UClass* StaticClass<UIsNpcActive>()
	{
		return UIsNpcActive::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UIsNpcActive(Z_Construct_UClass_UIsNpcActive, &UIsNpcActive::StaticClass, TEXT("/Script/GCAA"), TEXT("UIsNpcActive"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIsNpcActive);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
