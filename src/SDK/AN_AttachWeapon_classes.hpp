#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AN_AttachWeapon

#include "Basic.hpp"

#include "DarwinGame_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass AN_AttachWeapon.AN_AttachWeapon_C
// 0x0010 (0x0050 - 0x0040)
class UAN_AttachWeapon_C final : public UAnimNotify
{
public:
	class FName                                   ObjectName;                                        // 0x0040(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESocket                                       socket;                                            // 0x0048(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          EquipForAttack;                                    // 0x0049(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          IsIgnoreJudge;                                     // 0x004A(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor)

public:
	bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation) const;
	void isIgnore(class AActor* Owner, class FName ObjectName_0, class FName AttachTo, bool* isIgnore_0) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AN_AttachWeapon_C">();
	}
	static class UAN_AttachWeapon_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAN_AttachWeapon_C>();
	}
};
static_assert(alignof(UAN_AttachWeapon_C) == 0x000008, "Wrong alignment on UAN_AttachWeapon_C");
static_assert(sizeof(UAN_AttachWeapon_C) == 0x000050, "Wrong size on UAN_AttachWeapon_C");
static_assert(offsetof(UAN_AttachWeapon_C, ObjectName) == 0x000040, "Member 'UAN_AttachWeapon_C::ObjectName' has a wrong offset!");
static_assert(offsetof(UAN_AttachWeapon_C, socket) == 0x000048, "Member 'UAN_AttachWeapon_C::socket' has a wrong offset!");
static_assert(offsetof(UAN_AttachWeapon_C, EquipForAttack) == 0x000049, "Member 'UAN_AttachWeapon_C::EquipForAttack' has a wrong offset!");
static_assert(offsetof(UAN_AttachWeapon_C, IsIgnoreJudge) == 0x00004A, "Member 'UAN_AttachWeapon_C::IsIgnoreJudge' has a wrong offset!");

}
