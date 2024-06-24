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
	 * WidgetBlueprintGeneratedClass DoubleCreditBox.DoubleCreditBox_C
	 * Size -> 0x0019 (FullSize[0x0279] - InheritedSize[0x0260])
	 */
	class UDoubleCreditBox_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0260(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UTextBlock*                                          Text1;                                                   // 0x0268(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          Text2;                                                   // 0x0270(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		bool                                                       DidConstruct;                                            // 0x0278(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void SetTextValues(const class FText& Text1, const class FText& Text2, const struct FSlateFontInfo& Font);
		void Construct();
		void DelayedTextAdd(const class FText& Text1, const class FText& Text2, const struct FSlateFontInfo& Font);
		void ExecuteUbergraph_DoubleCreditBox(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
