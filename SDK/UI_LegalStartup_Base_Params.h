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
	 * Function UI_LegalStartup_Base.UI_LegalStartup_Base_C.DoSkip
	 */
	struct UUI_LegalStartup_Base_C_DoSkip_Params
	{	};

	/**
	 * Function UI_LegalStartup_Base.UI_LegalStartup_Base_C.AllowMenuControl
	 */
	struct UUI_LegalStartup_Base_C_AllowMenuControl_Params
	{
	public:
		bool                                                       allow_menu_control;                                      // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_SAKN[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_LegalStartup_Base.UI_LegalStartup_Base_C.SetFocusToMenu
	 */
	struct UUI_LegalStartup_Base_C_SetFocusToMenu_Params
	{	};

	/**
	 * Function UI_LegalStartup_Base.UI_LegalStartup_Base_C.UpdateSkipImage
	 */
	struct UUI_LegalStartup_Base_C_UpdateSkipImage_Params
	{
	public:
		bool                                                       ValidImage;                                              // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_W9K3[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_LegalStartup_Base.UI_LegalStartup_Base_C.Update Skip
	 */
	struct UUI_LegalStartup_Base_C_Update_Skip_Params
	{
	public:
		bool                                                       DidSkip;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_NEQD[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_LegalStartup_Base.UI_LegalStartup_Base_C.CleanupScreens
	 */
	struct UUI_LegalStartup_Base_C_CleanupScreens_Params
	{	};

	/**
	 * Function UI_LegalStartup_Base.UI_LegalStartup_Base_C.UpdateScreens
	 */
	struct UUI_LegalStartup_Base_C_UpdateScreens_Params
	{
	public:
		float                                                      dT;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_LegalStartup_Base.UI_LegalStartup_Base_C.CreateScreens
	 */
	struct UUI_LegalStartup_Base_C_CreateScreens_Params
	{	};

	/**
	 * Function UI_LegalStartup_Base.UI_LegalStartup_Base_C.Construct
	 */
	struct UUI_LegalStartup_Base_C_Construct_Params
	{	};

	/**
	 * Function UI_LegalStartup_Base.UI_LegalStartup_Base_C.Tick
	 */
	struct UUI_LegalStartup_Base_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_LegalStartup_Base.UI_LegalStartup_Base_C.SetBackgroundColor
	 */
	struct UUI_LegalStartup_Base_C_SetBackgroundColor_Params
	{
	public:
		struct FSlateColor                                         TintColor;                                               // 0x0000(0x0028)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function UI_LegalStartup_Base.UI_LegalStartup_Base_C.BndEvt__SkipButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UUI_LegalStartup_Base_C_BndEvt__SkipButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_LegalStartup_Base.UI_LegalStartup_Base_C.ExecuteUbergraph_UI_LegalStartup_Base
	 */
	struct UUI_LegalStartup_Base_C_ExecuteUbergraph_UI_LegalStartup_Base_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
