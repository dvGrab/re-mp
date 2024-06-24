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
	 * Function Transition_Base.Transition_Base_C.GetSecondaryUnderImage
	 */
	struct UTransition_Base_C_GetSecondaryUnderImage_Params
	{
	public:
		EGTATransitionState                                        State;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_J8YU[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UCanvasPanel*                                        OutCanvas;                                               // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Transition_Base.Transition_Base_C.IsBelowPauseMenu
	 */
	struct UTransition_Base_C_IsBelowPauseMenu_Params
	{
	public:
		bool                                                       IsBelow;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_O7FU[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Transition_Base.Transition_Base_C.UpdateVolumeFades
	 */
	struct UTransition_Base_C_UpdateVolumeFades_Params
	{	};

	/**
	 * Function Transition_Base.Transition_Base_C.GetFadeOpacity
	 */
	struct UTransition_Base_C_GetFadeOpacity_Params
	{
	public:
		class UWidget*                                             Canvas;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Transition_Base.Transition_Base_C.SetFadeOpacity
	 */
	struct UTransition_Base_C_SetFadeOpacity_Params
	{
	public:
		EGTATransitionState                                        CurrentState;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_ZUZR[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UCanvasPanel*                                        Canvas;                                                  // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Alpha;                                                   // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Transition_Base.Transition_Base_C.AutoContinue
	 */
	struct UTransition_Base_C_AutoContinue_Params
	{
	public:
		EGTATransitionState                                        toState;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Transition_Base.Transition_Base_C.GetIsFading
	 */
	struct UTransition_Base_C_GetIsFading_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Transition_Base.Transition_Base_C.UpdateUptime
	 */
	struct UTransition_Base_C_UpdateUptime_Params
	{
	public:
		float                                                      dT;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Transition_Base.Transition_Base_C.GetNextState
	 */
	struct UTransition_Base_C_GetNextState_Params
	{
	public:
		EGTATransitionState                                        CurrentState;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EGTATransitionState                                        NextState;                                               // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Transition_Base.Transition_Base_C.GetCurrentFadeOpacity
	 */
	struct UTransition_Base_C_GetCurrentFadeOpacity_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Transition_Base.Transition_Base_C.RecievedATimeChangeInCurrentState
	 */
	struct UTransition_Base_C_RecievedATimeChangeInCurrentState_Params
	{
	public:
		EGTATransitionState                                        CurrentState;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Transition_Base.Transition_Base_C.GetFadeDirectionAndLength
	 */
	struct UTransition_Base_C_GetFadeDirectionAndLength_Params
	{
	public:
		EGTATransitionState                                        State;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_7XXG[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      Length;                                                  // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsFadeIn;                                                // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_BSKO[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Transition_Base.Transition_Base_C.UpdateToCurrentState
	 */
	struct UTransition_Base_C_UpdateToCurrentState_Params
	{	};

	/**
	 * Function Transition_Base.Transition_Base_C.UpdateFade
	 */
	struct UTransition_Base_C_UpdateFade_Params
	{
	public:
		EGTATransitionState                                        State;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_PPG3[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      dT;                                                      // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Transition_Base.Transition_Base_C.Update
	 */
	struct UTransition_Base_C_Update_Params
	{
	public:
		float                                                      dT;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Transition_Base.Transition_Base_C.UpdateStatic
	 */
	struct UTransition_Base_C_UpdateStatic_Params
	{
	public:
		float                                                      dT;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EGTATransitionState                                        State;                                                   // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Transition_Base.Transition_Base_C.GetCurrentFadeCanvas
	 */
	struct UTransition_Base_C_GetCurrentFadeCanvas_Params
	{
	public:
		EGTATransitionState                                        State;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_3TDO[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UCanvasPanel*                                        OutCanvas;                                               // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Transition_Base.Transition_Base_C.IsFading
	 */
	struct UTransition_Base_C_IsFading_Params
	{
	public:
		EGTATransitionState                                        State;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Transition_Base.Transition_Base_C.Construct
	 */
	struct UTransition_Base_C_Construct_Params
	{	};

	/**
	 * Function Transition_Base.Transition_Base_C.Tick
	 */
	struct UTransition_Base_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Transition_Base.Transition_Base_C.BP_Continue
	 */
	struct UTransition_Base_C_BP_Continue_Params
	{	};

	/**
	 * Function Transition_Base.Transition_Base_C.BP_SetTransitionStateFadeTime
	 */
	struct UTransition_Base_C_BP_SetTransitionStateFadeTime_Params
	{
	public:
		EGTATransitionState                                        StateToChange;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_EI61[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      TimeToFade;                                              // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Transition_Base.Transition_Base_C.ForceCurrentFadeOpacity
	 */
	struct UTransition_Base_C_ForceCurrentFadeOpacity_Params
	{
	public:
		float                                                      newOpacity;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Transition_Base.Transition_Base_C.Destruct
	 */
	struct UTransition_Base_C_Destruct_Params
	{	};

	/**
	 * Function Transition_Base.Transition_Base_C.ExecuteUbergraph_Transition_Base
	 */
	struct UTransition_Base_C_ExecuteUbergraph_Transition_Base_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
