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
	 * 		Name   -> Function BP_Weapon_Base.BP_Weapon_Base_C.ReceiveTick
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Weapon_Base_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Weapon_Base.BP_Weapon_Base_C.ReceiveTick");
		
		ABP_Weapon_Base_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function BP_Weapon_Base.BP_Weapon_Base_C.AddSpin
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class AGTAWeapon*                                  srcWeapon                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Weapon_Base_C::AddSpin(class AGTAWeapon* srcWeapon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Weapon_Base.BP_Weapon_Base_C.AddSpin");
		
		ABP_Weapon_Base_C_AddSpin_Params params {};
		params.srcWeapon = srcWeapon;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function BP_Weapon_Base.BP_Weapon_Base_C.StopSpin
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void ABP_Weapon_Base_C::StopSpin()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Weapon_Base.BP_Weapon_Base_C.StopSpin");
		
		ABP_Weapon_Base_C_StopSpin_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function BP_Weapon_Base.BP_Weapon_Base_C.ExecuteUbergraph_BP_Weapon_Base
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Weapon_Base_C::ExecuteUbergraph_BP_Weapon_Base(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Weapon_Base.BP_Weapon_Base_C.ExecuteUbergraph_BP_Weapon_Base");
		
		ABP_Weapon_Base_C_ExecuteUbergraph_BP_Weapon_Base_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Weapon_Base_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Weapon_Base_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Weapon_Base.BP_Weapon_Base_C");
		return ptr;
	}

}


