#pragma once

/**
 * Name: GTA-SA-DEF
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
	 * Function BP_GTASA_Vehicle.BP_GTASA_Vehicle_C.SetLicensePlateDesign
	 */
	struct ABP_GTASA_Vehicle_C_SetLicensePlateDesign_Params
	{
	public:
		int32_t                                                    Param;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_GTASA_Vehicle.BP_GTASA_Vehicle_C.GetLightMaterials
	 */
	struct ABP_GTASA_Vehicle_C_GetLightMaterials_Params
	{
	public:
		int32_t                                                    LightIndex;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_867M[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UMaterialInstanceConstant*                           OnMaterial;                                              // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UMaterialInstanceConstant*                           OffMaterial;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UMaterialInterface*                                  DimMaterial;                                             // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_GTASA_Vehicle.BP_GTASA_Vehicle_C.GetSearchMaterials
	 */
	struct ABP_GTASA_Vehicle_C_GetSearchMaterials_Params
	{
	public:
		TArray<class UMaterialInstanceConstant*>                   Materials;                                               // 0x0000(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function BP_GTASA_Vehicle.BP_GTASA_Vehicle_C.SetupVehicleBP
	 */
	struct ABP_GTASA_Vehicle_C_SetupVehicleBP_Params
	{	};

	/**
	 * Function BP_GTASA_Vehicle.BP_GTASA_Vehicle_C.ExecuteUbergraph_BP_GTASA_Vehicle
	 */
	struct ABP_GTASA_Vehicle_C_ExecuteUbergraph_BP_GTASA_Vehicle_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_TE2P[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
