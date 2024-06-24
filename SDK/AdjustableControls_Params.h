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
	 * Function AdjustableControls.AdjustableControls_C.SetupHelpButtons
	 */
	struct UAdjustableControls_C_SetupHelpButtons_Params
	{	};

	/**
	 * Function AdjustableControls.AdjustableControls_C.VibrationOptionOverride
	 */
	struct UAdjustableControls_C_VibrationOptionOverride_Params
	{	};

	/**
	 * Function AdjustableControls.AdjustableControls_C.RefreshMappings
	 */
	struct UAdjustableControls_C_RefreshMappings_Params
	{	};

	/**
	 * Function AdjustableControls.AdjustableControls_C.InitAdjustableSlotButton
	 */
	struct UAdjustableControls_C_InitAdjustableSlotButton_Params
	{
	public:
		class UUI_SlotButton_C*                                    SlotItem;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UButton*                                             SlotButton;                                              // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AdjustableControls.AdjustableControls_C.SetupButtonsWithTemplate
	 */
	struct UAdjustableControls_C_SetupButtonsWithTemplate_Params
	{	};

	/**
	 * Function AdjustableControls.AdjustableControls_C.Move Controller UI Above Slot Buttons
	 */
	struct UAdjustableControls_C_Move_Controller_UI_Above_Slot_Buttons_Params
	{
	public:
		float                                                      UIOffsetY;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AdjustableControls.AdjustableControls_C.CreateControllerUI
	 */
	struct UAdjustableControls_C_CreateControllerUI_Params
	{
	public:
		class UControllerUI_Base_C*                                UI;                                                      // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AdjustableControls.AdjustableControls_C.GetControllerUIClass
	 */
	struct UAdjustableControls_C_GetControllerUIClass_Params
	{
	public:
		class UClass*                                              ControllerUIClass;                                       // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AdjustableControls.AdjustableControls_C.SetupControlSchemeButton
	 */
	struct UAdjustableControls_C_SetupControlSchemeButton_Params
	{	};

	/**
	 * Function AdjustableControls.AdjustableControls_C.Setup Top Slot Buttons and Positions
	 */
	struct UAdjustableControls_C_Setup_Top_Slot_Buttons_and_Positions_Params
	{
	public:
		bool                                                       OnSynchronize;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_H2WJ[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UWidget*                                             BelowButtonsWidget;                                      // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UWidget*                                             AboveButtonsWidget;                                      // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UGameterSettings*                                    SettingsObject;                                          // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      OffsetBelowButtons;                                      // 0x0020(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_9Z93[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UWidget*                                             LastSlotButtonWidget;                                    // 0x0028(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UWidget*                                             FirstSlotButtonWidget;                                   // 0x0030(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AdjustableControls.AdjustableControls_C.UpdateControllerUI
	 */
	struct UAdjustableControls_C_UpdateControllerUI_Params
	{	};

	/**
	 * Function AdjustableControls.AdjustableControls_C.UpdateUI
	 */
	struct UAdjustableControls_C_UpdateUI_Params
	{
	public:
		EGTAInputType                                              CurrentInput;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AdjustableControls.AdjustableControls_C.GetControllerNavigationWidgets
	 */
	struct UAdjustableControls_C_GetControllerNavigationWidgets_Params
	{
	public:
		int32_t                                                    ArrayIndex;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_I4A0[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<class UWidget*>                                     Array;                                                   // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
		bool                                                       IsLeft;                                                  // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_OFGX[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<class UWidget*>                                     OtherArray;                                              // 0x0020(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
		class UWidget*                                             Up;                                                      // 0x0030(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UWidget*                                             Down;                                                    // 0x0038(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UWidget*                                             Left;                                                    // 0x0040(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UWidget*                                             Right;                                                   // 0x0048(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AdjustableControls.AdjustableControls_C.SetupControllerSlots
	 */
	struct UAdjustableControls_C_SetupControllerSlots_Params
	{
	public:
		bool                                                       OnSynchronize;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_4K5S[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UControllerUI_Base_C*                                ControllerUI;                                            // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AdjustableControls.AdjustableControls_C.SetupForTouch
	 */
	struct UAdjustableControls_C_SetupForTouch_Params
	{	};

	/**
	 * Function AdjustableControls.AdjustableControls_C.SetupForController
	 */
	struct UAdjustableControls_C_SetupForController_Params
	{
	public:
		bool                                                       OnSynchronize;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_A6PB[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function AdjustableControls.AdjustableControls_C.OnSaveKeyboardControlsDialog
	 */
	struct UAdjustableControls_C_OnSaveKeyboardControlsDialog_Params
	{
	public:
		bool                                                       DidAccept;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AdjustableControls.AdjustableControls_C.OnResetKeyboardControlsDialog
	 */
	struct UAdjustableControls_C_OnResetKeyboardControlsDialog_Params
	{
	public:
		bool                                                       DidAccept;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_1Z2R[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function AdjustableControls.AdjustableControls_C.TakeFocus
	 */
	struct UAdjustableControls_C_TakeFocus_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_7OH1[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function AdjustableControls.AdjustableControls_C.InitAdjustableControlsMenu
	 */
	struct UAdjustableControls_C_InitAdjustableControlsMenu_Params
	{	};

	/**
	 * Function AdjustableControls.AdjustableControls_C.OnListeningDialogComplete
	 */
	struct UAdjustableControls_C_OnListeningDialogComplete_Params
	{
	public:
		bool                                                       DidAccept;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AdjustableControls.AdjustableControls_C.AdjustButtonPressed
	 */
	struct UAdjustableControls_C_AdjustButtonPressed_Params
	{
	public:
		unsigned char                                              InteractionType;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_TKM4[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    BoundValue;                                              // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UUI_SlotButton_C*                                    SlotButton;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AdjustableControls.AdjustableControls_C.Show Window
	 */
	struct UAdjustableControls_C_Show_Window_Params
	{
	public:
		EGTAInputType                                              CurrentTypeToShow;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AdjustableControls.AdjustableControls_C.SetupForKeyboard
	 */
	struct UAdjustableControls_C_SetupForKeyboard_Params
	{	};

	/**
	 * Function AdjustableControls.AdjustableControls_C.GetInputType
	 */
	struct UAdjustableControls_C_GetInputType_Params
	{
	public:
		EGTAInputType                                              ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_A4RI[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function AdjustableControls.AdjustableControls_C.SetupRightSlots
	 */
	struct UAdjustableControls_C_SetupRightSlots_Params
	{	};

	/**
	 * Function AdjustableControls.AdjustableControls_C.CreateMappingSlot
	 */
	struct UAdjustableControls_C_CreateMappingSlot_Params
	{
	public:
		class FText                                                Main_Text;                                               // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class FText                                                Alt_Text;                                                // 0x0018(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		int32_t                                                    Index;                                                   // 0x0030(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_NALA[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UUI_ScrollingSlotList_C*                             ListToAddTo;                                             // 0x0038(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsLeftPanel;                                             // 0x0040(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_YLMG[0x3];                                   // 0x0041(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    BoundMapping;                                            // 0x0044(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AdjustableControls.AdjustableControls_C.SetupLeftSlots
	 */
	struct UAdjustableControls_C_SetupLeftSlots_Params
	{	};

	/**
	 * Function AdjustableControls.AdjustableControls_C.SetupSlotTitles
	 */
	struct UAdjustableControls_C_SetupSlotTitles_Params
	{	};

	/**
	 * Function AdjustableControls.AdjustableControls_C.UpdateButtons
	 */
	struct UAdjustableControls_C_UpdateButtons_Params
	{	};

	/**
	 * Function AdjustableControls.AdjustableControls_C.UpdateSlotStyle
	 */
	struct UAdjustableControls_C_UpdateSlotStyle_Params
	{	};

	/**
	 * Function AdjustableControls.AdjustableControls_C.Construct
	 */
	struct UAdjustableControls_C_Construct_Params
	{	};

	/**
	 * Function AdjustableControls.AdjustableControls_C.BndEvt__ResetButton_K2Node_ComponentBoundEvent_1_ButtonDispatcher__DelegateSignature
	 */
	struct UAdjustableControls_C_BndEvt__ResetButton_K2Node_ComponentBoundEvent_1_ButtonDispatcher__DelegateSignature_Params
	{
	public:
		unsigned char                                              Interaction;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_F2BB[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    BoundValue;                                              // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AdjustableControls.AdjustableControls_C.ForceButtonsHovered
	 */
	struct UAdjustableControls_C_ForceButtonsHovered_Params
	{	};

	/**
	 * Function AdjustableControls.AdjustableControls_C.ForceButtonsNormal
	 */
	struct UAdjustableControls_C_ForceButtonsNormal_Params
	{	};

	/**
	 * Function AdjustableControls.AdjustableControls_C.ForceButtonsSelected
	 */
	struct UAdjustableControls_C_ForceButtonsSelected_Params
	{	};

	/**
	 * Function AdjustableControls.AdjustableControls_C.PreConstruct
	 */
	struct UAdjustableControls_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AdjustableControls.AdjustableControls_C.BndEvt__ControllerTemplateSelect_K2Node_ComponentBoundEvent_3_DidUpdateSettings__DelegateSignature
	 */
	struct UAdjustableControls_C_BndEvt__ControllerTemplateSelect_K2Node_ComponentBoundEvent_3_DidUpdateSettings__DelegateSignature_Params
	{
	public:
		bool                                                       RequiresOptionRefresh;                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_WOP5[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FName                                                PropertyNameToSelect;                                    // 0x0004(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AdjustableControls.AdjustableControls_C.Tick
	 */
	struct UAdjustableControls_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AdjustableControls.AdjustableControls_C.ExecuteUbergraph_AdjustableControls
	 */
	struct UAdjustableControls_C_ExecuteUbergraph_AdjustableControls_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
