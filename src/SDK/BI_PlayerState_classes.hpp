#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BI_PlayerState

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BI_PlayerState.BI_PlayerState_C
// 0x0000 (0x0030 - 0x0030)
class IBI_PlayerState_C final : public IInterface
{
public:
	void AddExpToPlayer(int32 ExpValue);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BI_PlayerState_C">();
	}
	static class IBI_PlayerState_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<IBI_PlayerState_C>();
	}
};
static_assert(alignof(IBI_PlayerState_C) == 0x000008, "Wrong alignment on IBI_PlayerState_C");
static_assert(sizeof(IBI_PlayerState_C) == 0x000030, "Wrong size on IBI_PlayerState_C");

}
