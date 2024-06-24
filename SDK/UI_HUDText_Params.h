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
	 * Function UI_HUDText.UI_HUDText_C.GetTextScaleBox
	 */
	struct UUI_HUDText_C_GetTextScaleBox_Params
	{
	public:
		class UScaleBox*                                           ScaleBox;                                                // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_HUDText.UI_HUDText_C.GetTextContentObject
	 */
	struct UUI_HUDText_C_GetTextContentObject_Params
	{
	public:
		class UTextBlock*                                          MainButtonText;                                          // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_HUDText.UI_HUDText_C.Construct
	 */
	struct UUI_HUDText_C_Construct_Params
	{	};

	/**
	 * Function UI_HUDText.UI_HUDText_C.OnSynchronizeProperties
	 */
	struct UUI_HUDText_C_OnSynchronizeProperties_Params
	{	};

	/**
	 * Function UI_HUDText.UI_HUDText_C.ExecuteUbergraph_UI_HUDText
	 */
	struct UUI_HUDText_C_ExecuteUbergraph_UI_HUDText_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
