#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LS_BossFinish_Sound

#include "Basic.hpp"


namespace SDK::Params
{

// Function LS_BossFinish_Sound.LS_BossFinish_Sound_SequenceDirector_C.ExecuteUbergraph_LS_BossFinish_Sound_SequenceDirector
// 0x0040 (0x0040 - 0x0000)
struct LS_BossFinish_Sound_SequenceDirector_C_ExecuteUbergraph_LS_BossFinish_Sound_SequenceDirector final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_CustomEvent_GroupID;                        // 0x0004(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AGPACharacter*                          K2Node_CustomEvent_Chara;                          // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_CustomEvent_SheetName;                      // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 K2Node_CustomEvent_CueName;                        // 0x0020(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class AN007_B*                                K2Node_DynamicCast_AsN007_B;                       // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_39[0x3];                                       // 0x0039(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_CustomEvent_FadeTime;                       // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LS_BossFinish_Sound_SequenceDirector_C_ExecuteUbergraph_LS_BossFinish_Sound_SequenceDirector) == 0x000008, "Wrong alignment on LS_BossFinish_Sound_SequenceDirector_C_ExecuteUbergraph_LS_BossFinish_Sound_SequenceDirector");
static_assert(sizeof(LS_BossFinish_Sound_SequenceDirector_C_ExecuteUbergraph_LS_BossFinish_Sound_SequenceDirector) == 0x000040, "Wrong size on LS_BossFinish_Sound_SequenceDirector_C_ExecuteUbergraph_LS_BossFinish_Sound_SequenceDirector");
static_assert(offsetof(LS_BossFinish_Sound_SequenceDirector_C_ExecuteUbergraph_LS_BossFinish_Sound_SequenceDirector, EntryPoint) == 0x000000, "Member 'LS_BossFinish_Sound_SequenceDirector_C_ExecuteUbergraph_LS_BossFinish_Sound_SequenceDirector::EntryPoint' has a wrong offset!");
static_assert(offsetof(LS_BossFinish_Sound_SequenceDirector_C_ExecuteUbergraph_LS_BossFinish_Sound_SequenceDirector, K2Node_CustomEvent_GroupID) == 0x000004, "Member 'LS_BossFinish_Sound_SequenceDirector_C_ExecuteUbergraph_LS_BossFinish_Sound_SequenceDirector::K2Node_CustomEvent_GroupID' has a wrong offset!");
static_assert(offsetof(LS_BossFinish_Sound_SequenceDirector_C_ExecuteUbergraph_LS_BossFinish_Sound_SequenceDirector, K2Node_CustomEvent_Chara) == 0x000010, "Member 'LS_BossFinish_Sound_SequenceDirector_C_ExecuteUbergraph_LS_BossFinish_Sound_SequenceDirector::K2Node_CustomEvent_Chara' has a wrong offset!");
static_assert(offsetof(LS_BossFinish_Sound_SequenceDirector_C_ExecuteUbergraph_LS_BossFinish_Sound_SequenceDirector, K2Node_CustomEvent_SheetName) == 0x000018, "Member 'LS_BossFinish_Sound_SequenceDirector_C_ExecuteUbergraph_LS_BossFinish_Sound_SequenceDirector::K2Node_CustomEvent_SheetName' has a wrong offset!");
static_assert(offsetof(LS_BossFinish_Sound_SequenceDirector_C_ExecuteUbergraph_LS_BossFinish_Sound_SequenceDirector, K2Node_CustomEvent_CueName) == 0x000020, "Member 'LS_BossFinish_Sound_SequenceDirector_C_ExecuteUbergraph_LS_BossFinish_Sound_SequenceDirector::K2Node_CustomEvent_CueName' has a wrong offset!");
static_assert(offsetof(LS_BossFinish_Sound_SequenceDirector_C_ExecuteUbergraph_LS_BossFinish_Sound_SequenceDirector, K2Node_DynamicCast_AsN007_B) == 0x000030, "Member 'LS_BossFinish_Sound_SequenceDirector_C_ExecuteUbergraph_LS_BossFinish_Sound_SequenceDirector::K2Node_DynamicCast_AsN007_B' has a wrong offset!");
static_assert(offsetof(LS_BossFinish_Sound_SequenceDirector_C_ExecuteUbergraph_LS_BossFinish_Sound_SequenceDirector, K2Node_DynamicCast_bSuccess) == 0x000038, "Member 'LS_BossFinish_Sound_SequenceDirector_C_ExecuteUbergraph_LS_BossFinish_Sound_SequenceDirector::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(LS_BossFinish_Sound_SequenceDirector_C_ExecuteUbergraph_LS_BossFinish_Sound_SequenceDirector, K2Node_CustomEvent_FadeTime) == 0x00003C, "Member 'LS_BossFinish_Sound_SequenceDirector_C_ExecuteUbergraph_LS_BossFinish_Sound_SequenceDirector::K2Node_CustomEvent_FadeTime' has a wrong offset!");

// Function LS_BossFinish_Sound.LS_BossFinish_Sound_SequenceDirector_C.Fade
// 0x0008 (0x0008 - 0x0000)
struct LS_BossFinish_Sound_SequenceDirector_C_Fade final
{
public:
	class FName                                   GroupID;                                           // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LS_BossFinish_Sound_SequenceDirector_C_Fade) == 0x000004, "Wrong alignment on LS_BossFinish_Sound_SequenceDirector_C_Fade");
static_assert(sizeof(LS_BossFinish_Sound_SequenceDirector_C_Fade) == 0x000008, "Wrong size on LS_BossFinish_Sound_SequenceDirector_C_Fade");
static_assert(offsetof(LS_BossFinish_Sound_SequenceDirector_C_Fade, GroupID) == 0x000000, "Member 'LS_BossFinish_Sound_SequenceDirector_C_Fade::GroupID' has a wrong offset!");

// Function LS_BossFinish_Sound.LS_BossFinish_Sound_SequenceDirector_C.StopBgmBtl
// 0x0004 (0x0004 - 0x0000)
struct LS_BossFinish_Sound_SequenceDirector_C_StopBgmBtl final
{
public:
	float                                         FadeTime;                                          // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LS_BossFinish_Sound_SequenceDirector_C_StopBgmBtl) == 0x000004, "Wrong alignment on LS_BossFinish_Sound_SequenceDirector_C_StopBgmBtl");
static_assert(sizeof(LS_BossFinish_Sound_SequenceDirector_C_StopBgmBtl) == 0x000004, "Wrong size on LS_BossFinish_Sound_SequenceDirector_C_StopBgmBtl");
static_assert(offsetof(LS_BossFinish_Sound_SequenceDirector_C_StopBgmBtl, FadeTime) == 0x000000, "Member 'LS_BossFinish_Sound_SequenceDirector_C_StopBgmBtl::FadeTime' has a wrong offset!");

// Function LS_BossFinish_Sound.LS_BossFinish_Sound_SequenceDirector_C.PlayBossFinishSe
// 0x0020 (0x0020 - 0x0000)
struct LS_BossFinish_Sound_SequenceDirector_C_PlayBossFinishSe final
{
public:
	class AGPACharacter*                          Chara;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   SheetName;                                         // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CueName;                                           // 0x0010(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(LS_BossFinish_Sound_SequenceDirector_C_PlayBossFinishSe) == 0x000008, "Wrong alignment on LS_BossFinish_Sound_SequenceDirector_C_PlayBossFinishSe");
static_assert(sizeof(LS_BossFinish_Sound_SequenceDirector_C_PlayBossFinishSe) == 0x000020, "Wrong size on LS_BossFinish_Sound_SequenceDirector_C_PlayBossFinishSe");
static_assert(offsetof(LS_BossFinish_Sound_SequenceDirector_C_PlayBossFinishSe, Chara) == 0x000000, "Member 'LS_BossFinish_Sound_SequenceDirector_C_PlayBossFinishSe::Chara' has a wrong offset!");
static_assert(offsetof(LS_BossFinish_Sound_SequenceDirector_C_PlayBossFinishSe, SheetName) == 0x000008, "Member 'LS_BossFinish_Sound_SequenceDirector_C_PlayBossFinishSe::SheetName' has a wrong offset!");
static_assert(offsetof(LS_BossFinish_Sound_SequenceDirector_C_PlayBossFinishSe, CueName) == 0x000010, "Member 'LS_BossFinish_Sound_SequenceDirector_C_PlayBossFinishSe::CueName' has a wrong offset!");

// Function LS_BossFinish_Sound.LS_BossFinish_Sound_SequenceDirector_C.SequenceEvent__ENTRYPOINTLS_BossFinish_Sound_SequenceDirector_0
// 0x0008 (0x0008 - 0x0000)
struct LS_BossFinish_Sound_SequenceDirector_C_SequenceEvent__ENTRYPOINTLS_BossFinish_Sound_SequenceDirector_0 final
{
public:
	class AGPACharacter*                          Chara;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LS_BossFinish_Sound_SequenceDirector_C_SequenceEvent__ENTRYPOINTLS_BossFinish_Sound_SequenceDirector_0) == 0x000008, "Wrong alignment on LS_BossFinish_Sound_SequenceDirector_C_SequenceEvent__ENTRYPOINTLS_BossFinish_Sound_SequenceDirector_0");
static_assert(sizeof(LS_BossFinish_Sound_SequenceDirector_C_SequenceEvent__ENTRYPOINTLS_BossFinish_Sound_SequenceDirector_0) == 0x000008, "Wrong size on LS_BossFinish_Sound_SequenceDirector_C_SequenceEvent__ENTRYPOINTLS_BossFinish_Sound_SequenceDirector_0");
static_assert(offsetof(LS_BossFinish_Sound_SequenceDirector_C_SequenceEvent__ENTRYPOINTLS_BossFinish_Sound_SequenceDirector_0, Chara) == 0x000000, "Member 'LS_BossFinish_Sound_SequenceDirector_C_SequenceEvent__ENTRYPOINTLS_BossFinish_Sound_SequenceDirector_0::Chara' has a wrong offset!");

}

