#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BTS_NPCSplineNaviUpdate

#include "Basic.hpp"

#include "DarwinGame_structs.hpp"


namespace SDK::Params
{

// Function BTS_NPCSplineNaviUpdate.BTS_NPCSplineNaviUpdate_C.ExecuteUbergraph_BTS_NPCSplineNaviUpdate
// 0x0120 (0x0120 - 0x0000)
struct BTS_NPCSplineNaviUpdate_C_ExecuteUbergraph_BTS_NPCSplineNaviUpdate final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FST_NPCDataAIParam                     CallFunc_GetNPCAiParam_ReturnValue;                // 0x0008(0x0038)()
	TArray<float>                                 CallFunc_GetSplineAreaLength_ReturnValue;          // 0x0040(0x0010)(ReferenceParm, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetSplinePosition_ReturnValue;            // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AAIController*                          K2Node_Event_OwnerController;                      // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  K2Node_Event_ControlledPawn;                       // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6C[0x4];                                       // 0x006C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AAIController*                          K2Node_Event_OwnerController_1;                    // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  K2Node_Event_ControlledPawn_1;                     // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ANPCBase*                               K2Node_DynamicCast_AsNPCBase;                      // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_89[0x7];                                       // 0x0089(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ANPCBase*                               K2Node_DynamicCast_AsNPCBase_1;                    // 0x0090(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_99[0x3];                                       // 0x0099(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetAIWorkIndex_ReturnValue;               // 0x009C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_True_if_break_was_hit_Variable;          // 0x00A1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x00A2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_A3[0x1];                                       // 0x00A3(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x00A4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_A9[0x7];                                       // 0x00A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<float>                                 CallFunc_GetSplineAreaLength_ReturnValue_1;        // 0x00B0(0x0010)(ReferenceParm, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_C1[0x3];                                       // 0x00C1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x00C4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x00C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x00CC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x00D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_D1[0x3];                                       // 0x00D1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x00D4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x00D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetSplinePosition_ReturnValue_1;          // 0x00DC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<float>                                 CallFunc_GetSplineAreaLength_ReturnValue_2;        // 0x00E0(0x0010)(ReferenceParm, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_2;               // 0x00F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue_1;            // 0x00F4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x00F8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Array_Get_Item;                           // 0x00FC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_FloatFloat_ReturnValue;      // 0x0100(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_FloatFloat_ReturnValue;              // 0x0101(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_102[0x6];                                      // 0x0102(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USplineComponent*                       CallFunc_GetSplineComponent_ReturnValue;           // 0x0108(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetSplinePosition_ReturnValue_2;          // 0x0110(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetSplineLength_ReturnValue;              // 0x0114(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Percent_FloatFloat_ReturnValue;           // 0x0118(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BTS_NPCSplineNaviUpdate_C_ExecuteUbergraph_BTS_NPCSplineNaviUpdate) == 0x000008, "Wrong alignment on BTS_NPCSplineNaviUpdate_C_ExecuteUbergraph_BTS_NPCSplineNaviUpdate");
static_assert(sizeof(BTS_NPCSplineNaviUpdate_C_ExecuteUbergraph_BTS_NPCSplineNaviUpdate) == 0x000120, "Wrong size on BTS_NPCSplineNaviUpdate_C_ExecuteUbergraph_BTS_NPCSplineNaviUpdate");
static_assert(offsetof(BTS_NPCSplineNaviUpdate_C_ExecuteUbergraph_BTS_NPCSplineNaviUpdate, EntryPoint) == 0x000000, "Member 'BTS_NPCSplineNaviUpdate_C_ExecuteUbergraph_BTS_NPCSplineNaviUpdate::EntryPoint' has a wrong offset!");
static_assert(offsetof(BTS_NPCSplineNaviUpdate_C_ExecuteUbergraph_BTS_NPCSplineNaviUpdate, CallFunc_GetNPCAiParam_ReturnValue) == 0x000008, "Member 'BTS_NPCSplineNaviUpdate_C_ExecuteUbergraph_BTS_NPCSplineNaviUpdate::CallFunc_GetNPCAiParam_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTS_NPCSplineNaviUpdate_C_ExecuteUbergraph_BTS_NPCSplineNaviUpdate, CallFunc_GetSplineAreaLength_ReturnValue) == 0x000040, "Member 'BTS_NPCSplineNaviUpdate_C_ExecuteUbergraph_BTS_NPCSplineNaviUpdate::CallFunc_GetSplineAreaLength_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTS_NPCSplineNaviUpdate_C_ExecuteUbergraph_BTS_NPCSplineNaviUpdate, CallFunc_Array_Length_ReturnValue) == 0x000050, "Member 'BTS_NPCSplineNaviUpdate_C_ExecuteUbergraph_BTS_NPCSplineNaviUpdate::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTS_NPCSplineNaviUpdate_C_ExecuteUbergraph_BTS_NPCSplineNaviUpdate, CallFunc_GetSplinePosition_ReturnValue) == 0x000054, "Member 'BTS_NPCSplineNaviUpdate_C_ExecuteUbergraph_BTS_NPCSplineNaviUpdate::CallFunc_GetSplinePosition_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTS_NPCSplineNaviUpdate_C_ExecuteUbergraph_BTS_NPCSplineNaviUpdate, K2Node_Event_OwnerController) == 0x000058, "Member 'BTS_NPCSplineNaviUpdate_C_ExecuteUbergraph_BTS_NPCSplineNaviUpdate::K2Node_Event_OwnerController' has a wrong offset!");
static_assert(offsetof(BTS_NPCSplineNaviUpdate_C_ExecuteUbergraph_BTS_NPCSplineNaviUpdate, K2Node_Event_ControlledPawn) == 0x000060, "Member 'BTS_NPCSplineNaviUpdate_C_ExecuteUbergraph_BTS_NPCSplineNaviUpdate::K2Node_Event_ControlledPawn' has a wrong offset!");
static_assert(offsetof(BTS_NPCSplineNaviUpdate_C_ExecuteUbergraph_BTS_NPCSplineNaviUpdate, K2Node_Event_DeltaSeconds) == 0x000068, "Member 'BTS_NPCSplineNaviUpdate_C_ExecuteUbergraph_BTS_NPCSplineNaviUpdate::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(BTS_NPCSplineNaviUpdate_C_ExecuteUbergraph_BTS_NPCSplineNaviUpdate, K2Node_Event_OwnerController_1) == 0x000070, "Member 'BTS_NPCSplineNaviUpdate_C_ExecuteUbergraph_BTS_NPCSplineNaviUpdate::K2Node_Event_OwnerController_1' has a wrong offset!");
static_assert(offsetof(BTS_NPCSplineNaviUpdate_C_ExecuteUbergraph_BTS_NPCSplineNaviUpdate, K2Node_Event_ControlledPawn_1) == 0x000078, "Member 'BTS_NPCSplineNaviUpdate_C_ExecuteUbergraph_BTS_NPCSplineNaviUpdate::K2Node_Event_ControlledPawn_1' has a wrong offset!");
static_assert(offsetof(BTS_NPCSplineNaviUpdate_C_ExecuteUbergraph_BTS_NPCSplineNaviUpdate, K2Node_DynamicCast_AsNPCBase) == 0x000080, "Member 'BTS_NPCSplineNaviUpdate_C_ExecuteUbergraph_BTS_NPCSplineNaviUpdate::K2Node_DynamicCast_AsNPCBase' has a wrong offset!");
static_assert(offsetof(BTS_NPCSplineNaviUpdate_C_ExecuteUbergraph_BTS_NPCSplineNaviUpdate, K2Node_DynamicCast_bSuccess) == 0x000088, "Member 'BTS_NPCSplineNaviUpdate_C_ExecuteUbergraph_BTS_NPCSplineNaviUpdate::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BTS_NPCSplineNaviUpdate_C_ExecuteUbergraph_BTS_NPCSplineNaviUpdate, K2Node_DynamicCast_AsNPCBase_1) == 0x000090, "Member 'BTS_NPCSplineNaviUpdate_C_ExecuteUbergraph_BTS_NPCSplineNaviUpdate::K2Node_DynamicCast_AsNPCBase_1' has a wrong offset!");
static_assert(offsetof(BTS_NPCSplineNaviUpdate_C_ExecuteUbergraph_BTS_NPCSplineNaviUpdate, K2Node_DynamicCast_bSuccess_1) == 0x000098, "Member 'BTS_NPCSplineNaviUpdate_C_ExecuteUbergraph_BTS_NPCSplineNaviUpdate::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(BTS_NPCSplineNaviUpdate_C_ExecuteUbergraph_BTS_NPCSplineNaviUpdate, CallFunc_GetAIWorkIndex_ReturnValue) == 0x00009C, "Member 'BTS_NPCSplineNaviUpdate_C_ExecuteUbergraph_BTS_NPCSplineNaviUpdate::CallFunc_GetAIWorkIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTS_NPCSplineNaviUpdate_C_ExecuteUbergraph_BTS_NPCSplineNaviUpdate, CallFunc_NotEqual_IntInt_ReturnValue) == 0x0000A0, "Member 'BTS_NPCSplineNaviUpdate_C_ExecuteUbergraph_BTS_NPCSplineNaviUpdate::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTS_NPCSplineNaviUpdate_C_ExecuteUbergraph_BTS_NPCSplineNaviUpdate, Temp_bool_True_if_break_was_hit_Variable) == 0x0000A1, "Member 'BTS_NPCSplineNaviUpdate_C_ExecuteUbergraph_BTS_NPCSplineNaviUpdate::Temp_bool_True_if_break_was_hit_Variable' has a wrong offset!");
static_assert(offsetof(BTS_NPCSplineNaviUpdate_C_ExecuteUbergraph_BTS_NPCSplineNaviUpdate, CallFunc_Not_PreBool_ReturnValue) == 0x0000A2, "Member 'BTS_NPCSplineNaviUpdate_C_ExecuteUbergraph_BTS_NPCSplineNaviUpdate::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTS_NPCSplineNaviUpdate_C_ExecuteUbergraph_BTS_NPCSplineNaviUpdate, Temp_int_Loop_Counter_Variable) == 0x0000A4, "Member 'BTS_NPCSplineNaviUpdate_C_ExecuteUbergraph_BTS_NPCSplineNaviUpdate::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BTS_NPCSplineNaviUpdate_C_ExecuteUbergraph_BTS_NPCSplineNaviUpdate, CallFunc_Less_IntInt_ReturnValue) == 0x0000A8, "Member 'BTS_NPCSplineNaviUpdate_C_ExecuteUbergraph_BTS_NPCSplineNaviUpdate::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTS_NPCSplineNaviUpdate_C_ExecuteUbergraph_BTS_NPCSplineNaviUpdate, CallFunc_GetSplineAreaLength_ReturnValue_1) == 0x0000B0, "Member 'BTS_NPCSplineNaviUpdate_C_ExecuteUbergraph_BTS_NPCSplineNaviUpdate::CallFunc_GetSplineAreaLength_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BTS_NPCSplineNaviUpdate_C_ExecuteUbergraph_BTS_NPCSplineNaviUpdate, CallFunc_BooleanAND_ReturnValue) == 0x0000C0, "Member 'BTS_NPCSplineNaviUpdate_C_ExecuteUbergraph_BTS_NPCSplineNaviUpdate::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTS_NPCSplineNaviUpdate_C_ExecuteUbergraph_BTS_NPCSplineNaviUpdate, CallFunc_Array_Length_ReturnValue_1) == 0x0000C4, "Member 'BTS_NPCSplineNaviUpdate_C_ExecuteUbergraph_BTS_NPCSplineNaviUpdate::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BTS_NPCSplineNaviUpdate_C_ExecuteUbergraph_BTS_NPCSplineNaviUpdate, CallFunc_Add_IntInt_ReturnValue) == 0x0000C8, "Member 'BTS_NPCSplineNaviUpdate_C_ExecuteUbergraph_BTS_NPCSplineNaviUpdate::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTS_NPCSplineNaviUpdate_C_ExecuteUbergraph_BTS_NPCSplineNaviUpdate, Temp_int_Variable) == 0x0000CC, "Member 'BTS_NPCSplineNaviUpdate_C_ExecuteUbergraph_BTS_NPCSplineNaviUpdate::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(BTS_NPCSplineNaviUpdate_C_ExecuteUbergraph_BTS_NPCSplineNaviUpdate, CallFunc_Less_IntInt_ReturnValue_1) == 0x0000D0, "Member 'BTS_NPCSplineNaviUpdate_C_ExecuteUbergraph_BTS_NPCSplineNaviUpdate::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BTS_NPCSplineNaviUpdate_C_ExecuteUbergraph_BTS_NPCSplineNaviUpdate, CallFunc_Add_IntInt_ReturnValue_1) == 0x0000D4, "Member 'BTS_NPCSplineNaviUpdate_C_ExecuteUbergraph_BTS_NPCSplineNaviUpdate::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BTS_NPCSplineNaviUpdate_C_ExecuteUbergraph_BTS_NPCSplineNaviUpdate, CallFunc_Subtract_IntInt_ReturnValue) == 0x0000D8, "Member 'BTS_NPCSplineNaviUpdate_C_ExecuteUbergraph_BTS_NPCSplineNaviUpdate::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTS_NPCSplineNaviUpdate_C_ExecuteUbergraph_BTS_NPCSplineNaviUpdate, CallFunc_GetSplinePosition_ReturnValue_1) == 0x0000DC, "Member 'BTS_NPCSplineNaviUpdate_C_ExecuteUbergraph_BTS_NPCSplineNaviUpdate::CallFunc_GetSplinePosition_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BTS_NPCSplineNaviUpdate_C_ExecuteUbergraph_BTS_NPCSplineNaviUpdate, CallFunc_GetSplineAreaLength_ReturnValue_2) == 0x0000E0, "Member 'BTS_NPCSplineNaviUpdate_C_ExecuteUbergraph_BTS_NPCSplineNaviUpdate::CallFunc_GetSplineAreaLength_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BTS_NPCSplineNaviUpdate_C_ExecuteUbergraph_BTS_NPCSplineNaviUpdate, CallFunc_Array_Length_ReturnValue_2) == 0x0000F0, "Member 'BTS_NPCSplineNaviUpdate_C_ExecuteUbergraph_BTS_NPCSplineNaviUpdate::CallFunc_Array_Length_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BTS_NPCSplineNaviUpdate_C_ExecuteUbergraph_BTS_NPCSplineNaviUpdate, CallFunc_Subtract_IntInt_ReturnValue_1) == 0x0000F4, "Member 'BTS_NPCSplineNaviUpdate_C_ExecuteUbergraph_BTS_NPCSplineNaviUpdate::CallFunc_Subtract_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BTS_NPCSplineNaviUpdate_C_ExecuteUbergraph_BTS_NPCSplineNaviUpdate, Temp_int_Array_Index_Variable) == 0x0000F8, "Member 'BTS_NPCSplineNaviUpdate_C_ExecuteUbergraph_BTS_NPCSplineNaviUpdate::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BTS_NPCSplineNaviUpdate_C_ExecuteUbergraph_BTS_NPCSplineNaviUpdate, CallFunc_Array_Get_Item) == 0x0000FC, "Member 'BTS_NPCSplineNaviUpdate_C_ExecuteUbergraph_BTS_NPCSplineNaviUpdate::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BTS_NPCSplineNaviUpdate_C_ExecuteUbergraph_BTS_NPCSplineNaviUpdate, CallFunc_GreaterEqual_FloatFloat_ReturnValue) == 0x000100, "Member 'BTS_NPCSplineNaviUpdate_C_ExecuteUbergraph_BTS_NPCSplineNaviUpdate::CallFunc_GreaterEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTS_NPCSplineNaviUpdate_C_ExecuteUbergraph_BTS_NPCSplineNaviUpdate, CallFunc_Less_FloatFloat_ReturnValue) == 0x000101, "Member 'BTS_NPCSplineNaviUpdate_C_ExecuteUbergraph_BTS_NPCSplineNaviUpdate::CallFunc_Less_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTS_NPCSplineNaviUpdate_C_ExecuteUbergraph_BTS_NPCSplineNaviUpdate, CallFunc_GetSplineComponent_ReturnValue) == 0x000108, "Member 'BTS_NPCSplineNaviUpdate_C_ExecuteUbergraph_BTS_NPCSplineNaviUpdate::CallFunc_GetSplineComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTS_NPCSplineNaviUpdate_C_ExecuteUbergraph_BTS_NPCSplineNaviUpdate, CallFunc_GetSplinePosition_ReturnValue_2) == 0x000110, "Member 'BTS_NPCSplineNaviUpdate_C_ExecuteUbergraph_BTS_NPCSplineNaviUpdate::CallFunc_GetSplinePosition_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BTS_NPCSplineNaviUpdate_C_ExecuteUbergraph_BTS_NPCSplineNaviUpdate, CallFunc_GetSplineLength_ReturnValue) == 0x000114, "Member 'BTS_NPCSplineNaviUpdate_C_ExecuteUbergraph_BTS_NPCSplineNaviUpdate::CallFunc_GetSplineLength_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTS_NPCSplineNaviUpdate_C_ExecuteUbergraph_BTS_NPCSplineNaviUpdate, CallFunc_Percent_FloatFloat_ReturnValue) == 0x000118, "Member 'BTS_NPCSplineNaviUpdate_C_ExecuteUbergraph_BTS_NPCSplineNaviUpdate::CallFunc_Percent_FloatFloat_ReturnValue' has a wrong offset!");

