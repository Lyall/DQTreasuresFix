#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_HeroStar_00

#include "Basic.hpp"

#include "DarwinGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_HeroStar_00.BP_HeroStar_00_C
// 0x0008 (0x0240 - 0x0238)
class ABP_HeroStar_00_C final : public AFieldObjectBasicBase
{
public:
	class UStaticMeshComponent*                   StaticMesh;                                        // 0x0238(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_HeroStar_00_C">();
	}
	static class ABP_HeroStar_00_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_HeroStar_00_C>();
	}
};
static_assert(alignof(ABP_HeroStar_00_C) == 0x000008, "Wrong alignment on ABP_HeroStar_00_C");
static_assert(sizeof(ABP_HeroStar_00_C) == 0x000240, "Wrong size on ABP_HeroStar_00_C");
static_assert(offsetof(ABP_HeroStar_00_C, StaticMesh) == 0x000238, "Member 'ABP_HeroStar_00_C::StaticMesh' has a wrong offset!");

}
