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
	 * Function UI_ConfirmationDialog_Controller.UI_ConfirmationDialog_Controller_C.ForceDialogClose
	 */
	struct UUI_ConfirmationDialog_Controller_C_ForceDialogClose_Params
	{	};

	/**
	 * Function UI_ConfirmationDialog_Controller.UI_ConfirmationDialog_Controller_C.ForceDialogCancel
	 */
	struct UUI_ConfirmationDialog_Controller_C_ForceDialogCancel_Params
	{	};

	/**
	 * Function UI_ConfirmationDialog_Controller.UI_ConfirmationDialog_Controller_C.OnSelectionPicked
	 */
	struct UUI_ConfirmationDialog_Controller_C_OnSelectionPicked_Params
	{
	public:
		bool                                                       Confirmed;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       WasForced;                                               // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_ConfirmationDialog_Controller.UI_ConfirmationDialog_Controller_C.PreConstruct
	 */
	struct UUI_ConfirmationDialog_Controller_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_ConfirmationDialog_Controller.UI_ConfirmationDialog_Controller_C.Construct
	 */
	struct UUI_ConfirmationDialog_Controller_C_Construct_Params
	{	};

	/**
	 * Function UI_ConfirmationDialog_Controller.UI_ConfirmationDialog_Controller_C.Tick
	 */
	struct UUI_ConfirmationDialog_Controller_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_ConfirmationDialog_Controller.UI_ConfirmationDialog_Controller_C.ExecuteUbergraph_UI_ConfirmationDialog_Controller
	 */
	struct UUI_ConfirmationDialog_Controller_C_ExecuteUbergraph_UI_ConfirmationDialog_Controller_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
