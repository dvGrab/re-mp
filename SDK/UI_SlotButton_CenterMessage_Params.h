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
	 * Function UI_SlotButton_CenterMessage.UI_SlotButton_CenterMessage_C.GetSlotButton
	 */
	struct UUI_SlotButton_CenterMessage_C_GetSlotButton_Params
	{
	public:
		class UButton*                                             SlotButton;                                              // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_SlotButton_CenterMessage.UI_SlotButton_CenterMessage_C.LockBehavior
	 */
	struct UUI_SlotButton_CenterMessage_C_LockBehavior_Params
	{
	public:
		bool                                                       ShouldLock;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_SlotButton_CenterMessage.UI_SlotButton_CenterMessage_C.SetFont
	 */
	struct UUI_SlotButton_CenterMessage_C_SetFont_Params
	{
	public:
		struct FSlateFontInfo                                      NewFont;                                                 // 0x0000(0x0058)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function UI_SlotButton_CenterMessage.UI_SlotButton_CenterMessage_C.UpdateTextColor
	 */
	struct UUI_SlotButton_CenterMessage_C_UpdateTextColor_Params
	{	};

	/**
	 * Function UI_SlotButton_CenterMessage.UI_SlotButton_CenterMessage_C.UpdateBGColor
	 */
	struct UUI_SlotButton_CenterMessage_C_UpdateBGColor_Params
	{	};

	/**
	 * Function UI_SlotButton_CenterMessage.UI_SlotButton_CenterMessage_C.OverrideMainText
	 */
	struct UUI_SlotButton_CenterMessage_C_OverrideMainText_Params
	{
	public:
		class FText                                                NewText;                                                 // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function UI_SlotButton_CenterMessage.UI_SlotButton_CenterMessage_C.SetHeight
	 */
	struct UUI_SlotButton_CenterMessage_C_SetHeight_Params
	{
	public:
		float                                                      NewHeight;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_SlotButton_CenterMessage.UI_SlotButton_CenterMessage_C.SetSelectedBackgroundColor
	 */
	struct UUI_SlotButton_CenterMessage_C_SetSelectedBackgroundColor_Params
	{
	public:
		struct FSlateColor                                         InColor;                                                 // 0x0000(0x0028)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function UI_SlotButton_CenterMessage.UI_SlotButton_CenterMessage_C.InitSlotButton
	 */
	struct UUI_SlotButton_CenterMessage_C_InitSlotButton_Params
	{
	public:
		class UGameterSettings*                                    SettingsObject;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_SlotButton_CenterMessage.UI_SlotButton_CenterMessage_C.SetBackgroundColor
	 */
	struct UUI_SlotButton_CenterMessage_C_SetBackgroundColor_Params
	{
	public:
		struct FSlateColor                                         InColor;                                                 // 0x0000(0x0028)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function UI_SlotButton_CenterMessage.UI_SlotButton_CenterMessage_C.OnSynchronizeProperties
	 */
	struct UUI_SlotButton_CenterMessage_C_OnSynchronizeProperties_Params
	{	};

	/**
	 * Function UI_SlotButton_CenterMessage.UI_SlotButton_CenterMessage_C.Construct
	 */
	struct UUI_SlotButton_CenterMessage_C_Construct_Params
	{	};

	/**
	 * Function UI_SlotButton_CenterMessage.UI_SlotButton_CenterMessage_C.Tick
	 */
	struct UUI_SlotButton_CenterMessage_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_SlotButton_CenterMessage.UI_SlotButton_CenterMessage_C.BndEvt__MainButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UUI_SlotButton_CenterMessage_C_BndEvt__MainButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_SlotButton_CenterMessage.UI_SlotButton_CenterMessage_C.BndEvt__MainButton_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature
	 */
	struct UUI_SlotButton_CenterMessage_C_BndEvt__MainButton_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_SlotButton_CenterMessage.UI_SlotButton_CenterMessage_C.BndEvt__MainButton_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature
	 */
	struct UUI_SlotButton_CenterMessage_C_BndEvt__MainButton_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_SlotButton_CenterMessage.UI_SlotButton_CenterMessage_C.BndEvt__MainButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
	 */
	struct UUI_SlotButton_CenterMessage_C_BndEvt__MainButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_SlotButton_CenterMessage.UI_SlotButton_CenterMessage_C.BndEvt__MainButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
	 */
	struct UUI_SlotButton_CenterMessage_C_BndEvt__MainButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_SlotButton_CenterMessage.UI_SlotButton_CenterMessage_C.InteractedWithSelectionSlot
	 */
	struct UUI_SlotButton_CenterMessage_C_InteractedWithSelectionSlot_Params
	{
	public:
		unsigned char                                              InteractionType;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_QRCC[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    BoundValue;                                              // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UUI_SlotButton_C*                                    SlotButton;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_SlotButton_CenterMessage.UI_SlotButton_CenterMessage_C.ExecuteUbergraph_UI_SlotButton_CenterMessage
	 */
	struct UUI_SlotButton_CenterMessage_C_ExecuteUbergraph_UI_SlotButton_CenterMessage_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
