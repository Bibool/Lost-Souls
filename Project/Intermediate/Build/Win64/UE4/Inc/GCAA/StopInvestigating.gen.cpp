// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GCAA/NPC/StopInvestigating.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStopInvestigating() {}
// Cross Module References
	GCAA_API UClass* Z_Construct_UClass_UStopInvestigating_NoRegister();
	GCAA_API UClass* Z_Construct_UClass_UStopInvestigating();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTask_BlackboardBase();
	UPackage* Z_Construct_UPackage__Script_GCAA();
// End Cross Module References
	void UStopInvestigating::StaticRegisterNativesUStopInvestigating()
	{
	}
	UClass* Z_Construct_UClass_UStopInvestigating_NoRegister()
	{
		return UStopInvestigating::StaticClass();
	}
	struct Z_Construct_UClass_UStopInvestigating_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStopInvestigating_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTTask_BlackboardBase,
		(UObject* (*)())Z_Construct_UPackage__Script_GCAA,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStopInvestigating_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "NPC/StopInvestigating.h" },
		{ "ModuleRelativePath", "NPC/StopInvestigating.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStopInvestigating_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStopInvestigating>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UStopInvestigating_Statics::ClassParams = {
		&UStopInvestigating::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UStopInvestigating_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UStopInvestigating_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UStopInvestigating()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UStopInvestigating_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UStopInvestigating, 3678707882);
	template<> GCAA_API UClass* StaticClass<UStopInvestigating>()
	{
		return UStopInvestigating::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UStopInvestigating(Z_Construct_UClass_UStopInvestigating, &UStopInvestigating::StaticClass, TEXT("/Script/GCAA"), TEXT("UStopInvestigating"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStopInvestigating);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
