// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OldPrison/MovingWall.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovingWall() {}
// Cross Module References
	OLDPRISON_API UClass* Z_Construct_UClass_UMovingWall_NoRegister();
	OLDPRISON_API UClass* Z_Construct_UClass_UMovingWall();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_OldPrison();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	void UMovingWall::StaticRegisterNativesUMovingWall()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovingWall);
	UClass* Z_Construct_UClass_UMovingWall_NoRegister()
	{
		return UMovingWall::StaticClass();
	}
	struct Z_Construct_UClass_UMovingWall_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MoveOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MoveOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MoveTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MoveTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovingWall_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_OldPrison,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovingWall_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "MovingWall.h" },
		{ "ModuleRelativePath", "MovingWall.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovingWall_Statics::NewProp_MoveOffset_MetaData[] = {
		{ "Category", "MovingWall" },
		{ "ModuleRelativePath", "MovingWall.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovingWall_Statics::NewProp_MoveOffset = { "MoveOffset", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovingWall, MoveOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UMovingWall_Statics::NewProp_MoveOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovingWall_Statics::NewProp_MoveOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovingWall_Statics::NewProp_MoveTime_MetaData[] = {
		{ "Category", "MovingWall" },
		{ "ModuleRelativePath", "MovingWall.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMovingWall_Statics::NewProp_MoveTime = { "MoveTime", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovingWall, MoveTime), METADATA_PARAMS(Z_Construct_UClass_UMovingWall_Statics::NewProp_MoveTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovingWall_Statics::NewProp_MoveTime_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovingWall_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovingWall_Statics::NewProp_MoveOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovingWall_Statics::NewProp_MoveTime,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovingWall_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovingWall>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovingWall_Statics::ClassParams = {
		&UMovingWall::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMovingWall_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMovingWall_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UMovingWall_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovingWall_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovingWall()
	{
		if (!Z_Registration_Info_UClass_UMovingWall.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovingWall.OuterSingleton, Z_Construct_UClass_UMovingWall_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovingWall.OuterSingleton;
	}
	template<> OLDPRISON_API UClass* StaticClass<UMovingWall>()
	{
		return UMovingWall::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovingWall);
	struct Z_CompiledInDeferFile_FID_OldPrison_Source_OldPrison_MovingWall_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_OldPrison_Source_OldPrison_MovingWall_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMovingWall, UMovingWall::StaticClass, TEXT("UMovingWall"), &Z_Registration_Info_UClass_UMovingWall, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovingWall), 3718334551U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_OldPrison_Source_OldPrison_MovingWall_h_469554384(TEXT("/Script/OldPrison"),
		Z_CompiledInDeferFile_FID_OldPrison_Source_OldPrison_MovingWall_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_OldPrison_Source_OldPrison_MovingWall_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
