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
	 * WidgetBlueprintGeneratedClass UI_TabbedLayout.UI_TabbedLayout_C
	 * Size -> 0x02F8 (FullSize[0x0588] - InheritedSize[0x0290])
	 */
	class UUI_TabbedLayout_C : public UUI_DesignTimeUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0290(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		class UScaleBox*                                           LeftBumperBox;                                           // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              LeftBumperImage;                                         // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UScaleBox*                                           RightBumperBox;                                          // 0x02A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              RightBumperImage;                                        // 0x02B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        RightPanels;                                             // 0x02B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHorizontalBox*                                      TabButtons;                                              // 0x02C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidgetSwitcher*                                     WidgetSelector;                                          // 0x02C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		unsigned char                                              OpenConfirmation[0x28];                                  // 0x02D0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		struct FTabbedMenuStyle                                    TabStyle;                                                // 0x02F8(0x0070) Edit, BlueprintVisible
		struct FScrollListStyle                                    SlotStyle;                                               // 0x0368(0x0158) Edit, BlueprintVisible
		struct FSlotListSlotClasses                                SlotClasses;                                             // 0x04C0(0x0020) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash
		unsigned char                                              LastUserSelectedWidget[0x28];                            // 0x04E0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		bool                                                       IsForceClosing_Confirmation;                             // 0x0508(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       UsingControllerIcons;                                    // 0x0509(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_J71Q[0x6];                                   // 0x050A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              TabMoveSound[0x28];                                      // 0x0510(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              SlotButtonInteractSound[0x28];                           // 0x0538(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              HoverSound[0x28];                                        // 0x0560(0x0028) UNKNOWN PROPERTY: SoftObjectProperty

	public:
		void ShouldSkipEntry(int32_t EntryIndex, bool* ShouldSkip);
		void SetupTabButtonNavigation();
		void LostFocus();
		void SetActiveTab(int32_t TabIndex);
		bool TakeFocus();
		void UpdateBumperImageMaterials();
		class UGameterface* Get_Gameterface_BP();
		void UpdateButtonImages();
		void SetupButtonImages();
		void ResetTabs();
		bool IsUsingController();
		void HasTabConfirmationDialog(bool* Return, class UConfirmationDialog_C** Widget);
		void GetCurrentMenu(class UUI_Menu_Base_BP_C** OutMenu);
		bool HandleBack();
		void SetToTab(int32_t Index, bool ForceNoFocusChange, bool ForceNoSound);
		void PrevTab();
		void NextTab();
		void GrabFocus();
		void UpdateFocusWidget();
		void OnConfirmationClose(bool DidAccept);
		void ShowConfirmationDialog(const class FText& Message, const class FText& ConfirmText, const class FText& CancelText, bool ShouldRemoveCancel, class UConfirmationDialog_C** CreatedWidget);
		void AddTab(const class FText& TabText, int32_t TabPosition, class UUI_Button_Base_C** CreatedTab);
		void AddContentToSelector(class UClass* Widget_Class, class UWidgetSwitcher* Selector_to_add_to, class UUserWidget** ContentCreated);
		void UpdateButtonsOnInteract(EButtonStateEnum Interact_Type, int32_t Bound_Value);
		void InteractedButton(EButtonStateEnum Interact_Type, int32_t Bound_Value);
		void SetupTabs(TArray<class UUI_Button_Base_C*>* TabsButtonsCreated);
		void Construct();
		void TabUsed(unsigned char Interaction, int32_t BoundValue);
		void OnSynchronizeProperties();
		void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
		void CreateTabs();
		void DelayedSetToTab(int32_t Index, bool ForceNoFocusChange, bool ForceNoSound);
		void ExecuteUbergraph_UI_TabbedLayout(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
