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
	 * WidgetBlueprintGeneratedClass UI_OptionsMenuTab_Game.UI_OptionsMenuTab_Game_C
	 * Size -> 0x0028 (FullSize[0x05E8] - InheritedSize[0x05C0])
	 */
	class UUI_OptionsMenuTab_Game_C : public UUI_OptionsMenuTab_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x05C0(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		class FText                                                SaveTabName;                                             // 0x05C8(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class UClass*                                              SaveTabContent;                                          // 0x05E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void SetToTab(int32_t Index, bool ForceNoFocusChange, bool ForceNoSound);
		void SetupForSaveGames();
		void RefreshSaveTabState();
		void UpdateSaveTabState(EGTASaveTabState NewSaveTabState);
		void NextTab();
		void PrevTab();
		void SetToSaveTabState(EGTASaveTabState State);
		void RefreshSaves();
		void InteractedButton(EButtonStateEnum Interact_Type, int32_t Bound_Value);
		void Construct();
		void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
		void ExecuteUbergraph_UI_OptionsMenuTab_Game(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
