// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GCAA/NPC/FindChargeDistance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFindChargeDistance() {}
// Cross Module References
	GCAA_API UClass* Z_Construct_UClass_UFindChargeDistance_NoRegister();
	GCAA_API UClass* Z_Construct_UClass_UFindChargeDistance();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTask_BlackboardBase();
	UPackage* Z_Construct_UPackage__Script_GCAA();
// End Cross Module References
	void UFindChargeDistance::StaticRegisterNativesUFindChargeDistance()
	{
	}
	UClass* Z_Construct_UClass_UFindChargeDistance_NoRegister()
	{
		return UFindChargeDistance::StaticClass();
	}
	struct Z_Construct_UClass_UFindChargeDistance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFindChargeDistance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTTask_BlackboardBase,
		(UObject* (*)())Z_Construct_UPackage__Script_GCAA,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFindChargeDistance_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "NPC/FindChargeDistance.h" },
		{ "ModuleRelativePath", "NPC/FindChargeDistance.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFindChargeDistance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFindChargeDistance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFindChargeDistance_Statics::ClassParams = {
		&UFindChargeDistance::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UFindChargeDistance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFindChargeDistance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFindChargeDistance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFindChargeDistance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFindChargeDistance, 221508889);
	template<> GCAA_API UClass* StaticClass<UFindChargeDistance>()
	{
		return UFindChargeDistance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFindChargeDistance(Z_Construct_UClass_UFindChargeDistance, &UFindChargeDistance::StaticClass, TEXT("/Script/GCAA"), TEXT("UFindChargeDistance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFindChargeDistance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
