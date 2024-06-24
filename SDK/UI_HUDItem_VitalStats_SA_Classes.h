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
	 * WidgetBlueprintGeneratedClass UI_HUDItem_VitalStats_SA.UI_HUDItem_VitalStats_SA_C
	 * Size -> 0x0054 (FullSize[0x0490] - InheritedSize[0x043C])
	 */
	class UUI_HUDItem_VitalStats_SA_C : public UUI_HUDItem_Base_C
	{
	public:
		unsigned char                                              UnknownData_G23F[0x4];                                   // 0x043C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0440(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UImage*                                              BG1;                                                     // 0x0448(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              BG2;                                                     // 0x0450(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        Content;                                                 // 0x0458(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          DayText;                                                 // 0x0460(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        StatBox;                                                 // 0x0468(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        TitleBar;                                                // 0x0470(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          TitleText;                                               // 0x0478(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		TArray<class UUI_HUD_Text_Bar_SA_C*>                       StatBlocks;                                              // 0x0480(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference

	public:
		void ChangeContentSize(bool IsLarge);
		void DestroyStatBars();
		void CreateStatBars();
		void Construct();
		void CustomFunctionWithFloats(const class FString& FunctionName, TArray<float> Floats);
		void CustomFunctionWithStrings(const class FString& FunctionName, TArray<class FString> Strings);
		void SetTotalWidgetColor(const struct FLinearColor& Color);
		void OnSynchronizeProperties();
		void SetContentText(const class FText& Text, const struct FLinearColor& FontColorOverride);
		void SetContentTextAdditional(const class FText& Text, const struct FLinearColor& FontColorOverride);
		void ExecuteUbergraph_UI_HUDItem_VitalStats_SA(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
