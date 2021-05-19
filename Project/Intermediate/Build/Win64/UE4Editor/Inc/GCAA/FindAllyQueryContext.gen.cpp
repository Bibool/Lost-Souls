// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GCAA/NPC/FindAllyQueryContext.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFindAllyQueryContext() {}
// Cross Module References
	GCAA_API UClass* Z_Construct_UClass_UFindAllyQueryContext_NoRegister();
	GCAA_API UClass* Z_Construct_UClass_UFindAllyQueryContext();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryContext();
	UPackage* Z_Construct_UPackage__Script_GCAA();
// End Cross Module References
	void UFindAllyQueryContext::StaticRegisterNativesUFindAllyQueryContext()
	{
	}
	UClass* Z_Construct_UClass_UFindAllyQueryContext_NoRegister()
	{
		return UFindAllyQueryContext::StaticClass();
	}
	struct Z_Construct_UClass_UFindAllyQueryContext_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFindAllyQueryContext_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEnvQueryContext,
		(UObject* (*)())Z_Construct_UPackage__Script_GCAA,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFindAllyQueryContext_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "NPC/FindAllyQueryContext.h" },
		{ "ModuleRelativePath", "NPC/FindAllyQueryContext.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFindAllyQueryContext_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFindAllyQueryContext>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFindAllyQueryContext_Statics::ClassParams = {
		&UFindAllyQueryContext::StaticClass,
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
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFindAllyQueryContext_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFindAllyQueryContext_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFindAllyQueryContext()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFindAllyQueryContext_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFindAllyQueryContext, 1353585746);
	template<> GCAA_API UClass* StaticClass<UFindAllyQueryContext>()
	{
		return UFindAllyQueryContext::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFindAllyQueryContext(Z_Construct_UClass_UFindAllyQueryContext, &UFindAllyQueryContext::StaticClass, TEXT("/Script/GCAA"), TEXT("UFindAllyQueryContext"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFindAllyQueryContext);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
