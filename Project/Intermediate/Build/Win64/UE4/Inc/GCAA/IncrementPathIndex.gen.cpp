// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GCAA/NPC/IncrementPathIndex.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIncrementPathIndex() {}
// Cross Module References
	GCAA_API UClass* Z_Construct_UClass_UIncrementPathIndex_NoRegister();
	GCAA_API UClass* Z_Construct_UClass_UIncrementPathIndex();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTask_BlackboardBase();
	UPackage* Z_Construct_UPackage__Script_GCAA();
// End Cross Module References
	void UIncrementPathIndex::StaticRegisterNativesUIncrementPathIndex()
	{
	}
	UClass* Z_Construct_UClass_UIncrementPathIndex_NoRegister()
	{
		return UIncrementPathIndex::StaticClass();
	}
	struct Z_Construct_UClass_UIncrementPathIndex_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_biDirectional_MetaData[];
#endif
		static void NewProp_biDirectional_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_biDirectional;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIncrementPathIndex_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTTask_BlackboardBase,
		(UObject* (*)())Z_Construct_UPackage__Script_GCAA,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIncrementPathIndex_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "NPC/IncrementPathIndex.h" },
		{ "ModuleRelativePath", "NPC/IncrementPathIndex.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIncrementPathIndex_Statics::NewProp_biDirectional_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "AI" },
		{ "ModuleRelativePath", "NPC/IncrementPathIndex.h" },
	};
#endif
	void Z_Construct_UClass_UIncrementPathIndex_Statics::NewProp_biDirectional_SetBit(void* Obj)
	{
		((UIncrementPathIndex*)Obj)->biDirectional = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UIncrementPathIndex_Statics::NewProp_biDirectional = { "biDirectional", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UIncrementPathIndex), &Z_Construct_UClass_UIncrementPathIndex_Statics::NewProp_biDirectional_SetBit, METADATA_PARAMS(Z_Construct_UClass_UIncrementPathIndex_Statics::NewProp_biDirectional_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIncrementPathIndex_Statics::NewProp_biDirectional_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UIncrementPathIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIncrementPathIndex_Statics::NewProp_biDirectional,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIncrementPathIndex_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIncrementPathIndex>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UIncrementPathIndex_Statics::ClassParams = {
		&UIncrementPathIndex::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UIncrementPathIndex_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UIncrementPathIndex_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UIncrementPathIndex_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UIncrementPathIndex_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UIncrementPathIndex()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UIncrementPathIndex_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UIncrementPathIndex, 753911686);
	template<> GCAA_API UClass* StaticClass<UIncrementPathIndex>()
	{
		return UIncrementPathIndex::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UIncrementPathIndex(Z_Construct_UClass_UIncrementPathIndex, &UIncrementPathIndex::StaticClass, TEXT("/Script/GCAA"), TEXT("UIncrementPathIndex"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIncrementPathIndex);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
