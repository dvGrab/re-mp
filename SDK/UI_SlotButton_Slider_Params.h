#pragma once

/**
 * Name: GTASA
 * Version: 0.0.1
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function UI_SlotButton_Slider.UI_SlotButton_Slider_C.UpdateSettingForConfirmation
	 */
	struct UUI_SlotButton_Slider_C_UpdateSettingForConfirmation_Params
	{	};

	/**
	 * Function UI_SlotButton_Slider.UI_SlotButton_Slider_C.GetCurrentSettingText
	 */
	struct UUI_SlotButton_Slider_C_GetCurrentSettingText_Params
	{
	public:
		class FText                                                NewParam;                                                // 0x0000(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function UI_SlotButton_Slider.UI_SlotButton_Slider_C.GetSliderStepSizeForController
	 */
	struct UUI_SlotButton_Slider_C_GetSliderStepSizeForController_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_SlotButton_Slider.UI_SlotButton_Slider_C.InitSliderStyle
	 */
	struct UUI_SlotButton_Slider_C_InitSliderStyle_Params
	{	};

	/**
	 * Function UI_SlotButton_Slider.UI_SlotButton_Slider_C.UpdateSliderWithValue
	 */
	struct UUI_SlotButton_Slider_C_UpdateSliderWithValue_Params
	{
	public:
		class USlider*                                             Slider;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      NewValue;                                                // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_SlotButton_Slider.UI_SlotButton_Slider_C.NavigateRight
	 */
	struct UUI_SlotButton_Slider_C_NavigateRight_Params
	{
	public:
		EUINavigation                                              Navigation;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_D51L[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UWidget*                                             ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_SlotButton_Slider.UI_SlotButton_Slider_C.NavigateLeft
	 */
	struct UUI_SlotButton_Slider_C_NavigateLeft_Params
	{
	public:
		EUINavigation                                              Navigation;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_A079[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UWidget*                                             ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_SlotButton_Slider.UI_SlotButton_Slider_C.SetHeight
	 */
	struct UUI_SlotButton_Slider_C_SetHeight_Params
	{
	public:
		float                                                      NewHeight;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_SlotButton_Slider.UI_SlotButton_Slider_C.GetSlotButton
	 */
	struct UUI_SlotButton_Slider_C_GetSlotButton_Params
	{
	public:
		class UButton*                                             SlotButton;                                              // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_SlotButton_Slider.UI_SlotButton_Slider_C.UpdateBGColor
	 */
	struct UUI_SlotButton_Slider_C_UpdateBGColor_Params
	{	};

	/**
	 * Function UI_SlotButton_Slider.UI_SlotButton_Slider_C.UpdateTextColor
	 */
	struct UUI_SlotButton_Slider_C_UpdateTextColor_Params
	{	};

	/**
	 * Function UI_SlotButton_Slider.UI_SlotButton_Slider_C.GetPercent_1
	 */
	struct UUI_SlotButton_Slider_C_GetPercent_1_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_SlotButton_Slider.UI_SlotButton_Slider_C.UpdateSettings
	 */
	struct UUI_SlotButton_Slider_C_UpdateSettings_Params
	{
	public:
		bool                                                       OverrideConfirmationLockout;                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_YIH8[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_SlotButton_Slider.UI_SlotButton_Slider_C.UpdateSlider
	 */
	struct UUI_SlotButton_Slider_C_UpdateSlider_Params
	{
	public:
		float                                                      InValue;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_SlotButton_Slider.UI_SlotButton_Slider_C.UpdateText
	 */
	struct UUI_SlotButton_Slider_C_UpdateText_Params
	{
	public:
		float                                                      InValue;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_ZDGV[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_SlotButton_Slider.UI_SlotButton_Slider_C.InitSlotButton
	 */
	struct UUI_SlotButton_Slider_C_InitSlotButton_Params
	{
	public:
		class UGameterSettings*                                    SettingsObject;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_SlotButton_Slider.UI_SlotButton_Slider_C.SetBackgroundColor
	 */
	struct UUI_SlotButton_Slider_C_SetBackgroundColor_Params
	{
	public:
		struct FSlateColor                                         InColor;                                                 // 0x0000(0x0028)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function UI_SlotButton_Slider.UI_SlotButton_Slider_C.BndEvt__TextBox_K2Node_ComponentBoundEvent_1_OnEditableTextBoxCommittedEvent__DelegateSignature
	 */
	struct UUI_SlotButton_Slider_C_BndEvt__TextBox_K2Node_ComponentBoundEvent_1_OnEditableTextBoxCommittedEvent__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		ETextCommit                                                CommitMethod;                                            // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_SlotButton_Slider.UI_SlotButton_Slider_C.InteractedWithSliderSlot
	 */
	struct UUI_SlotButton_Slider_C_InteractedWithSliderSlot_Params
	{
	public:
		unsigned char                                              InteractionType;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_6HNR[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    BoundValue;                                              // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UUI_SlotButton_C*                                    SlotButton;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_SlotButton_Slider.UI_SlotButton_Slider_C.BndEvt__MainSlider_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature
	 */
	struct UUI_SlotButton_Slider_C_BndEvt__MainSlider_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_SlotButton_Slider.UI_SlotButton_Slider_C.Tick
	 */
	struct UUI_SlotButton_Slider_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_SlotButton_Slider.UI_SlotButton_Slider_C.Construct
	 */
	struct UUI_SlotButton_Slider_C_Construct_Params
	{	};

	/**
	 * Function UI_SlotButton_Slider.UI_SlotButton_Slider_C.OnSynchronizeProperties
	 */
	struct UUI_SlotButton_Slider_C_OnSynchronizeProperties_Params
	{	};

	/**
	 * Function UI_SlotButton_Slider.UI_SlotButton_Slider_C.BndEvt__MainSlider_K2Node_ComponentBoundEvent_2_OnMouseCaptureEndEvent__DelegateSignature
	 */
	struct UUI_SlotButton_Slider_C_BndEvt__MainSlider_K2Node_ComponentBoundEvent_2_OnMouseCaptureEndEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_SlotButton_Slider.UI_SlotButton_Slider_C.ExecuteUbergraph_UI_SlotButton_Slider
	 */
	struct UUI_SlotButton_Slider_C_ExecuteUbergraph_UI_SlotButton_Slider_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_2RDT[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
