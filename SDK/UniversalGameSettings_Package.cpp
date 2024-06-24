/**
 * Name: GTASA
 * Version: 0.0.1
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function UniversalGameSettings.UniversalGameSettings_C.GetCurrentPlatform
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            OutPlatformFlag                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUniversalGameSettings_C::GetCurrentPlatform(int32_t* OutPlatformFlag)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UniversalGameSettings.UniversalGameSettings_C.GetCurrentPlatform");
		
		UUniversalGameSettings_C_GetCurrentPlatform_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutPlatformFlag != nullptr)
			*OutPlatformFlag = params.OutPlatformFlag;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function UniversalGameSettings.UniversalGameSettings_C.GetOptionForOptionName
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        OptionName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGTAOptionsItemTemplate                     Option                                                     (Parm, OutParm)
	 * 		bool                                               Valid                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUniversalGameSettings_C::GetOptionForOptionName(const class FName& OptionName, struct FGTAOptionsItemTemplate* Option, bool* Valid)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UniversalGameSettings.UniversalGameSettings_C.GetOptionForOptionName");
		
		UUniversalGameSettings_C_GetOptionForOptionName_Params params {};
		params.OptionName = OptionName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Option != nullptr)
			*Option = params.Option;
		if (Valid != nullptr)
			*Valid = params.Valid;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function UniversalGameSettings.UniversalGameSettings_C.IsOptionAvailableForPlatform
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        OptionName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Available                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUniversalGameSettings_C::IsOptionAvailableForPlatform(const class FName& OptionName, bool* Available)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UniversalGameSettings.UniversalGameSettings_C.IsOptionAvailableForPlatform");
		
		UUniversalGameSettings_C_IsOptionAvailableForPlatform_Params params {};
		params.OptionName = OptionName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Available != nullptr)
			*Available = params.Available;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function UniversalGameSettings.UniversalGameSettings_C.IsOptionAvailableForGame
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        OptionName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            GameType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Available                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUniversalGameSettings_C::IsOptionAvailableForGame(const class FName& OptionName, int32_t GameType, bool* Available)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UniversalGameSettings.UniversalGameSettings_C.IsOptionAvailableForGame");
		
		UUniversalGameSettings_C_IsOptionAvailableForGame_Params params {};
		params.OptionName = OptionName;
		params.GameType = GameType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Available != nullptr)
			*Available = params.Available;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function UniversalGameSettings.UniversalGameSettings_C.IsOptionVisibleOnDevice
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        Option                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UUniversalGameSettings_C::IsOptionVisibleOnDevice(const class FName& Option)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UniversalGameSettings.UniversalGameSettings_C.IsOptionVisibleOnDevice");
		
		UUniversalGameSettings_C_IsOptionVisibleOnDevice_Params params {};
		params.Option = Option;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function UniversalGameSettings.UniversalGameSettings_C.GetAllAvailableFidelityOptions
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EGTAPlatforms                                      PlatformOverride                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsEditor                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	TArray<class UGTAFidelityOption*> UUniversalGameSettings_C::GetAllAvailableFidelityOptions(EGTAPlatforms PlatformOverride, bool IsEditor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UniversalGameSettings.UniversalGameSettings_C.GetAllAvailableFidelityOptions");
		
		UUniversalGameSettings_C_GetAllAvailableFidelityOptions_Params params {};
		params.PlatformOverride = PlatformOverride;
		params.IsEditor = IsEditor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function UniversalGameSettings.UniversalGameSettings_C.GetListOfFidelityOptionNamesFromSettings
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EGTAPlatforms                                      PlatformOverride                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsEditor                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	TArray<class FText> UUniversalGameSettings_C::GetListOfFidelityOptionNamesFromSettings(EGTAPlatforms PlatformOverride, bool IsEditor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UniversalGameSettings.UniversalGameSettings_C.GetListOfFidelityOptionNamesFromSettings");
		
		UUniversalGameSettings_C_GetListOfFidelityOptionNamesFromSettings_Params params {};
		params.PlatformOverride = PlatformOverride;
		params.IsEditor = IsEditor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function UniversalGameSettings.UniversalGameSettings_C.GetPlatformFidelitySettings
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EGTAPlatforms                                      PlatformOverride                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Editor                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper)
	 * 		struct FGTAFidelitySettings                        PlatformSetting                                            (Parm, OutParm)
	 * 		bool                                               Found                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUniversalGameSettings_C::GetPlatformFidelitySettings(EGTAPlatforms PlatformOverride, bool Editor, struct FGTAFidelitySettings* PlatformSetting, bool* Found)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UniversalGameSettings.UniversalGameSettings_C.GetPlatformFidelitySettings");
		
		UUniversalGameSettings_C_GetPlatformFidelitySettings_Params params {};
		params.PlatformOverride = PlatformOverride;
		params.Editor = Editor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PlatformSetting != nullptr)
			*PlatformSetting = params.PlatformSetting;
		if (Found != nullptr)
			*Found = params.Found;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function UniversalGameSettings.UniversalGameSettings_C.GetFidelityOptionsNum
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EGTAPlatforms                                      PlatformOverride                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsEditor                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	int32_t UUniversalGameSettings_C::GetFidelityOptionsNum(EGTAPlatforms PlatformOverride, bool IsEditor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UniversalGameSettings.UniversalGameSettings_C.GetFidelityOptionsNum");
		
		UUniversalGameSettings_C_GetFidelityOptionsNum_Params params {};
		params.PlatformOverride = PlatformOverride;
		params.IsEditor = IsEditor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function UniversalGameSettings.UniversalGameSettings_C.IsRunning4K
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               kOrGreater                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUniversalGameSettings_C::IsRunning4K(bool* kOrGreater)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UniversalGameSettings.UniversalGameSettings_C.IsRunning4K");
		
		UUniversalGameSettings_C_IsRunning4K_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (kOrGreater != nullptr)
			*kOrGreater = params.kOrGreater;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function UniversalGameSettings.UniversalGameSettings_C.GetPlatformFidelityOption
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        PlatformName                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGTAFidelitySettings                        PlatformSetting                                            (Parm, OutParm)
	 * 		bool                                               Found                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUniversalGameSettings_C::GetPlatformFidelityOption(const class FName& PlatformName, struct FGTAFidelitySettings* PlatformSetting, bool* Found)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UniversalGameSettings.UniversalGameSettings_C.GetPlatformFidelityOption");
		
		UUniversalGameSettings_C_GetPlatformFidelityOption_Params params {};
		params.PlatformName = PlatformName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PlatformSetting != nullptr)
			*PlatformSetting = params.PlatformSetting;
		if (Found != nullptr)
			*Found = params.Found;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function UniversalGameSettings.UniversalGameSettings_C.GetCurrentFidelityOption
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            CurrentSelection                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EGTAPlatforms                                      PlatformOverride                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsEditor                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	class UGTAFidelityOption* UUniversalGameSettings_C::GetCurrentFidelityOption(int32_t CurrentSelection, EGTAPlatforms PlatformOverride, bool IsEditor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UniversalGameSettings.UniversalGameSettings_C.GetCurrentFidelityOption");
		
		UUniversalGameSettings_C_GetCurrentFidelityOption_Params params {};
		params.CurrentSelection = CurrentSelection;
		params.PlatformOverride = PlatformOverride;
		params.IsEditor = IsEditor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function UniversalGameSettings.UniversalGameSettings_C.GetPlatformDefaults
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EGTAPlatforms                                      PlatformOverride                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsEditor                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	class UClass* UUniversalGameSettings_C::GetPlatformDefaults(EGTAPlatforms PlatformOverride, bool IsEditor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UniversalGameSettings.UniversalGameSettings_C.GetPlatformDefaults");
		
		UUniversalGameSettings_C_GetPlatformDefaults_Params params {};
		params.PlatformOverride = PlatformOverride;
		params.IsEditor = IsEditor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUniversalGameSettings_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUniversalGameSettings_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass UniversalGameSettings.UniversalGameSettings_C");
		return ptr;
	}

}


