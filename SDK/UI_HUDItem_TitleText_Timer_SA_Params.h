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
	 * Function UI_HUDItem_TitleText_Timer_SA.UI_HUDItem_TitleText_Timer_SA_C.HideAdditional
	 */
	struct UUI_HUDItem_TitleText_Timer_SA_C_HideAdditional_Params
	{	};

	/**
	 * Function UI_HUDItem_TitleText_Timer_SA.UI_HUDItem_TitleText_Timer_SA_C.CreateNewVerticalEntry
	 */
	struct UUI_HUDItem_TitleText_Timer_SA_C_CreateNewVerticalEntry_Params
	{	};

	/**
	 * Function UI_HUDItem_TitleText_Timer_SA.UI_HUDItem_TitleText_Timer_SA_C.UpdateStrings
	 */
	struct UUI_HUDItem_TitleText_Timer_SA_C_UpdateStrings_Params
	{
	public:
		class FString                                              Selection;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		TArray<class FString>                                      TargetArray;                                             // 0x0010(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function UI_HUDItem_TitleText_Timer_SA.UI_HUDItem_TitleText_Timer_SA_C.SetElementNum
	 */
	struct UUI_HUDItem_TitleText_Timer_SA_C_SetElementNum_Params
	{
	public:
		int32_t                                                    NumItems;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       NeedsWideElement;                                        // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_HUDItem_TitleText_Timer_SA.UI_HUDItem_TitleText_Timer_SA_C.Set Text for Element
	 */
	struct UUI_HUDItem_TitleText_Timer_SA_C_Set_Text_for_Element_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsMainText;                                              // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_L5VU[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FText                                                TextValue;                                               // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		bool                                                       SetColor;                                                // 0x0020(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_I3PO[0x3];                                   // 0x0021(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FLinearColor                                        Color;                                                   // 0x0024(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_U89M[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_HUDItem_TitleText_Timer_SA.UI_HUDItem_TitleText_Timer_SA_C.UpdateTimerText
	 */
	struct UUI_HUDItem_TitleText_Timer_SA_C_UpdateTimerText_Params
	{
	public:
		class FText                                                InText;                                                  // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FLinearColor                                        SpecifiedColor;                                          // 0x0018(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class URichTextBlock*                                      TextToUpdate;                                            // 0x0028(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_HUDItem_TitleText_Timer_SA.UI_HUDItem_TitleText_Timer_SA_C.Construct
	 */
	struct UUI_HUDItem_TitleText_Timer_SA_C_Construct_Params
	{	};

	/**
	 * Function UI_HUDItem_TitleText_Timer_SA.UI_HUDItem_TitleText_Timer_SA_C.Tick
	 */
	struct UUI_HUDItem_TitleText_Timer_SA_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_HUDItem_TitleText_Timer_SA.UI_HUDItem_TitleText_Timer_SA_C.SetContentText
	 */
	struct UUI_HUDItem_TitleText_Timer_SA_C_SetContentText_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FLinearColor                                        FontColorOverride;                                       // 0x0018(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_HUDItem_TitleText_Timer_SA.UI_HUDItem_TitleText_Timer_SA_C.OnSynchronizeProperties
	 */
	struct UUI_HUDItem_TitleText_Timer_SA_C_OnSynchronizeProperties_Params
	{	};

	/**
	 * Function UI_HUDItem_TitleText_Timer_SA.UI_HUDItem_TitleText_Timer_SA_C.SetContentPercentOffset
	 */
	struct UUI_HUDItem_TitleText_Timer_SA_C_SetContentPercentOffset_Params
	{
	public:
		float                                                      X;                                                       // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Y;                                                       // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_HUDItem_TitleText_Timer_SA.UI_HUDItem_TitleText_Timer_SA_C.SetPosition
	 */
	struct UUI_HUDItem_TitleText_Timer_SA_C_SetPosition_Params
	{
	public:
		float                                                      X;                                                       // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Y;                                                       // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Xmax;                                                    // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Ymax;                                                    // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_HUDItem_TitleText_Timer_SA.UI_HUDItem_TitleText_Timer_SA_C.SetImage
	 */
	struct UUI_HUDItem_TitleText_Timer_SA_C_SetImage_Params
	{
	public:
		class UTexture2D*                                          Texture;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_HUDItem_TitleText_Timer_SA.UI_HUDItem_TitleText_Timer_SA_C.SetImageColor
	 */
	struct UUI_HUDItem_TitleText_Timer_SA_C_SetImageColor_Params
	{
	public:
		struct FLinearColor                                        Color;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       forceVisible;                                            // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_HUDItem_TitleText_Timer_SA.UI_HUDItem_TitleText_Timer_SA_C.CustomFunctionWithFloat
	 */
	struct UUI_HUDItem_TitleText_Timer_SA_C_CustomFunctionWithFloat_Params
	{
	public:
		class FString                                              FunctionName;                                            // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		float                                                      floatNum;                                                // 0x0010(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_HUDItem_TitleText_Timer_SA.UI_HUDItem_TitleText_Timer_SA_C.CustomFunction
	 */
	struct UUI_HUDItem_TitleText_Timer_SA_C_CustomFunction_Params
	{
	public:
		class FString                                              FunctionName;                                            // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_HUDItem_TitleText_Timer_SA.UI_HUDItem_TitleText_Timer_SA_C.SetContentTextAdditional
	 */
	struct UUI_HUDItem_TitleText_Timer_SA_C_SetContentTextAdditional_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FLinearColor                                        FontColorOverride;                                       // 0x0018(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_HUDItem_TitleText_Timer_SA.UI_HUDItem_TitleText_Timer_SA_C.CustomFunctionWithStrings
	 */
	struct UUI_HUDItem_TitleText_Timer_SA_C_CustomFunctionWithStrings_Params
	{
	public:
		class FString                                              FunctionName;                                            // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		TArray<class FString>                                      Strings;                                                 // 0x0010(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function UI_HUDItem_TitleText_Timer_SA.UI_HUDItem_TitleText_Timer_SA_C.CustomFunctionWithInteger
	 */
	struct UUI_HUDItem_TitleText_Timer_SA_C_CustomFunctionWithInteger_Params
	{
	public:
		class FString                                              FunctionName;                                            // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		int32_t                                                    integer;                                                 // 0x0010(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_HUDItem_TitleText_Timer_SA.UI_HUDItem_TitleText_Timer_SA_C.CustomFunctionWithColor
	 */
	struct UUI_HUDItem_TitleText_Timer_SA_C_CustomFunctionWithColor_Params
	{
	public:
		class FString                                              FunctionName;                                            // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		struct FLinearColor                                        Color;                                                   // 0x0010(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_HUDItem_TitleText_Timer_SA.UI_HUDItem_TitleText_Timer_SA_C.CustomFunctionWithColors
	 */
	struct UUI_HUDItem_TitleText_Timer_SA_C_CustomFunctionWithColors_Params
	{
	public:
		class FString                                              FunctionName;                                            // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		TArray<struct FLinearColor>                                Colors;                                                  // 0x0010(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function UI_HUDItem_TitleText_Timer_SA.UI_HUDItem_TitleText_Timer_SA_C.ExecuteUbergraph_UI_HUDItem_TitleText_Timer_SA
	 */
	struct UUI_HUDItem_TitleText_Timer_SA_C_ExecuteUbergraph_UI_HUDItem_TitleText_Timer_SA_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
