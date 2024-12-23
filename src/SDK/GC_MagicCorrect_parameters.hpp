#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GC_MagicCorrect

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function GC_MagicCorrect.GC_MagicCorrect_C.OnRemove
// 0x00C8 (0x00C8 - 0x0000)
struct GC_MagicCorrect_C_OnRemove final
{
public:
	class AActor*                                 MyTarget;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                 Parameters;                                        // 0x0008(0x00B8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	bool                                          ReturnValue;                                       // 0x00C0(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_OnRemove_ReturnValue;                     // 0x00C1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GC_MagicCorrect_C_OnRemove) == 0x000008, "Wrong alignment on GC_MagicCorrect_C_OnRemove");
static_assert(sizeof(GC_MagicCorrect_C_OnRemove) == 0x0000C8, "Wrong size on GC_MagicCorrect_C_OnRemove");
static_assert(offsetof(GC_MagicCorrect_C_OnRemove, MyTarget) == 0x000000, "Member 'GC_MagicCorrect_C_OnRemove::MyTarget' has a wrong offset!");
static_assert(offsetof(GC_MagicCorrect_C_OnRemove, Parameters) == 0x000008, "Member 'GC_MagicCorrect_C_OnRemove::Parameters' has a wrong offset!");
static_assert(offsetof(GC_MagicCorrect_C_OnRemove, ReturnValue) == 0x0000C0, "Member 'GC_MagicCorrect_C_OnRemove::ReturnValue' has a wrong offset!");
static_assert(offsetof(GC_MagicCorrect_C_OnRemove, CallFunc_OnRemove_ReturnValue) == 0x0000C1, "Member 'GC_MagicCorrect_C_OnRemove::CallFunc_OnRemove_ReturnValue' has a wrong offset!");

// Function GC_MagicCorrect.GC_MagicCorrect_C.OnActive
// 0x00C8 (0x00C8 - 0x0000)
struct GC_MagicCorrect_C_OnActive final
{
public:
	class AActor*                                 MyTarget;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                 Parameters;                                        // 0x0008(0x00B8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	bool                                          ReturnValue;                                       // 0x00C0(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_OnActive_ReturnValue;                     // 0x00C1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GC_MagicCorrect_C_OnActive) == 0x000008, "Wrong alignment on GC_MagicCorrect_C_OnActive");
static_assert(sizeof(GC_MagicCorrect_C_OnActive) == 0x0000C8, "Wrong size on GC_MagicCorrect_C_OnActive");
static_assert(offsetof(GC_MagicCorrect_C_OnActive, MyTarget) == 0x000000, "Member 'GC_MagicCorrect_C_OnActive::MyTarget' has a wrong offset!");
static_assert(offsetof(GC_MagicCorrect_C_OnActive, Parameters) == 0x000008, "Member 'GC_MagicCorrect_C_OnActive::Parameters' has a wrong offset!");
static_assert(offsetof(GC_MagicCorrect_C_OnActive, ReturnValue) == 0x0000C0, "Member 'GC_MagicCorrect_C_OnActive::ReturnValue' has a wrong offset!");
static_assert(offsetof(GC_MagicCorrect_C_OnActive, CallFunc_OnActive_ReturnValue) == 0x0000C1, "Member 'GC_MagicCorrect_C_OnActive::CallFunc_OnActive_ReturnValue' has a wrong offset!");

// Function GC_MagicCorrect.GC_MagicCorrect_C.ReceiveEndPlay
// 0x0001 (0x0001 - 0x0000)
struct GC_MagicCorrect_C_ReceiveEndPlay final
{
public:
	EEndPlayReason                                EndPlayReason;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GC_MagicCorrect_C_ReceiveEndPlay) == 0x000001, "Wrong alignment on GC_MagicCorrect_C_ReceiveEndPlay");
static_assert(sizeof(GC_MagicCorrect_C_ReceiveEndPlay) == 0x000001, "Wrong size on GC_MagicCorrect_C_ReceiveEndPlay");
static_assert(offsetof(GC_MagicCorrect_C_ReceiveEndPlay, EndPlayReason) == 0x000000, "Member 'GC_MagicCorrect_C_ReceiveEndPlay::EndPlayReason' has a wrong offset!");

// Function GC_MagicCorrect.GC_MagicCorrect_C.ExecuteUbergraph_GC_MagicCorrect
// 0x0008 (0x0008 - 0x0000)
struct GC_MagicCorrect_C_ExecuteUbergraph_GC_MagicCorrect final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EEndPlayReason                                K2Node_Event_EndPlayReason;                        // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GC_MagicCorrect_C_ExecuteUbergraph_GC_MagicCorrect) == 0x000004, "Wrong alignment on GC_MagicCorrect_C_ExecuteUbergraph_GC_MagicCorrect");
static_assert(sizeof(GC_MagicCorrect_C_ExecuteUbergraph_GC_MagicCorrect) == 0x000008, "Wrong size on GC_MagicCorrect_C_ExecuteUbergraph_GC_MagicCorrect");
static_assert(offsetof(GC_MagicCorrect_C_ExecuteUbergraph_GC_MagicCorrect, EntryPoint) == 0x000000, "Member 'GC_MagicCorrect_C_ExecuteUbergraph_GC_MagicCorrect::EntryPoint' has a wrong offset!");
static_assert(offsetof(GC_MagicCorrect_C_ExecuteUbergraph_GC_MagicCorrect, K2Node_Event_EndPlayReason) == 0x000004, "Member 'GC_MagicCorrect_C_ExecuteUbergraph_GC_MagicCorrect::K2Node_Event_EndPlayReason' has a wrong offset!");

}

