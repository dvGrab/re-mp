﻿#pragma once

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
	 * Function SimpleControllerMappingText.SimpleControllerMappingText_C.SetTextColor
	 */
	struct USimpleControllerMappingText_C_SetTextColor_Params
	{
	public:
		struct FSlateColor                                         InColorAndOpacity;                                       // 0x0000(0x0028)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function SimpleControllerMappingText.SimpleControllerMappingText_C.SetAlignment
	 */
	struct USimpleControllerMappingText_C_SetAlignment_Params
	{
	public:
		EHorizontalAlignment                                       HorizontalAlignment;                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EVerticalAlignment                                         VerticalAlignment;                                       // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EControllerButtonIDDefinitions                             ControllerButton;                                        // 0x0002(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_KH52[0x5];                                   // 0x0003(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function SimpleControllerMappingText.SimpleControllerMappingText_C.SetTextFont
	 */
	struct USimpleControllerMappingText_C_SetTextFont_Params
	{
	public:
		struct FSlateFontInfo                                      InFontInfo;                                              // 0x0000(0x0058)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function SimpleControllerMappingText.SimpleControllerMappingText_C.SetTextValue
	 */
	struct USimpleControllerMappingText_C_SetTextValue_Params
	{
	public:
		class FText                                                NewText;                                                 // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function SimpleControllerMappingText.SimpleControllerMappingText_C.Construct
	 */
	struct USimpleControllerMappingText_C_Construct_Params
	{	};

	/**
	 * Function SimpleControllerMappingText.SimpleControllerMappingText_C.OnSynchronizeProperties
	 */
	struct USimpleControllerMappingText_C_OnSynchronizeProperties_Params
	{	};

	/**
	 * Function SimpleControllerMappingText.SimpleControllerMappingText_C.ExecuteUbergraph_SimpleControllerMappingText
	 */
	struct USimpleControllerMappingText_C_ExecuteUbergraph_SimpleControllerMappingText_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
