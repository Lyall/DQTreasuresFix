#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_DebugMenu

#include "Basic.hpp"

#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function W_DebugMenu.W_DebugMenu_C.ExecuteUbergraph_W_DebugMenu
// 0x0060 (0x0060 - 0x0000)
struct W_DebugMenu_C_ExecuteUbergraph_W_DebugMenu final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_AppGameInstance_C*                  CallFunc_GetAppGameInstance_AppGameInstance;       // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UAppDebugMenu*                          CallFunc_GetDebugMenu_ReturnValue;                 // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGeometry                              K2Node_Event_MyGeometry;                           // 0x0020(0x0038)(IsPlainOldData, NoDestructor)
	float                                         K2Node_Event_InDeltaTime;                          // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_DebugMenu_C_ExecuteUbergraph_W_DebugMenu) == 0x000008, "Wrong alignment on W_DebugMenu_C_ExecuteUbergraph_W_DebugMenu");
static_assert(sizeof(W_DebugMenu_C_ExecuteUbergraph_W_DebugMenu) == 0x000060, "Wrong size on W_DebugMenu_C_ExecuteUbergraph_W_DebugMenu");
static_assert(offsetof(W_DebugMenu_C_ExecuteUbergraph_W_DebugMenu, EntryPoint) == 0x000000, "Member 'W_DebugMenu_C_ExecuteUbergraph_W_DebugMenu::EntryPoint' has a wrong offset!");
static_assert(offsetof(W_DebugMenu_C_ExecuteUbergraph_W_DebugMenu, CallFunc_GetAppGameInstance_AppGameInstance) == 0x000008, "Member 'W_DebugMenu_C_ExecuteUbergraph_W_DebugMenu::CallFunc_GetAppGameInstance_AppGameInstance' has a wrong offset!");
static_assert(offsetof(W_DebugMenu_C_ExecuteUbergraph_W_DebugMenu, K2Node_Event_IsDesignTime) == 0x000010, "Member 'W_DebugMenu_C_ExecuteUbergraph_W_DebugMenu::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(W_DebugMenu_C_ExecuteUbergraph_W_DebugMenu, CallFunc_GetDebugMenu_ReturnValue) == 0x000018, "Member 'W_DebugMenu_C_ExecuteUbergraph_W_DebugMenu::CallFunc_GetDebugMenu_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_DebugMenu_C_ExecuteUbergraph_W_DebugMenu, K2Node_Event_MyGeometry) == 0x000020, "Member 'W_DebugMenu_C_ExecuteUbergraph_W_DebugMenu::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(W_DebugMenu_C_ExecuteUbergraph_W_DebugMenu, K2Node_Event_InDeltaTime) == 0x000058, "Member 'W_DebugMenu_C_ExecuteUbergraph_W_DebugMenu::K2Node_Event_InDeltaTime' has a wrong offset!");

// Function W_DebugMenu.W_DebugMenu_C.Tick
// 0x003C (0x003C - 0x0000)
struct W_DebugMenu_C_Tick final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                         InDeltaTime;                                       // 0x0038(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_DebugMenu_C_Tick) == 0x000004, "Wrong alignment on W_DebugMenu_C_Tick");
static_assert(sizeof(W_DebugMenu_C_Tick) == 0x00003C, "Wrong size on W_DebugMenu_C_Tick");
static_assert(offsetof(W_DebugMenu_C_Tick, MyGeometry) == 0x000000, "Member 'W_DebugMenu_C_Tick::MyGeometry' has a wrong offset!");
static_assert(offsetof(W_DebugMenu_C_Tick, InDeltaTime) == 0x000038, "Member 'W_DebugMenu_C_Tick::InDeltaTime' has a wrong offset!");

// Function W_DebugMenu.W_DebugMenu_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct W_DebugMenu_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(W_DebugMenu_C_PreConstruct) == 0x000001, "Wrong alignment on W_DebugMenu_C_PreConstruct");
static_assert(sizeof(W_DebugMenu_C_PreConstruct) == 0x000001, "Wrong size on W_DebugMenu_C_PreConstruct");
static_assert(offsetof(W_DebugMenu_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'W_DebugMenu_C_PreConstruct::IsDesignTime' has a wrong offset!");

}
