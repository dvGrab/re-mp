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
	 * Function ControllerUI_Base.ControllerUI_Base_C.SetFontColors
	 */
	struct UControllerUI_Base_C_SetFontColors_Params
	{
	public:
		struct FSlateColor                                         NormalColor;                                             // 0x0000(0x0028)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FSlateColor                                         SelectedColor;                                           // 0x0028(0x0028)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function ControllerUI_Base.ControllerUI_Base_C.GetCurrentToggleTextType
	 */
	struct UControllerUI_Base_C_GetCurrentToggleTextType_Params
	{
	public:
		int32_t                                                    CurrentType;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ControllerUI_Base.ControllerUI_Base_C.GetToggleValueTexts
	 */
	struct UControllerUI_Base_C_GetToggleValueTexts_Params
	{
	public:
		TArray<class FText>                                        FullTextValues;                                          // 0x0000(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function ControllerUI_Base.ControllerUI_Base_C.PlayInteractSound
	 */
	struct UControllerUI_Base_C_PlayInteractSound_Params
	{	};

	/**
	 * Function ControllerUI_Base.ControllerUI_Base_C.SetBackgroundColors
	 */
	struct UControllerUI_Base_C_SetBackgroundColors_Params
	{
	public:
		struct FSlateColor                                         NormalColor;                                             // 0x0000(0x0028)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FSlateColor                                         SelectedColor;                                           // 0x0028(0x0028)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function ControllerUI_Base.ControllerUI_Base_C.UpdateTextAndBackgroundColors
	 */
	struct UControllerUI_Base_C_UpdateTextAndBackgroundColors_Params
	{	};

	/**
	 * Function ControllerUI_Base.ControllerUI_Base_C.SetupNavigation
	 */
	struct UControllerUI_Base_C_SetupNavigation_Params
	{
	public:
		class UWidget*                                             Up;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UWidget*                                             Down;                                                    // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ControllerUI_Base.ControllerUI_Base_C.CreateButtonValues
	 */
	struct UControllerUI_Base_C_CreateButtonValues_Params
	{	};

	/**
	 * Function ControllerUI_Base.ControllerUI_Base_C.Set Toggle Value
	 */
	struct UControllerUI_Base_C_Set_Toggle_Value_Params
	{
	public:
		int32_t                                                    NewValue;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ControllerUI_Base.ControllerUI_Base_C.OnToggleNext
	 */
	struct UControllerUI_Base_C_OnToggleNext_Params
	{
	public:
		EUINavigation                                              Navigation;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_MWNC[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UWidget*                                             ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ControllerUI_Base.ControllerUI_Base_C.OnTogglePrevious
	 */
	struct UControllerUI_Base_C_OnTogglePrevious_Params
	{
	public:
		EUINavigation                                              Navigation;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_V0IA[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UWidget*                                             ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ControllerUI_Base.ControllerUI_Base_C.GetToggleButton
	 */
	struct UControllerUI_Base_C_GetToggleButton_Params
	{
	public:
		class UButton*                                             ToggleButton;                                            // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ControllerUI_Base.ControllerUI_Base_C.GetCorrectedButtonValueForC++
	 */
	struct UControllerUI_Base_C_GetCorrectedButtonValueForC_Params
	{
	public:
		EControllerButtonIDDefinitions                             InValue;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_8X25[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    C_Value;                                                 // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ControllerUI_Base.ControllerUI_Base_C.SetupControllerText
	 */
	struct UControllerUI_Base_C_SetupControllerText_Params
	{	};

	/**
	 * Function ControllerUI_Base.ControllerUI_Base_C.GetMappingObjects
	 */
	struct UControllerUI_Base_C_GetMappingObjects_Params
	{
	public:
		TArray<class USimpleControllerMappingText_C*>              ReturnArray1;                                            // 0x0000(0x0010)  (Parm, OutParm, ContainsInstancedReference)
	};

	/**
	 * Function ControllerUI_Base.ControllerUI_Base_C.Create Mapping Text
	 */
	struct UControllerUI_Base_C_Create_Mapping_Text_Params
	{
	public:
		struct FControllerButtonLayout                             ControllerButtonLayout;                                  // 0x0000(0x0028)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    ArrayIndex;                                              // 0x0028(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_UVIK[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class USimpleControllerMappingText_C*                      ReturnValue;                                             // 0x0030(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ControllerUI_Base.ControllerUI_Base_C.Construct
	 */
	struct UControllerUI_Base_C_Construct_Params
	{	};

	/**
	 * Function ControllerUI_Base.ControllerUI_Base_C.Tick
	 */
	struct UControllerUI_Base_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ControllerUI_Base.ControllerUI_Base_C.OnSynchronizeProperties
	 */
	struct UControllerUI_Base_C_OnSynchronizeProperties_Params
	{	};

	/**
	 * Function ControllerUI_Base.ControllerUI_Base_C.BndEvt__ToggleButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UControllerUI_Base_C_BndEvt__ToggleButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function ControllerUI_Base.ControllerUI_Base_C.PreConstruct
	 */
	struct UControllerUI_Base_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ControllerUI_Base.ControllerUI_Base_C.ExecuteUbergraph_ControllerUI_Base
	 */
	struct UControllerUI_Base_C_ExecuteUbergraph_ControllerUI_Base_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
