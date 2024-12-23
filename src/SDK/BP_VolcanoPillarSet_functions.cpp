#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_VolcanoPillarSet

#include "Basic.hpp"

#include "BP_VolcanoPillarSet_classes.hpp"
#include "BP_VolcanoPillarSet_parameters.hpp"


namespace SDK
{

// Function BP_VolcanoPillarSet.BP_VolcanoPillarSet_C.HitCheckGimmick
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          InLocation_0                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   InRadius_0                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsBreking                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_VolcanoPillarSet_C::HitCheckGimmick(const struct FVector& InLocation_0, float InRadius_0, bool* IsBreking)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_VolcanoPillarSet_C", "HitCheckGimmick");

	Params::BP_VolcanoPillarSet_C_HitCheckGimmick Parms{};

	Parms.InLocation_0 = std::move(InLocation_0);
	Parms.InRadius_0 = InRadius_0;

	UObject::ProcessEvent(Func, &Parms);

	if (IsBreking != nullptr)
		*IsBreking = Parms.IsBreking;
}


// Function BP_VolcanoPillarSet.BP_VolcanoPillarSet_C.HitCheckPillar
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          InLocation_0                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   InRadius_0                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsBreaking                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_VolcanoPillarSet_C::HitCheckPillar(const struct FVector& InLocation_0, float InRadius_0, bool* IsBreaking)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_VolcanoPillarSet_C", "HitCheckPillar");

	Params::BP_VolcanoPillarSet_C_HitCheckPillar Parms{};

	Parms.InLocation_0 = std::move(InLocation_0);
	Parms.InRadius_0 = InRadius_0;

	UObject::ProcessEvent(Func, &Parms);

	if (IsBreaking != nullptr)
		*IsBreaking = Parms.IsBreaking;
}


// Function BP_VolcanoPillarSet.BP_VolcanoPillarSet_C.SetBoss
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMonsterBoss*                     MonsterBoss_0                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_VolcanoPillarSet_C::SetBoss(class AMonsterBoss* MonsterBoss_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_VolcanoPillarSet_C", "SetBoss");

	Params::BP_VolcanoPillarSet_C_SetBoss Parms{};

	Parms.MonsterBoss_0 = MonsterBoss_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_VolcanoPillarSet.BP_VolcanoPillarSet_C.BossBoost
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMonsterBoss*                     MonsterBoss_0                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_VolcanoPillarSet_C::BossBoost(class AMonsterBoss* MonsterBoss_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_VolcanoPillarSet_C", "BossBoost");

	Params::BP_VolcanoPillarSet_C_BossBoost Parms{};

	Parms.MonsterBoss_0 = MonsterBoss_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_VolcanoPillarSet.BP_VolcanoPillarSet_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_VolcanoPillarSet_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_VolcanoPillarSet_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_VolcanoPillarSet.BP_VolcanoPillarSet_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_VolcanoPillarSet_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_VolcanoPillarSet_C", "ReceiveTick");

	Params::BP_VolcanoPillarSet_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_VolcanoPillarSet.BP_VolcanoPillarSet_C.SetBlockEffect
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          Location                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_VolcanoPillarSet_C::SetBlockEffect(const struct FVector& Location)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_VolcanoPillarSet_C", "SetBlockEffect");

	Params::BP_VolcanoPillarSet_C_SetBlockEffect Parms{};

	Parms.Location = std::move(Location);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_VolcanoPillarSet.BP_VolcanoPillarSet_C.ExecuteUbergraph_BP_VolcanoPillarSet
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_VolcanoPillarSet_C::ExecuteUbergraph_BP_VolcanoPillarSet(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_VolcanoPillarSet_C", "ExecuteUbergraph_BP_VolcanoPillarSet");

	Params::BP_VolcanoPillarSet_C_ExecuteUbergraph_BP_VolcanoPillarSet Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

