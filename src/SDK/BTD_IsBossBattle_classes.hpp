#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BTD_IsBossBattle

#include "Basic.hpp"

#include "AIModule_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BTD_IsBossBattle.BTD_IsBossBattle_C
// 0x0000 (0x00A8 - 0x00A8)
class UBTD_IsBossBattle_C final : public UBTDecorator_BlueprintBase
{
public:
	bool PerformConditionCheckAI(class AAIController* OwnerController, class APawn* ControlledPawn);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BTD_IsBossBattle_C">();
	}
	static class UBTD_IsBossBattle_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBTD_IsBossBattle_C>();
	}
};
static_assert(alignof(UBTD_IsBossBattle_C) == 0x000008, "Wrong alignment on UBTD_IsBossBattle_C");
static_assert(sizeof(UBTD_IsBossBattle_C) == 0x0000A8, "Wrong size on UBTD_IsBossBattle_C");

}

