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
	 * WidgetBlueprintGeneratedClass UI_OptionsList_Base.UI_OptionsList_Base_C
	 * Size -> 0x0028 (FullSize[0x0530] - InheritedSize[0x0508])
	 */
	class UUI_OptionsList_Base_C : public UUI_ScrollingSlotList_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0508(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		class UGTAOptionsList*                                     OptionList;                                              // 0x0510(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    CurrentGameType;                                         // 0x0518(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EGTAInputType                                              LastInputType;                                           // 0x051C(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       UsesResetToDefault;                                      // 0x051D(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_Z1RX[0x2];                                   // 0x051E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FName>                                        SlotButtonFunctionNames;                                 // 0x0520(0x0010) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		void Option_Pressed_Callback(class UUI_SlotButton_C* PressedButton);
		void SetupNavigation();
		void OnOptionSelectionChanged(const class FName& OptionName, bool Selected, bool FromHover);
		void OptionChanged(const class FName& OptionName);
		void DoConfirmationPostItemChange(class UUI_SlotButton_C* SlotToChange);
		bool HandleBack();
		void Should_Refresh_on_Option_Update(bool RequiresOptionRefresh, const class FName& PropertyNameToSelect);
		void DoConfirmationOnItemChange(class UUI_SlotButton_C* SlotToChange);
		void IsOptionWithinBounds(class UGameterSettings* Settings, const struct FGTASelectionOptionSpecifier& RequiredValue, bool* isWithinBounds);
		void CheckOtherRequirements(const struct FGTAOptionsItemTemplate& Option, class UGameterSettings* Settings, bool* Available);
		void RunSlotButtonFunction(const class FName& FunctionName);
		void SlotFunctionButtonPressed(unsigned char InteractionType, int32_t BoundValue, class UUI_SlotButton_C* SlotButton);
		void AddFunctionToSlotButton(class UUI_SlotButton_C* SlotItem, const class FName& FunctionName);
		void OnRestoreDefaultsConfirmationCallback(bool DidAccept);
		void ResetDefaultsInteracted(unsigned char InteractionType, int32_t BoundValue, class UUI_SlotButton_C* SlotButton);
		void AddResetToDefaultButton(class UUI_SlotButton_C** NewItem);
		void GetCurrentInputType_1(int32_t* OutInputFlag);
		void IsOptionAvailableForInputType(const struct FGTAOptionsItemTemplate& Option, bool* Available);
		void GetCurrentPlatform(int32_t* OutPlatformFlag);
		void IsOptionAvailableForPlatform(const struct FGTAOptionsItemTemplate& Option, bool* Available);
		void IsOptionAvailableForGame(const struct FGTAOptionsItemTemplate& Option, bool* Available);
		void CreateNewEntry(const struct FGTAOptionsItemTemplate& Option, class UGameterSettings* SettingsObject, bool IsShownBecauseDebug, class UUI_SlotButton_C** NewItem);
		void CreateScrollingListItems(bool DEBUG_ALL_ITEMS);
		void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
		void ExecuteUbergraph_UI_OptionsList_Base(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
