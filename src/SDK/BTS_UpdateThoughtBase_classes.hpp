#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BTS_UpdateThoughtBase

#include "Basic.hpp"

#include "AIModule_structs.hpp"
#include "AIModule_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BTS_UpdateThoughtBase.BTS_UpdateThoughtBase_C
// 0x0080 (0x0120 - 0x00A0)
class UBTS_UpdateThoughtBase_C : public UBTService_BlueprintBase
{
public:
	struct FBlackboardKeySelector                 Target;                                            // 0x00A0(0x0028)(Edit, BlueprintVisible)
	struct FBlackboardKeySelector                 TargetLocation;                                    // 0x00C8(0x0028)(Edit, BlueprintVisible)
	struct FBlackboardKeySelector                 InitialRotator;                                    // 0x00F0(0x0028)(Edit, BlueprintVisible)
	int32                                         State;                                             // 0x0118(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)

public:
	void NextState();
	void GetTarget(class AGPACharacter** Target_0);
	void GetMonster(class APawn* Pawn, class AMonster** Monster);
	void IsFarEnough(const struct FVector& Center, const struct FVector& TargetLocation_0, float Radius, bool* return_0);
	void ResetState();
	void GetTargetLocation(struct FVector* TargetLocation_0);
	void SetTarget(class AGPACharacter* Target_0);
	void SetTargetLocation(const struct FVector& TargetLocation_0);
	void GetMonsterBoss(class APawn* Pawn, class AMonsterBoss** MonsterBoss);
	void GetMonsterBase(class APawn* Pawn, class AMonsterBase** AsMonster_Base);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BTS_UpdateThoughtBase_C">();
	}
	static class UBTS_UpdateThoughtBase_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBTS_UpdateThoughtBase_C>();
	}
};
static_assert(alignof(UBTS_UpdateThoughtBase_C) == 0x000008, "Wrong alignment on UBTS_UpdateThoughtBase_C");
static_assert(sizeof(UBTS_UpdateThoughtBase_C) == 0x000120, "Wrong size on UBTS_UpdateThoughtBase_C");
static_assert(offsetof(UBTS_UpdateThoughtBase_C, Target) == 0x0000A0, "Member 'UBTS_UpdateThoughtBase_C::Target' has a wrong offset!");
static_assert(offsetof(UBTS_UpdateThoughtBase_C, TargetLocation) == 0x0000C8, "Member 'UBTS_UpdateThoughtBase_C::TargetLocation' has a wrong offset!");
static_assert(offsetof(UBTS_UpdateThoughtBase_C, InitialRotator) == 0x0000F0, "Member 'UBTS_UpdateThoughtBase_C::InitialRotator' has a wrong offset!");
static_assert(offsetof(UBTS_UpdateThoughtBase_C, State) == 0x000118, "Member 'UBTS_UpdateThoughtBase_C::State' has a wrong offset!");

}
