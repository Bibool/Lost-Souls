// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GCAA/AnimNotifies/Spells/FireballCastNotify.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFireballCastNotify() {}
// Cross Module References
	GCAA_API UClass* Z_Construct_UClass_UFireballCastNotify_NoRegister();
	GCAA_API UClass* Z_Construct_UClass_UFireballCastNotify();
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotify();
	UPackage* Z_Construct_UPackage__Script_GCAA();
// End Cross Module References
	void UFireballCastNotify::StaticRegisterNativesUFireballCastNotify()
	{
	}
	UClass* Z_Construct_UClass_UFireballCastNotify_NoRegister()
	{
		return UFireballCastNotify::StaticClass();
	}
	struct Z_Construct_UClass_UFireballCastNotify_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFireballCastNotify_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimNotify,
		(UObject* (*)())Z_Construct_UPackage__Script_GCAA,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFireballCastNotify_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "AnimNotifies/Spells/FireballCastNotify.h" },
		{ "ModuleRelativePath", "AnimNotifies/Spells/FireballCastNotify.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFireballCastNotify_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFireballCastNotify>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFireballCastNotify_Statics::ClassParams = {
		&UFireballCastNotify::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UFireballCastNotify_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFireballCastNotify_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFireballCastNotify()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFireballCastNotify_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFireballCastNotify, 31744100);
	template<> GCAA_API UClass* StaticClass<UFireballCastNotify>()
	{
		return UFireballCastNotify::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFireballCastNotify(Z_Construct_UClass_UFireballCastNotify, &UFireballCastNotify::StaticClass, TEXT("/Script/GCAA"), TEXT("UFireballCastNotify"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFireballCastNotify);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
