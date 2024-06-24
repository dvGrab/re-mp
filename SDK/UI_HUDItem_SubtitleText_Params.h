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
	 * Function UI_HUDItem_SubtitleText.UI_HUDItem_SubtitleText_C.GetCurrentTextObject
	 */
	struct UUI_HUDItem_SubtitleText_C_GetCurrentTextObject_Params
	{
	public:
		class URichTextBlock*                                      TextBox;                                                 // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_HUDItem_SubtitleText.UI_HUDItem_SubtitleText_C.UpdateMainText
	 */
	struct UUI_HUDItem_SubtitleText_C_UpdateMainText_Params
	{
	public:
		class FText                                                InText;                                                  // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FLinearColor                                        SpecifiedColor;                                          // 0x0018(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_HUDItem_SubtitleText.UI_HUDItem_SubtitleText_C.CreateOrUpdateAdditionalText
	 */
	struct UUI_HUDItem_SubtitleText_C_CreateOrUpdateAdditionalText_Params
	{
	public:
		class FText                                                NewText;                                                 // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FLinearColor                                        Color;                                                   // 0x0018(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_HUDItem_SubtitleText.UI_HUDItem_SubtitleText_C.RemoveAdditionalText
	 */
	struct UUI_HUDItem_SubtitleText_C_RemoveAdditionalText_Params
	{	};

	/**
	 * Function UI_HUDItem_SubtitleText.UI_HUDItem_SubtitleText_C.CreateAdditionalText
	 */
	struct UUI_HUDItem_SubtitleText_C_CreateAdditionalText_Params
	{	};

	/**
	 * Function UI_HUDItem_SubtitleText.UI_HUDItem_SubtitleText_C.CreateBar
	 */
	struct UUI_HUDItem_SubtitleText_C_CreateBar_Params
	{	};

	/**
	 * Function UI_HUDItem_SubtitleText.UI_HUDItem_SubtitleText_C.RemoveProgressBar
	 */
	struct UUI_HUDItem_SubtitleText_C_RemoveProgressBar_Params
	{	};

	/**
	 * Function UI_HUDItem_SubtitleText.UI_HUDItem_SubtitleText_C.CreateOrUpdateProgressBar
	 */
	struct UUI_HUDItem_SubtitleText_C_CreateOrUpdateProgressBar_Params
	{
	public:
		TArray<float>                                              Info;                                                    // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FLinearColor                                        Color;                                                   // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_HUDItem_SubtitleText.UI_HUDItem_SubtitleText_C.Construct
	 */
	struct UUI_HUDItem_SubtitleText_C_Construct_Params
	{	};

	/**
	 * Function UI_HUDItem_SubtitleText.UI_HUDItem_SubtitleText_C.Tick
	 */
	struct UUI_HUDItem_SubtitleText_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_HUDItem_SubtitleText.UI_HUDItem_SubtitleText_C.SetImageColor
	 */
	struct UUI_HUDItem_SubtitleText_C_SetImageColor_Params
	{
	public:
		struct FLinearColor                                        Color;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       forceVisible;                                            // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_HUDItem_SubtitleText.UI_HUDItem_SubtitleText_C.SetContentText
	 */
	struct UUI_HUDItem_SubtitleText_C_SetContentText_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FLinearColor                                        FontColorOverride;                                       // 0x0018(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_HUDItem_SubtitleText.UI_HUDItem_SubtitleText_C.OnSynchronizeProperties
	 */
	struct UUI_HUDItem_SubtitleText_C_OnSynchronizeProperties_Params
	{	};

	/**
	 * Function UI_HUDItem_SubtitleText.UI_HUDItem_SubtitleText_C.SetContentPercentOffset
	 */
	struct UUI_HUDItem_SubtitleText_C_SetContentPercentOffset_Params
	{
	public:
		float                                                      X;                                                       // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Y;                                                       // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_HUDItem_SubtitleText.UI_HUDItem_SubtitleText_C.CustomFunctionWithFloats
	 */
	struct UUI_HUDItem_SubtitleText_C_CustomFunctionWithFloats_Params
	{
	public:
		class FString                                              FunctionName;                                            // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		TArray<float>                                              Floats;                                                  // 0x0010(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function UI_HUDItem_SubtitleText.UI_HUDItem_SubtitleText_C.CustomFunctionWithColor
	 */
	struct UUI_HUDItem_SubtitleText_C_CustomFunctionWithColor_Params
	{
	public:
		class FString                                              FunctionName;                                            // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		struct FLinearColor                                        Color;                                                   // 0x0010(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_HUDItem_SubtitleText.UI_HUDItem_SubtitleText_C.CustomFunctionWithFloat
	 */
	struct UUI_HUDItem_SubtitleText_C_CustomFunctionWithFloat_Params
	{
	public:
		class FString                                              FunctionName;                                            // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		float                                                      floatNum;                                                // 0x0010(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_HUDItem_SubtitleText.UI_HUDItem_SubtitleText_C.SetContentTextAdditional
	 */
	struct UUI_HUDItem_SubtitleText_C_SetContentTextAdditional_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FLinearColor                                        FontColorOverride;                                       // 0x0018(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_HUDItem_SubtitleText.UI_HUDItem_SubtitleText_C.RefreshAfterSettingsChange
	 */
	struct UUI_HUDItem_SubtitleText_C_RefreshAfterSettingsChange_Params
	{	};

	/**
	 * Function UI_HUDItem_SubtitleText.UI_HUDItem_SubtitleText_C.ClearDataOnHide
	 */
	struct UUI_HUDItem_SubtitleText_C_ClearDataOnHide_Params
	{	};

	/**
	 * Function UI_HUDItem_SubtitleText.UI_HUDItem_SubtitleText_C.ExecuteUbergraph_UI_HUDItem_SubtitleText
	 */
	struct UUI_HUDItem_SubtitleText_C_ExecuteUbergraph_UI_HUDItem_SubtitleText_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
