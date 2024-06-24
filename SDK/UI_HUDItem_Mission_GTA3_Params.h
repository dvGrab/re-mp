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
	 * Function UI_HUDItem_Mission_GTA3.UI_HUDItem_Mission_GTA3_C.UpdateText
	 */
	struct UUI_HUDItem_Mission_GTA3_C_UpdateText_Params
	{	};

	/**
	 * Function UI_HUDItem_Mission_GTA3.UI_HUDItem_Mission_GTA3_C.GetMainContentCanvasSlot
	 */
	struct UUI_HUDItem_Mission_GTA3_C_GetMainContentCanvasSlot_Params
	{
	public:
		class UCanvasPanelSlot*                                    ContentCanvasSlot;                                       // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_HUDItem_Mission_GTA3.UI_HUDItem_Mission_GTA3_C.GetRichText
	 */
	struct UUI_HUDItem_Mission_GTA3_C_GetRichText_Params
	{
	public:
		class URichTextBlock*                                      Text;                                                    // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_HUDItem_Mission_GTA3.UI_HUDItem_Mission_GTA3_C.SetContentText
	 */
	struct UUI_HUDItem_Mission_GTA3_C_SetContentText_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FLinearColor                                        FontColorOverride;                                       // 0x0018(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_HUDItem_Mission_GTA3.UI_HUDItem_Mission_GTA3_C.Tick
	 */
	struct UUI_HUDItem_Mission_GTA3_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_HUDItem_Mission_GTA3.UI_HUDItem_Mission_GTA3_C.Construct
	 */
	struct UUI_HUDItem_Mission_GTA3_C_Construct_Params
	{	};

	/**
	 * Function UI_HUDItem_Mission_GTA3.UI_HUDItem_Mission_GTA3_C.ExecuteUbergraph_UI_HUDItem_Mission_GTA3
	 */
	struct UUI_HUDItem_Mission_GTA3_C_ExecuteUbergraph_UI_HUDItem_Mission_GTA3_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_38WD[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
