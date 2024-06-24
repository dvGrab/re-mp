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
	 * 		Name   -> Function BP_lamppost1.BP_lamppost1_C.SetupBreakableInGTA
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool ABP_lamppost1_C::SetupBreakableInGTA()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_lamppost1.BP_lamppost1_C.SetupBreakableInGTA");
		
		ABP_lamppost1_C_SetupBreakableInGTA_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function BP_lamppost1.BP_lamppost1_C.GetPhysicsFloor
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class UStaticMeshComponent*                        Floor                                                      (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_lamppost1_C::GetPhysicsFloor(class UStaticMeshComponent** Floor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_lamppost1.BP_lamppost1_C.GetPhysicsFloor");
		
		ABP_lamppost1_C_GetPhysicsFloor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Floor != nullptr)
			*Floor = params.Floor;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function BP_lamppost1.BP_lamppost1_C.GetBrokenMesh
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class USkeletalMeshComponent*                      BrokenMesh                                                 (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_lamppost1_C::GetBrokenMesh(class USkeletalMeshComponent** BrokenMesh)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_lamppost1.BP_lamppost1_C.GetBrokenMesh");
		
		ABP_lamppost1_C_GetBrokenMesh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (BrokenMesh != nullptr)
			*BrokenMesh = params.BrokenMesh;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_lamppost1_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_lamppost1_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_lamppost1.BP_lamppost1_C");
		return ptr;
	}

}


