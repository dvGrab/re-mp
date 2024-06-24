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
	 * WidgetBlueprintGeneratedClass UI_SC_Achivements.UI_SC_Achivements_C
	 * Size -> 0x0009 (FullSize[0x0511] - InheritedSize[0x0508])
	 */
	class UUI_SC_Achivements_C : public UUI_ScrollingSlotList_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0508(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		bool                                                       DidConstructAchivements;                                 // 0x0510(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		bool TakeFocus();
		void WrapNavigation();
		void SetupNavigation();
		void RefreshList();
		void CheckCreation();
		void CreateScrollingListItems(bool DEBUG_ALL_ITEMS);
		void PreConstruct(bool IsDesignTime);
		void Construct();
		void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
		void OnSynchronizeProperties();
		void ExecuteUbergraph_UI_SC_Achivements(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
