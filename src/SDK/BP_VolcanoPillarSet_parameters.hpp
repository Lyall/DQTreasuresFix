#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_VolcanoPillarSet

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function BP_VolcanoPillarSet.BP_VolcanoPillarSet_C.HitCheckGimmick
// 0x0040 (0x0040 - 0x0000)
struct BP_VolcanoPillarSet_C_HitCheckGimmick final
{
public:
	struct FVector                                InLocation_0;                                      // 0x0000(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         InRadius_0;                                        // 0x000C(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsBreking;                                         // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_WaterBlock_C*                       K2Node_DynamicCast_AsBP_Water_Block;               // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USceneComponent*                        CallFunc_K2_GetRootComponent_ReturnValue;          // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_WaterBlock_C*                       K2Node_DynamicCast_AsBP_Water_Block_1;             // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_HitCheck_ReturnValue;                     // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_VolcanoPillarSet_C_HitCheckGimmick) == 0x000008, "Wrong alignment on BP_VolcanoPillarSet_C_HitCheckGimmick");
static_assert(sizeof(BP_VolcanoPillarSet_C_HitCheckGimmick) == 0x000040, "Wrong size on BP_VolcanoPillarSet_C_HitCheckGimmick");
static_assert(offsetof(BP_VolcanoPillarSet_C_HitCheckGimmick, InLocation_0) == 0x000000, "Member 'BP_VolcanoPillarSet_C_HitCheckGimmick::InLocation_0' has a wrong offset!");
static_assert(offsetof(BP_VolcanoPillarSet_C_HitCheckGimmick, InRadius_0) == 0x00000C, "Member 'BP_VolcanoPillarSet_C_HitCheckGimmick::InRadius_0' has a wrong offset!");
static_assert(offsetof(BP_VolcanoPillarSet_C_HitCheckGimmick, IsBreking) == 0x000010, "Member 'BP_VolcanoPillarSet_C_HitCheckGimmick::IsBreking' has a wrong offset!");
static_assert(offsetof(BP_VolcanoPillarSet_C_HitCheckGimmick, K2Node_DynamicCast_AsBP_Water_Block) == 0x000018, "Member 'BP_VolcanoPillarSet_C_HitCheckGimmick::K2Node_DynamicCast_AsBP_Water_Block' has a wrong offset!");
static_assert(offsetof(BP_VolcanoPillarSet_C_HitCheckGimmick, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'BP_VolcanoPillarSet_C_HitCheckGimmick::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_VolcanoPillarSet_C_HitCheckGimmick, CallFunc_K2_GetRootComponent_ReturnValue) == 0x000028, "Member 'BP_VolcanoPillarSet_C_HitCheckGimmick::CallFunc_K2_GetRootComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_VolcanoPillarSet_C_HitCheckGimmick, K2Node_DynamicCast_AsBP_Water_Block_1) == 0x000030, "Member 'BP_VolcanoPillarSet_C_HitCheckGimmick::K2Node_DynamicCast_AsBP_Water_Block_1' has a wrong offset!");
static_assert(offsetof(BP_VolcanoPillarSet_C_HitCheckGimmick, K2Node_DynamicCast_bSuccess_1) == 0x000038, "Member 'BP_VolcanoPillarSet_C_HitCheckGimmick::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(BP_VolcanoPillarSet_C_HitCheckGimmick, CallFunc_HitCheck_ReturnValue) == 0x000039, "Member 'BP_VolcanoPillarSet_C_HitCheckGimmick::CallFunc_HitCheck_ReturnValue' has a wrong offset!");

// Function BP_VolcanoPillarSet.BP_VolcanoPillarSet_C.HitCheckPillar
// 0x0038 (0x0038 - 0x0000)
struct BP_VolcanoPillarSet_C_HitCheckPillar final
{
public:
	struct FVector                                InLocation_0;                                      // 0x0000(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         InRadius_0;                                        // 0x000C(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsBreaking;                                        // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_WaterBlock_C*                       K2Node_DynamicCast_AsBP_Water_Block;               // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetBossForceChargeBreak_ReturnValue;      // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsBossFainting_ReturnValue;               // 0x0022(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_23[0x5];                                       // 0x0023(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_WaterBlock_C*                       K2Node_DynamicCast_AsBP_Water_Block_1;             // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_HitCheck_ReturnValue;                     // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_VolcanoPillarSet_C_HitCheckPillar) == 0x000008, "Wrong alignment on BP_VolcanoPillarSet_C_HitCheckPillar");
static_assert(sizeof(BP_VolcanoPillarSet_C_HitCheckPillar) == 0x000038, "Wrong size on BP_VolcanoPillarSet_C_HitCheckPillar");
static_assert(offsetof(BP_VolcanoPillarSet_C_HitCheckPillar, InLocation_0) == 0x000000, "Member 'BP_VolcanoPillarSet_C_HitCheckPillar::InLocation_0' has a wrong offset!");
static_assert(offsetof(BP_VolcanoPillarSet_C_HitCheckPillar, InRadius_0) == 0x00000C, "Member 'BP_VolcanoPillarSet_C_HitCheckPillar::InRadius_0' has a wrong offset!");
static_assert(offsetof(BP_VolcanoPillarSet_C_HitCheckPillar, IsBreaking) == 0x000010, "Member 'BP_VolcanoPillarSet_C_HitCheckPillar::IsBreaking' has a wrong offset!");
static_assert(offsetof(BP_VolcanoPillarSet_C_HitCheckPillar, K2Node_DynamicCast_AsBP_Water_Block) == 0x000018, "Member 'BP_VolcanoPillarSet_C_HitCheckPillar::K2Node_DynamicCast_AsBP_Water_Block' has a wrong offset!");
static_assert(offsetof(BP_VolcanoPillarSet_C_HitCheckPillar, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'BP_VolcanoPillarSet_C_HitCheckPillar::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_VolcanoPillarSet_C_HitCheckPillar, CallFunc_GetBossForceChargeBreak_ReturnValue) == 0x000021, "Member 'BP_VolcanoPillarSet_C_HitCheckPillar::CallFunc_GetBossForceChargeBreak_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_VolcanoPillarSet_C_HitCheckPillar, CallFunc_IsBossFainting_ReturnValue) == 0x000022, "Member 'BP_VolcanoPillarSet_C_HitCheckPillar::CallFunc_IsBossFainting_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_VolcanoPillarSet_C_HitCheckPillar, K2Node_DynamicCast_AsBP_Water_Block_1) == 0x000028, "Member 'BP_VolcanoPillarSet_C_HitCheckPillar::K2Node_DynamicCast_AsBP_Water_Block_1' has a wrong offset!");
static_assert(offsetof(BP_VolcanoPillarSet_C_HitCheckPillar, K2Node_DynamicCast_bSuccess_1) == 0x000030, "Member 'BP_VolcanoPillarSet_C_HitCheckPillar::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(BP_VolcanoPillarSet_C_HitCheckPillar, CallFunc_HitCheck_ReturnValue) == 0x000031, "Member 'BP_VolcanoPillarSet_C_HitCheckPillar::CallFunc_HitCheck_ReturnValue' has a wrong offset!");

// Function BP_VolcanoPillarSet.BP_VolcanoPillarSet_C.SetBoss
// 0x0018 (0x0018 - 0x0000)
struct BP_VolcanoPillarSet_C_SetBoss final
{
public:
	class AMonsterBoss*                           MonsterBoss_0;                                     // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_WaterBlock_C*                       K2Node_DynamicCast_AsBP_Water_Block;               // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_VolcanoPillarSet_C_SetBoss) == 0x000008, "Wrong alignment on BP_VolcanoPillarSet_C_SetBoss");
static_assert(sizeof(BP_VolcanoPillarSet_C_SetBoss) == 0x000018, "Wrong size on BP_VolcanoPillarSet_C_SetBoss");
static_assert(offsetof(BP_VolcanoPillarSet_C_SetBoss, MonsterBoss_0) == 0x000000, "Member 'BP_VolcanoPillarSet_C_SetBoss::MonsterBoss_0' has a wrong offset!");
static_assert(offsetof(BP_VolcanoPillarSet_C_SetBoss, K2Node_DynamicCast_AsBP_Water_Block) == 0x000008, "Member 'BP_VolcanoPillarSet_C_SetBoss::K2Node_DynamicCast_AsBP_Water_Block' has a wrong offset!");
static_assert(offsetof(BP_VolcanoPillarSet_C_SetBoss, K2Node_DynamicCast_bSuccess) == 0x000010, "Member 'BP_VolcanoPillarSet_C_SetBoss::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function BP_VolcanoPillarSet.BP_VolcanoPillarSet_C.BossBoost
// 0x0030 (0x0030 - 0x0000)
struct BP_VolcanoPillarSet_C_BossBoost final
{
public:
	class AMonsterBoss*                           MonsterBoss_0;                                     // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0008(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_15[0x3];                                       // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_1;        // 0x0018(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_GetDir_ReturnValue;                       // 0x0024(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_VolcanoPillarSet_C_BossBoost) == 0x000008, "Wrong alignment on BP_VolcanoPillarSet_C_BossBoost");
static_assert(sizeof(BP_VolcanoPillarSet_C_BossBoost) == 0x000030, "Wrong size on BP_VolcanoPillarSet_C_BossBoost");
static_assert(offsetof(BP_VolcanoPillarSet_C_BossBoost, MonsterBoss_0) == 0x000000, "Member 'BP_VolcanoPillarSet_C_BossBoost::MonsterBoss_0' has a wrong offset!");
static_assert(offsetof(BP_VolcanoPillarSet_C_BossBoost, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000008, "Member 'BP_VolcanoPillarSet_C_BossBoost::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_VolcanoPillarSet_C_BossBoost, CallFunc_IsValid_ReturnValue) == 0x000014, "Member 'BP_VolcanoPillarSet_C_BossBoost::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_VolcanoPillarSet_C_BossBoost, CallFunc_K2_GetActorLocation_ReturnValue_1) == 0x000018, "Member 'BP_VolcanoPillarSet_C_BossBoost::CallFunc_K2_GetActorLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_VolcanoPillarSet_C_BossBoost, CallFunc_GetDir_ReturnValue) == 0x000024, "Member 'BP_VolcanoPillarSet_C_BossBoost::CallFunc_GetDir_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_VolcanoPillarSet_C_BossBoost, CallFunc_IsValid_ReturnValue_1) == 0x00002C, "Member 'BP_VolcanoPillarSet_C_BossBoost::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");

// Function BP_VolcanoPillarSet.BP_VolcanoPillarSet_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct BP_VolcanoPillarSet_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_VolcanoPillarSet_C_ReceiveTick) == 0x000004, "Wrong alignment on BP_VolcanoPillarSet_C_ReceiveTick");
static_assert(sizeof(BP_VolcanoPillarSet_C_ReceiveTick) == 0x000004, "Wrong size on BP_VolcanoPillarSet_C_ReceiveTick");
static_assert(offsetof(BP_VolcanoPillarSet_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'BP_VolcanoPillarSet_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

// Function BP_VolcanoPillarSet.BP_VolcanoPillarSet_C.SetBlockEffect
// 0x000C (0x000C - 0x0000)
struct BP_VolcanoPillarSet_C_SetBlockEffect final
{
public:
	struct FVector                                Location;                                          // 0x0000(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_VolcanoPillarSet_C_SetBlockEffect) == 0x000004, "Wrong alignment on BP_VolcanoPillarSet_C_SetBlockEffect");
static_assert(sizeof(BP_VolcanoPillarSet_C_SetBlockEffect) == 0x00000C, "Wrong size on BP_VolcanoPillarSet_C_SetBlockEffect");
static_assert(offsetof(BP_VolcanoPillarSet_C_SetBlockEffect, Location) == 0x000000, "Member 'BP_VolcanoPillarSet_C_SetBlockEffect::Location' has a wrong offset!");

// Function BP_VolcanoPillarSet.BP_VolcanoPillarSet_C.ExecuteUbergraph_BP_VolcanoPillarSet
// 0x0140 (0x0140 - 0x0000)
struct BP_VolcanoPillarSet_C_ExecuteUbergraph_BP_VolcanoPillarSet final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_WaterBlock_C*                       K2Node_DynamicCast_AsBP_Water_Block;               // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_WaterBlock_C*                       K2Node_DynamicCast_AsBP_Water_Block_1;             // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_21[0x3];                                       // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_GetRelativeLocation_RelativeLocation;     // 0x0024(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;             // 0x0030(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                K2Node_CustomEvent_Location;                       // 0x003C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_X;                            // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Y;                            // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Z;                            // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_K2_SetRelativeLocation_SweepHitResult;    // 0x0054(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_Greater_FloatFloat_ReturnValue;           // 0x00DC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x00DD(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_DE[0x2];                                       // 0x00DE(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_K2_GetComponentToWorld_ReturnValue;       // 0x00E0(0x0030)(IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_BreakTransform_Location;                  // 0x0110(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_BreakTransform_Rotation;                  // 0x011C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_BreakTransform_Scale;                     // 0x0128(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_134[0x4];                                      // 0x0134(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UParticleSystemComponent*               CallFunc_SpawnEmitterAtLocation_ReturnValue;       // 0x0138(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_VolcanoPillarSet_C_ExecuteUbergraph_BP_VolcanoPillarSet) == 0x000010, "Wrong alignment on BP_VolcanoPillarSet_C_ExecuteUbergraph_BP_VolcanoPillarSet");
static_assert(sizeof(BP_VolcanoPillarSet_C_ExecuteUbergraph_BP_VolcanoPillarSet) == 0x000140, "Wrong size on BP_VolcanoPillarSet_C_ExecuteUbergraph_BP_VolcanoPillarSet");
static_assert(offsetof(BP_VolcanoPillarSet_C_ExecuteUbergraph_BP_VolcanoPillarSet, EntryPoint) == 0x000000, "Member 'BP_VolcanoPillarSet_C_ExecuteUbergraph_BP_VolcanoPillarSet::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_VolcanoPillarSet_C_ExecuteUbergraph_BP_VolcanoPillarSet, K2Node_Event_DeltaSeconds) == 0x000004, "Member 'BP_VolcanoPillarSet_C_ExecuteUbergraph_BP_VolcanoPillarSet::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(BP_VolcanoPillarSet_C_ExecuteUbergraph_BP_VolcanoPillarSet, K2Node_DynamicCast_AsBP_Water_Block) == 0x000008, "Member 'BP_VolcanoPillarSet_C_ExecuteUbergraph_BP_VolcanoPillarSet::K2Node_DynamicCast_AsBP_Water_Block' has a wrong offset!");
static_assert(offsetof(BP_VolcanoPillarSet_C_ExecuteUbergraph_BP_VolcanoPillarSet, K2Node_DynamicCast_bSuccess) == 0x000010, "Member 'BP_VolcanoPillarSet_C_ExecuteUbergraph_BP_VolcanoPillarSet::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_VolcanoPillarSet_C_ExecuteUbergraph_BP_VolcanoPillarSet, K2Node_DynamicCast_AsBP_Water_Block_1) == 0x000018, "Member 'BP_VolcanoPillarSet_C_ExecuteUbergraph_BP_VolcanoPillarSet::K2Node_DynamicCast_AsBP_Water_Block_1' has a wrong offset!");
static_assert(offsetof(BP_VolcanoPillarSet_C_ExecuteUbergraph_BP_VolcanoPillarSet, K2Node_DynamicCast_bSuccess_1) == 0x000020, "Member 'BP_VolcanoPillarSet_C_ExecuteUbergraph_BP_VolcanoPillarSet::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(BP_VolcanoPillarSet_C_ExecuteUbergraph_BP_VolcanoPillarSet, CallFunc_GetRelativeLocation_RelativeLocation) == 0x000024, "Member 'BP_VolcanoPillarSet_C_ExecuteUbergraph_BP_VolcanoPillarSet::CallFunc_GetRelativeLocation_RelativeLocation' has a wrong offset!");
static_assert(offsetof(BP_VolcanoPillarSet_C_ExecuteUbergraph_BP_VolcanoPillarSet, CallFunc_Add_VectorVector_ReturnValue) == 0x000030, "Member 'BP_VolcanoPillarSet_C_ExecuteUbergraph_BP_VolcanoPillarSet::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_VolcanoPillarSet_C_ExecuteUbergraph_BP_VolcanoPillarSet, K2Node_CustomEvent_Location) == 0x00003C, "Member 'BP_VolcanoPillarSet_C_ExecuteUbergraph_BP_VolcanoPillarSet::K2Node_CustomEvent_Location' has a wrong offset!");
static_assert(offsetof(BP_VolcanoPillarSet_C_ExecuteUbergraph_BP_VolcanoPillarSet, CallFunc_BreakVector_X) == 0x000048, "Member 'BP_VolcanoPillarSet_C_ExecuteUbergraph_BP_VolcanoPillarSet::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(BP_VolcanoPillarSet_C_ExecuteUbergraph_BP_VolcanoPillarSet, CallFunc_BreakVector_Y) == 0x00004C, "Member 'BP_VolcanoPillarSet_C_ExecuteUbergraph_BP_VolcanoPillarSet::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(BP_VolcanoPillarSet_C_ExecuteUbergraph_BP_VolcanoPillarSet, CallFunc_BreakVector_Z) == 0x000050, "Member 'BP_VolcanoPillarSet_C_ExecuteUbergraph_BP_VolcanoPillarSet::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(BP_VolcanoPillarSet_C_ExecuteUbergraph_BP_VolcanoPillarSet, CallFunc_K2_SetRelativeLocation_SweepHitResult) == 0x000054, "Member 'BP_VolcanoPillarSet_C_ExecuteUbergraph_BP_VolcanoPillarSet::CallFunc_K2_SetRelativeLocation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(BP_VolcanoPillarSet_C_ExecuteUbergraph_BP_VolcanoPillarSet, CallFunc_Greater_FloatFloat_ReturnValue) == 0x0000DC, "Member 'BP_VolcanoPillarSet_C_ExecuteUbergraph_BP_VolcanoPillarSet::CallFunc_Greater_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_VolcanoPillarSet_C_ExecuteUbergraph_BP_VolcanoPillarSet, CallFunc_Not_PreBool_ReturnValue) == 0x0000DD, "Member 'BP_VolcanoPillarSet_C_ExecuteUbergraph_BP_VolcanoPillarSet::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_VolcanoPillarSet_C_ExecuteUbergraph_BP_VolcanoPillarSet, CallFunc_K2_GetComponentToWorld_ReturnValue) == 0x0000E0, "Member 'BP_VolcanoPillarSet_C_ExecuteUbergraph_BP_VolcanoPillarSet::CallFunc_K2_GetComponentToWorld_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_VolcanoPillarSet_C_ExecuteUbergraph_BP_VolcanoPillarSet, CallFunc_BreakTransform_Location) == 0x000110, "Member 'BP_VolcanoPillarSet_C_ExecuteUbergraph_BP_VolcanoPillarSet::CallFunc_BreakTransform_Location' has a wrong offset!");
static_assert(offsetof(BP_VolcanoPillarSet_C_ExecuteUbergraph_BP_VolcanoPillarSet, CallFunc_BreakTransform_Rotation) == 0x00011C, "Member 'BP_VolcanoPillarSet_C_ExecuteUbergraph_BP_VolcanoPillarSet::CallFunc_BreakTransform_Rotation' has a wrong offset!");
static_assert(offsetof(BP_VolcanoPillarSet_C_ExecuteUbergraph_BP_VolcanoPillarSet, CallFunc_BreakTransform_Scale) == 0x000128, "Member 'BP_VolcanoPillarSet_C_ExecuteUbergraph_BP_VolcanoPillarSet::CallFunc_BreakTransform_Scale' has a wrong offset!");
static_assert(offsetof(BP_VolcanoPillarSet_C_ExecuteUbergraph_BP_VolcanoPillarSet, CallFunc_SpawnEmitterAtLocation_ReturnValue) == 0x000138, "Member 'BP_VolcanoPillarSet_C_ExecuteUbergraph_BP_VolcanoPillarSet::CallFunc_SpawnEmitterAtLocation_ReturnValue' has a wrong offset!");

}
