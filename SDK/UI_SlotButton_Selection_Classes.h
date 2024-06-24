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
	// # Classes
	// --------------------------------------------------
	/**
	 * WidgetBlueprintGeneratedClass UI_SlotButton_Selection.UI_SlotButton_Selection_C
	 * Size -> 0x0130 (FullSize[0x0708] - InheritedSize[0x05D8])
	 */
	class UUI_SlotButton_Selection_C : public UUI_SlotButton_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x05D8(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		class UButton*                                             BackButton;                                              // 0x05E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              BackImage;                                               // 0x05E8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UScaleBox*                                           BackImageScaleBox;                                       // 0x05F0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             ForwardButton;                                           // 0x05F8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              ForwardImage;                                            // 0x0600(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UScaleBox*                                           ForwardImageScaleBox;                                    // 0x0608(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Image;                                                   // 0x0610(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USizeBox*                                            MainSizeBox;                                             // 0x0618(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          OptionNameText;                                          // 0x0620(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          SelectionText;                                           // 0x0628(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             SlotButton;                                              // 0x0630(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		TArray<class FText>                                        SelectionNames;                                          // 0x0638(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		int32_t                                                    SelectedElement;                                         // 0x0648(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_N3XZ[0x4];                                   // 0x064C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FText>                                        BoolSelection;                                           // 0x0650(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		struct FSlateBrush                                         ArrowBrush;                                              // 0x0660(0x0088) Edit, BlueprintVisible
		bool                                                       ShouldArrowColorMatchText;                               // 0x06E8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_I3CT[0x3];                                   // 0x06E9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FLinearColor                                        ArrowColorOverride;                                      // 0x06EC(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IgnoreSettings;                                          // 0x06FC(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       IsBackButtonSelected;                                    // 0x06FD(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsForwardButtonSelected;                                 // 0x06FE(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_T08K[0x1];                                   // 0x06FF(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      LeftRightImagePaddingDefault;                            // 0x0700(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      LeftRightImagePaddingHovered;                            // 0x0704(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		struct FEventReply OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
		void GetEntriesForEmptySelection(const class FName& EntryName);
		void ShouldShowConfirmation(bool IgnoreCurrentFocus, bool* DoConfirm);
		void UpdateSettingForConfirmation();
		void GetCurrentSettingText(class FText* NewParam);
		void InitSelectionStyle();
		class UWidget* NavigateRight(EUINavigation Navigation);
		class UWidget* NavigateLeft(EUINavigation Navigation);
		void SetHeight(float NewHeight);
		void GetSlotButton(class UButton** SlotButton);
		void UpdateTextColor();
		void UpdateSettings(bool OverrideConfirmationLockout);
		void ToNumSelection(int32_t SelectionValue);
		void PreviousSelection();
		void NextSelection();
		void InitSlotButton(class UGameterSettings* SettingsObject);
		void SetBackgroundColor(const struct FSlateColor& InColor);
		void UpdateBGColor();
		void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
		void BndEvt__ForwardButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
		void OnSynchronizeProperties();
		void Construct();
		void BndEvt__BackButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__BackButton_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature();
		void BndEvt__ForwardButton_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature();
		void BndEvt__BackButton_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature();
		void BndEvt__ForwardButton_K2Node_ComponentBoundEvent_5_OnButtonReleasedEvent__DelegateSignature();
		void InteractedWithSelectionSlot(unsigned char InteractionType, int32_t BoundValue, class UUI_SlotButton_C* ButtonSentFrom);
		void BndEvt__SlotButton_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__BackButton_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__BackButton_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__ForwardButton_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__ForwardButton_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature();
		void ExecuteUbergraph_UI_SlotButton_Selection(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
