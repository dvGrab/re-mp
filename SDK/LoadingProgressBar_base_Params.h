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
	 * Function LoadingProgressBar_base.LoadingProgressBar_base_C.PreConstruct
	 */
	struct ULoadingProgressBar_base_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LoadingProgressBar_base.LoadingProgressBar_base_C.Construct
	 */
	struct ULoadingProgressBar_base_C_Construct_Params
	{	};

	/**
	 * Function LoadingProgressBar_base.LoadingProgressBar_base_C.Tick
	 */
	struct ULoadingProgressBar_base_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LoadingProgressBar_base.LoadingProgressBar_base_C.SetProgress
	 */
	struct ULoadingProgressBar_base_C_SetProgress_Params
	{
	public:
		float                                                      Progress;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LoadingProgressBar_base.LoadingProgressBar_base_C.ExecuteUbergraph_LoadingProgressBar_base
	 */
	struct ULoadingProgressBar_base_C_ExecuteUbergraph_LoadingProgressBar_base_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
