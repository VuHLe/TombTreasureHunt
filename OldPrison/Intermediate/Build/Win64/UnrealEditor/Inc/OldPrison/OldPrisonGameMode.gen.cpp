// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OldPrison/OldPrisonGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOldPrisonGameMode() {}
// Cross Module References
	OLDPRISON_API UClass* Z_Construct_UClass_AOldPrisonGameMode_NoRegister();
	OLDPRISON_API UClass* Z_Construct_UClass_AOldPrisonGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_OldPrison();
// End Cross Module References
	void AOldPrisonGameMode::StaticRegisterNativesAOldPrisonGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AOldPrisonGameMode);
	UClass* Z_Construct_UClass_AOldPrisonGameMode_NoRegister()
	{
		return AOldPrisonGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AOldPrisonGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AOldPrisonGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_OldPrison,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOldPrisonGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "OldPrisonGameMode.h" },
		{ "ModuleRelativePath", "OldPrisonGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AOldPrisonGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AOldPrisonGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AOldPrisonGameMode_Statics::ClassParams = {
		&AOldPrisonGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_AOldPrisonGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AOldPrisonGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AOldPrisonGameMode()
	{
		if (!Z_Registration_Info_UClass_AOldPrisonGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AOldPrisonGameMode.OuterSingleton, Z_Construct_UClass_AOldPrisonGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AOldPrisonGameMode.OuterSingleton;
	}
	template<> OLDPRISON_API UClass* StaticClass<AOldPrisonGameMode>()
	{
		return AOldPrisonGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AOldPrisonGameMode);
	struct Z_CompiledInDeferFile_FID_OldPrison_Source_OldPrison_OldPrisonGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_OldPrison_Source_OldPrison_OldPrisonGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AOldPrisonGameMode, AOldPrisonGameMode::StaticClass, TEXT("AOldPrisonGameMode"), &Z_Registration_Info_UClass_AOldPrisonGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AOldPrisonGameMode), 2426465806U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_OldPrison_Source_OldPrison_OldPrisonGameMode_h_2326429547(TEXT("/Script/OldPrison"),
		Z_CompiledInDeferFile_FID_OldPrison_Source_OldPrison_OldPrisonGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_OldPrison_Source_OldPrison_OldPrisonGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
