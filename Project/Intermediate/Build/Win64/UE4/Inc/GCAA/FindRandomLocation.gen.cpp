// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GCAA/NPC/FindRandomLocation.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFindRandomLocation() {}
// Cross Module References
	GCAA_API UClass* Z_Construct_UClass_UFindRandomLocation_NoRegister();
	GCAA_API UClass* Z_Construct_UClass_UFindRandomLocation();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTask_BlackboardBase();
	UPackage* Z_Construct_UPackage__Script_GCAA();
// End Cross Module References
	void UFindRandomLocation::StaticRegisterNativesUFindRandomLocation()
	{
	}
	UClass* Z_Construct_UClass_UFindRandomLocation_NoRegister()
	{
		return UFindRandomLocation::StaticClass();
	}
	struct Z_Construct_UClass_UFindRandomLocation_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SearchRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SearchRadius;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFindRandomLocation_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTTask_BlackboardBase,
		(UObject* (*)())Z_Construct_UPackage__Script_GCAA,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFindRandomLocation_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "NPC/FindRandomLocation.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "NPC/FindRandomLocation.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFindRandomLocation_Statics::NewProp_SearchRadius_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Search" },
		{ "ModuleRelativePath", "NPC/FindRandomLocation.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFindRandomLocation_Statics::NewProp_SearchRadius = { "SearchRadius", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFindRandomLocation, SearchRadius), METADATA_PARAMS(Z_Construct_UClass_UFindRandomLocation_Statics::NewProp_SearchRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFindRandomLocation_Statics::NewProp_SearchRadius_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFindRandomLocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFindRandomLocation_Statics::NewProp_SearchRadius,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFindRandomLocation_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFindRandomLocation>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFindRandomLocation_Statics::ClassParams = {
		&UFindRandomLocation::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UFindRandomLocation_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UFindRandomLocation_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFindRandomLocation_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFindRandomLocation_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFindRandomLocation()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFindRandomLocation_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFindRandomLocation, 3412514972);
	template<> GCAA_API UClass* StaticClass<UFindRandomLocation>()
	{
		return UFindRandomLocation::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFindRandomLocation(Z_Construct_UClass_UFindRandomLocation, &UFindRandomLocation::StaticClass, TEXT("/Script/GCAA"), TEXT("UFindRandomLocation"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFindRandomLocation);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
