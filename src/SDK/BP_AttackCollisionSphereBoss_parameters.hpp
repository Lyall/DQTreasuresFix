#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AttackCollisionSphereBoss

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BP_AttackCollisionSphereBoss.BP_AttackCollisionSphereBoss_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct BP_AttackCollisionSphereBoss_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AttackCollisionSphereBoss_C_ReceiveTick) == 0x000004, "Wrong alignment on BP_AttackCollisionSphereBoss_C_ReceiveTick");
static_assert(sizeof(BP_AttackCollisionSphereBoss_C_ReceiveTick) == 0x000004, "Wrong size on BP_AttackCollisionSphereBoss_C_ReceiveTick");
static_assert(offsetof(BP_AttackCollisionSphereBoss_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'BP_AttackCollisionSphereBoss_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

// Function BP_AttackCollisionSphereBoss.BP_AttackCollisionSphereBoss_C.ExecuteUbergraph_BP_AttackCollisionSphereBoss
// 0x0078 (0x0078 - 0x0000)
struct BP_AttackCollisionSphereBoss_C_ExecuteUbergraph_BP_AttackCollisionSphereBoss final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_MonsterManager_C*                   CallFunc_GetMonsterManager_MonsterManager;         // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AMonsterBase*>                   CallFunc_GetMonsters_ReturnValue;                  // 0x0020(0x0010)(ReferenceParm, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetGimmickActor_ReturnValue;              // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AMonsterBase*                           CallFunc_Array_Get_Item;                           // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AMonsterBoss*                           K2Node_DynamicCast_AsMonster_Boss;                 // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetIsBoss_ReturnValue;                    // 0x0049(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4A[0x2];                                       // 0x004A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0051(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_52[0x6];                                       // 0x0052(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class ABossGimmicks*                          K2Node_DynamicCast_AsBoss_Gimmicks;                // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_61[0x3];                                       // 0x0061(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetScaledSphereRadius_ReturnValue;        // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue;      // 0x0068(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AttackCollisionSphereBoss_C_ExecuteUbergraph_BP_AttackCollisionSphereBoss) == 0x000008, "Wrong alignment on BP_AttackCollisionSphereBoss_C_ExecuteUbergraph_BP_AttackCollisionSphereBoss");
static_assert(sizeof(BP_AttackCollisionSphereBoss_C_ExecuteUbergraph_BP_AttackCollisionSphereBoss) == 0x000078, "Wrong size on BP_AttackCollisionSphereBoss_C_ExecuteUbergraph_BP_AttackCollisionSphereBoss");
static_assert(offsetof(BP_AttackCollisionSphereBoss_C_ExecuteUbergraph_BP_AttackCollisionSphereBoss, EntryPoint) == 0x000000, "Member 'BP_AttackCollisionSphereBoss_C_ExecuteUbergraph_BP_AttackCollisionSphereBoss::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_AttackCollisionSphereBoss_C_ExecuteUbergraph_BP_AttackCollisionSphereBoss, Temp_int_Array_Index_Variable) == 0x000004, "Member 'BP_AttackCollisionSphereBoss_C_ExecuteUbergraph_BP_AttackCollisionSphereBoss::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_AttackCollisionSphereBoss_C_ExecuteUbergraph_BP_AttackCollisionSphereBoss, Temp_int_Loop_Counter_Variable) == 0x000008, "Member 'BP_AttackCollisionSphereBoss_C_ExecuteUbergraph_BP_AttackCollisionSphereBoss::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_AttackCollisionSphereBoss_C_ExecuteUbergraph_BP_AttackCollisionSphereBoss, CallFunc_Add_IntInt_ReturnValue) == 0x00000C, "Member 'BP_AttackCollisionSphereBoss_C_ExecuteUbergraph_BP_AttackCollisionSphereBoss::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AttackCollisionSphereBoss_C_ExecuteUbergraph_BP_AttackCollisionSphereBoss, K2Node_Event_DeltaSeconds) == 0x000010, "Member 'BP_AttackCollisionSphereBoss_C_ExecuteUbergraph_BP_AttackCollisionSphereBoss::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(BP_AttackCollisionSphereBoss_C_ExecuteUbergraph_BP_AttackCollisionSphereBoss, CallFunc_GetMonsterManager_MonsterManager) == 0x000018, "Member 'BP_AttackCollisionSphereBoss_C_ExecuteUbergraph_BP_AttackCollisionSphereBoss::CallFunc_GetMonsterManager_MonsterManager' has a wrong offset!");
static_assert(offsetof(BP_AttackCollisionSphereBoss_C_ExecuteUbergraph_BP_AttackCollisionSphereBoss, CallFunc_GetMonsters_ReturnValue) == 0x000020, "Member 'BP_AttackCollisionSphereBoss_C_ExecuteUbergraph_BP_AttackCollisionSphereBoss::CallFunc_GetMonsters_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AttackCollisionSphereBoss_C_ExecuteUbergraph_BP_AttackCollisionSphereBoss, CallFunc_GetGimmickActor_ReturnValue) == 0x000030, "Member 'BP_AttackCollisionSphereBoss_C_ExecuteUbergraph_BP_AttackCollisionSphereBoss::CallFunc_GetGimmickActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AttackCollisionSphereBoss_C_ExecuteUbergraph_BP_AttackCollisionSphereBoss, CallFunc_Array_Get_Item) == 0x000038, "Member 'BP_AttackCollisionSphereBoss_C_ExecuteUbergraph_BP_AttackCollisionSphereBoss::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_AttackCollisionSphereBoss_C_ExecuteUbergraph_BP_AttackCollisionSphereBoss, K2Node_DynamicCast_AsMonster_Boss) == 0x000040, "Member 'BP_AttackCollisionSphereBoss_C_ExecuteUbergraph_BP_AttackCollisionSphereBoss::K2Node_DynamicCast_AsMonster_Boss' has a wrong offset!");
static_assert(offsetof(BP_AttackCollisionSphereBoss_C_ExecuteUbergraph_BP_AttackCollisionSphereBoss, K2Node_DynamicCast_bSuccess) == 0x000048, "Member 'BP_AttackCollisionSphereBoss_C_ExecuteUbergraph_BP_AttackCollisionSphereBoss::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_AttackCollisionSphereBoss_C_ExecuteUbergraph_BP_AttackCollisionSphereBoss, CallFunc_GetIsBoss_ReturnValue) == 0x000049, "Member 'BP_AttackCollisionSphereBoss_C_ExecuteUbergraph_BP_AttackCollisionSphereBoss::CallFunc_GetIsBoss_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AttackCollisionSphereBoss_C_ExecuteUbergraph_BP_AttackCollisionSphereBoss, CallFunc_Array_Length_ReturnValue) == 0x00004C, "Member 'BP_AttackCollisionSphereBoss_C_ExecuteUbergraph_BP_AttackCollisionSphereBoss::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AttackCollisionSphereBoss_C_ExecuteUbergraph_BP_AttackCollisionSphereBoss, CallFunc_Less_IntInt_ReturnValue) == 0x000050, "Member 'BP_AttackCollisionSphereBoss_C_ExecuteUbergraph_BP_AttackCollisionSphereBoss::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AttackCollisionSphereBoss_C_ExecuteUbergraph_BP_AttackCollisionSphereBoss, CallFunc_Not_PreBool_ReturnValue) == 0x000051, "Member 'BP_AttackCollisionSphereBoss_C_ExecuteUbergraph_BP_AttackCollisionSphereBoss::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AttackCollisionSphereBoss_C_ExecuteUbergraph_BP_AttackCollisionSphereBoss, K2Node_DynamicCast_AsBoss_Gimmicks) == 0x000058, "Member 'BP_AttackCollisionSphereBoss_C_ExecuteUbergraph_BP_AttackCollisionSphereBoss::K2Node_DynamicCast_AsBoss_Gimmicks' has a wrong offset!");
static_assert(offsetof(BP_AttackCollisionSphereBoss_C_ExecuteUbergraph_BP_AttackCollisionSphereBoss, K2Node_DynamicCast_bSuccess_1) == 0x000060, "Member 'BP_AttackCollisionSphereBoss_C_ExecuteUbergraph_BP_AttackCollisionSphereBoss::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(BP_AttackCollisionSphereBoss_C_ExecuteUbergraph_BP_AttackCollisionSphereBoss, CallFunc_GetScaledSphereRadius_ReturnValue) == 0x000064, "Member 'BP_AttackCollisionSphereBoss_C_ExecuteUbergraph_BP_AttackCollisionSphereBoss::CallFunc_GetScaledSphereRadius_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AttackCollisionSphereBoss_C_ExecuteUbergraph_BP_AttackCollisionSphereBoss, CallFunc_K2_GetComponentLocation_ReturnValue) == 0x000068, "Member 'BP_AttackCollisionSphereBoss_C_ExecuteUbergraph_BP_AttackCollisionSphereBoss::CallFunc_K2_GetComponentLocation_ReturnValue' has a wrong offset!");

}

