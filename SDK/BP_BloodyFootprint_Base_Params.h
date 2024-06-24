#pragma once

/**
 * Name: GTASA
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
	 * Function BP_BloodyFootprint_Base.BP_BloodyFootprint_Base_C.SetFootprintAlpha
	 */
	struct ABP_BloodyFootprint_Base_C_SetFootprintAlpha_Params
	{
	public:
		int32_t                                                    Mesh_Section;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Alpha;                                                   // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_BloodyFootprint_Base.BP_BloodyFootprint_Base_C.OnFootprintTick
	 */
	struct ABP_BloodyFootprint_Base_C_OnFootprintTick_Params
	{
	public:
		int32_t                                                    MeshSection;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Lifetime;                                                // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_BloodyFootprint_Base.BP_BloodyFootprint_Base_C.OnFootprintAdded
	 */
	struct ABP_BloodyFootprint_Base_C_OnFootprintAdded_Params
	{
	public:
		int32_t                                                    MeshSection;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Alpha;                                                   // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_BloodyFootprint_Base.BP_BloodyFootprint_Base_C.ExecuteUbergraph_BP_BloodyFootprint_Base
	 */
	struct ABP_BloodyFootprint_Base_C_ExecuteUbergraph_BP_BloodyFootprint_Base_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
