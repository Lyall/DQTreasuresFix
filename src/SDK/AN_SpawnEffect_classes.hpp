#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AN_SpawnEffect

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass AN_SpawnEffect.AN_SpawnEffect_C
// 0x0018 (0x0058 - 0x0040)
class UAN_SpawnEffect_C final : public UAnimNotify
{
public:
	bool                                          Attach;                                            // 0x0040(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_41[0x3];                                       // 0x0041(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   SocketName;                                        // 0x0044(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   EffectId;                                          // 0x004C(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AN_SpawnEffect_C">();
	}
	static class UAN_SpawnEffect_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAN_SpawnEffect_C>();
	}
};
static_assert(alignof(UAN_SpawnEffect_C) == 0x000008, "Wrong alignment on UAN_SpawnEffect_C");
static_assert(sizeof(UAN_SpawnEffect_C) == 0x000058, "Wrong size on UAN_SpawnEffect_C");
static_assert(offsetof(UAN_SpawnEffect_C, Attach) == 0x000040, "Member 'UAN_SpawnEffect_C::Attach' has a wrong offset!");
static_assert(offsetof(UAN_SpawnEffect_C, SocketName) == 0x000044, "Member 'UAN_SpawnEffect_C::SocketName' has a wrong offset!");
static_assert(offsetof(UAN_SpawnEffect_C, EffectId) == 0x00004C, "Member 'UAN_SpawnEffect_C::EffectId' has a wrong offset!");

}

