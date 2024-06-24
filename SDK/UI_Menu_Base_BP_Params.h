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
	 * Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.GetLanguageTab
	 */
	struct UUI_Menu_Base_BP_C_GetLanguageTab_Params
	{
	public:
		class ULanguageOptions_C*                                  OutLanguageTab;                                          // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    IndexInWidgetSelector;                                   // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.ForceOpenMap
	 */
	struct UUI_Menu_Base_BP_C_ForceOpenMap_Params
	{	};

	/**
	 * Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.IsPauseMenuMapOpen
	 */
	struct UUI_Menu_Base_BP_C_IsPauseMenuMapOpen_Params
	{
	public:
		bool                                                       IsOpen;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.ShowAccountPickerButton
	 */
	struct UUI_Menu_Base_BP_C_ShowAccountPickerButton_Params
	{
	public:
		bool                                                       ShouldShow;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.GetAccountPickerButton
	 */
	struct UUI_Menu_Base_BP_C_GetAccountPickerButton_Params
	{
	public:
		class UUI_DesignTimeUserWidget*                            AccountPickerButtonWidget;                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.HasControllerDisconnectDialog
	 */
	struct UUI_Menu_Base_BP_C_HasControllerDisconnectDialog_Params
	{
	public:
		bool                                                       Return;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_9DCU[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UWidget*                                             Widget;                                                  // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.ControllerDisconnectCallback
	 */
	struct UUI_Menu_Base_BP_C_ControllerDisconnectCallback_Params
	{
	public:
		bool                                                       DidAccept;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_EMXC[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.CreateNewControllerDialog
	 */
	struct UUI_Menu_Base_BP_C_CreateNewControllerDialog_Params
	{
	public:
		class FText                                                DialogText;                                              // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.CustomFunctionWithBoolReturn
	 */
	struct UUI_Menu_Base_BP_C_CustomFunctionWithBoolReturn_Params
	{
	public:
		class FString                                              FunctionString;                                          // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		bool                                                       Handled;                                                 // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0011(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.StopAllSamples
	 */
	struct UUI_Menu_Base_BP_C_StopAllSamples_Params
	{	};

	/**
	 * Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.OnKeyDown
	 */
	struct UUI_Menu_Base_BP_C_OnKeyDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.RefreshUserInfo
	 */
	struct UUI_Menu_Base_BP_C_RefreshUserInfo_Params
	{	};

	/**
	 * Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.GetLoginInfo
	 */
	struct UUI_Menu_Base_BP_C_GetLoginInfo_Params
	{
	public:
		class UUI_DesignTimeUserWidget*                            LoginInfoWidget;                                         // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.UpdateUserInfo
	 */
	struct UUI_Menu_Base_BP_C_UpdateUserInfo_Params
	{
	public:
		class FString                                              UserName;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class UTexture2D*                                          UserImage;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.SetupHelpButtons
	 */
	struct UUI_Menu_Base_BP_C_SetupHelpButtons_Params
	{	};

	/**
	 * Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.StartSFXSample
	 */
	struct UUI_Menu_Base_BP_C_StartSFXSample_Params
	{	};

	/**
	 * Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.StartDialogSample
	 */
	struct UUI_Menu_Base_BP_C_StartDialogSample_Params
	{	};

	/**
	 * Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.StopSFXSample
	 */
	struct UUI_Menu_Base_BP_C_StopSFXSample_Params
	{	};

	/**
	 * Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.StopDialogSample
	 */
	struct UUI_Menu_Base_BP_C_StopDialogSample_Params
	{	};

	/**
	 * Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.StartupSound
	 */
	struct UUI_Menu_Base_BP_C_StartupSound_Params
	{	};

	/**
	 * Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.CloseExistingConfirmation
	 */
	struct UUI_Menu_Base_BP_C_CloseExistingConfirmation_Params
	{	};

	/**
	 * Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.CreateNewOkDialog
	 */
	struct UUI_Menu_Base_BP_C_CreateNewOkDialog_Params
	{
	public:
		class FText                                                DialogText;                                              // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.IsWidgetBlockingInput
	 */
	struct UUI_Menu_Base_BP_C_IsWidgetBlockingInput_Params
	{
	public:
		bool                                                       isBeingBlocked;                                          // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.SetupSocialClubScreen
	 */
	struct UUI_Menu_Base_BP_C_SetupSocialClubScreen_Params
	{
	public:
		class UUI_SocialClub_C*                                    SocialClubUI;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.OnSocialClubSignUpConfirmation
	 */
	struct UUI_Menu_Base_BP_C_OnSocialClubSignUpConfirmation_Params
	{
	public:
		bool                                                       DidConfirm;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_BQ6G[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.OnSocialClubSignInConfirmation
	 */
	struct UUI_Menu_Base_BP_C_OnSocialClubSignInConfirmation_Params
	{
	public:
		bool                                                       DidConfirm;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.CreateSocialClubSignUpConfirmation
	 */
	struct UUI_Menu_Base_BP_C_CreateSocialClubSignUpConfirmation_Params
	{
	public:
		class UUI_TabbedLayout_C*                                  FromLayout;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.CreateSocialClubSignInConfirmation
	 */
	struct UUI_Menu_Base_BP_C_CreateSocialClubSignInConfirmation_Params
	{
	public:
		class UUI_TabbedLayout_C*                                  FromLayout;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.GetSocialClubTab
	 */
	struct UUI_Menu_Base_BP_C_GetSocialClubTab_Params
	{
	public:
		class UUI_SocialClub_C*                                    OutSocialClubTab;                                        // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    IndexInWidgetSelector;                                   // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.OnSocialClubUnlinkConfirmation
	 */
	struct UUI_Menu_Base_BP_C_OnSocialClubUnlinkConfirmation_Params
	{
	public:
		bool                                                       DidConfirm;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_RGWR[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.CreateSocialClubUnlinkConfirmation
	 */
	struct UUI_Menu_Base_BP_C_CreateSocialClubUnlinkConfirmation_Params
	{
	public:
		class UUI_TabbedLayout_C*                                  FromLayout;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.SetupGenericTabbedLayout
	 */
	struct UUI_Menu_Base_BP_C_SetupGenericTabbedLayout_Params
	{
	public:
		class UUI_TabbedLayout_C*                                  TabbedLayout;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.IsLeftButtonAllowed
	 */
	struct UUI_Menu_Base_BP_C_IsLeftButtonAllowed_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Allowed;                                                 // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.IsPlatformAllowedExit
	 */
	struct UUI_Menu_Base_BP_C_IsPlatformAllowedExit_Params
	{
	public:
		bool                                                       CanExit;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_7TKR[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.CreateAndPlayRadioStation
	 */
	struct UUI_Menu_Base_BP_C_CreateAndPlayRadioStation_Params
	{
	public:
		class USoundCue*                                           Sound;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.UpdateSampleSounds
	 */
	struct UUI_Menu_Base_BP_C_UpdateSampleSounds_Params
	{	};

	/**
	 * Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.Start Radio
	 */
	struct UUI_Menu_Base_BP_C_Start_Radio_Params
	{
	public:
		int32_t                                                    Station;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_CUEJ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.StopRadio
	 */
	struct UUI_Menu_Base_BP_C_StopRadio_Params
	{	};

	/**
	 * Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.GetConfirmOptionHelpButton
	 */
	struct UUI_Menu_Base_BP_C_GetConfirmOptionHelpButton_Params
	{
	public:
		class UWidget*                                             ConfirmHelpObject;                                       // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.ExtraButtonChecks
	 */
	struct UUI_Menu_Base_BP_C_ExtraButtonChecks_Params
	{	};

	/**
	 * Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.ShowConfirmChangesHelpText
	 */
	struct UUI_Menu_Base_BP_C_ShowConfirmChangesHelpText_Params
	{
	public:
		bool                                                       ShouldShow;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.RefreshAllOptions
	 */
	struct UUI_Menu_Base_BP_C_RefreshAllOptions_Params
	{
	public:
		bool                                                       KeepPreviousOption;                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_O3GP[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.UpdateTick
	 */
	struct UUI_Menu_Base_BP_C_UpdateTick_Params
	{
	public:
		float                                                      dT;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.UpdateOptions
	 */
	struct UUI_Menu_Base_BP_C_UpdateOptions_Params
	{	};

	/**
	 * Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.CheckForMenuTransition
	 */
	struct UUI_Menu_Base_BP_C_CheckForMenuTransition_Params
	{
	public:
		bool                                                       DidTransitionTakeFocus;                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_47Y8[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.SetTransitionFocus
	 */
	struct UUI_Menu_Base_BP_C_SetTransitionFocus_Params
	{
	public:
		bool                                                       GiveTransitionFocus;                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.HandleTransition
	 */
	struct UUI_Menu_Base_BP_C_HandleTransition_Params
	{	};

	/**
	 * Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.StartDelayedExit
	 */
	struct UUI_Menu_Base_BP_C_StartDelayedExit_Params
	{	};

	/**
	 * Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.DoLaunchGameFromDelay
	 */
	struct UUI_Menu_Base_BP_C_DoLaunchGameFromDelay_Params
	{
	public:
		class UUITransition*                                       CurrentTransition;                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       success;                                                 // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.IsInTransition
	 */
	struct UUI_Menu_Base_BP_C_IsInTransition_Params
	{
	public:
		bool                                                       IsInTransition;                                          // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.Update Delay Fades
	 */
	struct UUI_Menu_Base_BP_C_Update_Delay_Fades_Params
	{
	public:
		float                                                      dT;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.RefreshGraphicsTab
	 */
	struct UUI_Menu_Base_BP_C_RefreshGraphicsTab_Params
	{	};

	/**
	 * Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.DelayedStartGame
	 */
	struct UUI_Menu_Base_BP_C_DelayedStartGame_Params
	{
	public:
		int32_t                                                    ForSaveSlot;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_SPPS[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.CallSelectedOnActiveTab
	 */
	struct UUI_Menu_Base_BP_C_CallSelectedOnActiveTab_Params
	{	};

	/**
	 * Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.SetActiveWidget
	 */
	struct UUI_Menu_Base_BP_C_SetActiveWidget_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.LanguageUpdatedTasks
	 */
	struct UUI_Menu_Base_BP_C_LanguageUpdatedTasks_Params
	{	};

	/**
	 * Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.HandleMapBack
	 */
	struct UUI_Menu_Base_BP_C_HandleMapBack_Params
	{
	public:
		bool                                                       DidHandle;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.EndMapInteract
	 */
	struct UUI_Menu_Base_BP_C_EndMapInteract_Params
	{	};

	/**
	 * Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.StartMapInteract
	 */
	struct UUI_Menu_Base_BP_C_StartMapInteract_Params
	{	};

	/**
	 * Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.GetLeftButtonOverrideImage
	 */
	struct UUI_Menu_Base_BP_C_GetLeftButtonOverrideImage_Params
	{
	public:
		class UGTAMainMenuUITemplate*                              Template;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Index;                                                   // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_CRE5[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UTexture2D*                                          Output;                                                  // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.SetKeyListeningDialog
	 */
	struct UUI_Menu_Base_BP_C_SetKeyListeningDialog_Params
	{
	public:
		bool                                                       bTurnOn;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_K4A3[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UUserWidget*                                         ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.EndKeyListeningDialog
	 */
	struct UUI_Menu_Base_BP_C_EndKeyListeningDialog_Params
	{	};

	/**
	 * Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.StartKeyListeningDialog
	 */
	struct UUI_Menu_Base_BP_C_StartKeyListeningDialog_Params
	{
	public:
		class UUserWidget*                                         Output_Dialog;                                           // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.MiscSetup
	 */
	struct UUI_Menu_Base_BP_C_MiscSetup_Params
	{	};

	/**
	 * Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.SetupTabsAndButtons
	 */
	struct UUI_Menu_Base_BP_C_SetupTabsAndButtons_Params
	{	};

	/**
	 * Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.SpecialTabStartupCode
	 */
	struct UUI_Menu_Base_BP_C_SpecialTabStartupCode_Params
	{
	public:
		class UObject*                                             Tab;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.Autosave dialog callback
	 */
	struct UUI_Menu_Base_BP_C_Autosave_dialog_callback_Params
	{
	public:
		bool                                                       DidAccept;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_VYGS[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.OnMissionRetryConfirmation
	 */
	struct UUI_Menu_Base_BP_C_OnMissionRetryConfirmation_Params
	{
	public:
		bool                                                       DidConfirm;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.CreateMissionRetryConfirmation
	 */
	struct UUI_Menu_Base_BP_C_CreateMissionRetryConfirmation_Params
	{	};

	/**
	 * Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.OnSaveCompleteDialogClosed
	 */
	struct UUI_Menu_Base_BP_C_OnSaveCompleteDialogClosed_Params
	{
	public:
		bool                                                       DidConfirm;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.CreateSaveCompleteDialog
	 */
	struct UUI_Menu_Base_BP_C_CreateSaveCompleteDialog_Params
	{
	public:
		class UUI_TabbedLayout_C*                                  FromLayout;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       WasSaveConfirmed;                                        // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.IsResumeSelected
	 */
	struct UUI_Menu_Base_BP_C_IsResumeSelected_Params
	{	};

	/**
	 * Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.GetResumeButton
	 */
	struct UUI_Menu_Base_BP_C_GetResumeButton_Params
	{
	public:
		class UUI_Button_Base_C*                                   AsUI_Button_Base;                                        // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.OnResumePageStart
	 */
	struct UUI_Menu_Base_BP_C_OnResumePageStart_Params
	{	};

	/**
	 * Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.SetSlotClasses
	 */
	struct UUI_Menu_Base_BP_C_SetSlotClasses_Params
	{
	public:
		class UUI_OptionsMenuTab_C*                                OptionsMenu;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.Set to SaveTab
	 */
	struct UUI_Menu_Base_BP_C_Set_to_SaveTab_Params
	{
	public:
		EGTASaveTabState                                           toState;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_0A4P[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    IndexInWidgetSelector;                                   // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.DoTabSpecial
	 */
	struct UUI_Menu_Base_BP_C_DoTabSpecial_Params
	{
	public:
		int32_t                                                    TabNum;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.MoveToTabNum
	 */
	struct UUI_Menu_Base_BP_C_MoveToTabNum_Params
	{
	public:
		int32_t                                                    ToTab;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.Alternate Controller Check
	 */
	struct UUI_Menu_Base_BP_C_Alternate_Controller_Check_Params
	{
	public:
		bool                                                       DidJustChange;                                           // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_TTQB[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.IsPauseMenu
	 */
	struct UUI_Menu_Base_BP_C_IsPauseMenu_Params
	{
	public:
		bool                                                       IsPauseMenu;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.HasConfirmationDialog
	 */
	struct UUI_Menu_Base_BP_C_HasConfirmationDialog_Params
	{
	public:
		bool                                                       Return;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_PLA7[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UWidget*                                             Widget;                                                  // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.BumperPressed
	 */
	struct UUI_Menu_Base_BP_C_BumperPressed_Params
	{
	public:
		bool                                                       WasLeftButton;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.GetNavigationButtonsForEntry
	 */
	struct UUI_Menu_Base_BP_C_GetNavigationButtonsForEntry_Params
	{
	public:
		TArray<class UWidget*>                                     Array;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
		int32_t                                                    EntryNum;                                                // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_RDH2[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UUI_Button_Base_C*                                   Up;                                                      // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UUI_Button_Base_C*                                   Down;                                                    // 0x0020(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.SetupMainButtonsNavigation
	 */
	struct UUI_Menu_Base_BP_C_SetupMainButtonsNavigation_Params
	{	};

	/**
	 * Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.MoveFocusToNewlySelectedTab
	 */
	struct UUI_Menu_Base_BP_C_MoveFocusToNewlySelectedTab_Params
	{
	public:
		bool                                                       DidFocus;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_W4ZT[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.ResetSelectedMainButtons
	 */
	struct UUI_Menu_Base_BP_C_ResetSelectedMainButtons_Params
	{	};

	/**
	 * Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.UpdateMainButtonsForController
	 */
	struct UUI_Menu_Base_BP_C_UpdateMainButtonsForController_Params
	{	};

	/**
	 * Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.IsUsingController
	 */
	struct UUI_Menu_Base_BP_C_IsUsingController_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.GetCurrentInputType
	 */
	struct UUI_Menu_Base_BP_C_GetCurrentInputType_Params
	{
	public:
		EGTAInputType                                              ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_L4DL[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.DefaultBackFunctionality
	 */
	struct UUI_Menu_Base_BP_C_DefaultBackFunctionality_Params
	{
	public:
		bool                                                       DidExit;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.BackPressed
	 */
	struct UUI_Menu_Base_BP_C_BackPressed_Params
	{	};

	/**
	 * Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.UpdateInputEvents
	 */
	struct UUI_Menu_Base_BP_C_UpdateInputEvents_Params
	{
	public:
		float                                                      dT;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.SetUserFocusToSelectedWidget
	 */
	struct UUI_Menu_Base_BP_C_SetUserFocusToSelectedWidget_Params
	{
	public:
		bool                                                       CanTabTakeFocus;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_U7CT[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.OnExitGameConfirmation
	 */
	struct UUI_Menu_Base_BP_C_OnExitGameConfirmation_Params
	{
	public:
		bool                                                       DidConfirm;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.CreateExitConfirmation
	 */
	struct UUI_Menu_Base_BP_C_CreateExitConfirmation_Params
	{	};

	/**
	 * Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.IsDefaultSlotStyle
	 */
	struct UUI_Menu_Base_BP_C_IsDefaultSlotStyle_Params
	{
	public:
		struct FScrollListStyle                                    InStyle;                                                 // 0x0000(0x0158)  (BlueprintVisible, BlueprintReadOnly, Parm)
		bool                                                       IsDefault;                                               // 0x0158(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_FXM7[0x7];                                   // 0x0159(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.GetVersionNumber
	 */
	struct UUI_Menu_Base_BP_C_GetVersionNumber_Params
	{
	public:
		class UWidget*                                             VersionTextBox;                                          // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.SetMainAnchorsAndOffsets
	 */
	struct UUI_Menu_Base_BP_C_SetMainAnchorsAndOffsets_Params
	{	};

	/**
	 * Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.GetBackgroundContainer
	 */
	struct UUI_Menu_Base_BP_C_GetBackgroundContainer_Params
	{
	public:
		class UCanvasPanel*                                        CanvasPanel;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.GetHolderCanvas
	 */
	struct UUI_Menu_Base_BP_C_GetHolderCanvas_Params
	{
	public:
		class UCanvasPanel*                                        Canvas;                                                  // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.Set BackgroundAndIcon
	 */
	struct UUI_Menu_Base_BP_C_Set_BackgroundAndIcon_Params
	{	};

	/**
	 * Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.IsDefaultMargin
	 */
	struct UUI_Menu_Base_BP_C_IsDefaultMargin_Params
	{
	public:
		struct FMargin                                             InAnchor;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       IsZero;                                                  // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.UpdateFocusWidget
	 */
	struct UUI_Menu_Base_BP_C_UpdateFocusWidget_Params
	{	};

	/**
	 * Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.SetInitialUserFocus
	 */
	struct UUI_Menu_Base_BP_C_SetInitialUserFocus_Params
	{	};

	/**
	 * Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.UseAltText
	 */
	struct UUI_Menu_Base_BP_C_UseAltText_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ShouldUse;                                               // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.UpdateButtonsOnInteract
	 */
	struct UUI_Menu_Base_BP_C_UpdateButtonsOnInteract_Params
	{
	public:
		EButtonStateEnum                                           InteractButton;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_P4CN[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    BoundValue;                                              // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.SetCurrentSaveTabState
	 */
	struct UUI_Menu_Base_BP_C_SetCurrentSaveTabState_Params
	{
	public:
		EGTASaveTabState                                           NewSaveTabState;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_TI0V[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UUI_TabbedLayout_C*                                  FromTabbedLayout;                                        // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.GetSavesTab
	 */
	struct UUI_Menu_Base_BP_C_GetSavesTab_Params
	{
	public:
		class UUI_OptionsMenuTab_Game_C*                           OutSavesTab;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    IndexInWidgetSelector;                                   // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.InteractedSaveStateButtonPressed
	 */
	struct UUI_Menu_Base_BP_C_InteractedSaveStateButtonPressed_Params
	{
	public:
		int32_t                                                    SaveNumber;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_BNNA[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UUI_TabbedLayout_C*                                  FromTabbedLayout;                                        // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.Refresh Saves
	 */
	struct UUI_Menu_Base_BP_C_Refresh_Saves_Params
	{	};

	/**
	 * Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.OnDeleteSave
	 */
	struct UUI_Menu_Base_BP_C_OnDeleteSave_Params
	{
	public:
		bool                                                       success;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.OnLoadSave
	 */
	struct UUI_Menu_Base_BP_C_OnLoadSave_Params
	{
	public:
		bool                                                       success;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.DidConfirmSaveState
	 */
	struct UUI_Menu_Base_BP_C_DidConfirmSaveState_Params
	{
	public:
		bool                                                       DidAccept;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_8PR4[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.OnNewGameConfirmation
	 */
	struct UUI_Menu_Base_BP_C_OnNewGameConfirmation_Params
	{
	public:
		bool                                                       DidConfirm;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_Z2ZR[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.CreateNewGameConfirmation
	 */
	struct UUI_Menu_Base_BP_C_CreateNewGameConfirmation_Params
	{
	public:
		class UUI_TabbedLayout_C*                                  FromLayout;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.CreateSaveConfirmation
	 */
	struct UUI_Menu_Base_BP_C_CreateSaveConfirmation_Params
	{
	public:
		class UUI_TabbedLayout_C*                                  FromLayout;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.SetupOptionsMenuTab
	 */
	struct UUI_Menu_Base_BP_C_SetupOptionsMenuTab_Params
	{
	public:
		class UUI_OptionsMenuTab_C*                                options_menu;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.AddEmptyTab
	 */
	struct UUI_Menu_Base_BP_C_AddEmptyTab_Params
	{	};

	/**
	 * Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.CreateMainBaseButtonFromClass
	 */
	struct UUI_Menu_Base_BP_C_CreateMainBaseButtonFromClass_Params
	{
	public:
		class UClass*                                              ButtonClass;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                ButtonText;                                              // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		int32_t                                                    ValueToBind;                                             // 0x0020(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_9I4S[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UTexture2D*                                          SelectedImageOverride;                                   // 0x0028(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UUI_Button_Base_C*                                   OutButton;                                               // 0x0030(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.InteractedButton
	 */
	struct UUI_Menu_Base_BP_C_InteractedButton_Params
	{
	public:
		unsigned char                                              InteractionType;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_H3CY[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    BoundValue;                                              // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.SetupMainTabSelector
	 */
	struct UUI_Menu_Base_BP_C_SetupMainTabSelector_Params
	{	};

	/**
	 * Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.InitVariables
	 */
	struct UUI_Menu_Base_BP_C_InitVariables_Params
	{
	public:
		class UPanelWidget*                                        MenuButtons;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UWidgetSwitcher*                                     Selector;                                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UWidget*                                             Logo;                                                    // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.SetupSaveMenu
	 */
	struct UUI_Menu_Base_BP_C_SetupSaveMenu_Params
	{
	public:
		class UUI_OptionsMenuTab_C*                                SaveMenu;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.SetLeftButtons
	 */
	struct UUI_Menu_Base_BP_C_SetLeftButtons_Params
	{	};

	/**
	 * Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.IsDefaultAnchor
	 */
	struct UUI_Menu_Base_BP_C_IsDefaultAnchor_Params
	{
	public:
		struct FAnchors                                            InAnchor;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		bool                                                       IsZero;                                                  // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_Q7GR[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.Tick
	 */
	struct UUI_Menu_Base_BP_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.SetTemplate
	 */
	struct UUI_Menu_Base_BP_C_SetTemplate_Params
	{
	public:
		class UGTAMainMenuUITemplate*                              InTemplate;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IncludeSaveTab;                                          // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.OnSynchronizeProperties
	 */
	struct UUI_Menu_Base_BP_C_OnSynchronizeProperties_Params
	{	};

	/**
	 * Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.SetVersionNumber
	 */
	struct UUI_Menu_Base_BP_C_SetVersionNumber_Params
	{
	public:
		class FString                                              VersionNum;                                              // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.SetMenuToSpecificGameTab
	 */
	struct UUI_Menu_Base_BP_C_SetMenuToSpecificGameTab_Params
	{
	public:
		EGTASaveTabState                                           toState;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.DelayedSaveGameConfirm
	 */
	struct UUI_Menu_Base_BP_C_DelayedSaveGameConfirm_Params
	{
	public:
		bool                                                       WasSaveConfirmed;                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.SetMenuToMissionRetry
	 */
	struct UUI_Menu_Base_BP_C_SetMenuToMissionRetry_Params
	{	};

	/**
	 * Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.GrabFocus
	 */
	struct UUI_Menu_Base_BP_C_GrabFocus_Params
	{	};

	/**
	 * Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.Construct
	 */
	struct UUI_Menu_Base_BP_C_Construct_Params
	{	};

	/**
	 * Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.Destruct
	 */
	struct UUI_Menu_Base_BP_C_Destruct_Params
	{	};

	/**
	 * Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.PeriodicScreenModeCheck
	 */
	struct UUI_Menu_Base_BP_C_PeriodicScreenModeCheck_Params
	{	};

	/**
	 * Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.CustomFunctionFromString
	 */
	struct UUI_Menu_Base_BP_C_CustomFunctionFromString_Params
	{
	public:
		class FString                                              FunctionString;                                          // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.OnConfirmOptionButton
	 */
	struct UUI_Menu_Base_BP_C_OnConfirmOptionButton_Params
	{	};

	/**
	 * Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.OnOptionConfirmationStarted
	 */
	struct UUI_Menu_Base_BP_C_OnOptionConfirmationStarted_Params
	{	};

	/**
	 * Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.EndMenuRadio
	 */
	struct UUI_Menu_Base_BP_C_EndMenuRadio_Params
	{	};

	/**
	 * Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.StartMenuRadio
	 */
	struct UUI_Menu_Base_BP_C_StartMenuRadio_Params
	{
	public:
		int32_t                                                    Station;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.CustomFunctionFromStringWithText
	 */
	struct UUI_Menu_Base_BP_C_CustomFunctionFromStringWithText_Params
	{
	public:
		class FString                                              FunctionString;                                          // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FText                                                UsableText;                                              // 0x0010(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.StartMenuDialog
	 */
	struct UUI_Menu_Base_BP_C_StartMenuDialog_Params
	{	};

	/**
	 * Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.EndMenuDialogue
	 */
	struct UUI_Menu_Base_BP_C_EndMenuDialogue_Params
	{	};

	/**
	 * Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.EndMenuSFX
	 */
	struct UUI_Menu_Base_BP_C_EndMenuSFX_Params
	{	};

	/**
	 * Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.StartMenuSFX
	 */
	struct UUI_Menu_Base_BP_C_StartMenuSFX_Params
	{	};

	/**
	 * Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.SCSignUp
	 */
	struct UUI_Menu_Base_BP_C_SCSignUp_Params
	{	};

	/**
	 * Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.SCSignIn
	 */
	struct UUI_Menu_Base_BP_C_SCSignIn_Params
	{	};

	/**
	 * Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.SCSignOut
	 */
	struct UUI_Menu_Base_BP_C_SCSignOut_Params
	{	};

	/**
	 * Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.SaveDataInSlotEvent
	 */
	struct UUI_Menu_Base_BP_C_SaveDataInSlotEvent_Params
	{
	public:
		bool                                                       success;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_TSUK[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    SlotIndex;                                               // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.DeleteDataInSlotEvent
	 */
	struct UUI_Menu_Base_BP_C_DeleteDataInSlotEvent_Params
	{
	public:
		bool                                                       success;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_KQ9O[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    SlotIndex;                                               // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.LoadDataInSlotEvent
	 */
	struct UUI_Menu_Base_BP_C_LoadDataInSlotEvent_Params
	{
	public:
		bool                                                       success;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_V2VX[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    SlotIndex;                                               // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.ExecuteUbergraph_UI_Menu_Base_BP
	 */
	struct UUI_Menu_Base_BP_C_ExecuteUbergraph_UI_Menu_Base_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
