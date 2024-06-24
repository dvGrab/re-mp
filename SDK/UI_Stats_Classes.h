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
	 * WidgetBlueprintGeneratedClass UI_Stats.UI_Stats_C
	 * Size -> 0x01E8 (FullSize[0x0478] - InheritedSize[0x0290])
	 */
	class UUI_Stats_C : public UUI_DesignTimeUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0290(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		class UImage*                                              Background;                                              // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_SlotButton_CenterMessage_C*                      TopMessage;                                              // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_ScrollingSlotList_C*                             UI_ScrollingSlotList;                                    // 0x02A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		float                                                      TopStatSize;                                             // 0x02B0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_QDQ4[0x4];                                   // 0x02B4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              SlotClass;                                               // 0x02B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FScrollListStyle                                    ScrollBoxStyle;                                          // 0x02C0(0x0158) Edit, BlueprintVisible
		class UClass*                                              CategoryClass;                                           // 0x0418(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       PendingStatCreation;                                     // 0x0420(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       DidConstruct;                                            // 0x0421(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_D33P[0x6];                                   // 0x0422(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<class UUI_SlotButton_C*, int32_t>                     Categories;                                              // 0x0428(0x0050) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference

	public:
		void MoveToCategory(bool PreviousCategory);
		void UpdateCategoriesCheck();
		void CreateStat(const class FString& inString, const class FString& InString2, class UUI_SlotButton_C** CreatedButton, bool* Is_Category_Divider);
		void Set_Main_Style();
		bool TakeFocus();
		void SetupStats(class UGameterface* Gameterface);
		void Construct();
		void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
		void OnSynchronizeProperties();
		void ExecuteUbergraph_UI_Stats(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
