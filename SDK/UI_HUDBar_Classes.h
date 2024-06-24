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
	 * WidgetBlueprintGeneratedClass UI_HUDBar.UI_HUDBar_C
	 * Size -> 0x00B8 (FullSize[0x0318] - InheritedSize[0x0260])
	 */
	class UUI_HUDBar_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0260(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UImage*                                              Background;                                              // 0x0268(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              BackgroundBoarder;                                       // 0x0270(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UProgressBar*                                        BottomBar;                                               // 0x0278(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        MainBar;                                                 // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USizeBox*                                            MainSizeBox;                                             // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UProgressBar*                                        TopBar;                                                  // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		struct FAnchors                                            TopBarOffset;                                            // 0x0298(0x0010) Edit, BlueprintVisible, NoDestructor
		struct FSlateColor                                         BackgroundColor;                                         // 0x02A8(0x0028) Edit, BlueprintVisible
		struct FVector2D                                           SizeBoxOverride;                                         // 0x02D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector2D                                           BoarderSize;                                             // 0x02D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FSlateColor                                         BoarderColor;                                            // 0x02E0(0x0028) Edit, BlueprintVisible
		struct FLinearColor                                        StartingTopColor;                                        // 0x0308(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void SetSizeBoxOverrideAndUpdate(const struct FVector2D& SizeBoxOverride);
		void UpdateSizeBoxOverrideSize();
		void SetPrimaryBarColor(const struct FLinearColor& Color);
		void SetSecondaryBarColor(const struct FLinearColor& Color);
		void SetProgres(float TopBar, float BottomBar, bool IsPositive);
		void PreConstruct(bool IsDesignTime);
		void Construct();
		void ExecuteUbergraph_UI_HUDBar(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
