#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AttackCollisionGimmick

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BP_AttackCollisionGimmick.BP_AttackCollisionGimmick_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct BP_AttackCollisionGimmick_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AttackCollisionGimmick_C_ReceiveTick) == 0x000004, "Wrong alignment on BP_AttackCollisionGimmick_C_ReceiveTick");
static_assert(sizeof(BP_AttackCollisionGimmick_C_ReceiveTick) == 0x000004, "Wrong size on BP_AttackCollisionGimmick_C_ReceiveTick");
static_assert(offsetof(BP_AttackCollisionGimmick_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'BP_AttackCollisionGimmick_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

// Function BP_AttackCollisionGimmick.BP_AttackCollisionGimmick_C.ExecuteUbergraph_BP_AttackCollisionGimmick
// 0x00A0 (0x00A0 - 0x0000)
struct BP_AttackCollisionGimmick_C_ExecuteUbergraph_BP_AttackCollisionGimmick final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_VolcanoGimmicks_C*                  K2Node_DynamicCast_AsBP_Volcano_Gimmicks;          // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_11[0x3];                                       // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_24[0x4];                                       // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_MonsterManager_C*                   CallFunc_GetMonsterManager_MonsterManager;         // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AMonsterBase*>                   CallFunc_GetMonsters_ReturnValue;                  // 0x0030(0x0010)(ReferenceParm, HasGetValueTypeHash)
	class AMonsterBase*                           CallFunc_Array_Get_Item;                           // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_49[0x7];                                       // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AMonsterBoss*                           K2Node_DynamicCast_AsMonster_Boss;                 // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetIsBoss_ReturnValue;                    // 0x0059(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5A[0x2];                                       // 0x005A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_61[0x3];                                       // 0x0061(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetScaledSphereRadius_ReturnValue;        // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue;      // 0x0068(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_74[0x4];                                       // 0x0074(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetGimmickActor_ReturnValue;              // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_VolcanoGimmicks_C*                  K2Node_DynamicCast_AsBP_Volcano_Gimmicks_1;        // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_89[0x3];                                       // 0x0089(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue_1;    // 0x008C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetScaledSphereRadius_ReturnValue_1;      // 0x0098(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AttackCollisionGimmick_C_ExecuteUbergraph_BP_AttackCollisionGimmick) == 0x000008, "Wrong alignment on BP_AttackCollisionGimmick_C_ExecuteUbergraph_BP_AttackCollisionGimmick");
static_assert(sizeof(BP_AttackCollisionGimmick_C_ExecuteUbergraph_BP_AttackCollisionGimmick) == 0x0000A0, "Wrong size on BP_AttackCollisionGimmick_C_ExecuteUbergraph_BP_AttackCollisionGimmick");
static_assert(offsetof(BP_AttackCollisionGimmick_C_ExecuteUbergraph_BP_AttackCollisionGimmick, EntryPoint) == 0x000000, "Member 'BP_AttackCollisionGimmick_C_ExecuteUbergraph_BP_AttackCollisionGimmick::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_AttackCollisionGimmick_C_ExecuteUbergraph_BP_AttackCollisionGimmick, K2Node_DynamicCast_AsBP_Volcano_Gimmicks) == 0x000008, "Member 'BP_AttackCollisionGimmick_C_ExecuteUbergraph_BP_AttackCollisionGimmick::K2Node_DynamicCast_AsBP_Volcano_Gimmicks' has a wrong offset!");
static_assert(offsetof(BP_AttackCollisionGimmick_C_ExecuteUbergraph_BP_AttackCollisionGimmick, K2Node_DynamicCast_bSuccess) == 0x000010, "Member 'BP_AttackCollisionGimmick_C_ExecuteUbergraph_BP_AttackCollisionGimmick::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_AttackCollisionGimmick_C_ExecuteUbergraph_BP_AttackCollisionGimmick, Temp_int_Array_Index_Variable) == 0x000014, "Member 'BP_AttackCollisionGimmick_C_ExecuteUbergraph_BP_AttackCollisionGimmick::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_AttackCollisionGimmick_C_ExecuteUbergraph_BP_AttackCollisionGimmick, Temp_int_Loop_Counter_Variable) == 0x000018, "Member 'BP_AttackCollisionGimmick_C_ExecuteUbergraph_BP_AttackCollisionGimmick::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_AttackCollisionGimmick_C_ExecuteUbergraph_BP_AttackCollisionGimmick, CallFunc_Add_IntInt_ReturnValue) == 0x00001C, "Member 'BP_AttackCollisionGimmick_C_ExecuteUbergraph_BP_AttackCollisionGimmick::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AttackCollisionGimmick_C_ExecuteUbergraph_BP_AttackCollisionGimmick, K2Node_Event_DeltaSeconds) == 0x000020, "Member 'BP_AttackCollisionGimmick_C_ExecuteUbergraph_BP_AttackCollisionGimmick::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(BP_AttackCollisionGimmick_C_ExecuteUbergraph_BP_AttackCollisionGimmick, CallFunc_GetMonsterManager_MonsterManager) == 0x000028, "Member 'BP_AttackCollisionGimmick_C_ExecuteUbergraph_BP_AttackCollisionGimmick::CallFunc_GetMonsterManager_MonsterManager' has a wrong offset!");
static_assert(offsetof(BP_AttackCollisionGimmick_C_ExecuteUbergraph_BP_AttackCollisionGimmick, CallFunc_GetMonsters_ReturnValue) == 0x000030, "Member 'BP_AttackCollisionGimmick_C_ExecuteUbergraph_BP_AttackCollisionGimmick::CallFunc_GetMonsters_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AttackCollisionGimmick_C_ExecuteUbergraph_BP_AttackCollisionGimmick, CallFunc_Array_Get_Item) == 0x000040, "Member 'BP_AttackCollisionGimmick_C_ExecuteUbergraph_BP_AttackCollisionGimmick::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_AttackCollisionGimmick_C_ExecuteUbergraph_BP_AttackCollisionGimmick, CallFunc_Not_PreBool_ReturnValue) == 0x000048, "Member 'BP_AttackCollisionGimmick_C_ExecuteUbergraph_BP_AttackCollisionGimmick::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AttackCollisionGimmick_C_ExecuteUbergraph_BP_AttackCollisionGimmick, K2Node_DynamicCast_AsMonster_Boss) == 0x000050, "Member 'BP_AttackCollisionGimmick_C_ExecuteUbergraph_BP_AttackCollisionGimmick::K2Node_DynamicCast_AsMonster_Boss' has a wrong offset!");
static_assert(offsetof(BP_AttackCollisionGimmick_C_ExecuteUbergraph_BP_AttackCollisionGimmick, K2Node_DynamicCast_bSuccess_1) == 0x000058, "Member 'BP_AttackCollisionGimmick_C_ExecuteUbergraph_BP_AttackCollisionGimmick::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(BP_AttackCollisionGimmick_C_ExecuteUbergraph_BP_AttackCollisionGimmick, CallFunc_GetIsBoss_ReturnValue) == 0x000059, "Member 'BP_AttackCollisionGimmick_C_ExecuteUbergraph_BP_AttackCollisionGimmick::CallFunc_GetIsBoss_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AttackCollisionGimmick_C_ExecuteUbergraph_BP_AttackCollisionGimmick, CallFunc_Array_Length_ReturnValue) == 0x00005C, "Member 'BP_AttackCollisionGimmick_C_ExecuteUbergraph_BP_AttackCollisionGimmick::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AttackCollisionGimmick_C_ExecuteUbergraph_BP_AttackCollisionGimmick, CallFunc_Less_IntInt_ReturnValue) == 0x000060, "Member 'BP_AttackCollisionGimmick_C_ExecuteUbergraph_BP_AttackCollisionGimmick::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AttackCollisionGimmick_C_ExecuteUbergraph_BP_AttackCollisionGimmick, CallFunc_GetScaledSphereRadius_ReturnValue) == 0x000064, "Member 'BP_AttackCollisionGimmick_C_ExecuteUbergraph_BP_AttackCollisionGimmick::CallFunc_GetScaledSphereRadius_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AttackCollisionGimmick_C_ExecuteUbergraph_BP_AttackCollisionGimmick, CallFunc_K2_GetComponentLocation_ReturnValue) == 0x000068, "Member 'BP_AttackCollisionGimmick_C_ExecuteUbergraph_BP_AttackCollisionGimmick::CallFunc_K2_GetComponentLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AttackCollisionGimmick_C_ExecuteUbergraph_BP_AttackCollisionGimmick, CallFunc_GetGimmickActor_ReturnValue) == 0x000078, "Member 'BP_AttackCollisionGimmick_C_ExecuteUbergraph_BP_AttackCollisionGimmick::CallFunc_GetGimmickActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AttackCollisionGimmick_C_ExecuteUbergraph_BP_AttackCollisionGimmick, K2Node_DynamicCast_AsBP_Volcano_Gimmicks_1) == 0x000080, "Member 'BP_AttackCollisionGimmick_C_ExecuteUbergraph_BP_AttackCollisionGimmick::K2Node_DynamicCast_AsBP_Volcano_Gimmicks_1' has a wrong offset!");
static_assert(offsetof(BP_AttackCollisionGimmick_C_ExecuteUbergraph_BP_AttackCollisionGimmick, K2Node_DynamicCast_bSuccess_2) == 0x000088, "Member 'BP_AttackCollisionGimmick_C_ExecuteUbergraph_BP_AttackCollisionGimmick::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(BP_AttackCollisionGimmick_C_ExecuteUbergraph_BP_AttackCollisionGimmick, CallFunc_K2_GetComponentLocation_ReturnValue_1) == 0x00008C, "Member 'BP_AttackCollisionGimmick_C_ExecuteUbergraph_BP_AttackCollisionGimmick::CallFunc_K2_GetComponentLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_AttackCollisionGimmick_C_ExecuteUbergraph_BP_AttackCollisionGimmick, CallFunc_GetScaledSphereRadius_ReturnValue_1) == 0x000098, "Member 'BP_AttackCollisionGimmick_C_ExecuteUbergraph_BP_AttackCollisionGimmick::CallFunc_GetScaledSphereRadius_ReturnValue_1' has a wrong offset!");

}
