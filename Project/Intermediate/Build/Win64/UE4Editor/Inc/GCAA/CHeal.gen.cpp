// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GCAA/SpellManager/Spells/CHeal.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCHeal() {}
// Cross Module References
	GCAA_API UClass* Z_Construct_UClass_ACHeal_NoRegister();
	GCAA_API UClass* Z_Construct_UClass_ACHeal();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_GCAA();
	GCAA_API UClass* Z_Construct_UClass_ACPlayer_NoRegister();
	GCAA_API UClass* Z_Construct_UClass_ASpellManager_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTimerHandle();
	GCAA_API UClass* Z_Construct_UClass_UPoolStatusIdentifier_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ACHeal::execCB_Heal)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CB_Heal();
		P_NATIVE_END;
	}
	void ACHeal::StaticRegisterNativesACHeal()
	{
		UClass* Class = ACHeal::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CB_Heal", &ACHeal::execCB_Heal },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ACHeal_CB_Heal_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACHeal_CB_Heal_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SpellManager/Spells/CHeal.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACHeal_CB_Heal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACHeal, nullptr, "CB_Heal", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACHeal_CB_Heal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACHeal_CB_Heal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACHeal_CB_Heal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACHeal_CB_Heal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ACHeal_NoRegister()
	{
		return ACHeal::StaticClass();
	}
	struct Z_Construct_UClass_ACHeal_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_pcPlayer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_pcPlayer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_pcManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_pcManager;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_sHealTick_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_m_sHealTick;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACHeal_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_GCAA,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ACHeal_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ACHeal_CB_Heal, "CB_Heal" }, // 2313683380
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACHeal_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SpellManager/Spells/CHeal.h" },
		{ "ModuleRelativePath", "SpellManager/Spells/CHeal.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACHeal_Statics::NewProp_m_pcPlayer_MetaData[] = {
		{ "Comment", "// Pointer to the player\n" },
		{ "ModuleRelativePath", "SpellManager/Spells/CHeal.h" },
		{ "ToolTip", "Pointer to the player" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACHeal_Statics::NewProp_m_pcPlayer = { "m_pcPlayer", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACHeal, m_pcPlayer), Z_Construct_UClass_ACPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACHeal_Statics::NewProp_m_pcPlayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACHeal_Statics::NewProp_m_pcPlayer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACHeal_Statics::NewProp_m_pcManager_MetaData[] = {
		{ "Comment", "// Pointer to the spell manager\n" },
		{ "ModuleRelativePath", "SpellManager/Spells/CHeal.h" },
		{ "ToolTip", "Pointer to the spell manager" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACHeal_Statics::NewProp_m_pcManager = { "m_pcManager", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACHeal, m_pcManager), Z_Construct_UClass_ASpellManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACHeal_Statics::NewProp_m_pcManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACHeal_Statics::NewProp_m_pcManager_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACHeal_Statics::NewProp_m_sHealTick_MetaData[] = {
		{ "Comment", "// The Timer for heal type - tick\n" },
		{ "ModuleRelativePath", "SpellManager/Spells/CHeal.h" },
		{ "ToolTip", "The Timer for heal type - tick" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACHeal_Statics::NewProp_m_sHealTick = { "m_sHealTick", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACHeal, m_sHealTick), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(Z_Construct_UClass_ACHeal_Statics::NewProp_m_sHealTick_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACHeal_Statics::NewProp_m_sHealTick_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACHeal_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACHeal_Statics::NewProp_m_pcPlayer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACHeal_Statics::NewProp_m_pcManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACHeal_Statics::NewProp_m_sHealTick,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ACHeal_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UPoolStatusIdentifier_NoRegister, (int32)VTABLE_OFFSET(ACHeal, IPoolStatusIdentifier), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACHeal_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACHeal>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACHeal_Statics::ClassParams = {
		&ACHeal::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ACHeal_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ACHeal_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACHeal_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACHeal_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACHeal()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACHeal_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACHeal, 2390397343);
	template<> GCAA_API UClass* StaticClass<ACHeal>()
	{
		return ACHeal::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACHeal(Z_Construct_UClass_ACHeal, &ACHeal::StaticClass, TEXT("/Script/GCAA"), TEXT("ACHeal"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACHeal);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
