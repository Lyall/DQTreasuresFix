#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CascadeExtensionPlugin

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK
{

// Enum CascadeExtensionPlugin.EDistanceWeight
// NumValues: 0x0006
enum class EDistanceWeight : uint8
{
	LINEAR                                   = 0,
	INVERSE_LINEAR                           = 1,
	QUADRATIC                                = 2,
	INVERSE_QUAD                             = 3,
	W_Max                                    = 4,
	EDistanceWeight_MAX                      = 5,
};

// Enum CascadeExtensionPlugin.ESpaceAxis
// NumValues: 0x0005
enum class ESpaceAxis : uint8
{
	X                                        = 0,
	Y                                        = 1,
	Z                                        = 2,
	Ax_Max                                   = 3,
	ESpaceAxis_MAX                           = 4,
};

// ScriptStruct CascadeExtensionPlugin.ForcePoints
// 0x0020 (0x0020 - 0x0000)
struct FForcePoints final
{
public:
	float                                         Intensity;                                         // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FVector>                        PointLocations;                                    // 0x0008(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EDistanceWeight                               SeparationDistanceWeight;                          // 0x0018(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_19[0x3];                                       // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         DistanceScale;                                     // 0x001C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FForcePoints) == 0x000008, "Wrong alignment on FForcePoints");
static_assert(sizeof(FForcePoints) == 0x000020, "Wrong size on FForcePoints");
static_assert(offsetof(FForcePoints, Intensity) == 0x000000, "Member 'FForcePoints::Intensity' has a wrong offset!");
static_assert(offsetof(FForcePoints, PointLocations) == 0x000008, "Member 'FForcePoints::PointLocations' has a wrong offset!");
static_assert(offsetof(FForcePoints, SeparationDistanceWeight) == 0x000018, "Member 'FForcePoints::SeparationDistanceWeight' has a wrong offset!");
static_assert(offsetof(FForcePoints, DistanceScale) == 0x00001C, "Member 'FForcePoints::DistanceScale' has a wrong offset!");

// ScriptStruct CascadeExtensionPlugin.TriangleIndices
// 0x000C (0x000C - 0x0000)
struct FTriangleIndices final
{
public:
	int32                                         v0;                                                // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         v1;                                                // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         v2;                                                // 0x0008(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FTriangleIndices) == 0x000004, "Wrong alignment on FTriangleIndices");
static_assert(sizeof(FTriangleIndices) == 0x00000C, "Wrong size on FTriangleIndices");
static_assert(offsetof(FTriangleIndices, v0) == 0x000000, "Member 'FTriangleIndices::v0' has a wrong offset!");
static_assert(offsetof(FTriangleIndices, v1) == 0x000004, "Member 'FTriangleIndices::v1' has a wrong offset!");
static_assert(offsetof(FTriangleIndices, v2) == 0x000008, "Member 'FTriangleIndices::v2' has a wrong offset!");

// ScriptStruct CascadeExtensionPlugin.MeshTriangleData
// 0x0020 (0x0020 - 0x0000)
struct FMeshTriangleData final
{
public:
	TArray<struct FVector>                        Vertices;                                          // 0x0000(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FTriangleIndices>               Indices;                                           // 0x0010(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FMeshTriangleData) == 0x000008, "Wrong alignment on FMeshTriangleData");
static_assert(sizeof(FMeshTriangleData) == 0x000020, "Wrong size on FMeshTriangleData");
static_assert(offsetof(FMeshTriangleData, Vertices) == 0x000000, "Member 'FMeshTriangleData::Vertices' has a wrong offset!");
static_assert(offsetof(FMeshTriangleData, Indices) == 0x000010, "Member 'FMeshTriangleData::Indices' has a wrong offset!");

// ScriptStruct CascadeExtensionPlugin.ParticleProperties
// 0x0044 (0x0044 - 0x0000)
struct FParticleProperties final
{
public:
	int32                                         ParticleId;                                        // 0x0000(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         RelativeTime;                                      // 0x0004(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                Location;                                          // 0x0008(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                Velocity;                                          // 0x0014(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                Size;                                              // 0x0020(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                           Color;                                             // 0x002C(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Rotation;                                          // 0x003C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         RotationRate;                                      // 0x0040(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FParticleProperties) == 0x000004, "Wrong alignment on FParticleProperties");
static_assert(sizeof(FParticleProperties) == 0x000044, "Wrong size on FParticleProperties");
static_assert(offsetof(FParticleProperties, ParticleId) == 0x000000, "Member 'FParticleProperties::ParticleId' has a wrong offset!");
static_assert(offsetof(FParticleProperties, RelativeTime) == 0x000004, "Member 'FParticleProperties::RelativeTime' has a wrong offset!");
static_assert(offsetof(FParticleProperties, Location) == 0x000008, "Member 'FParticleProperties::Location' has a wrong offset!");
static_assert(offsetof(FParticleProperties, Velocity) == 0x000014, "Member 'FParticleProperties::Velocity' has a wrong offset!");
static_assert(offsetof(FParticleProperties, Size) == 0x000020, "Member 'FParticleProperties::Size' has a wrong offset!");
static_assert(offsetof(FParticleProperties, Color) == 0x00002C, "Member 'FParticleProperties::Color' has a wrong offset!");
static_assert(offsetof(FParticleProperties, Rotation) == 0x00003C, "Member 'FParticleProperties::Rotation' has a wrong offset!");
static_assert(offsetof(FParticleProperties, RotationRate) == 0x000040, "Member 'FParticleProperties::RotationRate' has a wrong offset!");

}
