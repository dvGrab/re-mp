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
	 * Function Transition_SimpleFade_SA.Transition_SimpleFade_SA_C.UpdateTextPosition
	 */
	struct UTransition_SimpleFade_SA_C_UpdateTextPosition_Params
	{
	public:
		float                                                      InLeft;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      InTop;                                                   // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      InRight;                                                 // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      InBottom;                                                // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Transition_SimpleFade_SA.Transition_SimpleFade_SA_C.GetFadeOpacity
	 */
	struct UTransition_SimpleFade_SA_C_GetFadeOpacity_Params
	{
	public:
		class UWidget*                                             Canvas;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Transition_SimpleFade_SA.Transition_SimpleFade_SA_C.SetFadeOpacity
	 */
	struct UTransition_SimpleFade_SA_C_SetFadeOpacity_Params
	{
	public:
		EGTATransitionState                                        CurrentState;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_7U0B[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UCanvasPanel*                                        Canvas;                                                  // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Alpha;                                                   // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Transition_SimpleFade_SA.Transition_SimpleFade_SA_C.GetHudItem
	 */
	struct UTransition_SimpleFade_SA_C_GetHudItem_Params
	{
	public:
		class UUI_GTAHUDItem*                                      ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Transition_SimpleFade_SA.Transition_SimpleFade_SA_C.GetNextState
	 */
	struct UTransition_SimpleFade_SA_C_GetNextState_Params
	{
	public:
		EGTATransitionState                                        CurrentState;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EGTATransitionState                                        NextState;                                               // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Transition_SimpleFade_SA.Transition_SimpleFade_SA_C.SetInitialColor
	 */
	struct UTransition_SimpleFade_SA_C_SetInitialColor_Params
	{	};

	/**
	 * Function Transition_SimpleFade_SA.Transition_SimpleFade_SA_C.IsOpaque
	 */
	struct UTransition_SimpleFade_SA_C_IsOpaque_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Transition_SimpleFade_SA.Transition_SimpleFade_SA_C.UpdateToCurrentState
	 */
	struct UTransition_SimpleFade_SA_C_UpdateToCurrentState_Params
	{	};

	/**
	 * Function Transition_SimpleFade_SA.Transition_SimpleFade_SA_C.Update
	 */
	struct UTransition_SimpleFade_SA_C_Update_Params
	{
	public:
		float                                                      dT;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Transition_SimpleFade_SA.Transition_SimpleFade_SA_C.GetCurrentFadeCanvas
	 */
	struct UTransition_SimpleFade_SA_C_GetCurrentFadeCanvas_Params
	{
	public:
		EGTATransitionState                                        State;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_BWY9[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UCanvasPanel*                                        OutCanvas;                                               // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Transition_SimpleFade_SA.Transition_SimpleFade_SA_C.Construct
	 */
	struct UTransition_SimpleFade_SA_C_Construct_Params
	{	};

	/**
	 * Function Transition_SimpleFade_SA.Transition_SimpleFade_SA_C.Tick
	 */
	struct UTransition_SimpleFade_SA_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Transition_SimpleFade_SA.Transition_SimpleFade_SA_C.SetHudItemPosition
	 */
	struct UTransition_SimpleFade_SA_C_SetHudItemPosition_Params
	{
	public:
		float                                                      X;                                                       // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Y;                                                       // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Xmax;                                                    // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Ymax;                                                    // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Transition_SimpleFade_SA.Transition_SimpleFade_SA_C.CustomFunctionFromString
	 */
	struct UTransition_SimpleFade_SA_C_CustomFunctionFromString_Params
	{
	public:
		class FString                                              FunctionString;                                          // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function Transition_SimpleFade_SA.Transition_SimpleFade_SA_C.ExecuteUbergraph_Transition_SimpleFade_SA
	 */
	struct UTransition_SimpleFade_SA_C_ExecuteUbergraph_Transition_SimpleFade_SA_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
