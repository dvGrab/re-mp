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
	 * Function UI_SC_Achivements.UI_SC_Achivements_C.TakeFocus
	 */
	struct UUI_SC_Achivements_C_TakeFocus_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_DST5[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_SC_Achivements.UI_SC_Achivements_C.WrapNavigation
	 */
	struct UUI_SC_Achivements_C_WrapNavigation_Params
	{	};

	/**
	 * Function UI_SC_Achivements.UI_SC_Achivements_C.SetupNavigation
	 */
	struct UUI_SC_Achivements_C_SetupNavigation_Params
	{	};

	/**
	 * Function UI_SC_Achivements.UI_SC_Achivements_C.RefreshList
	 */
	struct UUI_SC_Achivements_C_RefreshList_Params
	{	};

	/**
	 * Function UI_SC_Achivements.UI_SC_Achivements_C.CheckCreation
	 */
	struct UUI_SC_Achivements_C_CheckCreation_Params
	{	};

	/**
	 * Function UI_SC_Achivements.UI_SC_Achivements_C.CreateScrollingListItems
	 */
	struct UUI_SC_Achivements_C_CreateScrollingListItems_Params
	{
	public:
		bool                                                       DEBUG_ALL_ITEMS;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_53DC[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_SC_Achivements.UI_SC_Achivements_C.PreConstruct
	 */
	struct UUI_SC_Achivements_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_SC_Achivements.UI_SC_Achivements_C.Construct
	 */
	struct UUI_SC_Achivements_C_Construct_Params
	{	};

	/**
	 * Function UI_SC_Achivements.UI_SC_Achivements_C.Tick
	 */
	struct UUI_SC_Achivements_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_SC_Achivements.UI_SC_Achivements_C.OnSynchronizeProperties
	 */
	struct UUI_SC_Achivements_C_OnSynchronizeProperties_Params
	{	};

	/**
	 * Function UI_SC_Achivements.UI_SC_Achivements_C.ExecuteUbergraph_UI_SC_Achivements
	 */
	struct UUI_SC_Achivements_C_ExecuteUbergraph_UI_SC_Achivements_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
