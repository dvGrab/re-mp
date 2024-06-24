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
	 * Function UI_HUDItem_Wasted_SA.UI_HUDItem_Wasted_SA_C.GetMainContentCanvasSlot
	 */
	struct UUI_HUDItem_Wasted_SA_C_GetMainContentCanvasSlot_Params
	{
	public:
		class UCanvasPanelSlot*                                    ContentCanvasSlot;                                       // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_HUDItem_Wasted_SA.UI_HUDItem_Wasted_SA_C.GetRichText
	 */
	struct UUI_HUDItem_Wasted_SA_C_GetRichText_Params
	{
	public:
		class URichTextBlock*                                      Text;                                                    // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_HUDItem_Wasted_SA.UI_HUDItem_Wasted_SA_C.Construct
	 */
	struct UUI_HUDItem_Wasted_SA_C_Construct_Params
	{	};

	/**
	 * Function UI_HUDItem_Wasted_SA.UI_HUDItem_Wasted_SA_C.Tick
	 */
	struct UUI_HUDItem_Wasted_SA_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_HUDItem_Wasted_SA.UI_HUDItem_Wasted_SA_C.ExecuteUbergraph_UI_HUDItem_Wasted_SA
	 */
	struct UUI_HUDItem_Wasted_SA_C_ExecuteUbergraph_UI_HUDItem_Wasted_SA_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