// Function BTS_NPCSplineNaviUpdate.BTS_NPCSplineNaviUpdate_C.ReceiveTickAI
// 0x0018 (0x0018 - 0x0000)
struct BTS_NPCSplineNaviUpdate_C_ReceiveTickAI final
{
public:
	class AAIController*                          OwnerController;                                   // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  ControlledPawn;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         DeltaSeconds;                                      // 0x0010(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BTS_NPCSplineNaviUpdate_C_ReceiveTickAI) == 0x000008, "Wrong alignment on BTS_NPCSplineNaviUpdate_C_ReceiveTickAI");
static_assert(sizeof(BTS_NPCSplineNaviUpdate_C_ReceiveTickAI) == 0x000018, "Wrong size on BTS_NPCSplineNaviUpdate_C_ReceiveTickAI");
static_assert(offsetof(BTS_NPCSplineNaviUpdate_C_ReceiveTickAI, OwnerController) == 0x000000, "Member 'BTS_NPCSplineNaviUpdate_C_ReceiveTickAI::OwnerController' has a wrong offset!");
static_assert(offsetof(BTS_NPCSplineNaviUpdate_C_ReceiveTickAI, ControlledPawn) == 0x000008, "Member 'BTS_NPCSplineNaviUpdate_C_ReceiveTickAI::ControlledPawn' has a wrong offset!");
static_assert(offsetof(BTS_NPCSplineNaviUpdate_C_ReceiveTickAI, DeltaSeconds) == 0x000010, "Member 'BTS_NPCSplineNaviUpdate_C_ReceiveTickAI::DeltaSeconds' has a wrong offset!");

// Function BTS_NPCSplineNaviUpdate.BTS_NPCSplineNaviUpdate_C.ReceiveActivationAI
// 0x0010 (0x0010 - 0x0000)
struct BTS_NPCSplineNaviUpdate_C_ReceiveActivationAI final
{
public:
	class AAIController*                          OwnerController;                                   // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  ControlledPawn;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BTS_NPCSplineNaviUpdate_C_ReceiveActivationAI) == 0x000008, "Wrong alignment on BTS_NPCSplineNaviUpdate_C_ReceiveActivationAI");
static_assert(sizeof(BTS_NPCSplineNaviUpdate_C_ReceiveActivationAI) == 0x000010, "Wrong size on BTS_NPCSplineNaviUpdate_C_ReceiveActivationAI");
static_assert(offsetof(BTS_NPCSplineNaviUpdate_C_ReceiveActivationAI, OwnerController) == 0x000000, "Member 'BTS_NPCSplineNaviUpdate_C_ReceiveActivationAI::OwnerController' has a wrong offset!");
static_assert(offsetof(BTS_NPCSplineNaviUpdate_C_ReceiveActivationAI, ControlledPawn) == 0x000008, "Member 'BTS_NPCSplineNaviUpdate_C_ReceiveActivationAI::ControlledPawn' has a wrong offset!");

// Function BTS_NPCSplineNaviUpdate.BTS_NPCSplineNaviUpdate_C.UpdateMoveIndex
// 0x00D8 (0x00D8 - 0x0000)
struct BTS_NPCSplineNaviUpdate_C_UpdateMoveIndex final
{
public:
	class ANPCBase*                               NPCBase_0;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FST_NPCDataAIParam                     CallFunc_GetNPCAiParam_ReturnValue;                // 0x0008(0x0038)()
	struct FST_NPCDataAIParam                     CallFunc_GetNPCAiParam_ReturnValue_1;              // 0x0040(0x0038)()
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x007C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FST_NPCDataAIParam                     CallFunc_GetNPCAiParam_ReturnValue_2;              // 0x0080(0x0038)()
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x00B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue_1;            // 0x00BC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x00C1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_C2[0x2];                                       // 0x00C2(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x00C4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x00C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x00CC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_CD[0x3];                                       // 0x00CD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x00D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BTS_NPCSplineNaviUpdate_C_UpdateMoveIndex) == 0x000008, "Wrong alignment on BTS_NPCSplineNaviUpdate_C_UpdateMoveIndex");
static_assert(sizeof(BTS_NPCSplineNaviUpdate_C_UpdateMoveIndex) == 0x0000D8, "Wrong size on BTS_NPCSplineNaviUpdate_C_UpdateMoveIndex");
static_assert(offsetof(BTS_NPCSplineNaviUpdate_C_UpdateMoveIndex, NPCBase_0) == 0x000000, "Member 'BTS_NPCSplineNaviUpdate_C_UpdateMoveIndex::NPCBase_0' has a wrong offset!");
static_assert(offsetof(BTS_NPCSplineNaviUpdate_C_UpdateMoveIndex, CallFunc_GetNPCAiParam_ReturnValue) == 0x000008, "Member 'BTS_NPCSplineNaviUpdate_C_UpdateMoveIndex::CallFunc_GetNPCAiParam_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTS_NPCSplineNaviUpdate_C_UpdateMoveIndex, CallFunc_GetNPCAiParam_ReturnValue_1) == 0x000040, "Member 'BTS_NPCSplineNaviUpdate_C_UpdateMoveIndex::CallFunc_GetNPCAiParam_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BTS_NPCSplineNaviUpdate_C_UpdateMoveIndex, CallFunc_Array_Length_ReturnValue) == 0x000078, "Member 'BTS_NPCSplineNaviUpdate_C_UpdateMoveIndex::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTS_NPCSplineNaviUpdate_C_UpdateMoveIndex, CallFunc_Subtract_IntInt_ReturnValue) == 0x00007C, "Member 'BTS_NPCSplineNaviUpdate_C_UpdateMoveIndex::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTS_NPCSplineNaviUpdate_C_UpdateMoveIndex, CallFunc_GetNPCAiParam_ReturnValue_2) == 0x000080, "Member 'BTS_NPCSplineNaviUpdate_C_UpdateMoveIndex::CallFunc_GetNPCAiParam_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BTS_NPCSplineNaviUpdate_C_UpdateMoveIndex, CallFunc_Array_Length_ReturnValue_1) == 0x0000B8, "Member 'BTS_NPCSplineNaviUpdate_C_UpdateMoveIndex::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BTS_NPCSplineNaviUpdate_C_UpdateMoveIndex, CallFunc_Subtract_IntInt_ReturnValue_1) == 0x0000BC, "Member 'BTS_NPCSplineNaviUpdate_C_UpdateMoveIndex::CallFunc_Subtract_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BTS_NPCSplineNaviUpdate_C_UpdateMoveIndex, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x0000C0, "Member 'BTS_NPCSplineNaviUpdate_C_UpdateMoveIndex::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTS_NPCSplineNaviUpdate_C_UpdateMoveIndex, CallFunc_LessEqual_IntInt_ReturnValue) == 0x0000C1, "Member 'BTS_NPCSplineNaviUpdate_C_UpdateMoveIndex::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTS_NPCSplineNaviUpdate_C_UpdateMoveIndex, CallFunc_Add_IntInt_ReturnValue) == 0x0000C4, "Member 'BTS_NPCSplineNaviUpdate_C_UpdateMoveIndex::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTS_NPCSplineNaviUpdate_C_UpdateMoveIndex, Temp_int_Variable) == 0x0000C8, "Member 'BTS_NPCSplineNaviUpdate_C_UpdateMoveIndex::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(BTS_NPCSplineNaviUpdate_C_UpdateMoveIndex, CallFunc_Less_IntInt_ReturnValue) == 0x0000CC, "Member 'BTS_NPCSplineNaviUpdate_C_UpdateMoveIndex::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTS_NPCSplineNaviUpdate_C_UpdateMoveIndex, CallFunc_Add_IntInt_ReturnValue_1) == 0x0000D0, "Member 'BTS_NPCSplineNaviUpdate_C_UpdateMoveIndex::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");

