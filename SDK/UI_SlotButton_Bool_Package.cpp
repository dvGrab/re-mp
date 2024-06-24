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
	 * 		Name   -> Function UI_SlotButton_Bool.UI_SlotButton_Bool_C.ShouldShowConfirmation
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IgnoreCurrentFocus                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               DoConfirm                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_SlotButton_Bool_C::ShouldShowConfirmation(bool IgnoreCurrentFocus, bool* DoConfirm)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SlotButton_Bool.UI_SlotButton_Bool_C.ShouldShowConfirmation");
		
		UUI_SlotButton_Bool_C_ShouldShowConfirmation_Params params {};
		params.IgnoreCurrentFocus = IgnoreCurrentFocus;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (DoConfirm != nullptr)
			*DoConfirm = params.DoConfirm;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function UI_SlotButton_Bool.UI_SlotButton_Bool_C.NavigateRight
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EUINavigation                                      Navigation                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	class UWidget* UUI_SlotButton_Bool_C::NavigateRight(EUINavigation Navigation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SlotButton_Bool.UI_SlotButton_Bool_C.NavigateRight");
		
		UUI_SlotButton_Bool_C_NavigateRight_Params params {};
		params.Navigation = Navigation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function UI_SlotButton_Bool.UI_SlotButton_Bool_C.NavigateLeft
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EUINavigation                                      Navigation                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	class UWidget* UUI_SlotButton_Bool_C::NavigateLeft(EUINavigation Navigation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SlotButton_Bool.UI_SlotButton_Bool_C.NavigateLeft");
		
		UUI_SlotButton_Bool_C_NavigateLeft_Params params {};
		params.Navigation = Navigation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function UI_SlotButton_Bool.UI_SlotButton_Bool_C.SetHeight
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              NewHeight                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_SlotButton_Bool_C::SetHeight(float NewHeight)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SlotButton_Bool.UI_SlotButton_Bool_C.SetHeight");
		
		UUI_SlotButton_Bool_C_SetHeight_Params params {};
		params.NewHeight = NewHeight;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function UI_SlotButton_Bool.UI_SlotButton_Bool_C.InitSlotButton
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UGameterSettings*                            SettingsObject                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_SlotButton_Bool_C::InitSlotButton(class UGameterSettings* SettingsObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SlotButton_Bool.UI_SlotButton_Bool_C.InitSlotButton");
		
		UUI_SlotButton_Bool_C_InitSlotButton_Params params {};
		params.SettingsObject = SettingsObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function UI_SlotButton_Bool.UI_SlotButton_Bool_C.SetBackgroundColor
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FSlateColor                                 InColor                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UUI_SlotButton_Bool_C::SetBackgroundColor(const struct FSlateColor& InColor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SlotButton_Bool.UI_SlotButton_Bool_C.SetBackgroundColor");
		
		UUI_SlotButton_Bool_C_SetBackgroundColor_Params params {};
		params.InColor = InColor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function UI_SlotButton_Bool.UI_SlotButton_Bool_C.GetCurrentSettingText
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        NewParam                                                   (Parm, OutParm)
	 */
	void UUI_SlotButton_Bool_C::GetCurrentSettingText(class FText* NewParam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SlotButton_Bool.UI_SlotButton_Bool_C.GetCurrentSettingText");
		
		UUI_SlotButton_Bool_C_GetCurrentSettingText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NewParam != nullptr)
			*NewParam = params.NewParam;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function UI_SlotButton_Bool.UI_SlotButton_Bool_C.GetSlotButton
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class UButton*                                     SlotButton                                                 (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_SlotButton_Bool_C::GetSlotButton(class UButton** SlotButton)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SlotButton_Bool.UI_SlotButton_Bool_C.GetSlotButton");
		
		UUI_SlotButton_Bool_C_GetSlotButton_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SlotButton != nullptr)
			*SlotButton = params.SlotButton;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function UI_SlotButton_Bool.UI_SlotButton_Bool_C.UpdateTextColor
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_SlotButton_Bool_C::UpdateTextColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SlotButton_Bool.UI_SlotButton_Bool_C.UpdateTextColor");
		
		UUI_SlotButton_Bool_C_UpdateTextColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function UI_SlotButton_Bool.UI_SlotButton_Bool_C.UpdateSettings
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               OverrideConfirmationLockout                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_SlotButton_Bool_C::UpdateSettings(bool OverrideConfirmationLockout)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SlotButton_Bool.UI_SlotButton_Bool_C.UpdateSettings");
		
		UUI_SlotButton_Bool_C_UpdateSettings_Params params {};
		params.OverrideConfirmationLockout = OverrideConfirmationLockout;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function UI_SlotButton_Bool.UI_SlotButton_Bool_C.UpdateBGColor
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_SlotButton_Bool_C::UpdateBGColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SlotButton_Bool.UI_SlotButton_Bool_C.UpdateBGColor");
		
		UUI_SlotButton_Bool_C_UpdateBGColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function UI_SlotButton_Bool.UI_SlotButton_Bool_C.ToNumSelection
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            SelectionValue                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_SlotButton_Bool_C::ToNumSelection(int32_t SelectionValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SlotButton_Bool.UI_SlotButton_Bool_C.ToNumSelection");
		
		UUI_SlotButton_Bool_C_ToNumSelection_Params params {};
		params.SelectionValue = SelectionValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function UI_SlotButton_Bool.UI_SlotButton_Bool_C.PreviousSelection
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_SlotButton_Bool_C::PreviousSelection()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SlotButton_Bool.UI_SlotButton_Bool_C.PreviousSelection");
		
		UUI_SlotButton_Bool_C_PreviousSelection_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function UI_SlotButton_Bool.UI_SlotButton_Bool_C.NextSelection
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_SlotButton_Bool_C::NextSelection()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SlotButton_Bool.UI_SlotButton_Bool_C.NextSelection");
		
		UUI_SlotButton_Bool_C_NextSelection_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function UI_SlotButton_Bool.UI_SlotButton_Bool_C.InitSelectionStyle
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_SlotButton_Bool_C::InitSelectionStyle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SlotButton_Bool.UI_SlotButton_Bool_C.InitSelectionStyle");
		
		UUI_SlotButton_Bool_C_InitSelectionStyle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function UI_SlotButton_Bool.UI_SlotButton_Bool_C.UpdateSettingForConfirmation
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_SlotButton_Bool_C::UpdateSettingForConfirmation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SlotButton_Bool.UI_SlotButton_Bool_C.UpdateSettingForConfirmation");
		
		UUI_SlotButton_Bool_C_UpdateSettingForConfirmation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function UI_SlotButton_Bool.UI_SlotButton_Bool_C.BndEvt__ForwardButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UUI_SlotButton_Bool_C::BndEvt__ForwardButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SlotButton_Bool.UI_SlotButton_Bool_C.BndEvt__ForwardButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");
		
		UUI_SlotButton_Bool_C_BndEvt__ForwardButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function UI_SlotButton_Bool.UI_SlotButton_Bool_C.InteractedWithSelectionSlot
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		unsigned char                                      InteractionType                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            BoundValue                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UUI_SlotButton_C*                            SlotButton                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_SlotButton_Bool_C::InteractedWithSelectionSlot(unsigned char InteractionType, int32_t BoundValue, class UUI_SlotButton_C* SlotButton)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SlotButton_Bool.UI_SlotButton_Bool_C.InteractedWithSelectionSlot");
		
		UUI_SlotButton_Bool_C_InteractedWithSelectionSlot_Params params {};
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
	 * 		Name   -> Function UI_SlotButton_Bool.UI_SlotButton_Bool_C.Tick
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_SlotButton_Bool_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SlotButton_Bool.UI_SlotButton_Bool_C.Tick");
		
		UUI_SlotButton_Bool_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function UI_SlotButton_Bool.UI_SlotButton_Bool_C.OnSynchronizeProperties
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UUI_SlotButton_Bool_C::OnSynchronizeProperties()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SlotButton_Bool.UI_SlotButton_Bool_C.OnSynchronizeProperties");
		
		UUI_SlotButton_Bool_C_OnSynchronizeProperties_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function UI_SlotButton_Bool.UI_SlotButton_Bool_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UUI_SlotButton_Bool_C::BndEvt__BackButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SlotButton_Bool.UI_SlotButton_Bool_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UUI_SlotButton_Bool_C_BndEvt__BackButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function UI_SlotButton_Bool.UI_SlotButton_Bool_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UUI_SlotButton_Bool_C::BndEvt__BackButton_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SlotButton_Bool.UI_SlotButton_Bool_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature");
		
		UUI_SlotButton_Bool_C_BndEvt__BackButton_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function UI_SlotButton_Bool.UI_SlotButton_Bool_C.BndEvt__ForwardButton_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UUI_SlotButton_Bool_C::BndEvt__ForwardButton_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SlotButton_Bool.UI_SlotButton_Bool_C.BndEvt__ForwardButton_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature");
		
		UUI_SlotButton_Bool_C_BndEvt__ForwardButton_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function UI_SlotButton_Bool.UI_SlotButton_Bool_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UUI_SlotButton_Bool_C::BndEvt__BackButton_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SlotButton_Bool.UI_SlotButton_Bool_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature");
		
		UUI_SlotButton_Bool_C_BndEvt__BackButton_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function UI_SlotButton_Bool.UI_SlotButton_Bool_C.BndEvt__ForwardButton_K2Node_ComponentBoundEvent_5_OnButtonReleasedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UUI_SlotButton_Bool_C::BndEvt__ForwardButton_K2Node_ComponentBoundEvent_5_OnButtonReleasedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SlotButton_Bool.UI_SlotButton_Bool_C.BndEvt__ForwardButton_K2Node_ComponentBoundEvent_5_OnButtonReleasedEvent__DelegateSignature");
		
		UUI_SlotButton_Bool_C_BndEvt__ForwardButton_K2Node_ComponentBoundEvent_5_OnButtonReleasedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function UI_SlotButton_Bool.UI_SlotButton_Bool_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UUI_SlotButton_Bool_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SlotButton_Bool.UI_SlotButton_Bool_C.Construct");
		
		UUI_SlotButton_Bool_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function UI_SlotButton_Bool.UI_SlotButton_Bool_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UUI_SlotButton_Bool_C::BndEvt__BackButton_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SlotButton_Bool.UI_SlotButton_Bool_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature");
		
		UUI_SlotButton_Bool_C_BndEvt__BackButton_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function UI_SlotButton_Bool.UI_SlotButton_Bool_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UUI_SlotButton_Bool_C::BndEvt__BackButton_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SlotButton_Bool.UI_SlotButton_Bool_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature");
		
		UUI_SlotButton_Bool_C_BndEvt__BackButton_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function UI_SlotButton_Bool.UI_SlotButton_Bool_C.BndEvt__ForwardButton_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UUI_SlotButton_Bool_C::BndEvt__ForwardButton_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SlotButton_Bool.UI_SlotButton_Bool_C.BndEvt__ForwardButton_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature");
		
		UUI_SlotButton_Bool_C_BndEvt__ForwardButton_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function UI_SlotButton_Bool.UI_SlotButton_Bool_C.BndEvt__ForwardButton_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UUI_SlotButton_Bool_C::BndEvt__ForwardButton_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SlotButton_Bool.UI_SlotButton_Bool_C.BndEvt__ForwardButton_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature");
		
		UUI_SlotButton_Bool_C_BndEvt__ForwardButton_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function UI_SlotButton_Bool.UI_SlotButton_Bool_C.ExecuteUbergraph_UI_SlotButton_Bool
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_SlotButton_Bool_C::ExecuteUbergraph_UI_SlotButton_Bool(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SlotButton_Bool.UI_SlotButton_Bool_C.ExecuteUbergraph_UI_SlotButton_Bool");
		
		UUI_SlotButton_Bool_C_ExecuteUbergraph_UI_SlotButton_Bool_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_SlotButton_Bool_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_SlotButton_Bool_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_SlotButton_Bool.UI_SlotButton_Bool_C");
		return ptr;
	}

}


