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
	 * Function Transition_ERRORFADE.Transition_ERRORFADE_C.GetNextState
	 */
	struct UTransition_ERRORFADE_C_GetNextState_Params
	{
	public:
		EGTATransitionState                                        CurrentState;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EGTATransitionState                                        NextState;                                               // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Transition_ERRORFADE.Transition_ERRORFADE_C.SetInitialColor
	 */
	struct UTransition_ERRORFADE_C_SetInitialColor_Params
	{	};

	/**
	 * Function Transition_ERRORFADE.Transition_ERRORFADE_C.IsOpaque
	 */
	struct UTransition_ERRORFADE_C_IsOpaque_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Transition_ERRORFADE.Transition_ERRORFADE_C.UpdateToCurrentState
	 */
	struct UTransition_ERRORFADE_C_UpdateToCurrentState_Params
	{	};

	/**
	 * Function Transition_ERRORFADE.Transition_ERRORFADE_C.Update
	 */
	struct UTransition_ERRORFADE_C_Update_Params
	{
	public:
		float                                                      dT;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Transition_ERRORFADE.Transition_ERRORFADE_C.GetCurrentFadeCanvas
	 */
	struct UTransition_ERRORFADE_C_GetCurrentFadeCanvas_Params
	{
	public:
		EGTATransitionState                                        State;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_FWN9[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UCanvasPanel*                                        OutCanvas;                                               // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Transition_ERRORFADE.Transition_ERRORFADE_C.Construct
	 */
	struct UTransition_ERRORFADE_C_Construct_Params
	{	};

	/**
	 * Function Transition_ERRORFADE.Transition_ERRORFADE_C.Tick
	 */
	struct UTransition_ERRORFADE_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Transition_ERRORFADE.Transition_ERRORFADE_C.ExecuteUbergraph_Transition_ERRORFADE
	 */
	struct UTransition_ERRORFADE_C_ExecuteUbergraph_Transition_ERRORFADE_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
