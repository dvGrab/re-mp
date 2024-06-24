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
	 * WidgetBlueprintGeneratedClass ControlsOptions.ControlsOptions_C
	 * Size -> 0x0020 (FullSize[0x0550] - InheritedSize[0x0530])
	 */
	class UControlsOptions_C : public UUI_OptionsList_Base_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0530(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		class UWidgetAnimation*                                    NewAnimation_2;                                          // 0x0538(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UUserWidget*                                         AdjustableControlsUI;                                    // 0x0540(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UClass*                                              AdjustableControlsClass;                                 // 0x0548(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void SetFocusToFirstEntry();
		bool HandleBack();
		void RemoveAdjustableControlsUI();
		void AdjustableControlsBack(unsigned char Interaction, int32_t BoundValue);
		void CreateAdjustableControlsUI();
		void RunSlotButtonFunction(const class FName& FunctionName);
		void Construct();
		void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
		void RefreshAdjustableControls();
		void ExecuteUbergraph_ControlsOptions(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
