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
	 * Function UI_HUD_RadioWheel_Base.UI_HUD_RadioWheel_Base_C.GetWeaponWheelItemOffset
	 */
	struct UUI_HUD_RadioWheel_Base_C_GetWeaponWheelItemOffset_Params
	{
	public:
		float                                                      NewParam;                                                // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_HUD_RadioWheel_Base.UI_HUD_RadioWheel_Base_C.GetRadioWheelItemOffset
	 */
	struct UUI_HUD_RadioWheel_Base_C_GetRadioWheelItemOffset_Params
	{
	public:
		float                                                      NewParam;                                                // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_HUD_RadioWheel_Base.UI_HUD_RadioWheel_Base_C.SetupSections
	 */
	struct UUI_HUD_RadioWheel_Base_C_SetupSections_Params
	{
	public:
		int32_t                                                    NumSections;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_HUD_RadioWheel_Base.UI_HUD_RadioWheel_Base_C.AddTextToImages
	 */
	struct UUI_HUD_RadioWheel_Base_C_AddTextToImages_Params
	{
	public:
		TArray<class FString>                                      Array;                                                   // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function UI_HUD_RadioWheel_Base.UI_HUD_RadioWheel_Base_C.SetupImages
	 */
	struct UUI_HUD_RadioWheel_Base_C_SetupImages_Params
	{
	public:
		TArray<struct FSlotImageStruct>                            Images;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function UI_HUD_RadioWheel_Base.UI_HUD_RadioWheel_Base_C.SetSelection
	 */
	struct UUI_HUD_RadioWheel_Base_C_SetSelection_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_HUD_RadioWheel_Base.UI_HUD_RadioWheel_Base_C.PreConstruct
	 */
	struct UUI_HUD_RadioWheel_Base_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_HUD_RadioWheel_Base.UI_HUD_RadioWheel_Base_C.Construct
	 */
	struct UUI_HUD_RadioWheel_Base_C_Construct_Params
	{	};

	/**
	 * Function UI_HUD_RadioWheel_Base.UI_HUD_RadioWheel_Base_C.ExecuteUbergraph_UI_HUD_RadioWheel_Base
	 */
	struct UUI_HUD_RadioWheel_Base_C_ExecuteUbergraph_UI_HUD_RadioWheel_Base_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
