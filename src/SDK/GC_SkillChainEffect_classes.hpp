#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GC_SkillChainEffect

#include "Basic.hpp"

#include "DarwinGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GC_SkillChainEffect.GC_SkillChainEffect_C
// 0x0008 (0x02A0 - 0x0298)
class AGC_SkillChainEffect_C final : public ASkillChainEffectCue
{
public:
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0298(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GC_SkillChainEffect_C">();
	}
	static class AGC_SkillChainEffect_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AGC_SkillChainEffect_C>();
	}
};
static_assert(alignof(AGC_SkillChainEffect_C) == 0x000008, "Wrong alignment on AGC_SkillChainEffect_C");
static_assert(sizeof(AGC_SkillChainEffect_C) == 0x0002A0, "Wrong size on AGC_SkillChainEffect_C");
static_assert(offsetof(AGC_SkillChainEffect_C, DefaultSceneRoot) == 0x000298, "Member 'AGC_SkillChainEffect_C::DefaultSceneRoot' has a wrong offset!");

}

