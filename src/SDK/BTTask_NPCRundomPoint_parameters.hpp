#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BTTask_NPCRundomPoint

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "DarwinGame_structs.hpp"


namespace SDK::Params
{

// Function BTTask_NPCRundomPoint.BTTask_NPCRundomPoint_C.ExecuteUbergraph_BTTask_NPCRundomPoint
// 0x0080 (0x0080 - 0x0000)
struct BTTask_NPCRundomPoint_C_ExecuteUbergraph_BTTask_NPCRundomPoint final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AAIController*                          K2Node_Event_OwnerController;                      // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  K2Node_Event_ControlledPawn;                       // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ANPCBase*                               K2Node_DynamicCast_AsNPCBase;                      // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FST_NPCDataAIParam                     CallFunc_GetNPCAiParam_ReturnValue;                // 0x0028(0x0038)()
	class ANPCAIController*                       K2Node_DynamicCast_AsNPCAIController;              // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_69[0x3];                                       // 0x0069(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetRandomReachablePointInRadius_RandomLocation; // 0x006C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_K2_GetRandomReachablePointInRadius_ReturnValue; // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsTurnRightRotation_IsRight;              // 0x0079(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BTTask_NPCRundomPoint_C_ExecuteUbergraph_BTTask_NPCRundomPoint) == 0x000008, "Wrong alignment on BTTask_NPCRundomPoint_C_ExecuteUbergraph_BTTask_NPCRundomPoint");
static_assert(sizeof(BTTask_NPCRundomPoint_C_ExecuteUbergraph_BTTask_NPCRundomPoint) == 0x000080, "Wrong size on BTTask_NPCRundomPoint_C_ExecuteUbergraph_BTTask_NPCRundomPoint");
static_assert(offsetof(BTTask_NPCRundomPoint_C_ExecuteUbergraph_BTTask_NPCRundomPoint, EntryPoint) == 0x000000, "Member 'BTTask_NPCRundomPoint_C_ExecuteUbergraph_BTTask_NPCRundomPoint::EntryPoint' has a wrong offset!");
static_assert(offsetof(BTTask_NPCRundomPoint_C_ExecuteUbergraph_BTTask_NPCRundomPoint, K2Node_Event_OwnerController) == 0x000008, "Member 'BTTask_NPCRundomPoint_C_ExecuteUbergraph_BTTask_NPCRundomPoint::K2Node_Event_OwnerController' has a wrong offset!");
static_assert(offsetof(BTTask_NPCRundomPoint_C_ExecuteUbergraph_BTTask_NPCRundomPoint, K2Node_Event_ControlledPawn) == 0x000010, "Member 'BTTask_NPCRundomPoint_C_ExecuteUbergraph_BTTask_NPCRundomPoint::K2Node_Event_ControlledPawn' has a wrong offset!");
static_assert(offsetof(BTTask_NPCRundomPoint_C_ExecuteUbergraph_BTTask_NPCRundomPoint, K2Node_DynamicCast_AsNPCBase) == 0x000018, "Member 'BTTask_NPCRundomPoint_C_ExecuteUbergraph_BTTask_NPCRundomPoint::K2Node_DynamicCast_AsNPCBase' has a wrong offset!");
static_assert(offsetof(BTTask_NPCRundomPoint_C_ExecuteUbergraph_BTTask_NPCRundomPoint, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'BTTask_NPCRundomPoint_C_ExecuteUbergraph_BTTask_NPCRundomPoint::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BTTask_NPCRundomPoint_C_ExecuteUbergraph_BTTask_NPCRundomPoint, CallFunc_GetNPCAiParam_ReturnValue) == 0x000028, "Member 'BTTask_NPCRundomPoint_C_ExecuteUbergraph_BTTask_NPCRundomPoint::CallFunc_GetNPCAiParam_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTTask_NPCRundomPoint_C_ExecuteUbergraph_BTTask_NPCRundomPoint, K2Node_DynamicCast_AsNPCAIController) == 0x000060, "Member 'BTTask_NPCRundomPoint_C_ExecuteUbergraph_BTTask_NPCRundomPoint::K2Node_DynamicCast_AsNPCAIController' has a wrong offset!");
static_assert(offsetof(BTTask_NPCRundomPoint_C_ExecuteUbergraph_BTTask_NPCRundomPoint, K2Node_DynamicCast_bSuccess_1) == 0x000068, "Member 'BTTask_NPCRundomPoint_C_ExecuteUbergraph_BTTask_NPCRundomPoint::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(BTTask_NPCRundomPoint_C_ExecuteUbergraph_BTTask_NPCRundomPoint, CallFunc_K2_GetRandomReachablePointInRadius_RandomLocation) == 0x00006C, "Member 'BTTask_NPCRundomPoint_C_ExecuteUbergraph_BTTask_NPCRundomPoint::CallFunc_K2_GetRandomReachablePointInRadius_RandomLocation' has a wrong offset!");
static_assert(offsetof(BTTask_NPCRundomPoint_C_ExecuteUbergraph_BTTask_NPCRundomPoint, CallFunc_K2_GetRandomReachablePointInRadius_ReturnValue) == 0x000078, "Member 'BTTask_NPCRundomPoint_C_ExecuteUbergraph_BTTask_NPCRundomPoint::CallFunc_K2_GetRandomReachablePointInRadius_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTTask_NPCRundomPoint_C_ExecuteUbergraph_BTTask_NPCRundomPoint, CallFunc_IsTurnRightRotation_IsRight) == 0x000079, "Member 'BTTask_NPCRundomPoint_C_ExecuteUbergraph_BTTask_NPCRundomPoint::CallFunc_IsTurnRightRotation_IsRight' has a wrong offset!");

// Function BTTask_NPCRundomPoint.BTTask_NPCRundomPoint_C.ReceiveExecuteAI
// 0x0010 (0x0010 - 0x0000)
struct BTTask_NPCRundomPoint_C_ReceiveExecuteAI final
{
public:
	class AAIController*                          OwnerController;                                   // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  ControlledPawn;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BTTask_NPCRundomPoint_C_ReceiveExecuteAI) == 0x000008, "Wrong alignment on BTTask_NPCRundomPoint_C_ReceiveExecuteAI");
static_assert(sizeof(BTTask_NPCRundomPoint_C_ReceiveExecuteAI) == 0x000010, "Wrong size on BTTask_NPCRundomPoint_C_ReceiveExecuteAI");
static_assert(offsetof(BTTask_NPCRundomPoint_C_ReceiveExecuteAI, OwnerController) == 0x000000, "Member 'BTTask_NPCRundomPoint_C_ReceiveExecuteAI::OwnerController' has a wrong offset!");
static_assert(offsetof(BTTask_NPCRundomPoint_C_ReceiveExecuteAI, ControlledPawn) == 0x000008, "Member 'BTTask_NPCRundomPoint_C_ReceiveExecuteAI::ControlledPawn' has a wrong offset!");

// Function BTTask_NPCRundomPoint.BTTask_NPCRundomPoint_C.IsTurnRightRotation
// 0x0078 (0x0078 - 0x0000)
struct BTTask_NPCRundomPoint_C_IsTurnRightRotation final
{
public:
	class ANPCBase*                               NPC;                                               // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                nextpoint;                                         // 0x0008(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsRight;                                           // 0x0014(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_15[0x3];                                       // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0018(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_K2_GetActorRotation_ReturnValue;          // 0x0024(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRotator                               CallFunc_K2_GetActorRotation_ReturnValue_1;        // 0x0030(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRotator                               CallFunc_FindLookAtRotation_ReturnValue;           // 0x003C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         CallFunc_BreakRotator_Roll;                        // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Pitch;                       // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Yaw;                         // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetWorldDeltaSeconds_ReturnValue;         // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_RInterpTo_ReturnValue;                    // 0x0058(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         CallFunc_BreakRotator_Roll_1;                      // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Pitch_1;                     // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Yaw_1;                       // 0x006C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_FloatFloat_ReturnValue;         // 0x0074(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BTTask_NPCRundomPoint_C_IsTurnRightRotation) == 0x000008, "Wrong alignment on BTTask_NPCRundomPoint_C_IsTurnRightRotation");
static_assert(sizeof(BTTask_NPCRundomPoint_C_IsTurnRightRotation) == 0x000078, "Wrong size on BTTask_NPCRundomPoint_C_IsTurnRightRotation");
static_assert(offsetof(BTTask_NPCRundomPoint_C_IsTurnRightRotation, NPC) == 0x000000, "Member 'BTTask_NPCRundomPoint_C_IsTurnRightRotation::NPC' has a wrong offset!");
static_assert(offsetof(BTTask_NPCRundomPoint_C_IsTurnRightRotation, nextpoint) == 0x000008, "Member 'BTTask_NPCRundomPoint_C_IsTurnRightRotation::nextpoint' has a wrong offset!");
static_assert(offsetof(BTTask_NPCRundomPoint_C_IsTurnRightRotation, IsRight) == 0x000014, "Member 'BTTask_NPCRundomPoint_C_IsTurnRightRotation::IsRight' has a wrong offset!");
static_assert(offsetof(BTTask_NPCRundomPoint_C_IsTurnRightRotation, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000018, "Member 'BTTask_NPCRundomPoint_C_IsTurnRightRotation::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTTask_NPCRundomPoint_C_IsTurnRightRotation, CallFunc_K2_GetActorRotation_ReturnValue) == 0x000024, "Member 'BTTask_NPCRundomPoint_C_IsTurnRightRotation::CallFunc_K2_GetActorRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTTask_NPCRundomPoint_C_IsTurnRightRotation, CallFunc_K2_GetActorRotation_ReturnValue_1) == 0x000030, "Member 'BTTask_NPCRundomPoint_C_IsTurnRightRotation::CallFunc_K2_GetActorRotation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BTTask_NPCRundomPoint_C_IsTurnRightRotation, CallFunc_FindLookAtRotation_ReturnValue) == 0x00003C, "Member 'BTTask_NPCRundomPoint_C_IsTurnRightRotation::CallFunc_FindLookAtRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTTask_NPCRundomPoint_C_IsTurnRightRotation, CallFunc_BreakRotator_Roll) == 0x000048, "Member 'BTTask_NPCRundomPoint_C_IsTurnRightRotation::CallFunc_BreakRotator_Roll' has a wrong offset!");
static_assert(offsetof(BTTask_NPCRundomPoint_C_IsTurnRightRotation, CallFunc_BreakRotator_Pitch) == 0x00004C, "Member 'BTTask_NPCRundomPoint_C_IsTurnRightRotation::CallFunc_BreakRotator_Pitch' has a wrong offset!");
static_assert(offsetof(BTTask_NPCRundomPoint_C_IsTurnRightRotation, CallFunc_BreakRotator_Yaw) == 0x000050, "Member 'BTTask_NPCRundomPoint_C_IsTurnRightRotation::CallFunc_BreakRotator_Yaw' has a wrong offset!");
static_assert(offsetof(BTTask_NPCRundomPoint_C_IsTurnRightRotation, CallFunc_GetWorldDeltaSeconds_ReturnValue) == 0x000054, "Member 'BTTask_NPCRundomPoint_C_IsTurnRightRotation::CallFunc_GetWorldDeltaSeconds_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTTask_NPCRundomPoint_C_IsTurnRightRotation, CallFunc_RInterpTo_ReturnValue) == 0x000058, "Member 'BTTask_NPCRundomPoint_C_IsTurnRightRotation::CallFunc_RInterpTo_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTTask_NPCRundomPoint_C_IsTurnRightRotation, CallFunc_BreakRotator_Roll_1) == 0x000064, "Member 'BTTask_NPCRundomPoint_C_IsTurnRightRotation::CallFunc_BreakRotator_Roll_1' has a wrong offset!");
static_assert(offsetof(BTTask_NPCRundomPoint_C_IsTurnRightRotation, CallFunc_BreakRotator_Pitch_1) == 0x000068, "Member 'BTTask_NPCRundomPoint_C_IsTurnRightRotation::CallFunc_BreakRotator_Pitch_1' has a wrong offset!");
static_assert(offsetof(BTTask_NPCRundomPoint_C_IsTurnRightRotation, CallFunc_BreakRotator_Yaw_1) == 0x00006C, "Member 'BTTask_NPCRundomPoint_C_IsTurnRightRotation::CallFunc_BreakRotator_Yaw_1' has a wrong offset!");
static_assert(offsetof(BTTask_NPCRundomPoint_C_IsTurnRightRotation, CallFunc_Subtract_FloatFloat_ReturnValue) == 0x000070, "Member 'BTTask_NPCRundomPoint_C_IsTurnRightRotation::CallFunc_Subtract_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTTask_NPCRundomPoint_C_IsTurnRightRotation, CallFunc_LessEqual_FloatFloat_ReturnValue) == 0x000074, "Member 'BTTask_NPCRundomPoint_C_IsTurnRightRotation::CallFunc_LessEqual_FloatFloat_ReturnValue' has a wrong offset!");

// Function BTTask_NPCRundomPoint.BTTask_NPCRundomPoint_C.SetValidTurn
// 0x0008 (0x0008 - 0x0000)
struct BTTask_NPCRundomPoint_C_SetValidTurn final
{
public:
	class ANPCBase*                               NPC;                                               // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BTTask_NPCRundomPoint_C_SetValidTurn) == 0x000008, "Wrong alignment on BTTask_NPCRundomPoint_C_SetValidTurn");
static_assert(sizeof(BTTask_NPCRundomPoint_C_SetValidTurn) == 0x000008, "Wrong size on BTTask_NPCRundomPoint_C_SetValidTurn");
static_assert(offsetof(BTTask_NPCRundomPoint_C_SetValidTurn, NPC) == 0x000000, "Member 'BTTask_NPCRundomPoint_C_SetValidTurn::NPC' has a wrong offset!");

}
