﻿#pragma once

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
	// # Structs
	// --------------------------------------------------
	/**
	 * Function Text3D.Text3DCharacterTransform.SetScaleRange
	 */
	struct UText3DCharacterTransform_SetScaleRange_Params
	{
	public:
		float                                                      Range;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Text3D.Text3DCharacterTransform.SetScaleProgress
	 */
	struct UText3DCharacterTransform_SetScaleProgress_Params
	{
	public:
		float                                                      Progress;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Text3D.Text3DCharacterTransform.SetScaleOrder
	 */
	struct UText3DCharacterTransform_SetScaleOrder_Params
	{
	public:
		EText3DCharacterEffectOrder                                Order;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Text3D.Text3DCharacterTransform.SetScaleEnd
	 */
	struct UText3DCharacterTransform_SetScaleEnd_Params
	{
	public:
		struct FVector                                             Value;                                                   // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Text3D.Text3DCharacterTransform.SetScaleEnabled
	 */
	struct UText3DCharacterTransform_SetScaleEnabled_Params
	{
	public:
		bool                                                       bEnabled;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Text3D.Text3DCharacterTransform.SetScaleBegin
	 */
	struct UText3DCharacterTransform_SetScaleBegin_Params
	{
	public:
		struct FVector                                             Value;                                                   // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Text3D.Text3DCharacterTransform.SetRotateRange
	 */
	struct UText3DCharacterTransform_SetRotateRange_Params
	{
	public:
		float                                                      Range;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Text3D.Text3DCharacterTransform.SetRotateProgress
	 */
	struct UText3DCharacterTransform_SetRotateProgress_Params
	{
	public:
		float                                                      Progress;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Text3D.Text3DCharacterTransform.SetRotateOrder
	 */
	struct UText3DCharacterTransform_SetRotateOrder_Params
	{
	public:
		EText3DCharacterEffectOrder                                Order;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Text3D.Text3DCharacterTransform.SetRotateEnd
	 */
	struct UText3DCharacterTransform_SetRotateEnd_Params
	{
	public:
		struct FRotator                                            Value;                                                   // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Text3D.Text3DCharacterTransform.SetRotateEnabled
	 */
	struct UText3DCharacterTransform_SetRotateEnabled_Params
	{
	public:
		bool                                                       bEnabled;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Text3D.Text3DCharacterTransform.SetRotateBegin
	 */
	struct UText3DCharacterTransform_SetRotateBegin_Params
	{
	public:
		struct FRotator                                            Value;                                                   // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Text3D.Text3DCharacterTransform.SetLocationRange
	 */
	struct UText3DCharacterTransform_SetLocationRange_Params
	{
	public:
		float                                                      Range;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Text3D.Text3DCharacterTransform.SetLocationProgress
	 */
	struct UText3DCharacterTransform_SetLocationProgress_Params
	{
	public:
		float                                                      Progress;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Text3D.Text3DCharacterTransform.SetLocationOrder
	 */
	struct UText3DCharacterTransform_SetLocationOrder_Params
	{
	public:
		EText3DCharacterEffectOrder                                Order;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Text3D.Text3DCharacterTransform.SetLocationEnabled
	 */
	struct UText3DCharacterTransform_SetLocationEnabled_Params
	{
	public:
		bool                                                       bEnabled;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Text3D.Text3DCharacterTransform.SetLocationDistance
	 */
	struct UText3DCharacterTransform_SetLocationDistance_Params
	{
	public:
		struct FVector                                             Distance;                                                // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Text3D.Text3DComponent.SetWordSpacing
	 */
	struct UText3DComponent_SetWordSpacing_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Text3D.Text3DComponent.SetVerticalAlignment
	 */
	struct UText3DComponent_SetVerticalAlignment_Params
	{
	public:
		EText3DVerticalTextAlignment                               Value;                                                   // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Text3D.Text3DComponent.SetText
	 */
	struct UText3DComponent_SetText_Params
	{
	public:
		class FText                                                Value;                                                   // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Text3D.Text3DComponent.SetScaleProportionally
	 */
	struct UText3DComponent_SetScaleProportionally_Params
	{
	public:
		bool                                                       Value;                                                   // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Text3D.Text3DComponent.SetOutline
	 */
	struct UText3DComponent_SetOutline_Params
	{
	public:
		bool                                                       bValue;                                                  // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Text3D.Text3DComponent.SetMaxWidth
	 */
	struct UText3DComponent_SetMaxWidth_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Text3D.Text3DComponent.SetMaxHeight
	 */
	struct UText3DComponent_SetMaxHeight_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Text3D.Text3DComponent.SetLineSpacing
	 */
	struct UText3DComponent_SetLineSpacing_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Text3D.Text3DComponent.SetKerning
	 */
	struct UText3DComponent_SetKerning_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Text3D.Text3DComponent.SetHorizontalAlignment
	 */
	struct UText3DComponent_SetHorizontalAlignment_Params
	{
	public:
		EText3DHorizontalTextAlignment                             Value;                                                   // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Text3D.Text3DComponent.SetHasMaxWidth
	 */
	struct UText3DComponent_SetHasMaxWidth_Params
	{
	public:
		bool                                                       Value;                                                   // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Text3D.Text3DComponent.SetHasMaxHeight
	 */
	struct UText3DComponent_SetHasMaxHeight_Params
	{
	public:
		bool                                                       Value;                                                   // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Text3D.Text3DComponent.SetFrontMaterial
	 */
	struct UText3DComponent_SetFrontMaterial_Params
	{
	public:
		class UMaterialInterface*                                  Value;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Text3D.Text3DComponent.SetFreeze
	 */
	struct UText3DComponent_SetFreeze_Params
	{
	public:
		bool                                                       bFreeze;                                                 // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Text3D.Text3DComponent.SetFont
	 */
	struct UText3DComponent_SetFont_Params
	{
	public:
		class UFont*                                               InFont;                                                  // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Text3D.Text3DComponent.SetExtrudeMaterial
	 */
	struct UText3DComponent_SetExtrudeMaterial_Params
	{
	public:
		class UMaterialInterface*                                  Value;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Text3D.Text3DComponent.SetExtrude
	 */
	struct UText3DComponent_SetExtrude_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Text3D.Text3DComponent.SetBevelType
	 */
	struct UText3DComponent_SetBevelType_Params
	{
	public:
		EText3DBevelType                                           Value;                                                   // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Text3D.Text3DComponent.SetBevelSegments
	 */
	struct UText3DComponent_SetBevelSegments_Params
	{
	public:
		int32_t                                                    Value;                                                   // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Text3D.Text3DComponent.SetBevelMaterial
	 */
	struct UText3DComponent_SetBevelMaterial_Params
	{
	public:
		class UMaterialInterface*                                  Value;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Text3D.Text3DComponent.SetBevel
	 */
	struct UText3DComponent_SetBevel_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Text3D.Text3DComponent.SetBackMaterial
	 */
	struct UText3DComponent_SetBackMaterial_Params
	{
	public:
		class UMaterialInterface*                                  Value;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