// Function BTS_NPCSplineNaviUpdate.BTS_NPCSplineNaviUpdate_C.UpdateMoveParams
// 0x00B0 (0x00B0 - 0x0000)
struct BTS_NPCSplineNaviUpdate_C_UpdateMoveParams final
{
public:
	class ANPCBase*                               NPCBase_0;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FST_NPCDataAIParam                     CallFunc_GetNPCAiParam_ReturnValue;                // 0x0008(0x0038)()
	int32                                         CallFunc_GetAIWorkIndex_ReturnValue;               // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_49[0x7];                                       // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FST_NPCEventAiMovePoints               CallFunc_GetDataTableRowFromName_OutRow;           // 0x0050(0x0058)()
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_NameName_ReturnValue;            // 0x00A9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqualExactly_VectorVector_ReturnValue; // 0x00AA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BTS_NPCSplineNaviUpdate_C_UpdateMoveParams) == 0x000008, "Wrong alignment on BTS_NPCSplineNaviUpdate_C_UpdateMoveParams");
static_assert(sizeof(BTS_NPCSplineNaviUpdate_C_UpdateMoveParams) == 0x0000B0, "Wrong size on BTS_NPCSplineNaviUpdate_C_UpdateMoveParams");
static_assert(offsetof(BTS_NPCSplineNaviUpdate_C_UpdateMoveParams, NPCBase_0) == 0x000000, "Member 'BTS_NPCSplineNaviUpdate_C_UpdateMoveParams::NPCBase_0' has a wrong offset!");
static_assert(offsetof(BTS_NPCSplineNaviUpdate_C_UpdateMoveParams, CallFunc_GetNPCAiParam_ReturnValue) == 0x000008, "Member 'BTS_NPCSplineNaviUpdate_C_UpdateMoveParams::CallFunc_GetNPCAiParam_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTS_NPCSplineNaviUpdate_C_UpdateMoveParams, CallFunc_GetAIWorkIndex_ReturnValue) == 0x000040, "Member 'BTS_NPCSplineNaviUpdate_C_UpdateMoveParams::CallFunc_GetAIWorkIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTS_NPCSplineNaviUpdate_C_UpdateMoveParams, CallFunc_Array_Length_ReturnValue) == 0x000044, "Member 'BTS_NPCSplineNaviUpdate_C_UpdateMoveParams::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTS_NPCSplineNaviUpdate_C_UpdateMoveParams, CallFunc_Greater_IntInt_ReturnValue) == 0x000048, "Member 'BTS_NPCSplineNaviUpdate_C_UpdateMoveParams::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTS_NPCSplineNaviUpdate_C_UpdateMoveParams, CallFunc_GetDataTableRowFromName_OutRow) == 0x000050, "Member 'BTS_NPCSplineNaviUpdate_C_UpdateMoveParams::CallFunc_GetDataTableRowFromName_OutRow' has a wrong offset!");
static_assert(offsetof(BTS_NPCSplineNaviUpdate_C_UpdateMoveParams, CallFunc_GetDataTableRowFromName_ReturnValue) == 0x0000A8, "Member 'BTS_NPCSplineNaviUpdate_C_UpdateMoveParams::CallFunc_GetDataTableRowFromName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTS_NPCSplineNaviUpdate_C_UpdateMoveParams, CallFunc_NotEqual_NameName_ReturnValue) == 0x0000A9, "Member 'BTS_NPCSplineNaviUpdate_C_UpdateMoveParams::CallFunc_NotEqual_NameName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTS_NPCSplineNaviUpdate_C_UpdateMoveParams, CallFunc_NotEqualExactly_VectorVector_ReturnValue) == 0x0000AA, "Member 'BTS_NPCSplineNaviUpdate_C_UpdateMoveParams::CallFunc_NotEqualExactly_VectorVector_ReturnValue' has a wrong offset!");

}
