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
	 * Function UI_HUD_Text_Bar_SA.UI_HUD_Text_Bar_SA_C.SetStatName
	 */
	struct UUI_HUD_Text_Bar_SA_C_SetStatName_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function UI_HUD_Text_Bar_SA.UI_HUD_Text_Bar_SA_C.SetBarPercent
	 */
	struct UUI_HUD_Text_Bar_SA_C_SetBarPercent_Params
	{
	public:
		float                                                      Percent;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_HUD_Text_Bar_SA.UI_HUD_Text_Bar_SA_C.Construct
	 */
	struct UUI_HUD_Text_Bar_SA_C_Construct_Params
	{	};

	/**
	 * Function UI_HUD_Text_Bar_SA.UI_HUD_Text_Bar_SA_C.ExecuteUbergraph_UI_HUD_Text_Bar_SA
	 */
	struct UUI_HUD_Text_Bar_SA_C_ExecuteUbergraph_UI_HUD_Text_Bar_SA_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
