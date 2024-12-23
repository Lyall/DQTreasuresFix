#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_WaterBlock

#include "Basic.hpp"

#include "BP_WaterBlock_classes.hpp"
#include "BP_WaterBlock_parameters.hpp"


namespace SDK
{

// Function BP_WaterBlock.BP_WaterBlock_C.GetRelativeLocation
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                          RelativeLocation_0                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_WaterBlock_C::GetRelativeLocation(struct FVector* RelativeLocation_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_WaterBlock_C", "GetRelativeLocation");

	Params::BP_WaterBlock_C_GetRelativeLocation Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (RelativeLocation_0 != nullptr)
		*RelativeLocation_0 = std::move(Parms.RelativeLocation_0);
}


// Function BP_WaterBlock.BP_WaterBlock_C.SetBoss
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMonsterBoss*                     MonsterBoss_0                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_WaterBlock_C::SetBoss(class AMonsterBoss* MonsterBoss_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_WaterBlock_C", "SetBoss");

	Params::BP_WaterBlock_C_SetBoss Parms{};

	Parms.MonsterBoss_0 = MonsterBoss_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_WaterBlock.BP_WaterBlock_C.IsBossBoost
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    NewParam                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_WaterBlock_C::IsBossBoost(bool* NewParam)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_WaterBlock_C", "IsBossBoost");

	Params::BP_WaterBlock_C_IsBossBoost Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (NewParam != nullptr)
		*NewParam = Parms.NewParam;
}


// Function BP_WaterBlock.BP_WaterBlock_C.BreakEffect
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_WaterBlock_C::BreakEffect()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_WaterBlock_C", "BreakEffect");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_WaterBlock.BP_WaterBlock_C.HitCheck
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          InLocation_0                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   InRadius_0                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABP_WaterBlock_C::HitCheck(const struct FVector& InLocation_0, float InRadius_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_WaterBlock_C", "HitCheck");

	Params::BP_WaterBlock_C_HitCheck Parms{};

	Parms.InLocation_0 = std::move(InLocation_0);
	Parms.InRadius_0 = InRadius_0;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_WaterBlock.BP_WaterBlock_C.SetMove
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Speed_0                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                        DirVec_0                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_WaterBlock_C::SetMove(float Speed_0, const struct FVector2D& DirVec_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_WaterBlock_C", "SetMove");

	Params::BP_WaterBlock_C_SetMove Parms{};

	Parms.Speed_0 = Speed_0;
	Parms.DirVec_0 = std::move(DirVec_0);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_WaterBlock.BP_WaterBlock_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_WaterBlock_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_WaterBlock_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_WaterBlock.BP_WaterBlock_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_WaterBlock_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_WaterBlock_C", "ReceiveTick");

	Params::BP_WaterBlock_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_WaterBlock.BP_WaterBlock_C.Initialize
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_VolcanoPillarSet_C*           PillarSet                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_WaterBlock_C::Initialize(class ABP_VolcanoPillarSet_C* PillarSet)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_WaterBlock_C", "Initialize");

	Params::BP_WaterBlock_C_Initialize Parms{};

	Parms.PillarSet = PillarSet;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_WaterBlock.BP_WaterBlock_C.ExecuteUbergraph_BP_WaterBlock
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_WaterBlock_C::ExecuteUbergraph_BP_WaterBlock(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_WaterBlock_C", "ExecuteUbergraph_BP_WaterBlock");

	Params::BP_WaterBlock_C_ExecuteUbergraph_BP_WaterBlock Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

