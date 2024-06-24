/**
 * Name: GTA-SA-DEF
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
	 * 		Name   -> Function BP_TrafficLight_Base.BP_TrafficLight_Base_C.SetWalkLight
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            withState                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_TrafficLight_Base_C::SetWalkLight(int32_t withState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TrafficLight_Base.BP_TrafficLight_Base_C.SetWalkLight");
		
		ABP_TrafficLight_Base_C_SetWalkLight_Params params {};
		params.withState = withState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function BP_TrafficLight_Base.BP_TrafficLight_Base_C.SetTrafficLight
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            withState                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_TrafficLight_Base_C::SetTrafficLight(int32_t withState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TrafficLight_Base.BP_TrafficLight_Base_C.SetTrafficLight");
		
		ABP_TrafficLight_Base_C_SetTrafficLight_Params params {};
		params.withState = withState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function BP_TrafficLight_Base.BP_TrafficLight_Base_C.RegisterTrafficCorona
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        SocketName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        SocketName2                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FLinearColor                                CoronaColor                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_TrafficLight_Base_C::RegisterTrafficCorona(const class FName& SocketName, const class FName& SocketName2, const struct FLinearColor& CoronaColor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TrafficLight_Base.BP_TrafficLight_Base_C.RegisterTrafficCorona");
		
		ABP_TrafficLight_Base_C_RegisterTrafficCorona_Params params {};
		params.SocketName = SocketName;
		params.SocketName2 = SocketName2;
		params.CoronaColor = CoronaColor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function BP_TrafficLight_Base.BP_TrafficLight_Base_C.UnregisterTrafficCorona
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_TrafficLight_Base_C::UnregisterTrafficCorona()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TrafficLight_Base.BP_TrafficLight_Base_C.UnregisterTrafficCorona");
		
		ABP_TrafficLight_Base_C_UnregisterTrafficCorona_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function BP_TrafficLight_Base.BP_TrafficLight_Base_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_TrafficLight_Base_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TrafficLight_Base.BP_TrafficLight_Base_C.UserConstructionScript");
		
		ABP_TrafficLight_Base_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function BP_TrafficLight_Base.BP_TrafficLight_Base_C.ReceiveEndPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		EEndPlayReason                                     EndPlayReason                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_TrafficLight_Base_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TrafficLight_Base.BP_TrafficLight_Base_C.ReceiveEndPlay");
		
		ABP_TrafficLight_Base_C_ReceiveEndPlay_Params params {};
		params.EndPlayReason = EndPlayReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function BP_TrafficLight_Base.BP_TrafficLight_Base_C.ExecuteUbergraph_BP_TrafficLight_Base
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_TrafficLight_Base_C::ExecuteUbergraph_BP_TrafficLight_Base(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TrafficLight_Base.BP_TrafficLight_Base_C.ExecuteUbergraph_BP_TrafficLight_Base");
		
		ABP_TrafficLight_Base_C_ExecuteUbergraph_BP_TrafficLight_Base_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_TrafficLight_Base_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_TrafficLight_Base_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_TrafficLight_Base.BP_TrafficLight_Base_C");
		return ptr;
	}

}


