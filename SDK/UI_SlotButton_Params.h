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
	 * Function UI_SlotButton.UI_SlotButton_C.OnSelected
	 */
	struct UUI_SlotButton_C_OnSelected_Params
	{	};

	/**
	 * Function UI_SlotButton.UI_SlotButton_C.GetSelectionOptions
	 */
	struct UUI_SlotButton_C_GetSelectionOptions_Params
	{
	public:
		class FName                                                PropertyName;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<class FText>                                        DefaultOptions;                                          // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<class FText>                                        ReturnValue;                                             // 0x0018(0x0010)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UI_SlotButton.UI_SlotButton_C.PlayHaptic
	 */
	struct UUI_SlotButton_C_PlayHaptic_Params
	{	};

	/**
	 * Function UI_SlotButton.UI_SlotButton_C.Set Left Right Navigation
	 */
	struct UUI_SlotButton_C_Set_Left_Right_Navigation_Params
	{
	public:
		class UWidget*                                             SlotButton;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_SlotButton.UI_SlotButton_C.TryNavigateLeftOrRight
	 */
	struct UUI_SlotButton_C_TryNavigateLeftOrRight_Params
	{
	public:
		EUINavigation                                              Navigation;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_P8VG[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UWidget*                                             ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_SlotButton.UI_SlotButton_C.OnAnalogValueChanged
	 */
	struct UUI_SlotButton_C_OnAnalogValueChanged_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FAnalogInputEvent                                   InAnalogInputEvent;                                      // 0x0038(0x0040)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0078(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UI_SlotButton.UI_SlotButton_C.Play Interact Sound
	 */
	struct UUI_SlotButton_C_Play_Interact_Sound_Params
	{	};

	/**
	 * Function UI_SlotButton.UI_SlotButton_C.IsOptionNavigationWithinMargin
	 */
	struct UUI_SlotButton_C_IsOptionNavigationWithinMargin_Params
	{
	public:
		EUINavigation                                              Direction;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       AllowNavigation;                                         // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_SlotButton.UI_SlotButton_C.SetHasChangedSinceLastSave
	 */
	struct UUI_SlotButton_C_SetHasChangedSinceLastSave_Params
	{
	public:
		bool                                                       InValue;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_1E3H[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_SlotButton.UI_SlotButton_C.FixDisplayName
	 */
	struct UUI_SlotButton_C_FixDisplayName_Params
	{
	public:
		bool                                                       IsSettingAvailable;                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_5Z16[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FText                                                OutText;                                                 // 0x0008(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function UI_SlotButton.UI_SlotButton_C.IsSettingAvailable
	 */
	struct UUI_SlotButton_C_IsSettingAvailable_Params
	{
	public:
		bool                                                       isAvailable;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_K0W2[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_SlotButton.UI_SlotButton_C.SetDisabledTextColor
	 */
	struct UUI_SlotButton_C_SetDisabledTextColor_Params
	{
	public:
		struct FSlateColor                                         InColor;                                                 // 0x0000(0x0028)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function UI_SlotButton.UI_SlotButton_C.SetDisabledSelectedBackgroundColor
	 */
	struct UUI_SlotButton_C_SetDisabledSelectedBackgroundColor_Params
	{
	public:
		struct FSlateColor                                         InColor;                                                 // 0x0000(0x0028)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function UI_SlotButton.UI_SlotButton_C.SetDisabledBackgroundColor
	 */
	struct UUI_SlotButton_C_SetDisabledBackgroundColor_Params
	{
	public:
		struct FSlateColor                                         InColor;                                                 // 0x0000(0x0028)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function UI_SlotButton.UI_SlotButton_C.SetDisabled
	 */
	struct UUI_SlotButton_C_SetDisabled_Params
	{
	public:
		bool                                                       Disable;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_17US[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ErrorCode;                                               // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_SlotButton.UI_SlotButton_C.TickDisabled
	 */
	struct UUI_SlotButton_C_TickDisabled_Params
	{	};

	/**
	 * Function UI_SlotButton.UI_SlotButton_C.DidConfirmPostConfirmation
	 */
	struct UUI_SlotButton_C_DidConfirmPostConfirmation_Params
	{
	public:
		bool                                                       Accepted;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_8TOO[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_SlotButton.UI_SlotButton_C.On Option Changed Final Check
	 */
	struct UUI_SlotButton_C_On_Option_Changed_Final_Check_Params
	{
	public:
		bool                                                       RequiresOptionRefresh;                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_Q52T[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FName                                                PropertyNameToSelect;                                    // 0x0004(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_FGHR[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_SlotButton.UI_SlotButton_C.UpdateSettingForConfirmation
	 */
	struct UUI_SlotButton_C_UpdateSettingForConfirmation_Params
	{	};

	/**
	 * Function UI_SlotButton.UI_SlotButton_C.GetCurrentSettingText
	 */
	struct UUI_SlotButton_C_GetCurrentSettingText_Params
	{
	public:
		class FText                                                NewParam;                                                // 0x0000(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function UI_SlotButton.UI_SlotButton_C.DidConfirm
	 */
	struct UUI_SlotButton_C_DidConfirm_Params
	{
	public:
		bool                                                       Accepted;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_79UN[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_SlotButton.UI_SlotButton_C.ShouldShowConfirmation
	 */
	struct UUI_SlotButton_C_ShouldShowConfirmation_Params
	{
	public:
		bool                                                       IgnoreCurrentFocus;                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       DoConfirm;                                               // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_L1RM[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_SlotButton.UI_SlotButton_C.ForceSlotStyle
	 */
	struct UUI_SlotButton_C_ForceSlotStyle_Params
	{
	public:
		struct FScrollListStyle                                    ScrollListStyle;                                         // 0x0000(0x0158)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		bool                                                       UseSlotColor1;                                           // 0x0158(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_SlotButton.UI_SlotButton_C.LockBehavior
	 */
	struct UUI_SlotButton_C_LockBehavior_Params
	{
	public:
		bool                                                       ShouldLock;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_SlotButton.UI_SlotButton_C.SetFont
	 */
	struct UUI_SlotButton_C_SetFont_Params
	{
	public:
		struct FSlateFontInfo                                      NewFont;                                                 // 0x0000(0x0058)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function UI_SlotButton.UI_SlotButton_C.NavigateRight
	 */
	struct UUI_SlotButton_C_NavigateRight_Params
	{
	public:
		EUINavigation                                              Navigation;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_6TII[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UWidget*                                             ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_SlotButton.UI_SlotButton_C.NavigateLeft
	 */
	struct UUI_SlotButton_C_NavigateLeft_Params
	{
	public:
		EUINavigation                                              Navigation;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_858Q[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UWidget*                                             ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_SlotButton.UI_SlotButton_C.IsInputTypeController
	 */
	struct UUI_SlotButton_C_IsInputTypeController_Params
	{
	public:
		bool                                                       IsController;                                            // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_M99Z[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_SlotButton.UI_SlotButton_C.GetSlotButton
	 */
	struct UUI_SlotButton_C_GetSlotButton_Params
	{
	public:
		class UButton*                                             SlotButton;                                              // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_SlotButton.UI_SlotButton_C.SetHeight
	 */
	struct UUI_SlotButton_C_SetHeight_Params
	{
	public:
		float                                                      NewHeight;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_SlotButton.UI_SlotButton_C.UpdateBGColor
	 */
	struct UUI_SlotButton_C_UpdateBGColor_Params
	{	};

	/**
	 * Function UI_SlotButton.UI_SlotButton_C.HasBeenSelected
	 */
	struct UUI_SlotButton_C_HasBeenSelected_Params
	{	};

	/**
	 * Function UI_SlotButton.UI_SlotButton_C.SetSelected
	 */
	struct UUI_SlotButton_C_SetSelected_Params
	{
	public:
		bool                                                       Selected;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       FromHover;                                               // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_SlotButton.UI_SlotButton_C.UpdateTextColor
	 */
	struct UUI_SlotButton_C_UpdateTextColor_Params
	{	};

	/**
	 * Function UI_SlotButton.UI_SlotButton_C.SetSelectedTextColor
	 */
	struct UUI_SlotButton_C_SetSelectedTextColor_Params
	{
	public:
		struct FSlateColor                                         NewColor;                                                // 0x0000(0x0028)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function UI_SlotButton.UI_SlotButton_C.SetTextColor
	 */
	struct UUI_SlotButton_C_SetTextColor_Params
	{
	public:
		struct FSlateColor                                         NewColor;                                                // 0x0000(0x0028)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function UI_SlotButton.UI_SlotButton_C.SetSelectedBackgroundColor
	 */
	struct UUI_SlotButton_C_SetSelectedBackgroundColor_Params
	{
	public:
		struct FSlateColor                                         InColor;                                                 // 0x0000(0x0028)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function UI_SlotButton.UI_SlotButton_C.UpdateSettings
	 */
	struct UUI_SlotButton_C_UpdateSettings_Params
	{
	public:
		bool                                                       OverrideConfirmationLockout;                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_SlotButton.UI_SlotButton_C.OverrideAltText
	 */
	struct UUI_SlotButton_C_OverrideAltText_Params
	{
	public:
		class FText                                                NewText;                                                 // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function UI_SlotButton.UI_SlotButton_C.OverrideMainText
	 */
	struct UUI_SlotButton_C_OverrideMainText_Params
	{
	public:
		class FText                                                NewText;                                                 // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function UI_SlotButton.UI_SlotButton_C.InitSlotButton
	 */
	struct UUI_SlotButton_C_InitSlotButton_Params
	{
	public:
		class UGameterSettings*                                    SettingsObject;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_SlotButton.UI_SlotButton_C.SetBackgroundColor
	 */
	struct UUI_SlotButton_C_SetBackgroundColor_Params
	{
	public:
		struct FSlateColor                                         InColor;                                                 // 0x0000(0x0028)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function UI_SlotButton.UI_SlotButton_C.Construct
	 */
	struct UUI_SlotButton_C_Construct_Params
	{	};

	/**
	 * Function UI_SlotButton.UI_SlotButton_C.OnSlotClicked
	 */
	struct UUI_SlotButton_C_OnSlotClicked_Params
	{	};

	/**
	 * Function UI_SlotButton.UI_SlotButton_C.OnSlotPressed
	 */
	struct UUI_SlotButton_C_OnSlotPressed_Params
	{	};

	/**
	 * Function UI_SlotButton.UI_SlotButton_C.OnSlotReleased
	 */
	struct UUI_SlotButton_C_OnSlotReleased_Params
	{	};

	/**
	 * Function UI_SlotButton.UI_SlotButton_C.OnSlotHovered
	 */
	struct UUI_SlotButton_C_OnSlotHovered_Params
	{	};

	/**
	 * Function UI_SlotButton.UI_SlotButton_C.OnSlotUnhovered
	 */
	struct UUI_SlotButton_C_OnSlotUnhovered_Params
	{	};

	/**
	 * Function UI_SlotButton.UI_SlotButton_C.OnSynchronizeProperties
	 */
	struct UUI_SlotButton_C_OnSynchronizeProperties_Params
	{	};

	/**
	 * Function UI_SlotButton.UI_SlotButton_C.Tick
	 */
	struct UUI_SlotButton_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_SlotButton.UI_SlotButton_C.DelayedPostConfirmation
	 */
	struct UUI_SlotButton_C_DelayedPostConfirmation_Params
	{	};

	/**
	 * Function UI_SlotButton.UI_SlotButton_C.ExecuteUbergraph_UI_SlotButton
	 */
	struct UUI_SlotButton_C_ExecuteUbergraph_UI_SlotButton_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_SlotButton.UI_SlotButton_C.OnFinalConfirmation__DelegateSignature
	 */
	struct UUI_SlotButton_C_OnFinalConfirmation__DelegateSignature_Params
	{
	public:
		bool                                                       RequiresOptionRefresh;                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_VSE8[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FName                                                PropertyNameToSelect;                                    // 0x0004(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_SlotButton.UI_SlotButton_C.OnOptionSelectionChanged__DelegateSignature
	 */
	struct UUI_SlotButton_C_OnOptionSelectionChanged__DelegateSignature_Params
	{
	public:
		class FName                                                OptionName;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Selected;                                                // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       FromHover;                                               // 0x0009(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_SlotButton.UI_SlotButton_C.OnOptionChange__DelegateSignature
	 */
	struct UUI_SlotButton_C_OnOptionChange__DelegateSignature_Params
	{
	public:
		class FName                                                OptionName;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_SlotButton.UI_SlotButton_C.PostConfirmationRequired__DelegateSignature
	 */
	struct UUI_SlotButton_C_PostConfirmationRequired__DelegateSignature_Params
	{
	public:
		class UUI_SlotButton_C*                                    SlotThatNeedsConfirmation;                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_SlotButton.UI_SlotButton_C.ConfirmationRequired__DelegateSignature
	 */
	struct UUI_SlotButton_C_ConfirmationRequired__DelegateSignature_Params
	{
	public:
		class UUI_SlotButton_C*                                    SlotThatNeedsConfirmation;                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_SlotButton.UI_SlotButton_C.DidUpdateSettings__DelegateSignature
	 */
	struct UUI_SlotButton_C_DidUpdateSettings__DelegateSignature_Params
	{
	public:
		bool                                                       RequiresOptionRefresh;                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_SR9Z[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FName                                                PropertyNameToSelect;                                    // 0x0004(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_SlotButton.UI_SlotButton_C.SlotDispatcher__DelegateSignature
	 */
	struct UUI_SlotButton_C_SlotDispatcher__DelegateSignature_Params
	{
	public:
		unsigned char                                              InteractionType;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_U8Q4[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    BoundValue;                                              // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UUI_SlotButton_C*                                    ButtonSentFrom;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
