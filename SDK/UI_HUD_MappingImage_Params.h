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
	 * Function UI_HUD_MappingImage.UI_HUD_MappingImage_C.GetImage
	 */
	struct UUI_HUD_MappingImage_C_GetImage_Params
	{
	public:
		class UImage*                                              HelpIcon;                                                // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_HUD_MappingImage.UI_HUD_MappingImage_C.PreConstruct
	 */
	struct UUI_HUD_MappingImage_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_HUD_MappingImage.UI_HUD_MappingImage_C.Construct
	 */
	struct UUI_HUD_MappingImage_C_Construct_Params
	{	};

	/**
	 * Function UI_HUD_MappingImage.UI_HUD_MappingImage_C.ExecuteUbergraph_UI_HUD_MappingImage
	 */
	struct UUI_HUD_MappingImage_C_ExecuteUbergraph_UI_HUD_MappingImage_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
