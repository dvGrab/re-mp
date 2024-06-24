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
	 * Function Transition_Wasted_Base.Transition_Wasted_Base_C.CreateWidgetAndAdd
	 */
	struct UTransition_Wasted_Base_C_CreateWidgetAndAdd_Params
	{
	public:
		class UClass*                                              WidgetClass;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPanelWidget*                                        PanelToAddTo;                                            // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UUI_GTAHUDItem*                                      ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Transition_Wasted_Base.Transition_Wasted_Base_C.ShowMissionFailedExtras
	 */
	struct UTransition_Wasted_Base_C_ShowMissionFailedExtras_Params
	{
	public:
		class FText                                                TextOverride;                                            // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function Transition_Wasted_Base.Transition_Wasted_Base_C.GetNextState
	 */
	struct UTransition_Wasted_Base_C_GetNextState_Params
	{
	public:
		EGTATransitionState                                        CurrentState;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EGTATransitionState                                        NextState;                                               // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Transition_Wasted_Base.Transition_Wasted_Base_C.SetInitialColor
	 */
	struct UTransition_Wasted_Base_C_SetInitialColor_Params
	{	};

	/**
	 * Function Transition_Wasted_Base.Transition_Wasted_Base_C.SetMainImage
	 */
	struct UTransition_Wasted_Base_C_SetMainImage_Params
	{	};

	/**
	 * Function Transition_Wasted_Base.Transition_Wasted_Base_C.IsOpaque
	 */
	struct UTransition_Wasted_Base_C_IsOpaque_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Transition_Wasted_Base.Transition_Wasted_Base_C.UpdateToCurrentState
	 */
	struct UTransition_Wasted_Base_C_UpdateToCurrentState_Params
	{	};

	/**
	 * Function Transition_Wasted_Base.Transition_Wasted_Base_C.Update
	 */
	struct UTransition_Wasted_Base_C_Update_Params
	{
	public:
		float                                                      dT;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Transition_Wasted_Base.Transition_Wasted_Base_C.GetCurrentFadeCanvas
	 */
	struct UTransition_Wasted_Base_C_GetCurrentFadeCanvas_Params
	{
	public:
		EGTATransitionState                                        State;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_YV4C[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UCanvasPanel*                                        OutCanvas;                                               // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Transition_Wasted_Base.Transition_Wasted_Base_C.Construct
	 */
	struct UTransition_Wasted_Base_C_Construct_Params
	{	};

	/**
	 * Function Transition_Wasted_Base.Transition_Wasted_Base_C.Tick
	 */
	struct UTransition_Wasted_Base_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Transition_Wasted_Base.Transition_Wasted_Base_C.PreConstruct
	 */
	struct UTransition_Wasted_Base_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Transition_Wasted_Base.Transition_Wasted_Base_C.CustomFunctionFromString
	 */
	struct UTransition_Wasted_Base_C_CustomFunctionFromString_Params
	{
	public:
		class FString                                              FunctionString;                                          // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function Transition_Wasted_Base.Transition_Wasted_Base_C.CustomFunctionFromStringWithString
	 */
	struct UTransition_Wasted_Base_C_CustomFunctionFromStringWithString_Params
	{
	public:
		class FString                                              FunctionString;                                          // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              VariableString;                                          // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function Transition_Wasted_Base.Transition_Wasted_Base_C.CustomFunctionFromStringWithColor
	 */
	struct UTransition_Wasted_Base_C_CustomFunctionFromStringWithColor_Params
	{
	public:
		class FString                                              FunctionString;                                          // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		struct FLinearColor                                        Color;                                                   // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Transition_Wasted_Base.Transition_Wasted_Base_C.ExecuteUbergraph_Transition_Wasted_Base
	 */
	struct UTransition_Wasted_Base_C_ExecuteUbergraph_Transition_Wasted_Base_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_BMXY[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
