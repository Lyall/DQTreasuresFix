#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BTTask_Base

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "DarwinGame_structs.hpp"
#include "DarwinGame_classes.hpp"
#include "GameplayTags_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BTTask_Base.BTTask_Base_C
// 0x0060 (0x0110 - 0x00B0)
class UBTTask_Base_C : public UBTTaskBlueprintDarwin
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x00B0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   TRACE_TARGET_KEY;                                  // 0x00B8(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   ATTACK_TARGET_KEY;                                 // 0x00C0(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   TARGET_LOCATION_KEY;                               // 0x00C8(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CIRCLE_RADIUS_KEY;                                 // 0x00D0(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   MIN_DISTANCE_KEY;                                  // 0x00D8(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   MAX_DISTANCE_KEY;                                  // 0x00E0(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   INITIAL_ROTATOR_KEY;                               // 0x00E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   AVOID_LOCATION_KEY;                                // 0x00F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   ACTION_TARGET_KEY;                                 // 0x00F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   LOOK_AT_LOCATION_KEY;                              // 0x0100(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           NextAction;                                        // 0x0108(0x0008)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BTTask_Base(int32 EntryPoint);
	void ReceiveAbortAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void OnTaskFinishEvent();
	void GetTarget(class UBlackboardComponent* Blackboard, class AGPACharacter** Target);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BTTask_Base_C">();
	}
	static class UBTTask_Base_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBTTask_Base_C>();
	}
};
static_assert(alignof(UBTTask_Base_C) == 0x000008, "Wrong alignment on UBTTask_Base_C");
static_assert(sizeof(UBTTask_Base_C) == 0x000110, "Wrong size on UBTTask_Base_C");
static_assert(offsetof(UBTTask_Base_C, UberGraphFrame) == 0x0000B0, "Member 'UBTTask_Base_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBTTask_Base_C, TRACE_TARGET_KEY) == 0x0000B8, "Member 'UBTTask_Base_C::TRACE_TARGET_KEY' has a wrong offset!");
static_assert(offsetof(UBTTask_Base_C, ATTACK_TARGET_KEY) == 0x0000C0, "Member 'UBTTask_Base_C::ATTACK_TARGET_KEY' has a wrong offset!");
static_assert(offsetof(UBTTask_Base_C, TARGET_LOCATION_KEY) == 0x0000C8, "Member 'UBTTask_Base_C::TARGET_LOCATION_KEY' has a wrong offset!");
static_assert(offsetof(UBTTask_Base_C, CIRCLE_RADIUS_KEY) == 0x0000D0, "Member 'UBTTask_Base_C::CIRCLE_RADIUS_KEY' has a wrong offset!");
static_assert(offsetof(UBTTask_Base_C, MIN_DISTANCE_KEY) == 0x0000D8, "Member 'UBTTask_Base_C::MIN_DISTANCE_KEY' has a wrong offset!");
static_assert(offsetof(UBTTask_Base_C, MAX_DISTANCE_KEY) == 0x0000E0, "Member 'UBTTask_Base_C::MAX_DISTANCE_KEY' has a wrong offset!");
static_assert(offsetof(UBTTask_Base_C, INITIAL_ROTATOR_KEY) == 0x0000E8, "Member 'UBTTask_Base_C::INITIAL_ROTATOR_KEY' has a wrong offset!");
static_assert(offsetof(UBTTask_Base_C, AVOID_LOCATION_KEY) == 0x0000F0, "Member 'UBTTask_Base_C::AVOID_LOCATION_KEY' has a wrong offset!");
static_assert(offsetof(UBTTask_Base_C, ACTION_TARGET_KEY) == 0x0000F8, "Member 'UBTTask_Base_C::ACTION_TARGET_KEY' has a wrong offset!");
static_assert(offsetof(UBTTask_Base_C, LOOK_AT_LOCATION_KEY) == 0x000100, "Member 'UBTTask_Base_C::LOOK_AT_LOCATION_KEY' has a wrong offset!");
static_assert(offsetof(UBTTask_Base_C, NextAction) == 0x000108, "Member 'UBTTask_Base_C::NextAction' has a wrong offset!");

}

