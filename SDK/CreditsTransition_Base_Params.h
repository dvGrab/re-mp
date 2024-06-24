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
	 * Function CreditsTransition_Base.CreditsTransition_Base_C.UpdateFinalFade
	 */
	struct UCreditsTransition_Base_C_UpdateFinalFade_Params
	{	};

	/**
	 * Function CreditsTransition_Base.CreditsTransition_Base_C.AllowBackwardsTransition
	 */
	struct UCreditsTransition_Base_C_AllowBackwardsTransition_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CreditsTransition_Base.CreditsTransition_Base_C.EntryValidWithLanguage
	 */
	struct UCreditsTransition_Base_C_EntryValidWithLanguage_Params
	{
	public:
		class FString                                              LanguagesString;                                         // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		bool                                                       ValidWithLanguage;                                       // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CreditsTransition_Base.CreditsTransition_Base_C.IsEntryValidNow
	 */
	struct UCreditsTransition_Base_C_IsEntryValidNow_Params
	{
	public:
		class FString                                              Entry;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		bool                                                       Valid;                                                   // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_DPQ7[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function CreditsTransition_Base.CreditsTransition_Base_C.ParseCreditEntry
	 */
	struct UCreditsTransition_Base_C_ParseCreditEntry_Params
	{
	public:
		class FString                                              InText;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		int32_t                                                    EntryNum;                                                // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_8EK8[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FText                                                TextToDisplay;                                           // 0x0018(0x0018)  (Parm, OutParm)
		struct FSlateFontInfo                                      Font;                                                    // 0x0030(0x0058)  (Parm, OutParm, HasGetValueTypeHash)
	};

	/**
	 * Function CreditsTransition_Base.CreditsTransition_Base_C.RemoveTopCredit
	 */
	struct UCreditsTransition_Base_C_RemoveTopCredit_Params
	{	};

	/**
	 * Function CreditsTransition_Base.CreditsTransition_Base_C.AddNewCredit
	 */
	struct UCreditsTransition_Base_C_AddNewCredit_Params
	{	};

	/**
	 * Function CreditsTransition_Base.CreditsTransition_Base_C.Get Current Vertical Credit Size
	 */
	struct UCreditsTransition_Base_C_Get_Current_Vertical_Credit_Size_Params
	{
	public:
		float                                                      Size;                                                    // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CreditsTransition_Base.CreditsTransition_Base_C.GetNextCreditText
	 */
	struct UCreditsTransition_Base_C_GetNextCreditText_Params
	{
	public:
		bool                                                       MoveLineNumber;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_Y06L[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              CreditText;                                              // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              DoubleText;                                              // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
		bool                                                       AtEnd;                                                   // 0x0028(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_9MAB[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function CreditsTransition_Base.CreditsTransition_Base_C.UpdateCredits
	 */
	struct UCreditsTransition_Base_C_UpdateCredits_Params
	{
	public:
		float                                                      dT;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CreditsTransition_Base.CreditsTransition_Base_C.UpdateToCurrentState
	 */
	struct UCreditsTransition_Base_C_UpdateToCurrentState_Params
	{	};

	/**
	 * Function CreditsTransition_Base.CreditsTransition_Base_C.Update
	 */
	struct UCreditsTransition_Base_C_Update_Params
	{
	public:
		float                                                      dT;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CreditsTransition_Base.CreditsTransition_Base_C.GetNextState
	 */
	struct UCreditsTransition_Base_C_GetNextState_Params
	{
	public:
		EGTATransitionState                                        CurrentState;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EGTATransitionState                                        NextState;                                               // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CreditsTransition_Base.CreditsTransition_Base_C.IsOpaque
	 */
	struct UCreditsTransition_Base_C_IsOpaque_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CreditsTransition_Base.CreditsTransition_Base_C.GetCurrentFadeCanvas
	 */
	struct UCreditsTransition_Base_C_GetCurrentFadeCanvas_Params
	{
	public:
		EGTATransitionState                                        State;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_O0DG[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UCanvasPanel*                                        OutCanvas;                                               // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CreditsTransition_Base.CreditsTransition_Base_C.Construct
	 */
	struct UCreditsTransition_Base_C_Construct_Params
	{	};

	/**
	 * Function CreditsTransition_Base.CreditsTransition_Base_C.Tick
	 */
	struct UCreditsTransition_Base_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CreditsTransition_Base.CreditsTransition_Base_C.ExecuteUbergraph_CreditsTransition_Base
	 */
	struct UCreditsTransition_Base_C_ExecuteUbergraph_CreditsTransition_Base_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
