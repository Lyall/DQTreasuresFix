#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BTTask_MonsterTask

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "DarwinGame_structs.hpp"
#include "BTTask_Base_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BTTask_MonsterTask.BTTask_MonsterTask_C
// 0x0010 (0x0120 - 0x0110)
class UBTTask_MonsterTask_C final : public UBTTask_Base_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BTTask_MonsterTask_C;               // 0x0110(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	EMonsterBTTask                                Task;                                              // 0x0118(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BTTask_MonsterTask(int32 EntryPoint);
	void ReceiveAbortAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ReceiveFinished(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BTTask_MonsterTask_C">();
	}
	static class UBTTask_MonsterTask_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBTTask_MonsterTask_C>();
	}
};
static_assert(alignof(UBTTask_MonsterTask_C) == 0x000008, "Wrong alignment on UBTTask_MonsterTask_C");
static_assert(sizeof(UBTTask_MonsterTask_C) == 0x000120, "Wrong size on UBTTask_MonsterTask_C");
static_assert(offsetof(UBTTask_MonsterTask_C, UberGraphFrame_BTTask_MonsterTask_C) == 0x000110, "Member 'UBTTask_MonsterTask_C::UberGraphFrame_BTTask_MonsterTask_C' has a wrong offset!");
static_assert(offsetof(UBTTask_MonsterTask_C, Task) == 0x000118, "Member 'UBTTask_MonsterTask_C::Task' has a wrong offset!");

}
