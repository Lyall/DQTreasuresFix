#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Miasma

#include "Basic.hpp"

#include "DarwinGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Miasma.BP_Miasma_C
// 0x0008 (0x0240 - 0x0238)
class ABP_Miasma_C final : public AEnvironmentEffectBase
{
public:
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0238(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Miasma_C">();
	}
	static class ABP_Miasma_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Miasma_C>();
	}
};
static_assert(alignof(ABP_Miasma_C) == 0x000008, "Wrong alignment on ABP_Miasma_C");
static_assert(sizeof(ABP_Miasma_C) == 0x000240, "Wrong size on ABP_Miasma_C");
static_assert(offsetof(ABP_Miasma_C, DefaultSceneRoot) == 0x000238, "Member 'ABP_Miasma_C::DefaultSceneRoot' has a wrong offset!");

}
