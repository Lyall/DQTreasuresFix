#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Ground_Despoil

#include "Basic.hpp"

#include "DarwinGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Ground_Despoil.Ground_Despoil_C
// 0x0000 (0x0170 - 0x0170)
class UGround_Despoil_C final : public UGroundStateDespoil
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Ground_Despoil_C">();
	}
	static class UGround_Despoil_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGround_Despoil_C>();
	}
};
static_assert(alignof(UGround_Despoil_C) == 0x000008, "Wrong alignment on UGround_Despoil_C");
static_assert(sizeof(UGround_Despoil_C) == 0x000170, "Wrong size on UGround_Despoil_C");

}
