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
	 * Function UI_SlotButton_Legend.UI_SlotButton_Legend_C.OverrideBGImage
	 */
	struct UUI_SlotButton_Legend_C_OverrideBGImage_Params
	{
	public:
		struct FSlateBrush                                         InBrush;                                                 // 0x0000(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function UI_SlotButton_Legend.UI_SlotButton_Legend_C.SetLegendImage
	 */
	struct UUI_SlotButton_Legend_C_SetLegendImage_Params
	{
	public:
		class UTexture2D*                                          Texture;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_SlotButton_Legend.UI_SlotButton_Legend_C.OverrideMainText
	 */
	struct UUI_SlotButton_Legend_C_OverrideMainText_Params
	{
	public:
		class FText                                                NewText;                                                 // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function UI_SlotButton_Legend.UI_SlotButton_Legend_C.SetFont
	 */
	struct UUI_SlotButton_Legend_C_SetFont_Params
	{
	public:
		struct FSlateFontInfo                                      NewFont;                                                 // 0x0000(0x0058)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function UI_SlotButton_Legend.UI_SlotButton_Legend_C.UpdateBGColor
	 */
	struct UUI_SlotButton_Legend_C_UpdateBGColor_Params
	{	};

	/**
	 * Function UI_SlotButton_Legend.UI_SlotButton_Legend_C.UpdateTextColor
	 */
	struct UUI_SlotButton_Legend_C_UpdateTextColor_Params
	{	};

	/**
	 * Function UI_SlotButton_Legend.UI_SlotButton_Legend_C.InitSlotButton
	 */
	struct UUI_SlotButton_Legend_C_InitSlotButton_Params
	{
	public:
		class UGameterSettings*                                    SettingsObject;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
