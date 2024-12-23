#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_PiratesShipLampOn_01

#include "Basic.hpp"

#include "DarwinGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_PiratesShipLampOn_01.BP_PiratesShipLampOn_01_C
// 0x0018 (0x0250 - 0x0238)
class ABP_PiratesShipLampOn_01_C final : public AFieldObjectBasicBase
{
public:
	class UPointLightComponent*                   PointLight;                                        // 0x0238(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_PiratesShipLamp_01a;                            // 0x0240(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0248(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_PiratesShipLampOn_01_C">();
	}
	static class ABP_PiratesShipLampOn_01_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_PiratesShipLampOn_01_C>();
	}
};
static_assert(alignof(ABP_PiratesShipLampOn_01_C) == 0x000008, "Wrong alignment on ABP_PiratesShipLampOn_01_C");
static_assert(sizeof(ABP_PiratesShipLampOn_01_C) == 0x000250, "Wrong size on ABP_PiratesShipLampOn_01_C");
static_assert(offsetof(ABP_PiratesShipLampOn_01_C, PointLight) == 0x000238, "Member 'ABP_PiratesShipLampOn_01_C::PointLight' has a wrong offset!");
static_assert(offsetof(ABP_PiratesShipLampOn_01_C, SM_PiratesShipLamp_01a) == 0x000240, "Member 'ABP_PiratesShipLampOn_01_C::SM_PiratesShipLamp_01a' has a wrong offset!");
static_assert(offsetof(ABP_PiratesShipLampOn_01_C, DefaultSceneRoot) == 0x000248, "Member 'ABP_PiratesShipLampOn_01_C::DefaultSceneRoot' has a wrong offset!");

}

