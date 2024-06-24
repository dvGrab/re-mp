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
	 * Function DoubleCreditBox.DoubleCreditBox_C.SetTextValues
	 */
	struct UDoubleCreditBox_C_SetTextValues_Params
	{
	public:
		class FText                                                Text1;                                                   // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class FText                                                Text2;                                                   // 0x0018(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FSlateFontInfo                                      Font;                                                    // 0x0030(0x0058)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function DoubleCreditBox.DoubleCreditBox_C.Construct
	 */
	struct UDoubleCreditBox_C_Construct_Params
	{	};

	/**
	 * Function DoubleCreditBox.DoubleCreditBox_C.DelayedTextAdd
	 */
	struct UDoubleCreditBox_C_DelayedTextAdd_Params
	{
	public:
		class FText                                                Text1;                                                   // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class FText                                                Text2;                                                   // 0x0018(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FSlateFontInfo                                      Font;                                                    // 0x0030(0x0058)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function DoubleCreditBox.DoubleCreditBox_C.ExecuteUbergraph_DoubleCreditBox
	 */
	struct UDoubleCreditBox_C_ExecuteUbergraph_DoubleCreditBox_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_TNTY[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
