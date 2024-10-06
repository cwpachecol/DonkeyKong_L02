// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DonkeyKong_L02/MuroEnvenenado.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMuroEnvenenado() {}
// Cross Module References
	DONKEYKONG_L02_API UClass* Z_Construct_UClass_AMuroEnvenenado_NoRegister();
	DONKEYKONG_L02_API UClass* Z_Construct_UClass_AMuroEnvenenado();
	DONKEYKONG_L02_API UClass* Z_Construct_UClass_AMuro();
	UPackage* Z_Construct_UPackage__Script_DonkeyKong_L02();
// End Cross Module References
	void AMuroEnvenenado::StaticRegisterNativesAMuroEnvenenado()
	{
	}
	UClass* Z_Construct_UClass_AMuroEnvenenado_NoRegister()
	{
		return AMuroEnvenenado::StaticClass();
	}
	struct Z_Construct_UClass_AMuroEnvenenado_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMuroEnvenenado_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AMuro,
		(UObject* (*)())Z_Construct_UPackage__Script_DonkeyKong_L02,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMuroEnvenenado_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MuroEnvenenado.h" },
		{ "ModuleRelativePath", "MuroEnvenenado.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMuroEnvenenado_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMuroEnvenenado>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMuroEnvenenado_Statics::ClassParams = {
		&AMuroEnvenenado::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AMuroEnvenenado_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMuroEnvenenado_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMuroEnvenenado()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMuroEnvenenado_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMuroEnvenenado, 1122134945);
	template<> DONKEYKONG_L02_API UClass* StaticClass<AMuroEnvenenado>()
	{
		return AMuroEnvenenado::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMuroEnvenenado(Z_Construct_UClass_AMuroEnvenenado, &AMuroEnvenenado::StaticClass, TEXT("/Script/DonkeyKong_L02"), TEXT("AMuroEnvenenado"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMuroEnvenenado);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
