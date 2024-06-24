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
	 * WidgetBlueprintGeneratedClass SimpleControllerMappingText.SimpleControllerMappingText_C
	 * Size -> 0x001B (FullSize[0x02AB] - InheritedSize[0x0290])
	 */
	class USimpleControllerMappingText_C : public UUI_DesignTimeUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0290(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		class UScaleBox*                                           Scale;                                                   // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          Text;                                                    // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		EHorizontalAlignment                                       HorizontalAlignment;                                     // 0x02A8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EVerticalAlignment                                         VerticalAlignment;                                       // 0x02A9(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EControllerButtonIDDefinitions                             ButtonValue;                                             // 0x02AA(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void SetTextColor(const struct FSlateColor& InColorAndOpacity);
		void SetAlignment(EHorizontalAlignment HorizontalAlignment, EVerticalAlignment VerticalAlignment, EControllerButtonIDDefinitions ControllerButton);
		void SetTextFont(const struct FSlateFontInfo& InFontInfo);
		void SetTextValue(const class FText& NewText);
		void Construct();
		void OnSynchronizeProperties();
		void ExecuteUbergraph_SimpleControllerMappingText(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
