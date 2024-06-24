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
	 * Function UI_OptionsList_Game.UI_OptionsList_Game_C.CreateSaveEntryAndBind
	 */
	struct UUI_OptionsList_Game_C_CreateSaveEntryAndBind_Params
	{
	public:
		class FString                                              SaveName;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		int32_t                                                    ValueToBind;                                             // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_ATSP[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_OptionsList_Game.UI_OptionsList_Game_C.GetCurrentMenu
	 */
	struct UUI_OptionsList_Game_C_GetCurrentMenu_Params
	{
	public:
		class UUI_Menu_Base_BP_C*                                  OutMenu;                                                 // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_OptionsList_Game.UI_OptionsList_Game_C.SaveButtonPressed
	 */
	struct UUI_OptionsList_Game_C_SaveButtonPressed_Params
	{
	public:
		unsigned char                                              InteractionType;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_R1V1[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    BoundValue;                                              // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UUI_SlotButton_C*                                    SlotButton;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_OptionsList_Game.UI_OptionsList_Game_C.BindSlotButtonToSave
	 */
	struct UUI_OptionsList_Game_C_BindSlotButtonToSave_Params
	{
	public:
		class UUI_SlotButton_C*                                    Slot_Button;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    ValueToBind;                                             // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_OptionsList_Game.UI_OptionsList_Game_C.CreateNewEntry
	 */
	struct UUI_OptionsList_Game_C_CreateNewEntry_Params
	{
	public:
		struct FGTAOptionsItemTemplate                             Option;                                                  // 0x0000(0x0090)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class UGameterSettings*                                    SettingsObject;                                          // 0x0090(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsShownBecauseDebug;                                     // 0x0098(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_9VQZ[0x7];                                   // 0x0099(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UUI_SlotButton_C*                                    NewItem;                                                 // 0x00A0(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_OptionsList_Game.UI_OptionsList_Game_C.CreateScrollingListItems
	 */
	struct UUI_OptionsList_Game_C_CreateScrollingListItems_Params
	{
	public:
		bool                                                       DEBUG_ALL_ITEMS;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_6G32[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_OptionsList_Game.UI_OptionsList_Game_C.Tick
	 */
	struct UUI_OptionsList_Game_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_OptionsList_Game.UI_OptionsList_Game_C.ExecuteUbergraph_UI_OptionsList_Game
	 */
	struct UUI_OptionsList_Game_C_ExecuteUbergraph_UI_OptionsList_Game_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
