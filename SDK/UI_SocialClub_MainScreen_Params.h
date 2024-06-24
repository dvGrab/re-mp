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
	 * Function UI_SocialClub_MainScreen.UI_SocialClub_MainScreen_C.HandleBack
	 */
	struct UUI_SocialClub_MainScreen_C_HandleBack_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_SocialClub_MainScreen.UI_SocialClub_MainScreen_C.ShowAchievements
	 */
	struct UUI_SocialClub_MainScreen_C_ShowAchievements_Params
	{	};

	/**
	 * Function UI_SocialClub_MainScreen.UI_SocialClub_MainScreen_C.SetupLayout
	 */
	struct UUI_SocialClub_MainScreen_C_SetupLayout_Params
	{	};

	/**
	 * Function UI_SocialClub_MainScreen.UI_SocialClub_MainScreen_C.TakeFocus
	 */
	struct UUI_SocialClub_MainScreen_C_TakeFocus_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_L67U[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_SocialClub_MainScreen.UI_SocialClub_MainScreen_C.PreConstruct
	 */
	struct UUI_SocialClub_MainScreen_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_SocialClub_MainScreen.UI_SocialClub_MainScreen_C.Construct
	 */
	struct UUI_SocialClub_MainScreen_C_Construct_Params
	{	};

	/**
	 * Function UI_SocialClub_MainScreen.UI_SocialClub_MainScreen_C.Tick
	 */
	struct UUI_SocialClub_MainScreen_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_SocialClub_MainScreen.UI_SocialClub_MainScreen_C.ExecuteUbergraph_UI_SocialClub_MainScreen
	 */
	struct UUI_SocialClub_MainScreen_C_ExecuteUbergraph_UI_SocialClub_MainScreen_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_0XNR[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
