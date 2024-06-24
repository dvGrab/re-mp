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
	 * 		Name   -> Function BP_GTASA_Vehicle.BP_GTASA_Vehicle_C.SetLicensePlateDesign
	 * 		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Param                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_GTASA_Vehicle_C::SetLicensePlateDesign(int32_t Param)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GTASA_Vehicle.BP_GTASA_Vehicle_C.SetLicensePlateDesign");
		
		ABP_GTASA_Vehicle_C_SetLicensePlateDesign_Params params {};
		params.Param = Param;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function BP_GTASA_Vehicle.BP_GTASA_Vehicle_C.GetLightMaterials
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            LightIndex                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UMaterialInstanceConstant*                   OnMaterial                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UMaterialInstanceConstant*                   OffMaterial                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UMaterialInterface*                          DimMaterial                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_GTASA_Vehicle_C::GetLightMaterials(int32_t LightIndex, class UMaterialInstanceConstant** OnMaterial, class UMaterialInstanceConstant** OffMaterial, class UMaterialInterface** DimMaterial)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GTASA_Vehicle.BP_GTASA_Vehicle_C.GetLightMaterials");
		
		ABP_GTASA_Vehicle_C_GetLightMaterials_Params params {};
		params.LightIndex = LightIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OnMaterial != nullptr)
			*OnMaterial = params.OnMaterial;
		if (OffMaterial != nullptr)
			*OffMaterial = params.OffMaterial;
		if (DimMaterial != nullptr)
			*DimMaterial = params.DimMaterial;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function BP_GTASA_Vehicle.BP_GTASA_Vehicle_C.GetSearchMaterials
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<class UMaterialInstanceConstant*>           Materials                                                  (Parm, OutParm)
	 */
	void ABP_GTASA_Vehicle_C::GetSearchMaterials(TArray<class UMaterialInstanceConstant*>* Materials)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GTASA_Vehicle.BP_GTASA_Vehicle_C.GetSearchMaterials");
		
		ABP_GTASA_Vehicle_C_GetSearchMaterials_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Materials != nullptr)
			*Materials = params.Materials;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function BP_GTASA_Vehicle.BP_GTASA_Vehicle_C.SetupVehicleBP
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_GTASA_Vehicle_C::SetupVehicleBP()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GTASA_Vehicle.BP_GTASA_Vehicle_C.SetupVehicleBP");
		
		ABP_GTASA_Vehicle_C_SetupVehicleBP_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function BP_GTASA_Vehicle.BP_GTASA_Vehicle_C.ExecuteUbergraph_BP_GTASA_Vehicle
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_GTASA_Vehicle_C::ExecuteUbergraph_BP_GTASA_Vehicle(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GTASA_Vehicle.BP_GTASA_Vehicle_C.ExecuteUbergraph_BP_GTASA_Vehicle");
		
		ABP_GTASA_Vehicle_C_ExecuteUbergraph_BP_GTASA_Vehicle_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_GTASA_Vehicle_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_GTASA_Vehicle_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_GTASA_Vehicle.BP_GTASA_Vehicle_C");
		return ptr;
	}

}


