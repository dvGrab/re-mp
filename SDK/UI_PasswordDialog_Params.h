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
	 * Function UI_PasswordDialog.UI_PasswordDialog_C.CreateIncorrectPassDialog
	 */
	struct UUI_PasswordDialog_C_CreateIncorrectPassDialog_Params
	{
	public:
		class UConfirmationDialog_C*                               ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_PasswordDialog.UI_PasswordDialog_C.OnPreviewKeyDown
	 */
	struct UUI_PasswordDialog_C_OnPreviewKeyDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UI_PasswordDialog.UI_PasswordDialog_C.OnKeyDown
	 */
	struct UUI_PasswordDialog_C_OnKeyDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UI_PasswordDialog.UI_PasswordDialog_C.SetNavigationRules
	 */
	struct UUI_PasswordDialog_C_SetNavigationRules_Params
	{	};

	/**
	 * Function UI_PasswordDialog.UI_PasswordDialog_C.OnMouseMove
	 */
	struct UUI_PasswordDialog_C_OnMouseMove_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FEventReply                                         ReturnValue;                                             // 0x00A8(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UI_PasswordDialog.UI_PasswordDialog_C.ButtonFocusUpdate
	 */
	struct UUI_PasswordDialog_C_ButtonFocusUpdate_Params
	{
	public:
		bool                                                       DidInputTypeJustChange;                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_S83Q[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_PasswordDialog.UI_PasswordDialog_C.InitFocus
	 */
	struct UUI_PasswordDialog_C_InitFocus_Params
	{	};

	/**
	 * Function UI_PasswordDialog.UI_PasswordDialog_C.CheckLastInputType
	 */
	struct UUI_PasswordDialog_C_CheckLastInputType_Params
	{
	public:
		bool                                                       DidJustChange;                                           // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_OYHT[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_PasswordDialog.UI_PasswordDialog_C.OnAnalogValueChanged
	 */
	struct UUI_PasswordDialog_C_OnAnalogValueChanged_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FAnalogInputEvent                                   InAnalogInputEvent;                                      // 0x0038(0x0040)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0078(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UI_PasswordDialog.UI_PasswordDialog_C.GrabFocus
	 */
	struct UUI_PasswordDialog_C_GrabFocus_Params
	{	};

	/**
	 * Function UI_PasswordDialog.UI_PasswordDialog_C.Construct
	 */
	struct UUI_PasswordDialog_C_Construct_Params
	{	};

	/**
	 * Function UI_PasswordDialog.UI_PasswordDialog_C.Tick
	 */
	struct UUI_PasswordDialog_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_PasswordDialog.UI_PasswordDialog_C.Cleanup
	 */
	struct UUI_PasswordDialog_C_Cleanup_Params
	{
	public:
		class FString                                              OutPass;                                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_PasswordDialog.UI_PasswordDialog_C.BndEvt__ClearButton_K2Node_ComponentBoundEvent_2_ButtonDispatcher__DelegateSignature
	 */
	struct UUI_PasswordDialog_C_BndEvt__ClearButton_K2Node_ComponentBoundEvent_2_ButtonDispatcher__DelegateSignature_Params
	{
	public:
		unsigned char                                              Interaction;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_FO52[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    BoundValue;                                              // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_PasswordDialog.UI_PasswordDialog_C.BndEvt__EnterButton_K2Node_ComponentBoundEvent_3_ButtonDispatcher__DelegateSignature
	 */
	struct UUI_PasswordDialog_C_BndEvt__EnterButton_K2Node_ComponentBoundEvent_3_ButtonDispatcher__DelegateSignature_Params
	{
	public:
		unsigned char                                              Interaction;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_PFQC[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    BoundValue;                                              // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_PasswordDialog.UI_PasswordDialog_C.IncorrectPassDialog
	 */
	struct UUI_PasswordDialog_C_IncorrectPassDialog_Params
	{	};

	/**
	 * Function UI_PasswordDialog.UI_PasswordDialog_C.CustomEvent_1
	 */
	struct UUI_PasswordDialog_C_CustomEvent_1_Params
	{
	public:
		bool                                                       DidAccept;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_PasswordDialog.UI_PasswordDialog_C.ExecuteUbergraph_UI_PasswordDialog
	 */
	struct UUI_PasswordDialog_C_ExecuteUbergraph_UI_PasswordDialog_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_L55Y[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_PasswordDialog.UI_PasswordDialog_C.PasswordSent__DelegateSignature
	 */
	struct UUI_PasswordDialog_C_PasswordSent__DelegateSignature_Params
	{
	public:
		class FString                                              OutPass;                                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
