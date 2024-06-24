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
	 * Class ProceduralMeshComponent.ProceduralMeshComponent
	 * Size -> 0x0070 (FullSize[0x04E0] - InheritedSize[0x0470])
	 */
	class UProceduralMeshComponent : public UMeshComponent
	{
	public:
		unsigned char                                              UnknownData_JKDU[0x8];                                   // 0x0470(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bUseComplexAsSimpleCollision;                            // 0x0478(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseAsyncCooking;                                        // 0x0479(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8UFR[0x6];                                   // 0x047A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UBodySetup*                                          ProcMeshBodySetup;                                       // 0x0480(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableCollisionBuilding;                                // 0x0488(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3KZJ[0x7];                                   // 0x0489(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FProcMeshSection>                            ProcMeshSections;                                        // 0x0490(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		TArray<struct FKConvexElem>                                CollisionConvexElems;                                    // 0x04A0(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		struct FBoxSphereBounds                                    LocalBounds;                                             // 0x04B0(0x001C) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_XDWO[0x4];                                   // 0x04CC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UBodySetup*>                                  AsyncBodySetupQueue;                                     // 0x04D0(0x0010) ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected

	public:
		void UpdateMeshSection_LinearColor(int32_t SectionIndex, TArray<struct FVector> Vertices, TArray<struct FVector> Normals, TArray<struct FVector2D> UV0, TArray<struct FVector2D> UV1, TArray<struct FVector2D> UV2, TArray<struct FVector2D> UV3, TArray<struct FLinearColor> VertexColors, TArray<struct FProcMeshTangent> Tangents);
		void UpdateMeshSection(int32_t SectionIndex, TArray<struct FVector> Vertices, TArray<struct FVector> Normals, TArray<struct FVector2D> UV0, TArray<struct FColor> VertexColors, TArray<struct FProcMeshTangent> Tangents);
		void SetMeshSectionVisible(int32_t SectionIndex, bool bNewVisibility);
		bool IsMeshSectionVisible(int32_t SectionIndex);
		int32_t GetNumSections();
		void CreateMeshSection_LinearColor(int32_t SectionIndex, TArray<struct FVector> Vertices, TArray<int32_t> Triangles, TArray<struct FVector> Normals, TArray<struct FVector2D> UV0, TArray<struct FVector2D> UV1, TArray<struct FVector2D> UV2, TArray<struct FVector2D> UV3, TArray<struct FLinearColor> VertexColors, TArray<struct FProcMeshTangent> Tangents, bool bCreateCollision);
		void CreateMeshSection(int32_t SectionIndex, TArray<struct FVector> Vertices, TArray<int32_t> Triangles, TArray<struct FVector> Normals, TArray<struct FVector2D> UV0, TArray<struct FColor> VertexColors, TArray<struct FProcMeshTangent> Tangents, bool bCreateCollision);
		void ClearMeshSection(int32_t SectionIndex);
		void ClearCollisionConvexMeshes();
		void ClearAllMeshSections();
		void AddCollisionConvexMesh(TArray<struct FVector> ConvexVerts);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
