﻿/**
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
	 * 		Name   -> Function LegalScreen_Stinger.LegalScreen_Stinger_C.UpdateBlockingImage
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ULegalScreen_Stinger_C::UpdateBlockingImage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LegalScreen_Stinger.LegalScreen_Stinger_C.UpdateBlockingImage");
		
		ULegalScreen_Stinger_C_UpdateBlockingImage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function LegalScreen_Stinger.LegalScreen_Stinger_C.StartMovie
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ULegalScreen_Stinger_C::StartMovie()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LegalScreen_Stinger.LegalScreen_Stinger_C.StartMovie");
		
		ULegalScreen_Stinger_C_StartMovie_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function LegalScreen_Stinger.LegalScreen_Stinger_C.skip to end
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ULegalScreen_Stinger_C::skip_to_end()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LegalScreen_Stinger.LegalScreen_Stinger_C.skip to end");
		
		ULegalScreen_Stinger_C_skip_to_end_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function LegalScreen_Stinger.LegalScreen_Stinger_C.IsPlayingMovie
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool ULegalScreen_Stinger_C::IsPlayingMovie()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LegalScreen_Stinger.LegalScreen_Stinger_C.IsPlayingMovie");
		
		ULegalScreen_Stinger_C_IsPlayingMovie_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function LegalScreen_Stinger.LegalScreen_Stinger_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void ULegalScreen_Stinger_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LegalScreen_Stinger.LegalScreen_Stinger_C.Construct");
		
		ULegalScreen_Stinger_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function LegalScreen_Stinger.LegalScreen_Stinger_C.Tick
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULegalScreen_Stinger_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LegalScreen_Stinger.LegalScreen_Stinger_C.Tick");
		
		ULegalScreen_Stinger_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function LegalScreen_Stinger.LegalScreen_Stinger_C.Destruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void ULegalScreen_Stinger_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LegalScreen_Stinger.LegalScreen_Stinger_C.Destruct");
		
		ULegalScreen_Stinger_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function LegalScreen_Stinger.LegalScreen_Stinger_C.ExecuteUbergraph_LegalScreen_Stinger
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULegalScreen_Stinger_C::ExecuteUbergraph_LegalScreen_Stinger(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LegalScreen_Stinger.LegalScreen_Stinger_C.ExecuteUbergraph_LegalScreen_Stinger");
		
		ULegalScreen_Stinger_C_ExecuteUbergraph_LegalScreen_Stinger_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULegalScreen_Stinger_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULegalScreen_Stinger_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass LegalScreen_Stinger.LegalScreen_Stinger_C");
		return ptr;
	}

}


