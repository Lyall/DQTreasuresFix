#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_Complete_01_Root

#include "Basic.hpp"

#include "DarwinGame_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass W_Complete_01_Root.W_Complete_01_Root_C
// 0x0000 (0x0520 - 0x0520)
class UW_Complete_01_Root_C final : public UUIComplete_Root
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"W_Complete_01_Root_C">();
	}
	static class UW_Complete_01_Root_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UW_Complete_01_Root_C>();
	}
};
static_assert(alignof(UW_Complete_01_Root_C) == 0x000010, "Wrong alignment on UW_Complete_01_Root_C");
static_assert(sizeof(UW_Complete_01_Root_C) == 0x000520, "Wrong size on UW_Complete_01_Root_C");

}
