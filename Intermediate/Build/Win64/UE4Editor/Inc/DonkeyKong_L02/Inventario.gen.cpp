// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DonkeyKong_L02/Inventario.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInventario() {}
// Cross Module References
	DONKEYKONG_L02_API UClass* Z_Construct_UClass_AInventario_NoRegister();
	DONKEYKONG_L02_API UClass* Z_Construct_UClass_AInventario();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_DonkeyKong_L02();
// End Cross Module References
	void AInventario::StaticRegisterNativesAInventario()
	{
	}
	UClass* Z_Construct_UClass_AInventario_NoRegister()
	{
		return AInventario::StaticClass();
	}
	struct Z_Construct_UClass_AInventario_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_instancia_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_instancia;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AInventario_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_DonkeyKong_L02,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInventario_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Inventario.h" },
		{ "ModuleRelativePath", "Inventario.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInventario_Statics::NewProp_instancia_MetaData[] = {
		{ "ModuleRelativePath", "Inventario.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AInventario_Statics::NewProp_instancia = { "instancia", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AInventario, instancia), Z_Construct_UClass_AInventario_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AInventario_Statics::NewProp_instancia_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AInventario_Statics::NewProp_instancia_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AInventario_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInventario_Statics::NewProp_instancia,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AInventario_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AInventario>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AInventario_Statics::ClassParams = {
		&AInventario::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AInventario_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AInventario_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AInventario_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AInventario_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AInventario()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AInventario_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AInventario, 984850794);
	template<> DONKEYKONG_L02_API UClass* StaticClass<AInventario>()
	{
		return AInventario::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AInventario(Z_Construct_UClass_AInventario, &AInventario::StaticClass, TEXT("/Script/DonkeyKong_L02"), TEXT("AInventario"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AInventario);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
