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
	 * Function UI_HUDItem_VitalStats_SA.UI_HUDItem_VitalStats_SA_C.ChangeContentSize
	 */
	struct UUI_HUDItem_VitalStats_SA_C_ChangeContentSize_Params
	{
	public:
		bool                                                       IsLarge;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_HUDItem_VitalStats_SA.UI_HUDItem_VitalStats_SA_C.DestroyStatBars
	 */
	struct UUI_HUDItem_VitalStats_SA_C_DestroyStatBars_Params
	{	};

	/**
	 * Function UI_HUDItem_VitalStats_SA.UI_HUDItem_VitalStats_SA_C.CreateStatBars
	 */
	struct UUI_HUDItem_VitalStats_SA_C_CreateStatBars_Params
	{	};

	/**
	 * Function UI_HUDItem_VitalStats_SA.UI_HUDItem_VitalStats_SA_C.Construct
	 */
	struct UUI_HUDItem_VitalStats_SA_C_Construct_Params
	{	};

	/**
	 * Function UI_HUDItem_VitalStats_SA.UI_HUDItem_VitalStats_SA_C.CustomFunctionWithFloats
	 */
	struct UUI_HUDItem_VitalStats_SA_C_CustomFunctionWithFloats_Params
	{
	public:
		class FString                                              FunctionName;                                            // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		TArray<float>                                              Floats;                                                  // 0x0010(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function UI_HUDItem_VitalStats_SA.UI_HUDItem_VitalStats_SA_C.CustomFunctionWithStrings
	 */
	struct UUI_HUDItem_VitalStats_SA_C_CustomFunctionWithStrings_Params
	{
	public:
		class FString                                              FunctionName;                                            // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		TArray<class FString>                                      Strings;                                                 // 0x0010(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function UI_HUDItem_VitalStats_SA.UI_HUDItem_VitalStats_SA_C.SetTotalWidgetColor
	 */
	struct UUI_HUDItem_VitalStats_SA_C_SetTotalWidgetColor_Params
	{
	public:
		struct FLinearColor                                        Color;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_HUDItem_VitalStats_SA.UI_HUDItem_VitalStats_SA_C.OnSynchronizeProperties
	 */
	struct UUI_HUDItem_VitalStats_SA_C_OnSynchronizeProperties_Params
	{	};

	/**
	 * Function UI_HUDItem_VitalStats_SA.UI_HUDItem_VitalStats_SA_C.SetContentText
	 */
	struct UUI_HUDItem_VitalStats_SA_C_SetContentText_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FLinearColor                                        FontColorOverride;                                       // 0x0018(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_HUDItem_VitalStats_SA.UI_HUDItem_VitalStats_SA_C.SetContentTextAdditional
	 */
	struct UUI_HUDItem_VitalStats_SA_C_SetContentTextAdditional_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FLinearColor                                        FontColorOverride;                                       // 0x0018(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_HUDItem_VitalStats_SA.UI_HUDItem_VitalStats_SA_C.ExecuteUbergraph_UI_HUDItem_VitalStats_SA
	 */
	struct UUI_HUDItem_VitalStats_SA_C_ExecuteUbergraph_UI_HUDItem_VitalStats_SA_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
