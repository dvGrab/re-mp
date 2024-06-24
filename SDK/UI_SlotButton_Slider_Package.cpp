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
	 * 		Name   -> Function UI_SlotButton_Slider.UI_SlotButton_Slider_C.UpdateSettingForConfirmation
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_SlotButton_Slider_C::UpdateSettingForConfirmation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SlotButton_Slider.UI_SlotButton_Slider_C.UpdateSettingForConfirmation");
		
		UUI_SlotButton_Slider_C_UpdateSettingForConfirmation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function UI_SlotButton_Slider.UI_SlotButton_Slider_C.GetCurrentSettingText
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        NewParam                                                   (Parm, OutParm)
	 */
	void UUI_SlotButton_Slider_C::GetCurrentSettingText(class FText* NewParam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SlotButton_Slider.UI_SlotButton_Slider_C.GetCurrentSettingText");
		
		UUI_SlotButton_Slider_C_GetCurrentSettingText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NewParam != nullptr)
			*NewParam = params.NewParam;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function UI_SlotButton_Slider.UI_SlotButton_Slider_C.GetSliderStepSizeForController
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	float UUI_SlotButton_Slider_C::GetSliderStepSizeForController()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SlotButton_Slider.UI_SlotButton_Slider_C.GetSliderStepSizeForController");
		
		UUI_SlotButton_Slider_C_GetSliderStepSizeForController_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function UI_SlotButton_Slider.UI_SlotButton_Slider_C.InitSliderStyle
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_SlotButton_Slider_C::InitSliderStyle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SlotButton_Slider.UI_SlotButton_Slider_C.InitSliderStyle");
		
		UUI_SlotButton_Slider_C_InitSliderStyle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function UI_SlotButton_Slider.UI_SlotButton_Slider_C.UpdateSliderWithValue
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class USlider*                                     Slider                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              NewValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_SlotButton_Slider_C::UpdateSliderWithValue(class USlider* Slider, float NewValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SlotButton_Slider.UI_SlotButton_Slider_C.UpdateSliderWithValue");
		
		UUI_SlotButton_Slider_C_UpdateSliderWithValue_Params params {};
		params.Slider = Slider;
		params.NewValue = NewValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function UI_SlotButton_Slider.UI_SlotButton_Slider_C.NavigateRight
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EUINavigation                                      Navigation                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	class UWidget* UUI_SlotButton_Slider_C::NavigateRight(EUINavigation Navigation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SlotButton_Slider.UI_SlotButton_Slider_C.NavigateRight");
		
		UUI_SlotButton_Slider_C_NavigateRight_Params params {};
		params.Navigation = Navigation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function UI_SlotButton_Slider.UI_SlotButton_Slider_C.NavigateLeft
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EUINavigation                                      Navigation                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	class UWidget* UUI_SlotButton_Slider_C::NavigateLeft(EUINavigation Navigation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SlotButton_Slider.UI_SlotButton_Slider_C.NavigateLeft");
		
		UUI_SlotButton_Slider_C_NavigateLeft_Params params {};
		params.Navigation = Navigation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function UI_SlotButton_Slider.UI_SlotButton_Slider_C.SetHeight
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              NewHeight                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_SlotButton_Slider_C::SetHeight(float NewHeight)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SlotButton_Slider.UI_SlotButton_Slider_C.SetHeight");
		
		UUI_SlotButton_Slider_C_SetHeight_Params params {};
		params.NewHeight = NewHeight;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function UI_SlotButton_Slider.UI_SlotButton_Slider_C.GetSlotButton
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class UButton*                                     SlotButton                                                 (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_SlotButton_Slider_C::GetSlotButton(class UButton** SlotButton)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SlotButton_Slider.UI_SlotButton_Slider_C.GetSlotButton");
		
		UUI_SlotButton_Slider_C_GetSlotButton_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SlotButton != nullptr)
			*SlotButton = params.SlotButton;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function UI_SlotButton_Slider.UI_SlotButton_Slider_C.UpdateBGColor
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_SlotButton_Slider_C::UpdateBGColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SlotButton_Slider.UI_SlotButton_Slider_C.UpdateBGColor");
		
		UUI_SlotButton_Slider_C_UpdateBGColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function UI_SlotButton_Slider.UI_SlotButton_Slider_C.UpdateTextColor
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_SlotButton_Slider_C::UpdateTextColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SlotButton_Slider.UI_SlotButton_Slider_C.UpdateTextColor");
		
		UUI_SlotButton_Slider_C_UpdateTextColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function UI_SlotButton_Slider.UI_SlotButton_Slider_C.GetPercent_1
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	float UUI_SlotButton_Slider_C::GetPercent_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SlotButton_Slider.UI_SlotButton_Slider_C.GetPercent_1");
		
		UUI_SlotButton_Slider_C_GetPercent_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function UI_SlotButton_Slider.UI_SlotButton_Slider_C.UpdateSettings
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               OverrideConfirmationLockout                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_SlotButton_Slider_C::UpdateSettings(bool OverrideConfirmationLockout)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SlotButton_Slider.UI_SlotButton_Slider_C.UpdateSettings");
		
		UUI_SlotButton_Slider_C_UpdateSettings_Params params {};
		params.OverrideConfirmationLockout = OverrideConfirmationLockout;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function UI_SlotButton_Slider.UI_SlotButton_Slider_C.UpdateSlider
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              InValue                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_SlotButton_Slider_C::UpdateSlider(float InValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SlotButton_Slider.UI_SlotButton_Slider_C.UpdateSlider");
		
		UUI_SlotButton_Slider_C_UpdateSlider_Params params {};
		params.InValue = InValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function UI_SlotButton_Slider.UI_SlotButton_Slider_C.UpdateText
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              InValue                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_SlotButton_Slider_C::UpdateText(float InValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SlotButton_Slider.UI_SlotButton_Slider_C.UpdateText");
		
		UUI_SlotButton_Slider_C_UpdateText_Params params {};
		params.InValue = InValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function UI_SlotButton_Slider.UI_SlotButton_Slider_C.InitSlotButton
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UGameterSettings*                            SettingsObject                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_SlotButton_Slider_C::InitSlotButton(class UGameterSettings* SettingsObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SlotButton_Slider.UI_SlotButton_Slider_C.InitSlotButton");
		
		UUI_SlotButton_Slider_C_InitSlotButton_Params params {};
		params.SettingsObject = SettingsObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function UI_SlotButton_Slider.UI_SlotButton_Slider_C.SetBackgroundColor
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FSlateColor                                 InColor                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UUI_SlotButton_Slider_C::SetBackgroundColor(const struct FSlateColor& InColor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SlotButton_Slider.UI_SlotButton_Slider_C.SetBackgroundColor");
		
		UUI_SlotButton_Slider_C_SetBackgroundColor_Params params {};
		params.InColor = InColor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function UI_SlotButton_Slider.UI_SlotButton_Slider_C.BndEvt__TextBox_K2Node_ComponentBoundEvent_1_OnEditableTextBoxCommittedEvent__DelegateSignature
	 * 		Flags  -> (HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        Text                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		ETextCommit                                        CommitMethod                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_SlotButton_Slider_C::BndEvt__TextBox_K2Node_ComponentBoundEvent_1_OnEditableTextBoxCommittedEvent__DelegateSignature(const class FText& Text, ETextCommit CommitMethod)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SlotButton_Slider.UI_SlotButton_Slider_C.BndEvt__TextBox_K2Node_ComponentBoundEvent_1_OnEditableTextBoxCommittedEvent__DelegateSignature");
		
		UUI_SlotButton_Slider_C_BndEvt__TextBox_K2Node_ComponentBoundEvent_1_OnEditableTextBoxCommittedEvent__DelegateSignature_Params params {};
		params.Text = Text;
		params.CommitMethod = CommitMethod;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function UI_SlotButton_Slider.UI_SlotButton_Slider_C.InteractedWithSliderSlot
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		unsigned char                                      InteractionType                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            BoundValue                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UUI_SlotButton_C*                            SlotButton                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_SlotButton_Slider_C::InteractedWithSliderSlot(unsigned char InteractionType, int32_t BoundValue, class UUI_SlotButton_C* SlotButton)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SlotButton_Slider.UI_SlotButton_Slider_C.InteractedWithSliderSlot");
		
		UUI_SlotButton_Slider_C_InteractedWithSliderSlot_Params params {};
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
	 * 		Name   -> Function UI_SlotButton_Slider.UI_SlotButton_Slider_C.BndEvt__MainSlider_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_SlotButton_Slider_C::BndEvt__MainSlider_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature(float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SlotButton_Slider.UI_SlotButton_Slider_C.BndEvt__MainSlider_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature");
		
		UUI_SlotButton_Slider_C_BndEvt__MainSlider_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function UI_SlotButton_Slider.UI_SlotButton_Slider_C.Tick
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_SlotButton_Slider_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SlotButton_Slider.UI_SlotButton_Slider_C.Tick");
		
		UUI_SlotButton_Slider_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function UI_SlotButton_Slider.UI_SlotButton_Slider_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UUI_SlotButton_Slider_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SlotButton_Slider.UI_SlotButton_Slider_C.Construct");
		
		UUI_SlotButton_Slider_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function UI_SlotButton_Slider.UI_SlotButton_Slider_C.OnSynchronizeProperties
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UUI_SlotButton_Slider_C::OnSynchronizeProperties()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SlotButton_Slider.UI_SlotButton_Slider_C.OnSynchronizeProperties");
		
		UUI_SlotButton_Slider_C_OnSynchronizeProperties_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function UI_SlotButton_Slider.UI_SlotButton_Slider_C.BndEvt__MainSlider_K2Node_ComponentBoundEvent_2_OnMouseCaptureEndEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UUI_SlotButton_Slider_C::BndEvt__MainSlider_K2Node_ComponentBoundEvent_2_OnMouseCaptureEndEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SlotButton_Slider.UI_SlotButton_Slider_C.BndEvt__MainSlider_K2Node_ComponentBoundEvent_2_OnMouseCaptureEndEvent__DelegateSignature");
		
		UUI_SlotButton_Slider_C_BndEvt__MainSlider_K2Node_ComponentBoundEvent_2_OnMouseCaptureEndEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function UI_SlotButton_Slider.UI_SlotButton_Slider_C.ExecuteUbergraph_UI_SlotButton_Slider
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_SlotButton_Slider_C::ExecuteUbergraph_UI_SlotButton_Slider(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SlotButton_Slider.UI_SlotButton_Slider_C.ExecuteUbergraph_UI_SlotButton_Slider");
		
		UUI_SlotButton_Slider_C_ExecuteUbergraph_UI_SlotButton_Slider_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_SlotButton_Slider_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_SlotButton_Slider_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_SlotButton_Slider.UI_SlotButton_Slider_C");
		return ptr;
	}

}


