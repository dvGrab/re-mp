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
	 * 		Name   -> Function UI_OptionsList_Base.UI_OptionsList_Base_C.Option Pressed Callback
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UUI_SlotButton_C*                            PressedButton                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_OptionsList_Base_C::Option_Pressed_Callback(class UUI_SlotButton_C* PressedButton)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_OptionsList_Base.UI_OptionsList_Base_C.Option Pressed Callback");
		
		UUI_OptionsList_Base_C_Option_Pressed_Callback_Params params {};
		params.PressedButton = PressedButton;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function UI_OptionsList_Base.UI_OptionsList_Base_C.SetupNavigation
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_OptionsList_Base_C::SetupNavigation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_OptionsList_Base.UI_OptionsList_Base_C.SetupNavigation");
		
		UUI_OptionsList_Base_C_SetupNavigation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function UI_OptionsList_Base.UI_OptionsList_Base_C.OnOptionSelectionChanged
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        OptionName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Selected                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               FromHover                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_OptionsList_Base_C::OnOptionSelectionChanged(const class FName& OptionName, bool Selected, bool FromHover)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_OptionsList_Base.UI_OptionsList_Base_C.OnOptionSelectionChanged");
		
		UUI_OptionsList_Base_C_OnOptionSelectionChanged_Params params {};
		params.OptionName = OptionName;
		params.Selected = Selected;
		params.FromHover = FromHover;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function UI_OptionsList_Base.UI_OptionsList_Base_C.OptionChanged
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        OptionName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_OptionsList_Base_C::OptionChanged(const class FName& OptionName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_OptionsList_Base.UI_OptionsList_Base_C.OptionChanged");
		
		UUI_OptionsList_Base_C_OptionChanged_Params params {};
		params.OptionName = OptionName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function UI_OptionsList_Base.UI_OptionsList_Base_C.DoConfirmationPostItemChange
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UUI_SlotButton_C*                            SlotToChange                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_OptionsList_Base_C::DoConfirmationPostItemChange(class UUI_SlotButton_C* SlotToChange)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_OptionsList_Base.UI_OptionsList_Base_C.DoConfirmationPostItemChange");
		
		UUI_OptionsList_Base_C_DoConfirmationPostItemChange_Params params {};
		params.SlotToChange = SlotToChange;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function UI_OptionsList_Base.UI_OptionsList_Base_C.HandleBack
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool UUI_OptionsList_Base_C::HandleBack()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_OptionsList_Base.UI_OptionsList_Base_C.HandleBack");
		
		UUI_OptionsList_Base_C_HandleBack_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function UI_OptionsList_Base.UI_OptionsList_Base_C.Should Refresh on Option Update
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               RequiresOptionRefresh                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FName                                        PropertyNameToSelect                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_OptionsList_Base_C::Should_Refresh_on_Option_Update(bool RequiresOptionRefresh, const class FName& PropertyNameToSelect)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_OptionsList_Base.UI_OptionsList_Base_C.Should Refresh on Option Update");
		
		UUI_OptionsList_Base_C_Should_Refresh_on_Option_Update_Params params {};
		params.RequiresOptionRefresh = RequiresOptionRefresh;
		params.PropertyNameToSelect = PropertyNameToSelect;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function UI_OptionsList_Base.UI_OptionsList_Base_C.DoConfirmationOnItemChange
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UUI_SlotButton_C*                            SlotToChange                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_OptionsList_Base_C::DoConfirmationOnItemChange(class UUI_SlotButton_C* SlotToChange)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_OptionsList_Base.UI_OptionsList_Base_C.DoConfirmationOnItemChange");
		
		UUI_OptionsList_Base_C_DoConfirmationOnItemChange_Params params {};
		params.SlotToChange = SlotToChange;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function UI_OptionsList_Base.UI_OptionsList_Base_C.IsOptionWithinBounds
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UGameterSettings*                            Settings                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGTASelectionOptionSpecifier                RequiredValue                                              (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		bool                                               isWithinBounds                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_OptionsList_Base_C::IsOptionWithinBounds(class UGameterSettings* Settings, const struct FGTASelectionOptionSpecifier& RequiredValue, bool* isWithinBounds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_OptionsList_Base.UI_OptionsList_Base_C.IsOptionWithinBounds");
		
		UUI_OptionsList_Base_C_IsOptionWithinBounds_Params params {};
		params.Settings = Settings;
		params.RequiredValue = RequiredValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (isWithinBounds != nullptr)
			*isWithinBounds = params.isWithinBounds;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function UI_OptionsList_Base.UI_OptionsList_Base_C.CheckOtherRequirements
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGTAOptionsItemTemplate                     Option                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class UGameterSettings*                            Settings                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Available                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_OptionsList_Base_C::CheckOtherRequirements(const struct FGTAOptionsItemTemplate& Option, class UGameterSettings* Settings, bool* Available)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_OptionsList_Base.UI_OptionsList_Base_C.CheckOtherRequirements");
		
		UUI_OptionsList_Base_C_CheckOtherRequirements_Params params {};
		params.Option = Option;
		params.Settings = Settings;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Available != nullptr)
			*Available = params.Available;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function UI_OptionsList_Base.UI_OptionsList_Base_C.RunSlotButtonFunction
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        FunctionName                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_OptionsList_Base_C::RunSlotButtonFunction(const class FName& FunctionName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_OptionsList_Base.UI_OptionsList_Base_C.RunSlotButtonFunction");
		
		UUI_OptionsList_Base_C_RunSlotButtonFunction_Params params {};
		params.FunctionName = FunctionName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function UI_OptionsList_Base.UI_OptionsList_Base_C.SlotFunctionButtonPressed
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		unsigned char                                      InteractionType                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            BoundValue                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UUI_SlotButton_C*                            SlotButton                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_OptionsList_Base_C::SlotFunctionButtonPressed(unsigned char InteractionType, int32_t BoundValue, class UUI_SlotButton_C* SlotButton)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_OptionsList_Base.UI_OptionsList_Base_C.SlotFunctionButtonPressed");
		
		UUI_OptionsList_Base_C_SlotFunctionButtonPressed_Params params {};
		params.InteractionType = InteractionType;
		params.BoundValue = BoundValue;
		params.SlotButton = SlotButton;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function UI_OptionsList_Base.UI_OptionsList_Base_C.AddFunctionToSlotButton
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UUI_SlotButton_C*                            SlotItem                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        FunctionName                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_OptionsList_Base_C::AddFunctionToSlotButton(class UUI_SlotButton_C* SlotItem, const class FName& FunctionName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_OptionsList_Base.UI_OptionsList_Base_C.AddFunctionToSlotButton");
		
		UUI_OptionsList_Base_C_AddFunctionToSlotButton_Params params {};
		params.SlotItem = SlotItem;
		params.FunctionName = FunctionName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function UI_OptionsList_Base.UI_OptionsList_Base_C.OnRestoreDefaultsConfirmationCallback
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               DidAccept                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_OptionsList_Base_C::OnRestoreDefaultsConfirmationCallback(bool DidAccept)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_OptionsList_Base.UI_OptionsList_Base_C.OnRestoreDefaultsConfirmationCallback");
		
		UUI_OptionsList_Base_C_OnRestoreDefaultsConfirmationCallback_Params params {};
		params.DidAccept = DidAccept;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function UI_OptionsList_Base.UI_OptionsList_Base_C.ResetDefaultsInteracted
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		unsigned char                                      InteractionType                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            BoundValue                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UUI_SlotButton_C*                            SlotButton                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_OptionsList_Base_C::ResetDefaultsInteracted(unsigned char InteractionType, int32_t BoundValue, class UUI_SlotButton_C* SlotButton)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_OptionsList_Base.UI_OptionsList_Base_C.ResetDefaultsInteracted");
		
		UUI_OptionsList_Base_C_ResetDefaultsInteracted_Params params {};
		params.InteractionType = InteractionType;
		params.BoundValue = BoundValue;
		params.SlotButton = SlotButton;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function UI_OptionsList_Base.UI_OptionsList_Base_C.AddResetToDefaultButton
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UUI_SlotButton_C*                            NewItem                                                    (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_OptionsList_Base_C::AddResetToDefaultButton(class UUI_SlotButton_C** NewItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_OptionsList_Base.UI_OptionsList_Base_C.AddResetToDefaultButton");
		
		UUI_OptionsList_Base_C_AddResetToDefaultButton_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NewItem != nullptr)
			*NewItem = params.NewItem;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function UI_OptionsList_Base.UI_OptionsList_Base_C.GetCurrentInputType_1
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            OutInputFlag                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_OptionsList_Base_C::GetCurrentInputType_1(int32_t* OutInputFlag)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_OptionsList_Base.UI_OptionsList_Base_C.GetCurrentInputType_1");
		
		UUI_OptionsList_Base_C_GetCurrentInputType_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutInputFlag != nullptr)
			*OutInputFlag = params.OutInputFlag;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function UI_OptionsList_Base.UI_OptionsList_Base_C.IsOptionAvailableForInputType
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGTAOptionsItemTemplate                     Option                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		bool                                               Available                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_OptionsList_Base_C::IsOptionAvailableForInputType(const struct FGTAOptionsItemTemplate& Option, bool* Available)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_OptionsList_Base.UI_OptionsList_Base_C.IsOptionAvailableForInputType");
		
		UUI_OptionsList_Base_C_IsOptionAvailableForInputType_Params params {};
		params.Option = Option;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Available != nullptr)
			*Available = params.Available;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function UI_OptionsList_Base.UI_OptionsList_Base_C.GetCurrentPlatform
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            OutPlatformFlag                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_OptionsList_Base_C::GetCurrentPlatform(int32_t* OutPlatformFlag)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_OptionsList_Base.UI_OptionsList_Base_C.GetCurrentPlatform");
		
		UUI_OptionsList_Base_C_GetCurrentPlatform_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutPlatformFlag != nullptr)
			*OutPlatformFlag = params.OutPlatformFlag;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function UI_OptionsList_Base.UI_OptionsList_Base_C.IsOptionAvailableForPlatform
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGTAOptionsItemTemplate                     Option                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		bool                                               Available                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_OptionsList_Base_C::IsOptionAvailableForPlatform(const struct FGTAOptionsItemTemplate& Option, bool* Available)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_OptionsList_Base.UI_OptionsList_Base_C.IsOptionAvailableForPlatform");
		
		UUI_OptionsList_Base_C_IsOptionAvailableForPlatform_Params params {};
		params.Option = Option;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Available != nullptr)
			*Available = params.Available;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function UI_OptionsList_Base.UI_OptionsList_Base_C.IsOptionAvailableForGame
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGTAOptionsItemTemplate                     Option                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		bool                                               Available                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_OptionsList_Base_C::IsOptionAvailableForGame(const struct FGTAOptionsItemTemplate& Option, bool* Available)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_OptionsList_Base.UI_OptionsList_Base_C.IsOptionAvailableForGame");
		
		UUI_OptionsList_Base_C_IsOptionAvailableForGame_Params params {};
		params.Option = Option;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Available != nullptr)
			*Available = params.Available;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function UI_OptionsList_Base.UI_OptionsList_Base_C.CreateNewEntry
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGTAOptionsItemTemplate                     Option                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class UGameterSettings*                            SettingsObject                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsShownBecauseDebug                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UUI_SlotButton_C*                            NewItem                                                    (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_OptionsList_Base_C::CreateNewEntry(const struct FGTAOptionsItemTemplate& Option, class UGameterSettings* SettingsObject, bool IsShownBecauseDebug, class UUI_SlotButton_C** NewItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_OptionsList_Base.UI_OptionsList_Base_C.CreateNewEntry");
		
		UUI_OptionsList_Base_C_CreateNewEntry_Params params {};
		params.Option = Option;
		params.SettingsObject = SettingsObject;
		params.IsShownBecauseDebug = IsShownBecauseDebug;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NewItem != nullptr)
			*NewItem = params.NewItem;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function UI_OptionsList_Base.UI_OptionsList_Base_C.CreateScrollingListItems
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               DEBUG_ALL_ITEMS                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_OptionsList_Base_C::CreateScrollingListItems(bool DEBUG_ALL_ITEMS)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_OptionsList_Base.UI_OptionsList_Base_C.CreateScrollingListItems");
		
		UUI_OptionsList_Base_C_CreateScrollingListItems_Params params {};
		params.DEBUG_ALL_ITEMS = DEBUG_ALL_ITEMS;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function UI_OptionsList_Base.UI_OptionsList_Base_C.Tick
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_OptionsList_Base_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_OptionsList_Base.UI_OptionsList_Base_C.Tick");
		
		UUI_OptionsList_Base_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function UI_OptionsList_Base.UI_OptionsList_Base_C.ExecuteUbergraph_UI_OptionsList_Base
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_OptionsList_Base_C::ExecuteUbergraph_UI_OptionsList_Base(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_OptionsList_Base.UI_OptionsList_Base_C.ExecuteUbergraph_UI_OptionsList_Base");
		
		UUI_OptionsList_Base_C_ExecuteUbergraph_UI_OptionsList_Base_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_OptionsList_Base_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_OptionsList_Base_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_OptionsList_Base.UI_OptionsList_Base_C");
		return ptr;
	}

}


