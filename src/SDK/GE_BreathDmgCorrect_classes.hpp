#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GE_BreathDmgCorrect

#include "Basic.hpp"

#include "DarwinGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GE_BreathDmgCorrect.GE_BreathDmgCorrect_C
// 0x0000 (0x07C8 - 0x07C8)
class UGE_BreathDmgCorrect_C final : public UAttributeGameplayEffect
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GE_BreathDmgCorrect_C">();
	}
	static class UGE_BreathDmgCorrect_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGE_BreathDmgCorrect_C>();
	}
};
static_assert(alignof(UGE_BreathDmgCorrect_C) == 0x000008, "Wrong alignment on UGE_BreathDmgCorrect_C");
static_assert(sizeof(UGE_BreathDmgCorrect_C) == 0x0007C8, "Wrong size on UGE_BreathDmgCorrect_C");

}
