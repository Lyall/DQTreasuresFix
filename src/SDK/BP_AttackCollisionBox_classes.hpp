#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AttackCollisionBox

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "DarwinGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_AttackCollisionBox.BP_AttackCollisionBox_C
// 0x0020 (0x02A0 - 0x0280)
class ABP_AttackCollisionBox_C final : public AAttackCollisionBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0280(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBoxComponent*                          Box;                                               // 0x0288(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAttackElementBaseComponent*            AttackElement;                                     // 0x0290(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0298(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void ReceiveActorBeginOverlap(class AActor* OtherActor);
	void ExecuteUbergraph_BP_AttackCollisionBox(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_AttackCollisionBox_C">();
	}
	static class ABP_AttackCollisionBox_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_AttackCollisionBox_C>();
	}
};
static_assert(alignof(ABP_AttackCollisionBox_C) == 0x000008, "Wrong alignment on ABP_AttackCollisionBox_C");
static_assert(sizeof(ABP_AttackCollisionBox_C) == 0x0002A0, "Wrong size on ABP_AttackCollisionBox_C");
static_assert(offsetof(ABP_AttackCollisionBox_C, UberGraphFrame) == 0x000280, "Member 'ABP_AttackCollisionBox_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_AttackCollisionBox_C, Box) == 0x000288, "Member 'ABP_AttackCollisionBox_C::Box' has a wrong offset!");
static_assert(offsetof(ABP_AttackCollisionBox_C, AttackElement) == 0x000290, "Member 'ABP_AttackCollisionBox_C::AttackElement' has a wrong offset!");
static_assert(offsetof(ABP_AttackCollisionBox_C, DefaultSceneRoot) == 0x000298, "Member 'ABP_AttackCollisionBox_C::DefaultSceneRoot' has a wrong offset!");

}

