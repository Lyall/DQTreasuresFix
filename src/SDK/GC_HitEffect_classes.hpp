#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GC_HitEffect

#include "Basic.hpp"

#include "DarwinGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GC_HitEffect.GC_HitEffect_C
// 0x0008 (0x02A0 - 0x0298)
class AGC_HitEffect_C final : public AHitEffectCue
{
public:
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0298(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GC_HitEffect_C">();
	}
	static class AGC_HitEffect_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AGC_HitEffect_C>();
	}
};
static_assert(alignof(AGC_HitEffect_C) == 0x000008, "Wrong alignment on AGC_HitEffect_C");
static_assert(sizeof(AGC_HitEffect_C) == 0x0002A0, "Wrong size on AGC_HitEffect_C");
static_assert(offsetof(AGC_HitEffect_C, DefaultSceneRoot) == 0x000298, "Member 'AGC_HitEffect_C::DefaultSceneRoot' has a wrong offset!");

}
