/**
 * Name: GTASA
 * Version: 0.0.1
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function CreditsTransition_Base.CreditsTransition_Base_C.UpdateFinalFade
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UCreditsTransition_Base_C::UpdateFinalFade()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CreditsTransition_Base.CreditsTransition_Base_C.UpdateFinalFade");
		
		UCreditsTransition_Base_C_UpdateFinalFade_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function CreditsTransition_Base.CreditsTransition_Base_C.AllowBackwardsTransition
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool UCreditsTransition_Base_C::AllowBackwardsTransition()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CreditsTransition_Base.CreditsTransition_Base_C.AllowBackwardsTransition");
		
		UCreditsTransition_Base_C_AllowBackwardsTransition_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function CreditsTransition_Base.CreditsTransition_Base_C.EntryValidWithLanguage
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      LanguagesString                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		bool                                               ValidWithLanguage                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCreditsTransition_Base_C::EntryValidWithLanguage(const class FString& LanguagesString, bool* ValidWithLanguage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CreditsTransition_Base.CreditsTransition_Base_C.EntryValidWithLanguage");
		
		UCreditsTransition_Base_C_EntryValidWithLanguage_Params params {};
		params.LanguagesString = LanguagesString;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ValidWithLanguage != nullptr)
			*ValidWithLanguage = params.ValidWithLanguage;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function CreditsTransition_Base.CreditsTransition_Base_C.IsEntryValidNow
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      Entry                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		bool                                               Valid                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCreditsTransition_Base_C::IsEntryValidNow(const class FString& Entry, bool* Valid)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CreditsTransition_Base.CreditsTransition_Base_C.IsEntryValidNow");
		
		UCreditsTransition_Base_C_IsEntryValidNow_Params params {};
		params.Entry = Entry;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Valid != nullptr)
			*Valid = params.Valid;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function CreditsTransition_Base.CreditsTransition_Base_C.ParseCreditEntry
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      InText                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		int32_t                                            EntryNum                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        TextToDisplay                                              (Parm, OutParm)
	 * 		struct FSlateFontInfo                              Font                                                       (Parm, OutParm, HasGetValueTypeHash)
	 */
	void UCreditsTransition_Base_C::ParseCreditEntry(const class FString& InText, int32_t EntryNum, class FText* TextToDisplay, struct FSlateFontInfo* Font)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CreditsTransition_Base.CreditsTransition_Base_C.ParseCreditEntry");
		
		UCreditsTransition_Base_C_ParseCreditEntry_Params params {};
		params.InText = InText;
		params.EntryNum = EntryNum;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TextToDisplay != nullptr)
			*TextToDisplay = params.TextToDisplay;
		if (Font != nullptr)
			*Font = params.Font;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function CreditsTransition_Base.CreditsTransition_Base_C.RemoveTopCredit
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UCreditsTransition_Base_C::RemoveTopCredit()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CreditsTransition_Base.CreditsTransition_Base_C.RemoveTopCredit");
		
		UCreditsTransition_Base_C_RemoveTopCredit_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function CreditsTransition_Base.CreditsTransition_Base_C.AddNewCredit
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UCreditsTransition_Base_C::AddNewCredit()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CreditsTransition_Base.CreditsTransition_Base_C.AddNewCredit");
		
		UCreditsTransition_Base_C_AddNewCredit_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function CreditsTransition_Base.CreditsTransition_Base_C.Get Current Vertical Credit Size
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Size                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCreditsTransition_Base_C::Get_Current_Vertical_Credit_Size(float* Size)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CreditsTransition_Base.CreditsTransition_Base_C.Get Current Vertical Credit Size");
		
		UCreditsTransition_Base_C_Get_Current_Vertical_Credit_Size_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Size != nullptr)
			*Size = params.Size;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function CreditsTransition_Base.CreditsTransition_Base_C.GetNextCreditText
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               MoveLineNumber                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FString                                      CreditText                                                 (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      DoubleText                                                 (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 * 		bool                                               AtEnd                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCreditsTransition_Base_C::GetNextCreditText(bool MoveLineNumber, class FString* CreditText, class FString* DoubleText, bool* AtEnd)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CreditsTransition_Base.CreditsTransition_Base_C.GetNextCreditText");
		
		UCreditsTransition_Base_C_GetNextCreditText_Params params {};
		params.MoveLineNumber = MoveLineNumber;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CreditText != nullptr)
			*CreditText = params.CreditText;
		if (DoubleText != nullptr)
			*DoubleText = params.DoubleText;
		if (AtEnd != nullptr)
			*AtEnd = params.AtEnd;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function CreditsTransition_Base.CreditsTransition_Base_C.UpdateCredits
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              dT                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCreditsTransition_Base_C::UpdateCredits(float dT)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CreditsTransition_Base.CreditsTransition_Base_C.UpdateCredits");
		
		UCreditsTransition_Base_C_UpdateCredits_Params params {};
		params.dT = dT;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function CreditsTransition_Base.CreditsTransition_Base_C.UpdateToCurrentState
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UCreditsTransition_Base_C::UpdateToCurrentState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CreditsTransition_Base.CreditsTransition_Base_C.UpdateToCurrentState");
		
		UCreditsTransition_Base_C_UpdateToCurrentState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function CreditsTransition_Base.CreditsTransition_Base_C.Update
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              dT                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCreditsTransition_Base_C::Update(float dT)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CreditsTransition_Base.CreditsTransition_Base_C.Update");
		
		UCreditsTransition_Base_C_Update_Params params {};
		params.dT = dT;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function CreditsTransition_Base.CreditsTransition_Base_C.GetNextState
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EGTATransitionState                                CurrentState                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EGTATransitionState                                NextState                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCreditsTransition_Base_C::GetNextState(EGTATransitionState CurrentState, EGTATransitionState* NextState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CreditsTransition_Base.CreditsTransition_Base_C.GetNextState");
		
		UCreditsTransition_Base_C_GetNextState_Params params {};
		params.CurrentState = CurrentState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NextState != nullptr)
			*NextState = params.NextState;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function CreditsTransition_Base.CreditsTransition_Base_C.IsOpaque
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool UCreditsTransition_Base_C::IsOpaque()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CreditsTransition_Base.CreditsTransition_Base_C.IsOpaque");
		
		UCreditsTransition_Base_C_IsOpaque_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function CreditsTransition_Base.CreditsTransition_Base_C.GetCurrentFadeCanvas
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EGTATransitionState                                State                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UCanvasPanel*                                OutCanvas                                                  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCreditsTransition_Base_C::GetCurrentFadeCanvas(EGTATransitionState State, class UCanvasPanel** OutCanvas)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CreditsTransition_Base.CreditsTransition_Base_C.GetCurrentFadeCanvas");
		
		UCreditsTransition_Base_C_GetCurrentFadeCanvas_Params params {};
		params.State = State;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutCanvas != nullptr)
			*OutCanvas = params.OutCanvas;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function CreditsTransition_Base.CreditsTransition_Base_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UCreditsTransition_Base_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CreditsTransition_Base.CreditsTransition_Base_C.Construct");
		
		UCreditsTransition_Base_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function CreditsTransition_Base.CreditsTransition_Base_C.Tick
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCreditsTransition_Base_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CreditsTransition_Base.CreditsTransition_Base_C.Tick");
		
		UCreditsTransition_Base_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function CreditsTransition_Base.CreditsTransition_Base_C.ExecuteUbergraph_CreditsTransition_Base
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCreditsTransition_Base_C::ExecuteUbergraph_CreditsTransition_Base(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CreditsTransition_Base.CreditsTransition_Base_C.ExecuteUbergraph_CreditsTransition_Base");
		
		UCreditsTransition_Base_C_ExecuteUbergraph_CreditsTransition_Base_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCreditsTransition_Base_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCreditsTransition_Base_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass CreditsTransition_Base.CreditsTransition_Base_C");
		return ptr;
	}

}


