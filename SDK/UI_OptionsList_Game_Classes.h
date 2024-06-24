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
	 * WidgetBlueprintGeneratedClass UI_OptionsList_Game.UI_OptionsList_Game_C
	 * Size -> 0x0020 (FullSize[0x0550] - InheritedSize[0x0530])
	 */
	class UUI_OptionsList_Game_C : public UUI_OptionsList_Base_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0530(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		class FText                                                FreeSlotText;                                            // 0x0538(0x0018) Edit, BlueprintVisible

	public:
		void CreateSaveEntryAndBind(const class FString& SaveName, int32_t ValueToBind);
		void GetCurrentMenu(class UUI_Menu_Base_BP_C** OutMenu);
		void SaveButtonPressed(unsigned char InteractionType, int32_t BoundValue, class UUI_SlotButton_C* SlotButton);
		void BindSlotButtonToSave(class UUI_SlotButton_C* Slot_Button, int32_t ValueToBind);
		void CreateNewEntry(const struct FGTAOptionsItemTemplate& Option, class UGameterSettings* SettingsObject, bool IsShownBecauseDebug, class UUI_SlotButton_C** NewItem);
		void CreateScrollingListItems(bool DEBUG_ALL_ITEMS);
		void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
		void ExecuteUbergraph_UI_OptionsList_Game(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
