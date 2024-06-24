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
	 * Function HUDItem_SC_ToastBase.HUDItem_SC_ToastBase_C.CustomFunctionWithObject
	 */
	struct UHUDItem_SC_ToastBase_C_CustomFunctionWithObject_Params
	{
	public:
		class FString                                              FunctionName;                                            // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class UObject*                                             Object;                                                  // 0x0010(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUDItem_SC_ToastBase.HUDItem_SC_ToastBase_C.SetContentText
	 */
	struct UHUDItem_SC_ToastBase_C_SetContentText_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FLinearColor                                        FontColorOverride;                                       // 0x0018(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUDItem_SC_ToastBase.HUDItem_SC_ToastBase_C.CustomFunction
	 */
	struct UHUDItem_SC_ToastBase_C_CustomFunction_Params
	{
	public:
		class FString                                              FunctionName;                                            // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUDItem_SC_ToastBase.HUDItem_SC_ToastBase_C.ExecuteUbergraph_HUDItem_SC_ToastBase
	 */
	struct UHUDItem_SC_ToastBase_C_ExecuteUbergraph_HUDItem_SC_ToastBase_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_CUDI[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
