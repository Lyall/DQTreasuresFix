#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_EF_Field_2690

#include "Basic.hpp"

#include "BP_EffectBase_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_EF_Field_2690.BP_EF_Field_2690_C
// 0x0018 (0x02F8 - 0x02E0)
class ABP_EF_Field_2690_C final : public ABP_EffectBase_C
{
public:
	class UExtendParticleComponent*               WarpEnd;                                           // 0x02E0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UExtendParticleComponent*               WarpLoop;                                          // 0x02E8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UExtendParticleComponent*               WarpStart;                                         // 0x02F0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_EF_Field_2690_C">();
	}
	static class ABP_EF_Field_2690_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_EF_Field_2690_C>();
	}
};
static_assert(alignof(ABP_EF_Field_2690_C) == 0x000008, "Wrong alignment on ABP_EF_Field_2690_C");
static_assert(sizeof(ABP_EF_Field_2690_C) == 0x0002F8, "Wrong size on ABP_EF_Field_2690_C");
static_assert(offsetof(ABP_EF_Field_2690_C, WarpEnd) == 0x0002E0, "Member 'ABP_EF_Field_2690_C::WarpEnd' has a wrong offset!");
static_assert(offsetof(ABP_EF_Field_2690_C, WarpLoop) == 0x0002E8, "Member 'ABP_EF_Field_2690_C::WarpLoop' has a wrong offset!");
static_assert(offsetof(ABP_EF_Field_2690_C, WarpStart) == 0x0002F0, "Member 'ABP_EF_Field_2690_C::WarpStart' has a wrong offset!");

}

