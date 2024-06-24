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
	 * Function UI_HUD_Timer_SA_Part.UI_HUD_Timer_SA_Part_C.SetTextColor
	 */
	struct UUI_HUD_Timer_SA_Part_C_SetTextColor_Params
	{
	public:
		class URichTextBlock*                                      RichTextObject;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FLinearColor                                        NewColor;                                                // 0x0008(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_HUD_Timer_SA_Part.UI_HUD_Timer_SA_Part_C.CreateBar
	 */
	struct UUI_HUD_Timer_SA_Part_C_CreateBar_Params
	{
	public:
		ESlateSizeRule                                             SizeRule;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_TSY6[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_HUD_Timer_SA_Part.UI_HUD_Timer_SA_Part_C.CreateOrUpdateBar
	 */
	struct UUI_HUD_Timer_SA_Part_C_CreateOrUpdateBar_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_HUD_Timer_SA_Part.UI_HUD_Timer_SA_Part_C.UpdateTimerText
	 */
	struct UUI_HUD_Timer_SA_Part_C_UpdateTimerText_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class URichTextBlock*                                      TextObject;                                              // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       SetColor;                                                // 0x0020(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_64FF[0x3];                                   // 0x0021(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FLinearColor                                        Color;                                                   // 0x0024(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_F4S5[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_HUD_Timer_SA_Part.UI_HUD_Timer_SA_Part_C.Construct
	 */
	struct UUI_HUD_Timer_SA_Part_C_Construct_Params
	{	};

	/**
	 * Function UI_HUD_Timer_SA_Part.UI_HUD_Timer_SA_Part_C.OnSynchronizeProperties
	 */
	struct UUI_HUD_Timer_SA_Part_C_OnSynchronizeProperties_Params
	{	};

	/**
	 * Function UI_HUD_Timer_SA_Part.UI_HUD_Timer_SA_Part_C.Tick
	 */
	struct UUI_HUD_Timer_SA_Part_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_HUD_Timer_SA_Part.UI_HUD_Timer_SA_Part_C.SetContentText
	 */
	struct UUI_HUD_Timer_SA_Part_C_SetContentText_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FLinearColor                                        FontColorOverride;                                       // 0x0018(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_HUD_Timer_SA_Part.UI_HUD_Timer_SA_Part_C.SetContentPercentOffset
	 */
	struct UUI_HUD_Timer_SA_Part_C_SetContentPercentOffset_Params
	{
	public:
		float                                                      X;                                                       // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Y;                                                       // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_HUD_Timer_SA_Part.UI_HUD_Timer_SA_Part_C.SetPosition
	 */
	struct UUI_HUD_Timer_SA_Part_C_SetPosition_Params
	{
	public:
		float                                                      X;                                                       // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Y;                                                       // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Xmax;                                                    // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Ymax;                                                    // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_HUD_Timer_SA_Part.UI_HUD_Timer_SA_Part_C.SetImage
	 */
	struct UUI_HUD_Timer_SA_Part_C_SetImage_Params
	{
	public:
		class UTexture2D*                                          Texture;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_HUD_Timer_SA_Part.UI_HUD_Timer_SA_Part_C.SetImageColor
	 */
	struct UUI_HUD_Timer_SA_Part_C_SetImageColor_Params
	{
	public:
		struct FLinearColor                                        Color;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       forceVisible;                                            // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_HUD_Timer_SA_Part.UI_HUD_Timer_SA_Part_C.CustomFunctionWithFloat
	 */
	struct UUI_HUD_Timer_SA_Part_C_CustomFunctionWithFloat_Params
	{
	public:
		class FString                                              FunctionName;                                            // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		float                                                      floatNum;                                                // 0x0010(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_HUD_Timer_SA_Part.UI_HUD_Timer_SA_Part_C.CustomFunction
	 */
	struct UUI_HUD_Timer_SA_Part_C_CustomFunction_Params
	{
	public:
		class FString                                              FunctionName;                                            // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_HUD_Timer_SA_Part.UI_HUD_Timer_SA_Part_C.SetContentTextAdditional
	 */
	struct UUI_HUD_Timer_SA_Part_C_SetContentTextAdditional_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FLinearColor                                        FontColorOverride;                                       // 0x0018(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_HUD_Timer_SA_Part.UI_HUD_Timer_SA_Part_C.Reset
	 */
	struct UUI_HUD_Timer_SA_Part_C_Reset_Params
	{	};

	/**
	 * Function UI_HUD_Timer_SA_Part.UI_HUD_Timer_SA_Part_C.ExecuteUbergraph_UI_HUD_Timer_SA_Part
	 */
	struct UUI_HUD_Timer_SA_Part_C_ExecuteUbergraph_UI_HUD_Timer_SA_Part_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
