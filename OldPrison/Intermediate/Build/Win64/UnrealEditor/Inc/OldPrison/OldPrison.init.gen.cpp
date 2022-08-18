// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOldPrison_init() {}
	OLDPRISON_API UFunction* Z_Construct_UDelegateFunction_OldPrison_OnPickUp__DelegateSignature();
	OLDPRISON_API UFunction* Z_Construct_UDelegateFunction_OldPrison_OnUseItem__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_OldPrison;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_OldPrison()
	{
		if (!Z_Registration_Info_UPackage__Script_OldPrison.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_OldPrison_OnPickUp__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_OldPrison_OnUseItem__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/OldPrison",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x368ED201,
				0xCC80AAC6,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_OldPrison.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_OldPrison.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_OldPrison(Z_Construct_UPackage__Script_OldPrison, TEXT("/Script/OldPrison"), Z_Registration_Info_UPackage__Script_OldPrison, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x368ED201, 0xCC80AAC6));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
