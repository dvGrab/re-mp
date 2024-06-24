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
	 * 		Name   -> Function BP_GTASA_Vehicle_Police_Bike.BP_GTASA_Vehicle_Police_Bike_C.GetSpecialLightMaterial
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UMaterialInstanceConstant*                   On_Mat                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UMaterialInstanceConstant*                   Off_Mat                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_GTASA_Vehicle_Police_Bike_C::GetSpecialLightMaterial(int32_t Index, class UMaterialInstanceConstant** On_Mat, class UMaterialInstanceConstant** Off_Mat)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GTASA_Vehicle_Police_Bike.BP_GTASA_Vehicle_Police_Bike_C.GetSpecialLightMaterial");
		
		ABP_GTASA_Vehicle_Police_Bike_C_GetSpecialLightMaterial_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (On_Mat != nullptr)
			*On_Mat = params.On_Mat;
		if (Off_Mat != nullptr)
			*Off_Mat = params.Off_Mat;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0BD20
	 * 		Name   -> Function BP_GTASA_Vehicle_Police_Bike.BP_GTASA_Vehicle_Police_Bike_C.GetSirenClass
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               Left                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UClass*                                      LightClass                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        Socket                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_GTASA_Vehicle_Police_Bike_C::GetSirenClass(bool Left, class UClass** LightClass, class FName* Socket)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GTASA_Vehicle_Police_Bike.BP_GTASA_Vehicle_Police_Bike_C.GetSirenClass");
		
		ABP_GTASA_Vehicle_Police_Bike_C_GetSirenClass_Params params {};
		params.Left = Left;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (LightClass != nullptr)
			*LightClass = params.LightClass;
		if (Socket != nullptr)
			*Socket = params.Socket;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_GTASA_Vehicle_Police_Bike_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_GTASA_Vehicle_Police_Bike_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_GTASA_Vehicle_Police_Bike.BP_GTASA_Vehicle_Police_Bike_C");
		return ptr;
	}

}


