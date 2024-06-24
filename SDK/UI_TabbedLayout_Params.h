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
	 * Function UI_TabbedLayout.UI_TabbedLayout_C.ShouldSkipEntry
	 */
	struct UUI_TabbedLayout_C_ShouldSkipEntry_Params
	{
	public:
		int32_t                                                    EntryIndex;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ShouldSkip;                                              // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_TabbedLayout.UI_TabbedLayout_C.SetupTabButtonNavigation
	 */
	struct UUI_TabbedLayout_C_SetupTabButtonNavigation_Params
	{	};

	/**
	 * Function UI_TabbedLayout.UI_TabbedLayout_C.LostFocus
	 */
	struct UUI_TabbedLayout_C_LostFocus_Params
	{	};

	/**
	 * Function UI_TabbedLayout.UI_TabbedLayout_C.SetActiveTab
	 */
	struct UUI_TabbedLayout_C_SetActiveTab_Params
	{
	public:
		int32_t                                                    TabIndex;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_TabbedLayout.UI_TabbedLayout_C.TakeFocus
	 */
	struct UUI_TabbedLayout_C_TakeFocus_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_TabbedLayout.UI_TabbedLayout_C.UpdateBumperImageMaterials
	 */
	struct UUI_TabbedLayout_C_UpdateBumperImageMaterials_Params
	{	};

	/**
	 * Function UI_TabbedLayout.UI_TabbedLayout_C.Get Gameterface BP
	 */
	struct UUI_TabbedLayout_C_Get_Gameterface_BP_Params
	{
	public:
		class UGameterface*                                        ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_TabbedLayout.UI_TabbedLayout_C.UpdateButtonImages
	 */
	struct UUI_TabbedLayout_C_UpdateButtonImages_Params
	{	};

	/**
	 * Function UI_TabbedLayout.UI_TabbedLayout_C.SetupButtonImages
	 */
	struct UUI_TabbedLayout_C_SetupButtonImages_Params
	{	};

	/**
	 * Function UI_TabbedLayout.UI_TabbedLayout_C.ResetTabs
	 */
	struct UUI_TabbedLayout_C_ResetTabs_Params
	{	};

	/**
	 * Function UI_TabbedLayout.UI_TabbedLayout_C.IsUsingController
	 */
	struct UUI_TabbedLayout_C_IsUsingController_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_MNXJ[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_TabbedLayout.UI_TabbedLayout_C.HasTabConfirmationDialog
	 */
	struct UUI_TabbedLayout_C_HasTabConfirmationDialog_Params
	{
	public:
		bool                                                       Return;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_V7V8[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UConfirmationDialog_C*                               Widget;                                                  // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_TabbedLayout.UI_TabbedLayout_C.GetCurrentMenu
	 */
	struct UUI_TabbedLayout_C_GetCurrentMenu_Params
	{
	public:
		class UUI_Menu_Base_BP_C*                                  OutMenu;                                                 // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_TabbedLayout.UI_TabbedLayout_C.HandleBack
	 */
	struct UUI_TabbedLayout_C_HandleBack_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_OAOO[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_TabbedLayout.UI_TabbedLayout_C.SetToTab
	 */
	struct UUI_TabbedLayout_C_SetToTab_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ForceNoFocusChange;                                      // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ForceNoSound;                                            // 0x0005(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_TabbedLayout.UI_TabbedLayout_C.PrevTab
	 */
	struct UUI_TabbedLayout_C_PrevTab_Params
	{	};

	/**
	 * Function UI_TabbedLayout.UI_TabbedLayout_C.NextTab
	 */
	struct UUI_TabbedLayout_C_NextTab_Params
	{	};

	/**
	 * Function UI_TabbedLayout.UI_TabbedLayout_C.GrabFocus
	 */
	struct UUI_TabbedLayout_C_GrabFocus_Params
	{	};

	/**
	 * Function UI_TabbedLayout.UI_TabbedLayout_C.UpdateFocusWidget
	 */
	struct UUI_TabbedLayout_C_UpdateFocusWidget_Params
	{	};

	/**
	 * Function UI_TabbedLayout.UI_TabbedLayout_C.OnConfirmationClose
	 */
	struct UUI_TabbedLayout_C_OnConfirmationClose_Params
	{
	public:
		bool                                                       DidAccept;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_KL82[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_TabbedLayout.UI_TabbedLayout_C.ShowConfirmationDialog
	 */
	struct UUI_TabbedLayout_C_ShowConfirmationDialog_Params
	{
	public:
		class FText                                                Message;                                                 // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class FText                                                ConfirmText;                                             // 0x0018(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class FText                                                CancelText;                                              // 0x0030(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		bool                                                       ShouldRemoveCancel;                                      // 0x0048(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_YLML[0x7];                                   // 0x0049(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UConfirmationDialog_C*                               CreatedWidget;                                           // 0x0050(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_TabbedLayout.UI_TabbedLayout_C.AddTab
	 */
	struct UUI_TabbedLayout_C_AddTab_Params
	{
	public:
		class FText                                                TabText;                                                 // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		int32_t                                                    TabPosition;                                             // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_QV9P[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UUI_Button_Base_C*                                   CreatedTab;                                              // 0x0020(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_TabbedLayout.UI_TabbedLayout_C.AddContentToSelector
	 */
	struct UUI_TabbedLayout_C_AddContentToSelector_Params
	{
	public:
		class UClass*                                              Widget_Class;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UWidgetSwitcher*                                     Selector_to_add_to;                                      // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UUserWidget*                                         ContentCreated;                                          // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_TabbedLayout.UI_TabbedLayout_C.UpdateButtonsOnInteract
	 */
	struct UUI_TabbedLayout_C_UpdateButtonsOnInteract_Params
	{
	public:
		EButtonStateEnum                                           Interact_Type;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_ZV7B[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    Bound_Value;                                             // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_TabbedLayout.UI_TabbedLayout_C.InteractedButton
	 */
	struct UUI_TabbedLayout_C_InteractedButton_Params
	{
	public:
		EButtonStateEnum                                           Interact_Type;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_WO1B[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    Bound_Value;                                             // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_TabbedLayout.UI_TabbedLayout_C.SetupTabs
	 */
	struct UUI_TabbedLayout_C_SetupTabs_Params
	{
	public:
		TArray<class UUI_Button_Base_C*>                           TabsButtonsCreated;                                      // 0x0000(0x0010)  (Parm, OutParm, ContainsInstancedReference)
	};

	/**
	 * Function UI_TabbedLayout.UI_TabbedLayout_C.Construct
	 */
	struct UUI_TabbedLayout_C_Construct_Params
	{	};

	/**
	 * Function UI_TabbedLayout.UI_TabbedLayout_C.TabUsed
	 */
	struct UUI_TabbedLayout_C_TabUsed_Params
	{
	public:
		unsigned char                                              Interaction;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_8AH7[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    BoundValue;                                              // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_TabbedLayout.UI_TabbedLayout_C.OnSynchronizeProperties
	 */
	struct UUI_TabbedLayout_C_OnSynchronizeProperties_Params
	{	};

	/**
	 * Function UI_TabbedLayout.UI_TabbedLayout_C.Tick
	 */
	struct UUI_TabbedLayout_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_TabbedLayout.UI_TabbedLayout_C.CreateTabs
	 */
	struct UUI_TabbedLayout_C_CreateTabs_Params
	{	};

	/**
	 * Function UI_TabbedLayout.UI_TabbedLayout_C.DelayedSetToTab
	 */
	struct UUI_TabbedLayout_C_DelayedSetToTab_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ForceNoFocusChange;                                      // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ForceNoSound;                                            // 0x0005(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_TabbedLayout.UI_TabbedLayout_C.ExecuteUbergraph_UI_TabbedLayout
	 */
	struct UUI_TabbedLayout_C_ExecuteUbergraph_UI_TabbedLayout_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
