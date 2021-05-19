// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GCAA/NPC/MyPyroxenesBP.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyPyroxenesBP() {}
// Cross Module References
	GCAA_API UClass* Z_Construct_UClass_AMyPyroxenesBP_NoRegister();
	GCAA_API UClass* Z_Construct_UClass_AMyPyroxenesBP();
	GCAA_API UClass* Z_Construct_UClass_APyroxenes();
	UPackage* Z_Construct_UPackage__Script_GCAA();
// End Cross Module References
	void AMyPyroxenesBP::StaticRegisterNativesAMyPyroxenesBP()
	{
	}
	UClass* Z_Construct_UClass_AMyPyroxenesBP_NoRegister()
	{
		return AMyPyroxenesBP::StaticClass();
	}
	struct Z_Construct_UClass_AMyPyroxenesBP_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMyPyroxenesBP_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APyroxenes,
		(UObject* (*)())Z_Construct_UPackage__Script_GCAA,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyPyroxenesBP_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "NPC/MyPyroxenesBP.h" },
		{ "ModuleRelativePath", "NPC/MyPyroxenesBP.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyPyroxenesBP_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyPyroxenesBP>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMyPyroxenesBP_Statics::ClassParams = {
		&AMyPyroxenesBP::StaticClass,
		"Game",
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
		METADATA_PARAMS(Z_Construct_UClass_AMyPyroxenesBP_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMyPyroxenesBP_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMyPyroxenesBP()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMyPyroxenesBP_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMyPyroxenesBP, 1507240935);
	template<> GCAA_API UClass* StaticClass<AMyPyroxenesBP>()
	{
		return AMyPyroxenesBP::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMyPyroxenesBP(Z_Construct_UClass_AMyPyroxenesBP, &AMyPyroxenesBP::StaticClass, TEXT("/Script/GCAA"), TEXT("AMyPyroxenesBP"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyPyroxenesBP);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
