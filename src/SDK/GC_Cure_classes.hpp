#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GC_Cure

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "DarwinGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GC_Cure.GC_Cure_C
// 0x0010 (0x02A8 - 0x0298)
class AGC_Cure_C : public ACureEffectCue
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0298(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x02A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void ReceiveDestroyed();
	void ReceiveEndPlay(EEndPlayReason EndPlayReason);
	void ExecuteUbergraph_GC_Cure(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GC_Cure_C">();
	}
	static class AGC_Cure_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AGC_Cure_C>();
	}
};
static_assert(alignof(AGC_Cure_C) == 0x000008, "Wrong alignment on AGC_Cure_C");
static_assert(sizeof(AGC_Cure_C) == 0x0002A8, "Wrong size on AGC_Cure_C");
static_assert(offsetof(AGC_Cure_C, UberGraphFrame) == 0x000298, "Member 'AGC_Cure_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AGC_Cure_C, DefaultSceneRoot) == 0x0002A0, "Member 'AGC_Cure_C::DefaultSceneRoot' has a wrong offset!");

}

