#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_LockOnTarget

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_LockOnTarget.BP_LockOnTarget_C
// 0x0020 (0x0248 - 0x0228)
class ABP_LockOnTarget_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0228(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                   Sphere1;                                           // 0x0230(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                       Sphere;                                            // 0x0238(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0240(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_LockOnTarget(int32 EntryPoint);
	void SetAreaVisibility(bool Visibility);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_LockOnTarget_C">();
	}
	static class ABP_LockOnTarget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_LockOnTarget_C>();
	}
};
static_assert(alignof(ABP_LockOnTarget_C) == 0x000008, "Wrong alignment on ABP_LockOnTarget_C");
static_assert(sizeof(ABP_LockOnTarget_C) == 0x000248, "Wrong size on ABP_LockOnTarget_C");
static_assert(offsetof(ABP_LockOnTarget_C, UberGraphFrame) == 0x000228, "Member 'ABP_LockOnTarget_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_LockOnTarget_C, Sphere1) == 0x000230, "Member 'ABP_LockOnTarget_C::Sphere1' has a wrong offset!");
static_assert(offsetof(ABP_LockOnTarget_C, Sphere) == 0x000238, "Member 'ABP_LockOnTarget_C::Sphere' has a wrong offset!");
static_assert(offsetof(ABP_LockOnTarget_C, DefaultSceneRoot) == 0x000240, "Member 'ABP_LockOnTarget_C::DefaultSceneRoot' has a wrong offset!");

}

