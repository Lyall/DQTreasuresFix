#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GC_EcoSleep

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"
#include "DarwinGame_structs.hpp"


namespace SDK::Params
{

// Function GC_EcoSleep.GC_EcoSleep_C.OnActive
// 0x00D8 (0x00D8 - 0x0000)
struct GC_EcoSleep_C_OnActive final
{
public:
	class AActor*                                 MyTarget;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                 Parameters;                                        // 0x0008(0x00B8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	bool                                          ReturnValue;                                       // 0x00C0(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_OnActive_ReturnValue;                     // 0x00C1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_C2[0x6];                                       // 0x00C2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class AMonsterBase*                           K2Node_DynamicCast_AsMonster_Base;                 // 0x00C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EEnemySpawnGeneratorType                      CallFunc_GetParentGeneratorType_ReturnValue;       // 0x00D1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x00D2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GC_EcoSleep_C_OnActive) == 0x000008, "Wrong alignment on GC_EcoSleep_C_OnActive");
static_assert(sizeof(GC_EcoSleep_C_OnActive) == 0x0000D8, "Wrong size on GC_EcoSleep_C_OnActive");
static_assert(offsetof(GC_EcoSleep_C_OnActive, MyTarget) == 0x000000, "Member 'GC_EcoSleep_C_OnActive::MyTarget' has a wrong offset!");
static_assert(offsetof(GC_EcoSleep_C_OnActive, Parameters) == 0x000008, "Member 'GC_EcoSleep_C_OnActive::Parameters' has a wrong offset!");
static_assert(offsetof(GC_EcoSleep_C_OnActive, ReturnValue) == 0x0000C0, "Member 'GC_EcoSleep_C_OnActive::ReturnValue' has a wrong offset!");
static_assert(offsetof(GC_EcoSleep_C_OnActive, CallFunc_OnActive_ReturnValue) == 0x0000C1, "Member 'GC_EcoSleep_C_OnActive::CallFunc_OnActive_ReturnValue' has a wrong offset!");
static_assert(offsetof(GC_EcoSleep_C_OnActive, K2Node_DynamicCast_AsMonster_Base) == 0x0000C8, "Member 'GC_EcoSleep_C_OnActive::K2Node_DynamicCast_AsMonster_Base' has a wrong offset!");
static_assert(offsetof(GC_EcoSleep_C_OnActive, K2Node_DynamicCast_bSuccess) == 0x0000D0, "Member 'GC_EcoSleep_C_OnActive::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GC_EcoSleep_C_OnActive, CallFunc_GetParentGeneratorType_ReturnValue) == 0x0000D1, "Member 'GC_EcoSleep_C_OnActive::CallFunc_GetParentGeneratorType_ReturnValue' has a wrong offset!");
static_assert(offsetof(GC_EcoSleep_C_OnActive, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x0000D2, "Member 'GC_EcoSleep_C_OnActive::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");

// Function GC_EcoSleep.GC_EcoSleep_C.ExecuteUbergraph_GC_EcoSleep
// 0x0004 (0x0004 - 0x0000)
struct GC_EcoSleep_C_ExecuteUbergraph_GC_EcoSleep final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GC_EcoSleep_C_ExecuteUbergraph_GC_EcoSleep) == 0x000004, "Wrong alignment on GC_EcoSleep_C_ExecuteUbergraph_GC_EcoSleep");
static_assert(sizeof(GC_EcoSleep_C_ExecuteUbergraph_GC_EcoSleep) == 0x000004, "Wrong size on GC_EcoSleep_C_ExecuteUbergraph_GC_EcoSleep");
static_assert(offsetof(GC_EcoSleep_C_ExecuteUbergraph_GC_EcoSleep, EntryPoint) == 0x000000, "Member 'GC_EcoSleep_C_ExecuteUbergraph_GC_EcoSleep::EntryPoint' has a wrong offset!");

}
