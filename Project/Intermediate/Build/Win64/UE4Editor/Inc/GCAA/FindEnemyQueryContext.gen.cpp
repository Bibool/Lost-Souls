// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GCAA/NPC/FindEnemyQueryContext.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFindEnemyQueryContext() {}
// Cross Module References
	GCAA_API UClass* Z_Construct_UClass_UFindEnemyQueryContext_NoRegister();
	GCAA_API UClass* Z_Construct_UClass_UFindEnemyQueryContext();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryContext();
	UPackage* Z_Construct_UPackage__Script_GCAA();
// End Cross Module References
	void UFindEnemyQueryContext::StaticRegisterNativesUFindEnemyQueryContext()
	{
	}
	UClass* Z_Construct_UClass_UFindEnemyQueryContext_NoRegister()
	{
		return UFindEnemyQueryContext::StaticClass();
	}
	struct Z_Construct_UClass_UFindEnemyQueryContext_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFindEnemyQueryContext_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEnvQueryContext,
		(UObject* (*)())Z_Construct_UPackage__Script_GCAA,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFindEnemyQueryContext_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "NPC/FindEnemyQueryContext.h" },
		{ "ModuleRelativePath", "NPC/FindEnemyQueryContext.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFindEnemyQueryContext_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFindEnemyQueryContext>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFindEnemyQueryContext_Statics::ClassParams = {
		&UFindEnemyQueryContext::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UFindEnemyQueryContext_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFindEnemyQueryContext_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFindEnemyQueryContext()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFindEnemyQueryContext_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFindEnemyQueryContext, 3237418066);
	template<> GCAA_API UClass* StaticClass<UFindEnemyQueryContext>()
	{
		return UFindEnemyQueryContext::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFindEnemyQueryContext(Z_Construct_UClass_UFindEnemyQueryContext, &UFindEnemyQueryContext::StaticClass, TEXT("/Script/GCAA"), TEXT("UFindEnemyQueryContext"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFindEnemyQueryContext);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
