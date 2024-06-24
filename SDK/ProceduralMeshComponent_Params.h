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
	// # Structs
	// --------------------------------------------------
	/**
	 * Function ProceduralMeshComponent.ProceduralMeshComponent.UpdateMeshSection_LinearColor
	 */
	struct UProceduralMeshComponent_UpdateMeshSection_LinearColor_Params
	{
	public:
		int32_t                                                    SectionIndex;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_7F3Y[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FVector>                                     Vertices;                                                // 0x0008(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		TArray<struct FVector>                                     Normals;                                                 // 0x0018(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		TArray<struct FVector2D>                                   UV0;                                                     // 0x0028(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		TArray<struct FVector2D>                                   UV1;                                                     // 0x0038(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, AdvancedDisplay, NativeAccessSpecifierPublic)
		TArray<struct FVector2D>                                   UV2;                                                     // 0x0048(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, AdvancedDisplay, NativeAccessSpecifierPublic)
		TArray<struct FVector2D>                                   UV3;                                                     // 0x0058(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, AdvancedDisplay, NativeAccessSpecifierPublic)
		TArray<struct FLinearColor>                                VertexColors;                                            // 0x0068(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		TArray<struct FProcMeshTangent>                            Tangents;                                                // 0x0078(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProceduralMeshComponent.ProceduralMeshComponent.UpdateMeshSection
	 */
	struct UProceduralMeshComponent_UpdateMeshSection_Params
	{
	public:
		int32_t                                                    SectionIndex;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_0M25[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FVector>                                     Vertices;                                                // 0x0008(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		TArray<struct FVector>                                     Normals;                                                 // 0x0018(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		TArray<struct FVector2D>                                   UV0;                                                     // 0x0028(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		TArray<struct FColor>                                      VertexColors;                                            // 0x0038(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		TArray<struct FProcMeshTangent>                            Tangents;                                                // 0x0048(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProceduralMeshComponent.ProceduralMeshComponent.SetMeshSectionVisible
	 */
	struct UProceduralMeshComponent_SetMeshSectionVisible_Params
	{
	public:
		int32_t                                                    SectionIndex;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bNewVisibility;                                          // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProceduralMeshComponent.ProceduralMeshComponent.IsMeshSectionVisible
	 */
	struct UProceduralMeshComponent_IsMeshSectionVisible_Params
	{
	public:
		int32_t                                                    SectionIndex;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProceduralMeshComponent.ProceduralMeshComponent.GetNumSections
	 */
	struct UProceduralMeshComponent_GetNumSections_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProceduralMeshComponent.ProceduralMeshComponent.CreateMeshSection_LinearColor
	 */
	struct UProceduralMeshComponent_CreateMeshSection_LinearColor_Params
	{
	public:
		int32_t                                                    SectionIndex;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_VEE3[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FVector>                                     Vertices;                                                // 0x0008(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		TArray<int32_t>                                            Triangles;                                               // 0x0018(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		TArray<struct FVector>                                     Normals;                                                 // 0x0028(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		TArray<struct FVector2D>                                   UV0;                                                     // 0x0038(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		TArray<struct FVector2D>                                   UV1;                                                     // 0x0048(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, AdvancedDisplay, NativeAccessSpecifierPublic)
		TArray<struct FVector2D>                                   UV2;                                                     // 0x0058(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, AdvancedDisplay, NativeAccessSpecifierPublic)
		TArray<struct FVector2D>                                   UV3;                                                     // 0x0068(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, AdvancedDisplay, NativeAccessSpecifierPublic)
		TArray<struct FLinearColor>                                VertexColors;                                            // 0x0078(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		TArray<struct FProcMeshTangent>                            Tangents;                                                // 0x0088(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       bCreateCollision;                                        // 0x0098(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProceduralMeshComponent.ProceduralMeshComponent.CreateMeshSection
	 */
	struct UProceduralMeshComponent_CreateMeshSection_Params
	{
	public:
		int32_t                                                    SectionIndex;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_R8P5[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FVector>                                     Vertices;                                                // 0x0008(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		TArray<int32_t>                                            Triangles;                                               // 0x0018(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		TArray<struct FVector>                                     Normals;                                                 // 0x0028(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		TArray<struct FVector2D>                                   UV0;                                                     // 0x0038(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		TArray<struct FColor>                                      VertexColors;                                            // 0x0048(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		TArray<struct FProcMeshTangent>                            Tangents;                                                // 0x0058(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       bCreateCollision;                                        // 0x0068(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProceduralMeshComponent.ProceduralMeshComponent.ClearMeshSection
	 */
	struct UProceduralMeshComponent_ClearMeshSection_Params
	{
	public:
		int32_t                                                    SectionIndex;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProceduralMeshComponent.ProceduralMeshComponent.ClearCollisionConvexMeshes
	 */
	struct UProceduralMeshComponent_ClearCollisionConvexMeshes_Params
	{	};

	/**
	 * Function ProceduralMeshComponent.ProceduralMeshComponent.ClearAllMeshSections
	 */
	struct UProceduralMeshComponent_ClearAllMeshSections_Params
	{	};

	/**
	 * Function ProceduralMeshComponent.ProceduralMeshComponent.AddCollisionConvexMesh
	 */
	struct UProceduralMeshComponent_AddCollisionConvexMesh_Params
	{
	public:
		TArray<struct FVector>                                     ConvexVerts;                                             // 0x0000(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
