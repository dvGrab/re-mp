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
	 * Function UI_OptionsMenuTab_Game.UI_OptionsMenuTab_Game_C.SetToTab
	 */
	struct UUI_OptionsMenuTab_Game_C_SetToTab_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ForceNoFocusChange;                                      // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ForceNoSound;                                            // 0x0005(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_OptionsMenuTab_Game.UI_OptionsMenuTab_Game_C.SetupForSaveGames
	 */
	struct UUI_OptionsMenuTab_Game_C_SetupForSaveGames_Params
	{	};

	/**
	 * Function UI_OptionsMenuTab_Game.UI_OptionsMenuTab_Game_C.RefreshSaveTabState
	 */
	struct UUI_OptionsMenuTab_Game_C_RefreshSaveTabState_Params
	{	};

	/**
	 * Function UI_OptionsMenuTab_Game.UI_OptionsMenuTab_Game_C.UpdateSaveTabState
	 */
	struct UUI_OptionsMenuTab_Game_C_UpdateSaveTabState_Params
	{
	public:
		EGTASaveTabState                                           NewSaveTabState;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_HDZP[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_OptionsMenuTab_Game.UI_OptionsMenuTab_Game_C.NextTab
	 */
	struct UUI_OptionsMenuTab_Game_C_NextTab_Params
	{	};

	/**
	 * Function UI_OptionsMenuTab_Game.UI_OptionsMenuTab_Game_C.PrevTab
	 */
	struct UUI_OptionsMenuTab_Game_C_PrevTab_Params
	{	};

	/**
	 * Function UI_OptionsMenuTab_Game.UI_OptionsMenuTab_Game_C.SetToSaveTabState
	 */
	struct UUI_OptionsMenuTab_Game_C_SetToSaveTabState_Params
	{
	public:
		EGTASaveTabState                                           State;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_1LVX[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_OptionsMenuTab_Game.UI_OptionsMenuTab_Game_C.RefreshSaves
	 */
	struct UUI_OptionsMenuTab_Game_C_RefreshSaves_Params
	{	};

	/**
	 * Function UI_OptionsMenuTab_Game.UI_OptionsMenuTab_Game_C.InteractedButton
	 */
	struct UUI_OptionsMenuTab_Game_C_InteractedButton_Params
	{
	public:
		EButtonStateEnum                                           Interact_Type;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_CU0R[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    Bound_Value;                                             // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_OptionsMenuTab_Game.UI_OptionsMenuTab_Game_C.Construct
	 */
	struct UUI_OptionsMenuTab_Game_C_Construct_Params
	{	};

	/**
	 * Function UI_OptionsMenuTab_Game.UI_OptionsMenuTab_Game_C.Tick
	 */
	struct UUI_OptionsMenuTab_Game_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_OptionsMenuTab_Game.UI_OptionsMenuTab_Game_C.ExecuteUbergraph_UI_OptionsMenuTab_Game
	 */
	struct UUI_OptionsMenuTab_Game_C_ExecuteUbergraph_UI_OptionsMenuTab_Game_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
