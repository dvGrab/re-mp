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
	 * Function UI_HUDScalableText.UI_HUDScalableText_C.GetTextScaleBox
	 */
	struct UUI_HUDScalableText_C_GetTextScaleBox_Params
	{
	public:
		class UScaleBox*                                           ScaleBox;                                                // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_HUDScalableText.UI_HUDScalableText_C.GetTextContentObject
	 */
	struct UUI_HUDScalableText_C_GetTextContentObject_Params
	{
	public:
		class UGTAScalableRichTextBlock*                           MainButtonText;                                          // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_HUDScalableText.UI_HUDScalableText_C.Construct
	 */
	struct UUI_HUDScalableText_C_Construct_Params
	{	};

	/**
	 * Function UI_HUDScalableText.UI_HUDScalableText_C.OnSynchronizeProperties
	 */
	struct UUI_HUDScalableText_C_OnSynchronizeProperties_Params
	{	};

	/**
	 * Function UI_HUDScalableText.UI_HUDScalableText_C.ExecuteUbergraph_UI_HUDScalableText
	 */
	struct UUI_HUDScalableText_C_ExecuteUbergraph_UI_HUDScalableText_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_ACW7[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
