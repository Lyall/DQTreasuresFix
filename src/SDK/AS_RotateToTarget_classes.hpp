#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AS_RotateToTarget

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass AS_RotateToTarget.AS_RotateToTarget_C
// 0x0008 (0x0040 - 0x0038)
class UAS_RotateToTarget_C final : public UAnimNotifyState
{
public:
	int32                                         RotateRate;                                        // 0x0038(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	bool Received_NotifyTick(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float FrameDeltaTime) const;
	class FString GetNotifyName() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AS_RotateToTarget_C">();
	}
	static class UAS_RotateToTarget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAS_RotateToTarget_C>();
	}
};
static_assert(alignof(UAS_RotateToTarget_C) == 0x000008, "Wrong alignment on UAS_RotateToTarget_C");
static_assert(sizeof(UAS_RotateToTarget_C) == 0x000040, "Wrong size on UAS_RotateToTarget_C");
static_assert(offsetof(UAS_RotateToTarget_C, RotateRate) == 0x000038, "Member 'UAS_RotateToTarget_C::RotateRate' has a wrong offset!");

}
