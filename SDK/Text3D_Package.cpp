/**
 * Name: GTASA
 * Version: 0.0.1
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AText3DActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AText3DActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Text3D.Text3DActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D0CC10
	 * 		Name   -> Function Text3D.Text3DCharacterTransform.SetScaleRange
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              Range                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UText3DCharacterTransform::SetScaleRange(float Range)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Text3D.Text3DCharacterTransform.SetScaleRange");
		
		UText3DCharacterTransform_SetScaleRange_Params params {};
		params.Range = Range;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D0CE10
	 * 		Name   -> Function Text3D.Text3DCharacterTransform.SetScaleProgress
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              Progress                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UText3DCharacterTransform::SetScaleProgress(float Progress)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Text3D.Text3DCharacterTransform.SetScaleProgress");
		
		UText3DCharacterTransform_SetScaleProgress_Params params {};
		params.Progress = Progress;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D0CD30
	 * 		Name   -> Function Text3D.Text3DCharacterTransform.SetScaleOrder
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		EText3DCharacterEffectOrder                        Order                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UText3DCharacterTransform::SetScaleOrder(EText3DCharacterEffectOrder Order)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Text3D.Text3DCharacterTransform.SetScaleOrder");
		
		UText3DCharacterTransform_SetScaleOrder_Params params {};
		params.Order = Order;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D0C970
	 * 		Name   -> Function Text3D.Text3DCharacterTransform.SetScaleEnd
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FVector                                     Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UText3DCharacterTransform::SetScaleEnd(const struct FVector& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Text3D.Text3DCharacterTransform.SetScaleEnd");
		
		UText3DCharacterTransform_SetScaleEnd_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D0CF30
	 * 		Name   -> Function Text3D.Text3DCharacterTransform.SetScaleEnabled
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bEnabled                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UText3DCharacterTransform::SetScaleEnabled(bool bEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Text3D.Text3DCharacterTransform.SetScaleEnabled");
		
		UText3DCharacterTransform_SetScaleEnabled_Params params {};
		params.bEnabled = bEnabled;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D0CAC0
	 * 		Name   -> Function Text3D.Text3DCharacterTransform.SetScaleBegin
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FVector                                     Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UText3DCharacterTransform::SetScaleBegin(const struct FVector& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Text3D.Text3DCharacterTransform.SetScaleBegin");
		
		UText3DCharacterTransform_SetScaleBegin_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D0C4E0
	 * 		Name   -> Function Text3D.Text3DCharacterTransform.SetRotateRange
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              Range                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UText3DCharacterTransform::SetRotateRange(float Range)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Text3D.Text3DCharacterTransform.SetRotateRange");
		
		UText3DCharacterTransform_SetRotateRange_Params params {};
		params.Range = Range;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D0C6E0
	 * 		Name   -> Function Text3D.Text3DCharacterTransform.SetRotateProgress
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              Progress                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UText3DCharacterTransform::SetRotateProgress(float Progress)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Text3D.Text3DCharacterTransform.SetRotateProgress");
		
		UText3DCharacterTransform_SetRotateProgress_Params params {};
		params.Progress = Progress;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D0C600
	 * 		Name   -> Function Text3D.Text3DCharacterTransform.SetRotateOrder
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		EText3DCharacterEffectOrder                        Order                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UText3DCharacterTransform::SetRotateOrder(EText3DCharacterEffectOrder Order)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Text3D.Text3DCharacterTransform.SetRotateOrder");
		
		UText3DCharacterTransform_SetRotateOrder_Params params {};
		params.Order = Order;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D0C0E0
	 * 		Name   -> Function Text3D.Text3DCharacterTransform.SetRotateEnd
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FRotator                                    Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UText3DCharacterTransform::SetRotateEnd(const struct FRotator& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Text3D.Text3DCharacterTransform.SetRotateEnd");
		
		UText3DCharacterTransform_SetRotateEnd_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D0C800
	 * 		Name   -> Function Text3D.Text3DCharacterTransform.SetRotateEnabled
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bEnabled                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UText3DCharacterTransform::SetRotateEnabled(bool bEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Text3D.Text3DCharacterTransform.SetRotateEnabled");
		
		UText3DCharacterTransform_SetRotateEnabled_Params params {};
		params.bEnabled = bEnabled;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D0C2E0
	 * 		Name   -> Function Text3D.Text3DCharacterTransform.SetRotateBegin
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FRotator                                    Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UText3DCharacterTransform::SetRotateBegin(const struct FRotator& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Text3D.Text3DCharacterTransform.SetRotateBegin");
		
		UText3DCharacterTransform_SetRotateBegin_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D0D1E0
	 * 		Name   -> Function Text3D.Text3DCharacterTransform.SetLocationRange
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              Range                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UText3DCharacterTransform::SetLocationRange(float Range)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Text3D.Text3DCharacterTransform.SetLocationRange");
		
		UText3DCharacterTransform_SetLocationRange_Params params {};
		params.Range = Range;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D0D3E0
	 * 		Name   -> Function Text3D.Text3DCharacterTransform.SetLocationProgress
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              Progress                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UText3DCharacterTransform::SetLocationProgress(float Progress)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Text3D.Text3DCharacterTransform.SetLocationProgress");
		
		UText3DCharacterTransform_SetLocationProgress_Params params {};
		params.Progress = Progress;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D0D300
	 * 		Name   -> Function Text3D.Text3DCharacterTransform.SetLocationOrder
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		EText3DCharacterEffectOrder                        Order                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UText3DCharacterTransform::SetLocationOrder(EText3DCharacterEffectOrder Order)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Text3D.Text3DCharacterTransform.SetLocationOrder");
		
		UText3DCharacterTransform_SetLocationOrder_Params params {};
		params.Order = Order;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D0D500
	 * 		Name   -> Function Text3D.Text3DCharacterTransform.SetLocationEnabled
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bEnabled                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UText3DCharacterTransform::SetLocationEnabled(bool bEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Text3D.Text3DCharacterTransform.SetLocationEnabled");
		
		UText3DCharacterTransform_SetLocationEnabled_Params params {};
		params.bEnabled = bEnabled;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D0D090
	 * 		Name   -> Function Text3D.Text3DCharacterTransform.SetLocationDistance
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FVector                                     Distance                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UText3DCharacterTransform::SetLocationDistance(const struct FVector& Distance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Text3D.Text3DCharacterTransform.SetLocationDistance");
		
		UText3DCharacterTransform_SetLocationDistance_Params params {};
		params.Distance = Distance;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UText3DCharacterTransform.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UText3DCharacterTransform::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Text3D.Text3DCharacterTransform");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D0E330
	 * 		Name   -> Function Text3D.Text3DComponent.SetWordSpacing
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              Value                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UText3DComponent::SetWordSpacing(float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Text3D.Text3DComponent.SetWordSpacing");
		
		UText3DComponent_SetWordSpacing_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D0E170
	 * 		Name   -> Function Text3D.Text3DComponent.SetVerticalAlignment
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		EText3DVerticalTextAlignment                       Value                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UText3DComponent::SetVerticalAlignment(EText3DVerticalTextAlignment Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Text3D.Text3DComponent.SetVerticalAlignment");
		
		UText3DComponent_SetVerticalAlignment_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D0EFE0
	 * 		Name   -> Function Text3D.Text3DComponent.SetText
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FText                                        Value                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UText3DComponent::SetText(const class FText& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Text3D.Text3DComponent.SetText");
		
		UText3DComponent_SetText_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D0DCA0
	 * 		Name   -> Function Text3D.Text3DComponent.SetScaleProportionally
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               Value                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UText3DComponent::SetScaleProportionally(bool Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Text3D.Text3DComponent.SetScaleProportionally");
		
		UText3DComponent_SetScaleProportionally_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D0EDE0
	 * 		Name   -> Function Text3D.Text3DComponent.SetOutline
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bValue                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UText3DComponent::SetOutline(bool bValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Text3D.Text3DComponent.SetOutline");
		
		UText3DComponent_SetOutline_Params params {};
		params.bValue = bValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D0DF80
	 * 		Name   -> Function Text3D.Text3DComponent.SetMaxWidth
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              Value                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UText3DComponent::SetMaxWidth(float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Text3D.Text3DComponent.SetMaxWidth");
		
		UText3DComponent_SetMaxWidth_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D0DD90
	 * 		Name   -> Function Text3D.Text3DComponent.SetMaxHeight
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              Value                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UText3DComponent::SetMaxHeight(float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Text3D.Text3DComponent.SetMaxHeight");
		
		UText3DComponent_SetMaxHeight_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D0E420
	 * 		Name   -> Function Text3D.Text3DComponent.SetLineSpacing
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              Value                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UText3DComponent::SetLineSpacing(float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Text3D.Text3DComponent.SetLineSpacing");
		
		UText3DComponent_SetLineSpacing_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D0E510
	 * 		Name   -> Function Text3D.Text3DComponent.SetKerning
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              Value                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UText3DComponent::SetKerning(float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Text3D.Text3DComponent.SetKerning");
		
		UText3DComponent_SetKerning_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D0E250
	 * 		Name   -> Function Text3D.Text3DComponent.SetHorizontalAlignment
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		EText3DHorizontalTextAlignment                     Value                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UText3DComponent::SetHorizontalAlignment(EText3DHorizontalTextAlignment Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Text3D.Text3DComponent.SetHorizontalAlignment");
		
		UText3DComponent_SetHorizontalAlignment_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D0E080
	 * 		Name   -> Function Text3D.Text3DComponent.SetHasMaxWidth
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               Value                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UText3DComponent::SetHasMaxWidth(bool Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Text3D.Text3DComponent.SetHasMaxWidth");
		
		UText3DComponent_SetHasMaxWidth_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D0DE90
	 * 		Name   -> Function Text3D.Text3DComponent.SetHasMaxHeight
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               Value                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UText3DComponent::SetHasMaxHeight(bool Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Text3D.Text3DComponent.SetHasMaxHeight");
		
		UText3DComponent_SetHasMaxHeight_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D0E8A0
	 * 		Name   -> Function Text3D.Text3DComponent.SetFrontMaterial
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UMaterialInterface*                          Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UText3DComponent::SetFrontMaterial(class UMaterialInterface* Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Text3D.Text3DComponent.SetFrontMaterial");
		
		UText3DComponent_SetFrontMaterial_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D0DB90
	 * 		Name   -> Function Text3D.Text3DComponent.SetFreeze
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bFreeze                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UText3DComponent::SetFreeze(bool bFreeze)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Text3D.Text3DComponent.SetFreeze");
		
		UText3DComponent_SetFreeze_Params params {};
		params.bFreeze = bFreeze;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D0EEE0
	 * 		Name   -> Function Text3D.Text3DComponent.SetFont
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UFont*                                       InFont                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UText3DComponent::SetFont(class UFont* InFont)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Text3D.Text3DComponent.SetFont");
		
		UText3DComponent_SetFont_Params params {};
		params.InFont = InFont;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D0E6E0
	 * 		Name   -> Function Text3D.Text3DComponent.SetExtrudeMaterial
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UMaterialInterface*                          Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UText3DComponent::SetExtrudeMaterial(class UMaterialInterface* Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Text3D.Text3DComponent.SetExtrudeMaterial");
		
		UText3DComponent_SetExtrudeMaterial_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D0ECB0
	 * 		Name   -> Function Text3D.Text3DComponent.SetExtrude
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              Value                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UText3DComponent::SetExtrude(float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Text3D.Text3DComponent.SetExtrude");
		
		UText3DComponent_SetExtrude_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D0EA90
	 * 		Name   -> Function Text3D.Text3DComponent.SetBevelType
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		EText3DBevelType                                   Value                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UText3DComponent::SetBevelType(EText3DBevelType Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Text3D.Text3DComponent.SetBevelType");
		
		UText3DComponent_SetBevelType_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D0E980
	 * 		Name   -> Function Text3D.Text3DComponent.SetBevelSegments
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            Value                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UText3DComponent::SetBevelSegments(int32_t Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Text3D.Text3DComponent.SetBevelSegments");
		
		UText3DComponent_SetBevelSegments_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D0E7C0
	 * 		Name   -> Function Text3D.Text3DComponent.SetBevelMaterial
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UMaterialInterface*                          Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UText3DComponent::SetBevelMaterial(class UMaterialInterface* Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Text3D.Text3DComponent.SetBevelMaterial");
		
		UText3DComponent_SetBevelMaterial_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D0EB80
	 * 		Name   -> Function Text3D.Text3DComponent.SetBevel
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              Value                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UText3DComponent::SetBevel(float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Text3D.Text3DComponent.SetBevel");
		
		UText3DComponent_SetBevel_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D0E600
	 * 		Name   -> Function Text3D.Text3DComponent.SetBackMaterial
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UMaterialInterface*                          Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UText3DComponent::SetBackMaterial(class UMaterialInterface* Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Text3D.Text3DComponent.SetBackMaterial");
		
		UText3DComponent_SetBackMaterial_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UText3DComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UText3DComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Text3D.Text3DComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UText3DEngineSubsystem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UText3DEngineSubsystem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Text3D.Text3DEngineSubsystem");
		return ptr;
	}

}


