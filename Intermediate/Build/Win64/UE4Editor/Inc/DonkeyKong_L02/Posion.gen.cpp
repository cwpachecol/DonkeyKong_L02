// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DonkeyKong_L02/Posion.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePosion() {}
// Cross Module References
	DONKEYKONG_L02_API UClass* Z_Construct_UClass_APosion_NoRegister();
	DONKEYKONG_L02_API UClass* Z_Construct_UClass_APosion();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_DonkeyKong_L02();
// End Cross Module References
	void APosion::StaticRegisterNativesAPosion()
	{
	}
	UClass* Z_Construct_UClass_APosion_NoRegister()
	{
		return APosion::StaticClass();
	}
	struct Z_Construct_UClass_APosion_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APosion_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_DonkeyKong_L02,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APosion_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Posion.h" },
		{ "ModuleRelativePath", "Posion.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APosion_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APosion>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APosion_Statics::ClassParams = {
		&APosion::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_APosion_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APosion_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APosion()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APosion_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APosion, 1139481534);
	template<> DONKEYKONG_L02_API UClass* StaticClass<APosion>()
	{
		return APosion::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APosion(Z_Construct_UClass_APosion, &APosion::StaticClass, TEXT("/Script/DonkeyKong_L02"), TEXT("APosion"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APosion);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
