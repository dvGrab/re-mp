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
	 * Function UI_OptionsList_Base.UI_OptionsList_Base_C.Option Pressed Callback
	 */
	struct UUI_OptionsList_Base_C_Option_Pressed_Callback_Params
	{
	public:
		class UUI_SlotButton_C*                                    PressedButton;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_OptionsList_Base.UI_OptionsList_Base_C.SetupNavigation
	 */
	struct UUI_OptionsList_Base_C_SetupNavigation_Params
	{	};

	/**
	 * Function UI_OptionsList_Base.UI_OptionsList_Base_C.OnOptionSelectionChanged
	 */
	struct UUI_OptionsList_Base_C_OnOptionSelectionChanged_Params
	{
	public:
		class FName                                                OptionName;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Selected;                                                // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       FromHover;                                               // 0x0009(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_OptionsList_Base.UI_OptionsList_Base_C.OptionChanged
	 */
	struct UUI_OptionsList_Base_C_OptionChanged_Params
	{
	public:
		class FName                                                OptionName;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_OptionsList_Base.UI_OptionsList_Base_C.DoConfirmationPostItemChange
	 */
	struct UUI_OptionsList_Base_C_DoConfirmationPostItemChange_Params
	{
	public:
		class UUI_SlotButton_C*                                    SlotToChange;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_OptionsList_Base.UI_OptionsList_Base_C.HandleBack
	 */
	struct UUI_OptionsList_Base_C_HandleBack_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_B177[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_OptionsList_Base.UI_OptionsList_Base_C.Should Refresh on Option Update
	 */
	struct UUI_OptionsList_Base_C_Should_Refresh_on_Option_Update_Params
	{
	public:
		bool                                                       RequiresOptionRefresh;                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_25TY[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FName                                                PropertyNameToSelect;                                    // 0x0004(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_OptionsList_Base.UI_OptionsList_Base_C.DoConfirmationOnItemChange
	 */
	struct UUI_OptionsList_Base_C_DoConfirmationOnItemChange_Params
	{
	public:
		class UUI_SlotButton_C*                                    SlotToChange;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_OptionsList_Base.UI_OptionsList_Base_C.IsOptionWithinBounds
	 */
	struct UUI_OptionsList_Base_C_IsOptionWithinBounds_Params
	{
	public:
		class UGameterSettings*                                    Settings;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FGTASelectionOptionSpecifier                        RequiredValue;                                           // 0x0008(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm)
		bool                                                       isWithinBounds;                                          // 0x0028(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_PDTD[0x3];                                   // 0x0029(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_OptionsList_Base.UI_OptionsList_Base_C.CheckOtherRequirements
	 */
	struct UUI_OptionsList_Base_C_CheckOtherRequirements_Params
	{
	public:
		struct FGTAOptionsItemTemplate                             Option;                                                  // 0x0000(0x0090)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class UGameterSettings*                                    Settings;                                                // 0x0090(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Available;                                               // 0x0098(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_OptionsList_Base.UI_OptionsList_Base_C.RunSlotButtonFunction
	 */
	struct UUI_OptionsList_Base_C_RunSlotButtonFunction_Params
	{
	public:
		class FName                                                FunctionName;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_OptionsList_Base.UI_OptionsList_Base_C.SlotFunctionButtonPressed
	 */
	struct UUI_OptionsList_Base_C_SlotFunctionButtonPressed_Params
	{
	public:
		unsigned char                                              InteractionType;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_BQOI[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    BoundValue;                                              // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UUI_SlotButton_C*                                    SlotButton;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_OptionsList_Base.UI_OptionsList_Base_C.AddFunctionToSlotButton
	 */
	struct UUI_OptionsList_Base_C_AddFunctionToSlotButton_Params
	{
	public:
		class UUI_SlotButton_C*                                    SlotItem;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                FunctionName;                                            // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_OptionsList_Base.UI_OptionsList_Base_C.OnRestoreDefaultsConfirmationCallback
	 */
	struct UUI_OptionsList_Base_C_OnRestoreDefaultsConfirmationCallback_Params
	{
	public:
		bool                                                       DidAccept;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_QHT7[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_OptionsList_Base.UI_OptionsList_Base_C.ResetDefaultsInteracted
	 */
	struct UUI_OptionsList_Base_C_ResetDefaultsInteracted_Params
	{
	public:
		unsigned char                                              InteractionType;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_V1SJ[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    BoundValue;                                              // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UUI_SlotButton_C*                                    SlotButton;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_OptionsList_Base.UI_OptionsList_Base_C.AddResetToDefaultButton
	 */
	struct UUI_OptionsList_Base_C_AddResetToDefaultButton_Params
	{
	public:
		class UUI_SlotButton_C*                                    NewItem;                                                 // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_OptionsList_Base.UI_OptionsList_Base_C.GetCurrentInputType_1
	 */
	struct UUI_OptionsList_Base_C_GetCurrentInputType_1_Params
	{
	public:
		int32_t                                                    OutInputFlag;                                            // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_XOOH[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_OptionsList_Base.UI_OptionsList_Base_C.IsOptionAvailableForInputType
	 */
	struct UUI_OptionsList_Base_C_IsOptionAvailableForInputType_Params
	{
	public:
		struct FGTAOptionsItemTemplate                             Option;                                                  // 0x0000(0x0090)  (BlueprintVisible, BlueprintReadOnly, Parm)
		bool                                                       Available;                                               // 0x0090(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_KVUE[0x3];                                   // 0x0091(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_OptionsList_Base.UI_OptionsList_Base_C.GetCurrentPlatform
	 */
	struct UUI_OptionsList_Base_C_GetCurrentPlatform_Params
	{
	public:
		int32_t                                                    OutPlatformFlag;                                         // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_Z4ZV[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_OptionsList_Base.UI_OptionsList_Base_C.IsOptionAvailableForPlatform
	 */
	struct UUI_OptionsList_Base_C_IsOptionAvailableForPlatform_Params
	{
	public:
		struct FGTAOptionsItemTemplate                             Option;                                                  // 0x0000(0x0090)  (BlueprintVisible, BlueprintReadOnly, Parm)
		bool                                                       Available;                                               // 0x0090(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_IXH5[0x3];                                   // 0x0091(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_OptionsList_Base.UI_OptionsList_Base_C.IsOptionAvailableForGame
	 */
	struct UUI_OptionsList_Base_C_IsOptionAvailableForGame_Params
	{
	public:
		struct FGTAOptionsItemTemplate                             Option;                                                  // 0x0000(0x0090)  (BlueprintVisible, BlueprintReadOnly, Parm)
		bool                                                       Available;                                               // 0x0090(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_690E[0x3];                                   // 0x0091(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_OptionsList_Base.UI_OptionsList_Base_C.CreateNewEntry
	 */
	struct UUI_OptionsList_Base_C_CreateNewEntry_Params
	{
	public:
		struct FGTAOptionsItemTemplate                             Option;                                                  // 0x0000(0x0090)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class UGameterSettings*                                    SettingsObject;                                          // 0x0090(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsShownBecauseDebug;                                     // 0x0098(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_8ZD8[0x7];                                   // 0x0099(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UUI_SlotButton_C*                                    NewItem;                                                 // 0x00A0(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_OptionsList_Base.UI_OptionsList_Base_C.CreateScrollingListItems
	 */
	struct UUI_OptionsList_Base_C_CreateScrollingListItems_Params
	{
	public:
		bool                                                       DEBUG_ALL_ITEMS;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_SH0C[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_OptionsList_Base.UI_OptionsList_Base_C.Tick
	 */
	struct UUI_OptionsList_Base_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_OptionsList_Base.UI_OptionsList_Base_C.ExecuteUbergraph_UI_OptionsList_Base
	 */
	struct UUI_OptionsList_Base_C_ExecuteUbergraph_UI_OptionsList_Base_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
