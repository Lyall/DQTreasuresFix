#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_PushWave

#include "Basic.hpp"

#include "DarwinGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_PushWave.BP_PushWave_C
// 0x0008 (0x03A8 - 0x03A0)
class ABP_PushWave_C final : public APushWaveBase
{
public:
	class USceneComponent*                        Scene;                                             // 0x03A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_PushWave_C">();
	}
	static class ABP_PushWave_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_PushWave_C>();
	}
};
static_assert(alignof(ABP_PushWave_C) == 0x000008, "Wrong alignment on ABP_PushWave_C");
static_assert(sizeof(ABP_PushWave_C) == 0x0003A8, "Wrong size on ABP_PushWave_C");
static_assert(offsetof(ABP_PushWave_C, Scene) == 0x0003A0, "Member 'ABP_PushWave_C::Scene' has a wrong offset!");

}
