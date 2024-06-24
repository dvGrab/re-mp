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
	 * WidgetBlueprintGeneratedClass UI_SlotButton.UI_SlotButton_C
	 * Size -> 0x0348 (FullSize[0x05D8] - InheritedSize[0x0290])
	 */
	class UUI_SlotButton_C : public UUI_DesignTimeUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0290(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		struct FGTAOptionsItemTemplate                             Options;                                                 // 0x0298(0x0090) Edit, BlueprintVisible
		int32_t                                                    FunctionBindNum;                                         // 0x0328(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_4BVM[0x4];                                   // 0x032C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             SlotDispatcher;                                          // 0x0330(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       IsSelected;                                              // 0x0340(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_V7B2[0x7];                                   // 0x0341(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              ParentScrollingSLot[0x28];                               // 0x0348(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		struct FSlateColor                                         TextColor;                                               // 0x0370(0x0028) Edit, BlueprintVisible
		struct FSlateColor                                         SelectedTextColor;                                       // 0x0398(0x0028) Edit, BlueprintVisible
		struct FSlateColor                                         NormalBGColor;                                           // 0x03C0(0x0028) Edit, BlueprintVisible
		struct FSlateColor                                         SelectedBGColor;                                         // 0x03E8(0x0028) Edit, BlueprintVisible
		struct FSlateFontInfo                                      DefaultTextFont;                                         // 0x0410(0x0058) Edit, BlueprintVisible, HasGetValueTypeHash
		unsigned char                                              InteractedSound[0x28];                                   // 0x0468(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		bool                                                       bLockBehavior;                                           // 0x0490(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_HUMS[0x7];                                   // 0x0491(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             DidUpdateSettings;                                       // 0x0498(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       AllowAutomaticFocusSelection;                            // 0x04A8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_24CL[0x7];                                   // 0x04A9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             ConfirmationRequired;                                    // 0x04B0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       Has_Changed_since_last_save;                             // 0x04C0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_N6N2[0x7];                                   // 0x04C1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             PostConfirmationRequired;                                // 0x04C8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       bDisabled;                                               // 0x04D8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_Z3T8[0x7];                                   // 0x04D9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSlateColor                                         DisabledBGColor;                                         // 0x04E0(0x0028) Edit, BlueprintVisible
		struct FSlateColor                                         DisabledBGColorSelected;                                 // 0x0508(0x0028) Edit, BlueprintVisible
		struct FSlateColor                                         DisabledTextColor;                                       // 0x0530(0x0028) Edit, BlueprintVisible
		bool                                                       bIsShownBecauseDebug;                                    // 0x0558(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_QG7R[0x3];                                   // 0x0559(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      NavigationMargin;                                        // 0x055C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       DidChangeOnAnalogValueChanged;                           // 0x0560(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_D7K6[0x3];                                   // 0x0561(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MinNavigationTime;                                       // 0x0564(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      TimeSinceNavigation;                                     // 0x0568(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ExtraDelayOnAnalogNavigation;                            // 0x056C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnOptionChange;                                          // 0x0570(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnOptionSelectionChanged;                                // 0x0580(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       bUseHapticNavigation;                                    // 0x0590(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bUseHapticInteract;                                      // 0x0591(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       UsesLeftRightNavigation;                                 // 0x0592(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_TTPK[0x5];                                   // 0x0593(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              OnHoverSound[0x28];                                      // 0x0598(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		bool                                                       HoverSoundWithMouse;                                     // 0x05C0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       ForceIgnoreNextHoverSound;                               // 0x05C1(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_S0D2[0x2];                                   // 0x05C2(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    DisabledErrorCode;                                       // 0x05C4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnFinalConfirmation;                                     // 0x05C8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable

	public:
		void OnSelected();
		TArray<class FText> GetSelectionOptions(const class FName& PropertyName, TArray<class FText>* DefaultOptions);
		void PlayHaptic();
		void Set_Left_Right_Navigation(class UWidget* SlotButton);
		class UWidget* TryNavigateLeftOrRight(EUINavigation Navigation);
		struct FEventReply OnAnalogValueChanged(const struct FGeometry& MyGeometry, const struct FAnalogInputEvent& InAnalogInputEvent);
		void Play_Interact_Sound();
		void IsOptionNavigationWithinMargin(EUINavigation Direction, bool* AllowNavigation);
		void SetHasChangedSinceLastSave(bool InValue);
		void FixDisplayName(bool IsSettingAvailable, class FText* OutText);
		void IsSettingAvailable(bool* isAvailable);
		void SetDisabledTextColor(const struct FSlateColor& InColor);
		void SetDisabledSelectedBackgroundColor(const struct FSlateColor& InColor);
		void SetDisabledBackgroundColor(const struct FSlateColor& InColor);
		void SetDisabled(bool Disable, int32_t ErrorCode);
		void TickDisabled();
		void DidConfirmPostConfirmation(bool Accepted);
		void On_Option_Changed_Final_Check(bool RequiresOptionRefresh, const class FName& PropertyNameToSelect);
		void UpdateSettingForConfirmation();
		void GetCurrentSettingText(class FText* NewParam);
		void DidConfirm(bool Accepted);
		void ShouldShowConfirmation(bool IgnoreCurrentFocus, bool* DoConfirm);
		void ForceSlotStyle(const struct FScrollListStyle& ScrollListStyle, bool UseSlotColor1);
		void LockBehavior(bool ShouldLock);
		void SetFont(const struct FSlateFontInfo& NewFont);
		class UWidget* NavigateRight(EUINavigation Navigation);
		class UWidget* NavigateLeft(EUINavigation Navigation);
		void IsInputTypeController(bool* IsController);
		void GetSlotButton(class UButton** SlotButton);
		void SetHeight(float NewHeight);
		void UpdateBGColor();
		void HasBeenSelected();
		void SetSelected(bool Selected, bool FromHover);
		void UpdateTextColor();
		void SetSelectedTextColor(const struct FSlateColor& NewColor);
		void SetTextColor(const struct FSlateColor& NewColor);
		void SetSelectedBackgroundColor(const struct FSlateColor& InColor);
		void UpdateSettings(bool OverrideConfirmationLockout);
		void OverrideAltText(const class FText& NewText);
		void OverrideMainText(const class FText& NewText);
		void InitSlotButton(class UGameterSettings* SettingsObject);
		void SetBackgroundColor(const struct FSlateColor& InColor);
		void Construct();
		void OnSlotClicked();
		void OnSlotPressed();
		void OnSlotReleased();
		void OnSlotHovered();
		void OnSlotUnhovered();
		void OnSynchronizeProperties();
		void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
		void DelayedPostConfirmation();
		void ExecuteUbergraph_UI_SlotButton(int32_t EntryPoint);
		void OnFinalConfirmation__DelegateSignature(bool RequiresOptionRefresh, const class FName& PropertyNameToSelect);
		void OnOptionSelectionChanged__DelegateSignature(const class FName& OptionName, bool Selected, bool FromHover);
		void OnOptionChange__DelegateSignature(const class FName& OptionName);
		void PostConfirmationRequired__DelegateSignature(class UUI_SlotButton_C* SlotThatNeedsConfirmation);
		void ConfirmationRequired__DelegateSignature(class UUI_SlotButton_C* SlotThatNeedsConfirmation);
		void DidUpdateSettings__DelegateSignature(bool RequiresOptionRefresh, const class FName& PropertyNameToSelect);
		void SlotDispatcher__DelegateSignature(unsigned char InteractionType, int32_t BoundValue, class UUI_SlotButton_C* ButtonSentFrom);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
