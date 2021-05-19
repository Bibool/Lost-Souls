// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GCAA/Enumerators/ESpellType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESpellType() {}
// Cross Module References
	GCAA_API UEnum* Z_Construct_UEnum_GCAA_ESpellType();
	UPackage* Z_Construct_UPackage__Script_GCAA();
// End Cross Module References
	static UEnum* ESpellType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_GCAA_ESpellType, Z_Construct_UPackage__Script_GCAA(), TEXT("ESpellType"));
		}
		return Singleton;
	}
	template<> GCAA_API UEnum* StaticEnum<ESpellType>()
	{
		return ESpellType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESpellType(ESpellType_StaticEnum, TEXT("/Script/GCAA"), TEXT("ESpellType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_GCAA_ESpellType_Hash() { return 3259795048U; }
	UEnum* Z_Construct_UEnum_GCAA_ESpellType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_GCAA();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESpellType"), 0, Get_Z_Construct_UEnum_GCAA_ESpellType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESpellType::Default", (int64)ESpellType::Default },
				{ "ESpellType::Fireball", (int64)ESpellType::Fireball },
				{ "ESpellType::Lightning", (int64)ESpellType::Lightning },
				{ "ESpellType::Blink", (int64)ESpellType::Blink },
				{ "ESpellType::WindBlast", (int64)ESpellType::WindBlast },
				{ "ESpellType::Heal", (int64)ESpellType::Heal },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Blink.DisplayName", "Blink" },
				{ "Blink.Name", "ESpellType::Blink" },
				{ "Default.DisplayName", "Basic attack" },
				{ "Default.Name", "ESpellType::Default" },
				{ "Fireball.DisplayName", "Fireball" },
				{ "Fireball.Name", "ESpellType::Fireball" },
				{ "Heal.DisplayName", "Heal" },
				{ "Heal.Name", "ESpellType::Heal" },
				{ "Lightning.DisplayName", "Chain Lightning" },
				{ "Lightning.Name", "ESpellType::Lightning" },
				{ "ModuleRelativePath", "Enumerators/ESpellType.h" },
				{ "WindBlast.DisplayName", "WindBlast" },
				{ "WindBlast.Name", "ESpellType::WindBlast" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_GCAA,
				nullptr,
				"ESpellType",
				"ESpellType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
