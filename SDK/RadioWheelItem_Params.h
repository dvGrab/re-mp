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
	 * Function RadioWheelItem.RadioWheelItem_C.SetSelected
	 */
	struct URadioWheelItem_C_SetSelected_Params
	{
	public:
		bool                                                       IsSelected;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RadioWheelItem.RadioWheelItem_C.IsImageHidden
	 */
	struct URadioWheelItem_C_IsImageHidden_Params
	{
	public:
		bool                                                       IsHidden;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RadioWheelItem.RadioWheelItem_C.HideImage
	 */
	struct URadioWheelItem_C_HideImage_Params
	{	};

	/**
	 * Function RadioWheelItem.RadioWheelItem_C.SetImage
	 */
	struct URadioWheelItem_C_SetImage_Params
	{
	public:
		class UTexture2D*                                          Texture;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function RadioWheelItem.RadioWheelItem_C.SetText
	 */
	struct URadioWheelItem_C_SetText_Params
	{
	public:
		class FString                                              NewString;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
