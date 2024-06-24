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
	 * 		Name   -> Function BP_Pickup_SanAndreas.BP_Pickup_SanAndreas_C.GetMeshOverrideData
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UStaticMesh*                                 Mesh                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Found                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FColor                                      lightColor                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              LightAttenuationRadius                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Pickup_SanAndreas_C::GetMeshOverrideData(class UStaticMesh* Mesh, bool* Found, struct FColor* lightColor, float* LightAttenuationRadius)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Pickup_SanAndreas.BP_Pickup_SanAndreas_C.GetMeshOverrideData");
		
		ABP_Pickup_SanAndreas_C_GetMeshOverrideData_Params params {};
		params.Mesh = Mesh;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Found != nullptr)
			*Found = params.Found;
		if (lightColor != nullptr)
			*lightColor = params.lightColor;
		if (LightAttenuationRadius != nullptr)
			*LightAttenuationRadius = params.LightAttenuationRadius;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Pickup_SanAndreas_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Pickup_SanAndreas_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Pickup_SanAndreas.BP_Pickup_SanAndreas_C");
		return ptr;
	}

}


