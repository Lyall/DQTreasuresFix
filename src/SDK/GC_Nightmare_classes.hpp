#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GC_Nightmare

#include "Basic.hpp"

#include "DarwinGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GC_Nightmare.GC_Nightmare_C
// 0x0040 (0x02E8 - 0x02A8)
class AGC_Nightmare_C : public ADarwinGameplayCue
{
public:
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x02A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class AEffectBase*                            Effect;                                            // 0x02B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FName>                           ScalarParamNames;                                  // 0x02B8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TArray<class FName>                           VectorParamNames;                                  // 0x02C8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TArray<class FName>                           ScalarParamNames_0;                                // 0x02D8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)

public:
	bool OnRemove(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters);
	bool OnActive(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GC_Nightmare_C">();
	}
	static class AGC_Nightmare_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AGC_Nightmare_C>();
	}
};
static_assert(alignof(AGC_Nightmare_C) == 0x000008, "Wrong alignment on AGC_Nightmare_C");
static_assert(sizeof(AGC_Nightmare_C) == 0x0002E8, "Wrong size on AGC_Nightmare_C");
static_assert(offsetof(AGC_Nightmare_C, DefaultSceneRoot) == 0x0002A8, "Member 'AGC_Nightmare_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(AGC_Nightmare_C, Effect) == 0x0002B0, "Member 'AGC_Nightmare_C::Effect' has a wrong offset!");
static_assert(offsetof(AGC_Nightmare_C, ScalarParamNames) == 0x0002B8, "Member 'AGC_Nightmare_C::ScalarParamNames' has a wrong offset!");
static_assert(offsetof(AGC_Nightmare_C, VectorParamNames) == 0x0002C8, "Member 'AGC_Nightmare_C::VectorParamNames' has a wrong offset!");
static_assert(offsetof(AGC_Nightmare_C, ScalarParamNames_0) == 0x0002D8, "Member 'AGC_Nightmare_C::ScalarParamNames_0' has a wrong offset!");

}
