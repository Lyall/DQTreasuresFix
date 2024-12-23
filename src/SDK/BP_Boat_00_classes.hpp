#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Boat_00

#include "Basic.hpp"

#include "DarwinGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Boat_00.BP_Boat_00_C
// 0x0040 (0x0278 - 0x0238)
class ABP_Boat_00_C final : public AFieldObjectBasicBase
{
public:
	class UStaticMeshComponent*                   StaticMesh;                                        // 0x0238(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        SceneRoot;                                         // 0x0240(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_BoatRudder_00a;                                 // 0x0248(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_BoatWaterMask_00a;                              // 0x0250(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_BoatSail_01a;                                   // 0x0258(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_BoatSail_00a;                                   // 0x0260(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_e_boat_rope_01_o_sd_C*              BP_e_boat_rope_01_o_sd;                            // 0x0268(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_e_boat_sail_01_o_sd_C*              BP_e_boat_sail_01_o_sd;                            // 0x0270(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Boat_00_C">();
	}
	static class ABP_Boat_00_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Boat_00_C>();
	}
};
static_assert(alignof(ABP_Boat_00_C) == 0x000008, "Wrong alignment on ABP_Boat_00_C");
static_assert(sizeof(ABP_Boat_00_C) == 0x000278, "Wrong size on ABP_Boat_00_C");
static_assert(offsetof(ABP_Boat_00_C, StaticMesh) == 0x000238, "Member 'ABP_Boat_00_C::StaticMesh' has a wrong offset!");
static_assert(offsetof(ABP_Boat_00_C, SceneRoot) == 0x000240, "Member 'ABP_Boat_00_C::SceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_Boat_00_C, SM_BoatRudder_00a) == 0x000248, "Member 'ABP_Boat_00_C::SM_BoatRudder_00a' has a wrong offset!");
static_assert(offsetof(ABP_Boat_00_C, SM_BoatWaterMask_00a) == 0x000250, "Member 'ABP_Boat_00_C::SM_BoatWaterMask_00a' has a wrong offset!");
static_assert(offsetof(ABP_Boat_00_C, SM_BoatSail_01a) == 0x000258, "Member 'ABP_Boat_00_C::SM_BoatSail_01a' has a wrong offset!");
static_assert(offsetof(ABP_Boat_00_C, SM_BoatSail_00a) == 0x000260, "Member 'ABP_Boat_00_C::SM_BoatSail_00a' has a wrong offset!");
static_assert(offsetof(ABP_Boat_00_C, BP_e_boat_rope_01_o_sd) == 0x000268, "Member 'ABP_Boat_00_C::BP_e_boat_rope_01_o_sd' has a wrong offset!");
static_assert(offsetof(ABP_Boat_00_C, BP_e_boat_sail_01_o_sd) == 0x000270, "Member 'ABP_Boat_00_C::BP_e_boat_sail_01_o_sd' has a wrong offset!");

}

