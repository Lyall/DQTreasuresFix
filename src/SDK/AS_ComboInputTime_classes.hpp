#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AS_ComboInputTime

#include "Basic.hpp"

#include "DarwinGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass AS_ComboInputTime.AS_ComboInputTime_C
// 0x0000 (0x0038 - 0x0038)
class UAS_ComboInputTime_C final : public UAnimNotifyState_ComboInputTime
{
public:
	void OnComboInputBegin(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float TotalDuration) const;
	bool Received_NotifyEnd(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AS_ComboInputTime_C">();
	}
	static class UAS_ComboInputTime_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAS_ComboInputTime_C>();
	}
};
static_assert(alignof(UAS_ComboInputTime_C) == 0x000008, "Wrong alignment on UAS_ComboInputTime_C");
static_assert(sizeof(UAS_ComboInputTime_C) == 0x000038, "Wrong size on UAS_ComboInputTime_C");

}

