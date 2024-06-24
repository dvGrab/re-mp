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
	 * 		RVA    -> 0x00BF38E0
	 * 		Name   -> Function ProceduralMeshComponent.ProceduralMeshComponent.UpdateMeshSection_LinearColor
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            SectionIndex                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FVector>                             Vertices                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		TArray<struct FVector>                             Normals                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		TArray<struct FVector2D>                           UV0                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		TArray<struct FVector2D>                           UV1                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, AdvancedDisplay, NativeAccessSpecifierPublic)
	 * 		TArray<struct FVector2D>                           UV2                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, AdvancedDisplay, NativeAccessSpecifierPublic)
	 * 		TArray<struct FVector2D>                           UV3                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, AdvancedDisplay, NativeAccessSpecifierPublic)
	 * 		TArray<struct FLinearColor>                        VertexColors                                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		TArray<struct FProcMeshTangent>                    Tangents                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UProceduralMeshComponent::UpdateMeshSection_LinearColor(int32_t SectionIndex, TArray<struct FVector> Vertices, TArray<struct FVector> Normals, TArray<struct FVector2D> UV0, TArray<struct FVector2D> UV1, TArray<struct FVector2D> UV2, TArray<struct FVector2D> UV3, TArray<struct FLinearColor> VertexColors, TArray<struct FProcMeshTangent> Tangents)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProceduralMeshComponent.ProceduralMeshComponent.UpdateMeshSection_LinearColor");
		
		UProceduralMeshComponent_UpdateMeshSection_LinearColor_Params params {};
		params.SectionIndex = SectionIndex;
		params.Vertices = Vertices;
		params.Normals = Normals;
		params.UV0 = UV0;
		params.UV1 = UV1;
		params.UV2 = UV2;
		params.UV3 = UV3;
		params.VertexColors = VertexColors;
		params.Tangents = Tangents;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BF3F90
	 * 		Name   -> Function ProceduralMeshComponent.ProceduralMeshComponent.UpdateMeshSection
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            SectionIndex                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FVector>                             Vertices                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		TArray<struct FVector>                             Normals                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		TArray<struct FVector2D>                           UV0                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		TArray<struct FColor>                              VertexColors                                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		TArray<struct FProcMeshTangent>                    Tangents                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UProceduralMeshComponent::UpdateMeshSection(int32_t SectionIndex, TArray<struct FVector> Vertices, TArray<struct FVector> Normals, TArray<struct FVector2D> UV0, TArray<struct FColor> VertexColors, TArray<struct FProcMeshTangent> Tangents)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProceduralMeshComponent.ProceduralMeshComponent.UpdateMeshSection");
		
		UProceduralMeshComponent_UpdateMeshSection_Params params {};
		params.SectionIndex = SectionIndex;
		params.Vertices = Vertices;
		params.Normals = Normals;
		params.UV0 = UV0;
		params.VertexColors = VertexColors;
		params.Tangents = Tangents;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BF3530
	 * 		Name   -> Function ProceduralMeshComponent.ProceduralMeshComponent.SetMeshSectionVisible
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            SectionIndex                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bNewVisibility                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UProceduralMeshComponent::SetMeshSectionVisible(int32_t SectionIndex, bool bNewVisibility)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProceduralMeshComponent.ProceduralMeshComponent.SetMeshSectionVisible");
		
		UProceduralMeshComponent_SetMeshSectionVisible_Params params {};
		params.SectionIndex = SectionIndex;
		params.bNewVisibility = bNewVisibility;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BF3430
	 * 		Name   -> Function ProceduralMeshComponent.ProceduralMeshComponent.IsMeshSectionVisible
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		int32_t                                            SectionIndex                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UProceduralMeshComponent::IsMeshSectionVisible(int32_t SectionIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProceduralMeshComponent.ProceduralMeshComponent.IsMeshSectionVisible");
		
		UProceduralMeshComponent_IsMeshSectionVisible_Params params {};
		params.SectionIndex = SectionIndex;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BF3410
	 * 		Name   -> Function ProceduralMeshComponent.ProceduralMeshComponent.GetNumSections
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	int32_t UProceduralMeshComponent::GetNumSections()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProceduralMeshComponent.ProceduralMeshComponent.GetNumSections");
		
		UProceduralMeshComponent_GetNumSections_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BF43D0
	 * 		Name   -> Function ProceduralMeshComponent.ProceduralMeshComponent.CreateMeshSection_LinearColor
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            SectionIndex                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FVector>                             Vertices                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		TArray<int32_t>                                    Triangles                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		TArray<struct FVector>                             Normals                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		TArray<struct FVector2D>                           UV0                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		TArray<struct FVector2D>                           UV1                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, AdvancedDisplay, NativeAccessSpecifierPublic)
	 * 		TArray<struct FVector2D>                           UV2                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, AdvancedDisplay, NativeAccessSpecifierPublic)
	 * 		TArray<struct FVector2D>                           UV3                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, AdvancedDisplay, NativeAccessSpecifierPublic)
	 * 		TArray<struct FLinearColor>                        VertexColors                                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		TArray<struct FProcMeshTangent>                    Tangents                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		bool                                               bCreateCollision                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UProceduralMeshComponent::CreateMeshSection_LinearColor(int32_t SectionIndex, TArray<struct FVector> Vertices, TArray<int32_t> Triangles, TArray<struct FVector> Normals, TArray<struct FVector2D> UV0, TArray<struct FVector2D> UV1, TArray<struct FVector2D> UV2, TArray<struct FVector2D> UV3, TArray<struct FLinearColor> VertexColors, TArray<struct FProcMeshTangent> Tangents, bool bCreateCollision)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProceduralMeshComponent.ProceduralMeshComponent.CreateMeshSection_LinearColor");
		
		UProceduralMeshComponent_CreateMeshSection_LinearColor_Params params {};
		params.SectionIndex = SectionIndex;
		params.Vertices = Vertices;
		params.Triangles = Triangles;
		params.Normals = Normals;
		params.UV0 = UV0;
		params.UV1 = UV1;
		params.UV2 = UV2;
		params.UV3 = UV3;
		params.VertexColors = VertexColors;
		params.Tangents = Tangents;
		params.bCreateCollision = bCreateCollision;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BF4B30
	 * 		Name   -> Function ProceduralMeshComponent.ProceduralMeshComponent.CreateMeshSection
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            SectionIndex                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FVector>                             Vertices                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		TArray<int32_t>                                    Triangles                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		TArray<struct FVector>                             Normals                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		TArray<struct FVector2D>                           UV0                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		TArray<struct FColor>                              VertexColors                                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		TArray<struct FProcMeshTangent>                    Tangents                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		bool                                               bCreateCollision                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UProceduralMeshComponent::CreateMeshSection(int32_t SectionIndex, TArray<struct FVector> Vertices, TArray<int32_t> Triangles, TArray<struct FVector> Normals, TArray<struct FVector2D> UV0, TArray<struct FColor> VertexColors, TArray<struct FProcMeshTangent> Tangents, bool bCreateCollision)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProceduralMeshComponent.ProceduralMeshComponent.CreateMeshSection");
		
		UProceduralMeshComponent_CreateMeshSection_Params params {};
		params.SectionIndex = SectionIndex;
		params.Vertices = Vertices;
		params.Triangles = Triangles;
		params.Normals = Normals;
		params.UV0 = UV0;
		params.VertexColors = VertexColors;
		params.Tangents = Tangents;
		params.bCreateCollision = bCreateCollision;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BF37E0
	 * 		Name   -> Function ProceduralMeshComponent.ProceduralMeshComponent.ClearMeshSection
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            SectionIndex                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UProceduralMeshComponent::ClearMeshSection(int32_t SectionIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProceduralMeshComponent.ProceduralMeshComponent.ClearMeshSection");
		
		UProceduralMeshComponent_ClearMeshSection_Params params {};
		params.SectionIndex = SectionIndex;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BF2E20
	 * 		Name   -> Function ProceduralMeshComponent.ProceduralMeshComponent.ClearCollisionConvexMeshes
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UProceduralMeshComponent::ClearCollisionConvexMeshes()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProceduralMeshComponent.ProceduralMeshComponent.ClearCollisionConvexMeshes");
		
		UProceduralMeshComponent_ClearCollisionConvexMeshes_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BF37C0
	 * 		Name   -> Function ProceduralMeshComponent.ProceduralMeshComponent.ClearAllMeshSections
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UProceduralMeshComponent::ClearAllMeshSections()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProceduralMeshComponent.ProceduralMeshComponent.ClearAllMeshSections");
		
		UProceduralMeshComponent_ClearAllMeshSections_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BF2E60
	 * 		Name   -> Function ProceduralMeshComponent.ProceduralMeshComponent.AddCollisionConvexMesh
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		TArray<struct FVector>                             ConvexVerts                                                (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UProceduralMeshComponent::AddCollisionConvexMesh(TArray<struct FVector> ConvexVerts)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProceduralMeshComponent.ProceduralMeshComponent.AddCollisionConvexMesh");
		
		UProceduralMeshComponent_AddCollisionConvexMesh_Params params {};
		params.ConvexVerts = ConvexVerts;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UProceduralMeshComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UProceduralMeshComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ProceduralMeshComponent.ProceduralMeshComponent");
		return ptr;
	}

}


