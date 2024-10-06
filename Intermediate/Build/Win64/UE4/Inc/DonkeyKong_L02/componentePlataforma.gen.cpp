// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DonkeyKong_L02/componentePlataforma.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodecomponentePlataforma() {}
// Cross Module References
	DONKEYKONG_L02_API UClass* Z_Construct_UClass_AcomponentePlataforma_NoRegister();
	DONKEYKONG_L02_API UClass* Z_Construct_UClass_AcomponentePlataforma();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_DonkeyKong_L02();
// End Cross Module References
	void AcomponentePlataforma::StaticRegisterNativesAcomponentePlataforma()
	{
	}
	UClass* Z_Construct_UClass_AcomponentePlataforma_NoRegister()
	{
		return AcomponentePlataforma::StaticClass();
	}
	struct Z_Construct_UClass_AcomponentePlataforma_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AcomponentePlataforma_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_DonkeyKong_L02,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AcomponentePlataforma_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "componentePlataforma.h" },
		{ "ModuleRelativePath", "componentePlataforma.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AcomponentePlataforma_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AcomponentePlataforma>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AcomponentePlataforma_Statics::ClassParams = {
		&AcomponentePlataforma::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AcomponentePlataforma_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AcomponentePlataforma_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AcomponentePlataforma()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AcomponentePlataforma_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AcomponentePlataforma, 2325328019);
	template<> DONKEYKONG_L02_API UClass* StaticClass<AcomponentePlataforma>()
	{
		return AcomponentePlataforma::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AcomponentePlataforma(Z_Construct_UClass_AcomponentePlataforma, &AcomponentePlataforma::StaticClass, TEXT("/Script/DonkeyKong_L02"), TEXT("AcomponentePlataforma"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AcomponentePlataforma);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
