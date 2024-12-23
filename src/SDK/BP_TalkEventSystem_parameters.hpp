#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_TalkEventSystem

#include "Basic.hpp"

#include "DarwinGame_structs.hpp"


namespace SDK::Params
{

// Function BP_TalkEventSystem.BP_TalkEventSystem_C.ExecuteUbergraph_BP_TalkEventSystem
// 0x00A0 (0x00A0 - 0x0000)
struct BP_TalkEventSystem_C_ExecuteUbergraph_BP_TalkEventSystem final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUIManager*                             CallFunc_GetInstance_ReturnValue;                  // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 K2Node_Event_TextID;                               // 0x0010(0x0010)(ConstParm, ZeroConstructor, HasGetValueTypeHash)
	class UBP_UIManager_C*                        K2Node_DynamicCast_AsBP_UIManager;                 // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_29[0x7];                                       // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UW_Talk_WinStatus_C*                    CallFunc_GetTalkWindow_OutWidget;                  // 0x0030(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_CanAction_ReturnValue;                    // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3A[0x6];                                       // 0x003A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UEventSystemManager*                    CallFunc_GetInstance_ReturnValue_1;                // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AEventSystemManagerActor*               CallFunc_GetEventSystemManagerActor_ReturnValue;   // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UEventExecuter*                         CallFunc_GetEventExecuter_ReturnValue;             // 0x0050(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_NameName_ReturnValue;          // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsSelectCancel_ReturnValue;               // 0x0059(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5A[0x6];                                       // 0x005A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_NameToString_ReturnValue;            // 0x0060(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_NameName_ReturnValue;            // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_71[0x7];                                       // 0x0071(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUIManager*                             CallFunc_GetInstance_ReturnValue_2;                // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_UIManager_C*                        K2Node_DynamicCast_AsBP_UIManager_1;               // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_89[0x7];                                       // 0x0089(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UW_Talk_WinStatus_C*                    CallFunc_GetTalkWindow_OutWidget_1;                // 0x0090(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_CanAction_ReturnValue_1;                  // 0x0099(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_TalkEventSystem_C_ExecuteUbergraph_BP_TalkEventSystem) == 0x000008, "Wrong alignment on BP_TalkEventSystem_C_ExecuteUbergraph_BP_TalkEventSystem");
static_assert(sizeof(BP_TalkEventSystem_C_ExecuteUbergraph_BP_TalkEventSystem) == 0x0000A0, "Wrong size on BP_TalkEventSystem_C_ExecuteUbergraph_BP_TalkEventSystem");
static_assert(offsetof(BP_TalkEventSystem_C_ExecuteUbergraph_BP_TalkEventSystem, EntryPoint) == 0x000000, "Member 'BP_TalkEventSystem_C_ExecuteUbergraph_BP_TalkEventSystem::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_TalkEventSystem_C_ExecuteUbergraph_BP_TalkEventSystem, CallFunc_GetInstance_ReturnValue) == 0x000008, "Member 'BP_TalkEventSystem_C_ExecuteUbergraph_BP_TalkEventSystem::CallFunc_GetInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_TalkEventSystem_C_ExecuteUbergraph_BP_TalkEventSystem, K2Node_Event_TextID) == 0x000010, "Member 'BP_TalkEventSystem_C_ExecuteUbergraph_BP_TalkEventSystem::K2Node_Event_TextID' has a wrong offset!");
static_assert(offsetof(BP_TalkEventSystem_C_ExecuteUbergraph_BP_TalkEventSystem, K2Node_DynamicCast_AsBP_UIManager) == 0x000020, "Member 'BP_TalkEventSystem_C_ExecuteUbergraph_BP_TalkEventSystem::K2Node_DynamicCast_AsBP_UIManager' has a wrong offset!");
static_assert(offsetof(BP_TalkEventSystem_C_ExecuteUbergraph_BP_TalkEventSystem, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'BP_TalkEventSystem_C_ExecuteUbergraph_BP_TalkEventSystem::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_TalkEventSystem_C_ExecuteUbergraph_BP_TalkEventSystem, CallFunc_GetTalkWindow_OutWidget) == 0x000030, "Member 'BP_TalkEventSystem_C_ExecuteUbergraph_BP_TalkEventSystem::CallFunc_GetTalkWindow_OutWidget' has a wrong offset!");
static_assert(offsetof(BP_TalkEventSystem_C_ExecuteUbergraph_BP_TalkEventSystem, CallFunc_CanAction_ReturnValue) == 0x000038, "Member 'BP_TalkEventSystem_C_ExecuteUbergraph_BP_TalkEventSystem::CallFunc_CanAction_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_TalkEventSystem_C_ExecuteUbergraph_BP_TalkEventSystem, CallFunc_IsValid_ReturnValue) == 0x000039, "Member 'BP_TalkEventSystem_C_ExecuteUbergraph_BP_TalkEventSystem::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_TalkEventSystem_C_ExecuteUbergraph_BP_TalkEventSystem, CallFunc_GetInstance_ReturnValue_1) == 0x000040, "Member 'BP_TalkEventSystem_C_ExecuteUbergraph_BP_TalkEventSystem::CallFunc_GetInstance_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_TalkEventSystem_C_ExecuteUbergraph_BP_TalkEventSystem, CallFunc_GetEventSystemManagerActor_ReturnValue) == 0x000048, "Member 'BP_TalkEventSystem_C_ExecuteUbergraph_BP_TalkEventSystem::CallFunc_GetEventSystemManagerActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_TalkEventSystem_C_ExecuteUbergraph_BP_TalkEventSystem, CallFunc_GetEventExecuter_ReturnValue) == 0x000050, "Member 'BP_TalkEventSystem_C_ExecuteUbergraph_BP_TalkEventSystem::CallFunc_GetEventExecuter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_TalkEventSystem_C_ExecuteUbergraph_BP_TalkEventSystem, CallFunc_EqualEqual_NameName_ReturnValue) == 0x000058, "Member 'BP_TalkEventSystem_C_ExecuteUbergraph_BP_TalkEventSystem::CallFunc_EqualEqual_NameName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_TalkEventSystem_C_ExecuteUbergraph_BP_TalkEventSystem, CallFunc_IsSelectCancel_ReturnValue) == 0x000059, "Member 'BP_TalkEventSystem_C_ExecuteUbergraph_BP_TalkEventSystem::CallFunc_IsSelectCancel_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_TalkEventSystem_C_ExecuteUbergraph_BP_TalkEventSystem, CallFunc_Conv_NameToString_ReturnValue) == 0x000060, "Member 'BP_TalkEventSystem_C_ExecuteUbergraph_BP_TalkEventSystem::CallFunc_Conv_NameToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_TalkEventSystem_C_ExecuteUbergraph_BP_TalkEventSystem, CallFunc_NotEqual_NameName_ReturnValue) == 0x000070, "Member 'BP_TalkEventSystem_C_ExecuteUbergraph_BP_TalkEventSystem::CallFunc_NotEqual_NameName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_TalkEventSystem_C_ExecuteUbergraph_BP_TalkEventSystem, CallFunc_GetInstance_ReturnValue_2) == 0x000078, "Member 'BP_TalkEventSystem_C_ExecuteUbergraph_BP_TalkEventSystem::CallFunc_GetInstance_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_TalkEventSystem_C_ExecuteUbergraph_BP_TalkEventSystem, K2Node_DynamicCast_AsBP_UIManager_1) == 0x000080, "Member 'BP_TalkEventSystem_C_ExecuteUbergraph_BP_TalkEventSystem::K2Node_DynamicCast_AsBP_UIManager_1' has a wrong offset!");
static_assert(offsetof(BP_TalkEventSystem_C_ExecuteUbergraph_BP_TalkEventSystem, K2Node_DynamicCast_bSuccess_1) == 0x000088, "Member 'BP_TalkEventSystem_C_ExecuteUbergraph_BP_TalkEventSystem::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(BP_TalkEventSystem_C_ExecuteUbergraph_BP_TalkEventSystem, CallFunc_GetTalkWindow_OutWidget_1) == 0x000090, "Member 'BP_TalkEventSystem_C_ExecuteUbergraph_BP_TalkEventSystem::CallFunc_GetTalkWindow_OutWidget_1' has a wrong offset!");
static_assert(offsetof(BP_TalkEventSystem_C_ExecuteUbergraph_BP_TalkEventSystem, CallFunc_IsValid_ReturnValue_1) == 0x000098, "Member 'BP_TalkEventSystem_C_ExecuteUbergraph_BP_TalkEventSystem::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_TalkEventSystem_C_ExecuteUbergraph_BP_TalkEventSystem, CallFunc_CanAction_ReturnValue_1) == 0x000099, "Member 'BP_TalkEventSystem_C_ExecuteUbergraph_BP_TalkEventSystem::CallFunc_CanAction_ReturnValue_1' has a wrong offset!");

// Function BP_TalkEventSystem.BP_TalkEventSystem_C.OpenTalkWindow
// 0x0010 (0x0010 - 0x0000)
struct BP_TalkEventSystem_C_OpenTalkWindow final
{
public:
	class FString                                 TextID;                                            // 0x0000(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash)
};
static_assert(alignof(BP_TalkEventSystem_C_OpenTalkWindow) == 0x000008, "Wrong alignment on BP_TalkEventSystem_C_OpenTalkWindow");
static_assert(sizeof(BP_TalkEventSystem_C_OpenTalkWindow) == 0x000010, "Wrong size on BP_TalkEventSystem_C_OpenTalkWindow");
static_assert(offsetof(BP_TalkEventSystem_C_OpenTalkWindow, TextID) == 0x000000, "Member 'BP_TalkEventSystem_C_OpenTalkWindow::TextID' has a wrong offset!");

// Function BP_TalkEventSystem.BP_TalkEventSystem_C.IsCloseTalkWindow
// 0x0030 (0x0030 - 0x0000)
struct BP_TalkEventSystem_C_IsCloseTalkWindow final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUIManager*                             CallFunc_GetInstance_ReturnValue;                  // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_UIManager_C*                        K2Node_DynamicCast_AsBP_UIManager;                 // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsCloseTalkWindow_ReturnValue;            // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1A[0x6];                                       // 0x001A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UW_Talk_WinStatus_C*                    CallFunc_GetTalkWindow_OutWidget;                  // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EOpenState                                    CallFunc_GetOpenState_ReturnValue;                 // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x002A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_TalkEventSystem_C_IsCloseTalkWindow) == 0x000008, "Wrong alignment on BP_TalkEventSystem_C_IsCloseTalkWindow");
static_assert(sizeof(BP_TalkEventSystem_C_IsCloseTalkWindow) == 0x000030, "Wrong size on BP_TalkEventSystem_C_IsCloseTalkWindow");
static_assert(offsetof(BP_TalkEventSystem_C_IsCloseTalkWindow, ReturnValue) == 0x000000, "Member 'BP_TalkEventSystem_C_IsCloseTalkWindow::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_TalkEventSystem_C_IsCloseTalkWindow, CallFunc_GetInstance_ReturnValue) == 0x000008, "Member 'BP_TalkEventSystem_C_IsCloseTalkWindow::CallFunc_GetInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_TalkEventSystem_C_IsCloseTalkWindow, K2Node_DynamicCast_AsBP_UIManager) == 0x000010, "Member 'BP_TalkEventSystem_C_IsCloseTalkWindow::K2Node_DynamicCast_AsBP_UIManager' has a wrong offset!");
static_assert(offsetof(BP_TalkEventSystem_C_IsCloseTalkWindow, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'BP_TalkEventSystem_C_IsCloseTalkWindow::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_TalkEventSystem_C_IsCloseTalkWindow, CallFunc_IsCloseTalkWindow_ReturnValue) == 0x000019, "Member 'BP_TalkEventSystem_C_IsCloseTalkWindow::CallFunc_IsCloseTalkWindow_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_TalkEventSystem_C_IsCloseTalkWindow, CallFunc_GetTalkWindow_OutWidget) == 0x000020, "Member 'BP_TalkEventSystem_C_IsCloseTalkWindow::CallFunc_GetTalkWindow_OutWidget' has a wrong offset!");
static_assert(offsetof(BP_TalkEventSystem_C_IsCloseTalkWindow, CallFunc_IsValid_ReturnValue) == 0x000028, "Member 'BP_TalkEventSystem_C_IsCloseTalkWindow::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_TalkEventSystem_C_IsCloseTalkWindow, CallFunc_GetOpenState_ReturnValue) == 0x000029, "Member 'BP_TalkEventSystem_C_IsCloseTalkWindow::CallFunc_GetOpenState_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_TalkEventSystem_C_IsCloseTalkWindow, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x00002A, "Member 'BP_TalkEventSystem_C_IsCloseTalkWindow::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");

// Function BP_TalkEventSystem.BP_TalkEventSystem_C.IsOpenTalkWindow
// 0x0030 (0x0030 - 0x0000)
struct BP_TalkEventSystem_C_IsOpenTalkWindow final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUIManager*                             CallFunc_GetInstance_ReturnValue;                  // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_UIManager_C*                        K2Node_DynamicCast_AsBP_UIManager;                 // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsOpenTalkWindow_ReturnValue;             // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1A[0x6];                                       // 0x001A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UW_Talk_WinStatus_C*                    CallFunc_GetTalkWindow_OutWidget;                  // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EOpenState                                    CallFunc_GetOpenState_ReturnValue;                 // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x002A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_TalkEventSystem_C_IsOpenTalkWindow) == 0x000008, "Wrong alignment on BP_TalkEventSystem_C_IsOpenTalkWindow");
static_assert(sizeof(BP_TalkEventSystem_C_IsOpenTalkWindow) == 0x000030, "Wrong size on BP_TalkEventSystem_C_IsOpenTalkWindow");
static_assert(offsetof(BP_TalkEventSystem_C_IsOpenTalkWindow, ReturnValue) == 0x000000, "Member 'BP_TalkEventSystem_C_IsOpenTalkWindow::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_TalkEventSystem_C_IsOpenTalkWindow, CallFunc_GetInstance_ReturnValue) == 0x000008, "Member 'BP_TalkEventSystem_C_IsOpenTalkWindow::CallFunc_GetInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_TalkEventSystem_C_IsOpenTalkWindow, K2Node_DynamicCast_AsBP_UIManager) == 0x000010, "Member 'BP_TalkEventSystem_C_IsOpenTalkWindow::K2Node_DynamicCast_AsBP_UIManager' has a wrong offset!");
static_assert(offsetof(BP_TalkEventSystem_C_IsOpenTalkWindow, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'BP_TalkEventSystem_C_IsOpenTalkWindow::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_TalkEventSystem_C_IsOpenTalkWindow, CallFunc_IsOpenTalkWindow_ReturnValue) == 0x000019, "Member 'BP_TalkEventSystem_C_IsOpenTalkWindow::CallFunc_IsOpenTalkWindow_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_TalkEventSystem_C_IsOpenTalkWindow, CallFunc_GetTalkWindow_OutWidget) == 0x000020, "Member 'BP_TalkEventSystem_C_IsOpenTalkWindow::CallFunc_GetTalkWindow_OutWidget' has a wrong offset!");
static_assert(offsetof(BP_TalkEventSystem_C_IsOpenTalkWindow, CallFunc_IsValid_ReturnValue) == 0x000028, "Member 'BP_TalkEventSystem_C_IsOpenTalkWindow::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_TalkEventSystem_C_IsOpenTalkWindow, CallFunc_GetOpenState_ReturnValue) == 0x000029, "Member 'BP_TalkEventSystem_C_IsOpenTalkWindow::CallFunc_GetOpenState_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_TalkEventSystem_C_IsOpenTalkWindow, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x00002A, "Member 'BP_TalkEventSystem_C_IsOpenTalkWindow::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");

}

