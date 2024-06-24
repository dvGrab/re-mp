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
	 * Function UI_SocialClub.UI_SocialClub_C.CheckLoginStatus
	 */
	struct UUI_SocialClub_C_CheckLoginStatus_Params
	{	};

	/**
	 * Function UI_SocialClub.UI_SocialClub_C.SetupHelpButtons
	 */
	struct UUI_SocialClub_C_SetupHelpButtons_Params
	{	};

	/**
	 * Function UI_SocialClub.UI_SocialClub_C.GrabAchivementFocus
	 */
	struct UUI_SocialClub_C_GrabAchivementFocus_Params
	{	};

	/**
	 * Function UI_SocialClub.UI_SocialClub_C.SetupButtons
	 */
	struct UUI_SocialClub_C_SetupButtons_Params
	{	};

	/**
	 * Function UI_SocialClub.UI_SocialClub_C.Button Checks
	 */
	struct UUI_SocialClub_C_Button_Checks_Params
	{	};

	/**
	 * Function UI_SocialClub.UI_SocialClub_C.HandleBack
	 */
	struct UUI_SocialClub_C_HandleBack_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_SocialClub.UI_SocialClub_C.SetupBackground
	 */
	struct UUI_SocialClub_C_SetupBackground_Params
	{	};

	/**
	 * Function UI_SocialClub.UI_SocialClub_C.TakeFocus
	 */
	struct UUI_SocialClub_C_TakeFocus_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_F2VE[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_SocialClub.UI_SocialClub_C.SetupScreens
	 */
	struct UUI_SocialClub_C_SetupScreens_Params
	{	};

	/**
	 * Function UI_SocialClub.UI_SocialClub_C.ShouldSkipEntry
	 */
	struct UUI_SocialClub_C_ShouldSkipEntry_Params
	{
	public:
		int32_t                                                    EntryIndex;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ShouldSkip;                                              // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_ZIWZ[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_SocialClub.UI_SocialClub_C.Construct
	 */
	struct UUI_SocialClub_C_Construct_Params
	{	};

	/**
	 * Function UI_SocialClub.UI_SocialClub_C.Tick
	 */
	struct UUI_SocialClub_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_SocialClub.UI_SocialClub_C.SetupLayout
	 */
	struct UUI_SocialClub_C_SetupLayout_Params
	{
	public:
		class UGTAMainMenuUITemplate*                              Template;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_SocialClub.UI_SocialClub_C.OpenAchivements
	 */
	struct UUI_SocialClub_C_OpenAchivements_Params
	{
	public:
		bool                                                       GrabFocus;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_SocialClub.UI_SocialClub_C.SetupSC
	 */
	struct UUI_SocialClub_C_SetupSC_Params
	{	};

	/**
	 * Function UI_SocialClub.UI_SocialClub_C.SignUp
	 */
	struct UUI_SocialClub_C_SignUp_Params
	{	};

	/**
	 * Function UI_SocialClub.UI_SocialClub_C.SignIn
	 */
	struct UUI_SocialClub_C_SignIn_Params
	{	};

	/**
	 * Function UI_SocialClub.UI_SocialClub_C.SignOut
	 */
	struct UUI_SocialClub_C_SignOut_Params
	{	};

	/**
	 * Function UI_SocialClub.UI_SocialClub_C.ExecuteUbergraph_UI_SocialClub
	 */
	struct UUI_SocialClub_C_ExecuteUbergraph_UI_SocialClub_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_T2PQ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
