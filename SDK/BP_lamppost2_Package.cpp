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
	 * 		Name   -> Function BP_lamppost2.BP_lamppost2_C.SetupBreakableInGTA
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool ABP_lamppost2_C::SetupBreakableInGTA()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_lamppost2.BP_lamppost2_C.SetupBreakableInGTA");
		
		ABP_lamppost2_C_SetupBreakableInGTA_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function BP_lamppost2.BP_lamppost2_C.GetBrokenMesh
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class USkeletalMeshComponent*                      BrokenMesh                                                 (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_lamppost2_C::GetBrokenMesh(class USkeletalMeshComponent** BrokenMesh)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_lamppost2.BP_lamppost2_C.GetBrokenMesh");
		
		ABP_lamppost2_C_GetBrokenMesh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (BrokenMesh != nullptr)
			*BrokenMesh = params.BrokenMesh;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function BP_lamppost2.BP_lamppost2_C.GetPhysicsFloor
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class UStaticMeshComponent*                        Floor                                                      (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_lamppost2_C::GetPhysicsFloor(class UStaticMeshComponent** Floor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_lamppost2.BP_lamppost2_C.GetPhysicsFloor");
		
		ABP_lamppost2_C_GetPhysicsFloor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Floor != nullptr)
			*Floor = params.Floor;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function BP_lamppost2.BP_lamppost2_C.GetLights
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		TArray<class ULocalLightComponent*>                Light                                                      (Parm, OutParm, ContainsInstancedReference)
	 */
	void ABP_lamppost2_C::GetLights(TArray<class ULocalLightComponent*>* Light)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_lamppost2.BP_lamppost2_C.GetLights");
		
		ABP_lamppost2_C_GetLights_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Light != nullptr)
			*Light = params.Light;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_lamppost2_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_lamppost2_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_lamppost2.BP_lamppost2_C");
		return ptr;
	}

}


