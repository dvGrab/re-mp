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
	 * Function UI_MainMenu.UI_MainMenu_C.GetLanguageTab
	 */
	struct UUI_MainMenu_C_GetLanguageTab_Params
	{
	public:
		class ULanguageOptions_C*                                  OutLanguageTab;                                          // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    IndexInWidgetSelector;                                   // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_MainMenu.UI_MainMenu_C.GetAccountPickerButton
	 */
	struct UUI_MainMenu_C_GetAccountPickerButton_Params
	{
	public:
		class UUI_DesignTimeUserWidget*                            AccountPickerButtonWidget;                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_MainMenu.UI_MainMenu_C.CustomFunctionWithBoolReturn
	 */
	struct UUI_MainMenu_C_CustomFunctionWithBoolReturn_Params
	{
	public:
		class FString                                              FunctionString;                                          // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		bool                                                       Handled;                                                 // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0011(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_MainMenu.UI_MainMenu_C.GetLoginInfo
	 */
	struct UUI_MainMenu_C_GetLoginInfo_Params
	{
	public:
		class UUI_DesignTimeUserWidget*                            LoginInfoWidget;                                         // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_MainMenu.UI_MainMenu_C.GetSocialClubTab
	 */
	struct UUI_MainMenu_C_GetSocialClubTab_Params
	{
	public:
		class UUI_SocialClub_C*                                    OutSocialClubTab;                                        // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    IndexInWidgetSelector;                                   // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_MainMenu.UI_MainMenu_C.StartupChecks
	 */
	struct UUI_MainMenu_C_StartupChecks_Params
	{	};

	/**
	 * Function UI_MainMenu.UI_MainMenu_C.StartLegalScreens
	 */
	struct UUI_MainMenu_C_StartLegalScreens_Params
	{	};

	/**
	 * Function UI_MainMenu.UI_MainMenu_C.Password
	 */
	struct UUI_MainMenu_C_Password_Params
	{
	public:
		bool                                                       OnIncorrect_Pass;                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_E7FV[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_MainMenu.UI_MainMenu_C.GetConfirmOptionHelpButton
	 */
	struct UUI_MainMenu_C_GetConfirmOptionHelpButton_Params
	{
	public:
		class UWidget*                                             ConfirmHelpObject;                                       // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_MainMenu.UI_MainMenu_C.ShowConfirmChangesHelpText
	 */
	struct UUI_MainMenu_C_ShowConfirmChangesHelpText_Params
	{
	public:
		bool                                                       ShouldShow;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_MainMenu.UI_MainMenu_C.GetVersionNumber
	 */
	struct UUI_MainMenu_C_GetVersionNumber_Params
	{
	public:
		class UWidget*                                             VersionTextBox;                                          // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_MainMenu.UI_MainMenu_C.GetBackgroundContainer
	 */
	struct UUI_MainMenu_C_GetBackgroundContainer_Params
	{
	public:
		class UCanvasPanel*                                        CanvasPanel;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_MainMenu.UI_MainMenu_C.GetHolderCanvas
	 */
	struct UUI_MainMenu_C_GetHolderCanvas_Params
	{
	public:
		class UCanvasPanel*                                        Canvas;                                                  // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_MainMenu.UI_MainMenu_C.UseAltText
	 */
	struct UUI_MainMenu_C_UseAltText_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ShouldUse;                                               // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_B2KW[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_MainMenu.UI_MainMenu_C.GetSavesTab
	 */
	struct UUI_MainMenu_C_GetSavesTab_Params
	{
	public:
		class UUI_OptionsMenuTab_Game_C*                           OutSavesTab;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    IndexInWidgetSelector;                                   // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_MainMenu.UI_MainMenu_C.SetupLayout
	 */
	struct UUI_MainMenu_C_SetupLayout_Params
	{	};

	/**
	 * Function UI_MainMenu.UI_MainMenu_C.Setup Misc
	 */
	struct UUI_MainMenu_C_Setup_Misc_Params
	{	};

	/**
	 * Function UI_MainMenu.UI_MainMenu_C.OnSynchronizeProperties
	 */
	struct UUI_MainMenu_C_OnSynchronizeProperties_Params
	{	};

	/**
	 * Function UI_MainMenu.UI_MainMenu_C.SetTemplate
	 */
	struct UUI_MainMenu_C_SetTemplate_Params
	{
	public:
		class UGTAMainMenuUITemplate*                              InTemplate;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IncludeSaveTab;                                          // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_MainMenu.UI_MainMenu_C.Tick
	 */
	struct UUI_MainMenu_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_MainMenu.UI_MainMenu_C.Construct
	 */
	struct UUI_MainMenu_C_Construct_Params
	{	};

	/**
	 * Function UI_MainMenu.UI_MainMenu_C.OnPass
	 */
	struct UUI_MainMenu_C_OnPass_Params
	{
	public:
		class FString                                              OutPass;                                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_MainMenu.UI_MainMenu_C.Destruct
	 */
	struct UUI_MainMenu_C_Destruct_Params
	{	};

	/**
	 * Function UI_MainMenu.UI_MainMenu_C.NoLegal
	 */
	struct UUI_MainMenu_C_NoLegal_Params
	{	};

	/**
	 * Function UI_MainMenu.UI_MainMenu_C.CustomFunctionFromString
	 */
	struct UUI_MainMenu_C_CustomFunctionFromString_Params
	{
	public:
		class FString                                              FunctionString;                                          // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_MainMenu.UI_MainMenu_C.ExecuteUbergraph_UI_MainMenu
	 */
	struct UUI_MainMenu_C_ExecuteUbergraph_UI_MainMenu_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_I136[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
