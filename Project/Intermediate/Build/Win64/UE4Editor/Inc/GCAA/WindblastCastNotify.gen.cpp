// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GCAA/AnimNotifies/Spells/WindblastCastNotify.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWindblastCastNotify() {}
// Cross Module References
	GCAA_API UClass* Z_Construct_UClass_UWindblastCastNotify_NoRegister();
	GCAA_API UClass* Z_Construct_UClass_UWindblastCastNotify();
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotify();
	UPackage* Z_Construct_UPackage__Script_GCAA();
// End Cross Module References
	void UWindblastCastNotify::StaticRegisterNativesUWindblastCastNotify()
	{
	}
	UClass* Z_Construct_UClass_UWindblastCastNotify_NoRegister()
	{
		return UWindblastCastNotify::StaticClass();
	}
	struct Z_Construct_UClass_UWindblastCastNotify_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWindblastCastNotify_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimNotify,
		(UObject* (*)())Z_Construct_UPackage__Script_GCAA,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWindblastCastNotify_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "AnimNotifies/Spells/WindblastCastNotify.h" },
		{ "ModuleRelativePath", "AnimNotifies/Spells/WindblastCastNotify.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWindblastCastNotify_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWindblastCastNotify>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UWindblastCastNotify_Statics::ClassParams = {
		&UWindblastCastNotify::StaticClass,
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
		0x001120A0u,
		METADATA_PARAMS(Z_Construct_UClass_UWindblastCastNotify_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWindblastCastNotify_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWindblastCastNotify()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UWindblastCastNotify_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UWindblastCastNotify, 1679686056);
	template<> GCAA_API UClass* StaticClass<UWindblastCastNotify>()
	{
		return UWindblastCastNotify::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UWindblastCastNotify(Z_Construct_UClass_UWindblastCastNotify, &UWindblastCastNotify::StaticClass, TEXT("/Script/GCAA"), TEXT("UWindblastCastNotify"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWindblastCastNotify);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
