#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_QuestManager

#include "Basic.hpp"

#include "DarwinGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_QuestManager.BP_QuestManager_C
// 0x0000 (0x0440 - 0x0440)
class UBP_QuestManager_C final : public UQuestManager
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_QuestManager_C">();
	}
	static class UBP_QuestManager_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_QuestManager_C>();
	}
};
static_assert(alignof(UBP_QuestManager_C) == 0x000008, "Wrong alignment on UBP_QuestManager_C");
static_assert(sizeof(UBP_QuestManager_C) == 0x000440, "Wrong size on UBP_QuestManager_C");

}

