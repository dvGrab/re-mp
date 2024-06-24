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
	 * WidgetBlueprintGeneratedClass UI_HUD_WeaponWheel_Base.UI_HUD_WeaponWheel_Base_C
	 * Size -> 0x0290 (FullSize[0x06CC] - InheritedSize[0x043C])
	 */
	class UUI_HUD_WeaponWheel_Base_C : public UUI_HUDItem_Base_C
	{
	public:
		unsigned char                                              UnknownData_DAHT[0x4];                                   // 0x043C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0440(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UCanvasPanel*                                        MainCanvas;                                              // 0x0448(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          MainText;                                                // 0x0450(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UScaleBox*                                           TextScaleBox;                                            // 0x0458(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          WeaponAmmo;                                              // 0x0460(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        WeaponImageContainer;                                    // 0x0468(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          WeaponName;                                              // 0x0470(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UScaleBox*                                           WeaponScaleBox;                                          // 0x0478(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              WheelImage;                                              // 0x0480(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		TArray<class UUserWidget*>                                 WheelWidgets;                                            // 0x0488(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		class UMaterialInstance*                                   WheelMaterial;                                           // 0x0498(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ItemSizeMultiplier;                                      // 0x04A0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    LastIndexSelected;                                       // 0x04A4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MinWheelRadius;                                          // 0x04A8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MaxWheelRadius;                                          // 0x04AC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      GetTimeSinceLastSelection;                               // 0x04B0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      SelectionFadeTime;                                       // 0x04B4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UClass*                                              ItemWidget;                                              // 0x04B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FAnchors                                            AreaAnchors;                                             // 0x04C0(0x0010) Edit, BlueprintVisible, NoDestructor
		float                                                      MinWheelRadiusOverride;                                  // 0x04D0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MaxWheelRadiusOverride;                                  // 0x04D4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FSlateFontInfo                                      MainTextFont;                                            // 0x04D8(0x0058) Edit, BlueprintVisible, HasGetValueTypeHash
		struct FSlateColor                                         MainTextColor;                                           // 0x0530(0x0028) Edit, BlueprintVisible
		float                                                      ItemAngleOffset;                                         // 0x0558(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      BackgroundFadeTime;                                      // 0x055C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector2D                                           MainTextShadowOffset;                                    // 0x0560(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        MainTextShadowColor;                                     // 0x0568(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FSlateFontInfo                                      AmmoTextFont;                                            // 0x0578(0x0058) Edit, BlueprintVisible, HasGetValueTypeHash
		struct FSlateColor                                         AmmoTextColor;                                           // 0x05D0(0x0028) Edit, BlueprintVisible
		struct FVector2D                                           AmmoTextShadowOffset;                                    // 0x05F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        AmmoTextShadowColor;                                     // 0x0600(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FSlateFontInfo                                      WeaponTextFont;                                          // 0x0610(0x0058) Edit, BlueprintVisible, HasGetValueTypeHash
		struct FSlateColor                                         WeaponTextColor;                                         // 0x0668(0x0028) Edit, BlueprintVisible
		struct FVector2D                                           WeaponTextShadowOffset;                                  // 0x0690(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        WeaponTextShadowColor;                                   // 0x0698(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bUseWeaponText;                                          // 0x06A8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_PUEC[0x3];                                   // 0x06A9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FLinearColor                                        AvailableColor;                                          // 0x06AC(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        UnavailableColor;                                        // 0x06BC(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void GetWeaponWheelItemOffset(float* NewParam);
		void GetRadioWheelItemOffset(float* NewParam);
		void SetupDynamicMat();
		void AddTextToImages(TArray<class FString> Array);
		void SetupStrings(TArray<class FString>* Images);
		void SetupNewText(const class FString& string, int32_t Index, int32_t Length);
		void UpdateSelection();
		void SetSelection(int32_t Index);
		class UUserWidget* Setup_New_Image(class UObject* Texture, int32_t Index, int32_t Length, bool Enabled, const class FString& string, const class FString& extraString);
		void SetupSections(int32_t NumSections);
		void SetupImages(TArray<struct FSlotImageStruct>* Images);
		void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
		void OnSynchronizeProperties();
		void Construct();
		void CustomFunctionWithObjects(const class FString& FunctionName, TArray<struct FSlotImageStruct> Objects);
		void CustomFunctionWithInteger(const class FString& FunctionName, int32_t integer);
		void CustomFunctionWithStrings(const class FString& FunctionName, TArray<class FString> Strings);
		void CustomFunctionWithFloat(const class FString& FunctionName, float floatNum);
		void ExecuteUbergraph_UI_HUD_WeaponWheel_Base(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
