#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Air_Fall_ForPlayer

#include "Basic.hpp"

#include "BP_Air_Fall_ForPlayer_classes.hpp"
#include "BP_Air_Fall_ForPlayer_parameters.hpp"


namespace SDK
{

// Function BP_Air_Fall_ForPlayer.BP_Air_Fall_ForPlayer_C.GetSpActOneActionState
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAction_Attack_C*                 ret                                                    (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Air_Fall_ForPlayer_C::GetSpActOneActionState(class UAction_Attack_C** ret)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Air_Fall_ForPlayer_C", "GetSpActOneActionState");

	Params::BP_Air_Fall_ForPlayer_C_GetSpActOneActionState Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (ret != nullptr)
		*ret = Parms.ret;
}


// Function BP_Air_Fall_ForPlayer.BP_Air_Fall_ForPlayer_C.Update
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   DeltaTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Air_Fall_ForPlayer_C::Update(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Air_Fall_ForPlayer_C", "Update");

	Params::BP_Air_Fall_ForPlayer_C_Update Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Air_Fall_ForPlayer.BP_Air_Fall_ForPlayer_C.Exit
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UBP_Air_Fall_ForPlayer_C::Exit()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Air_Fall_ForPlayer_C", "Exit");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Air_Fall_ForPlayer.BP_Air_Fall_ForPlayer_C.ExecuteUbergraph_BP_Air_Fall_ForPlayer
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Air_Fall_ForPlayer_C::ExecuteUbergraph_BP_Air_Fall_ForPlayer(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Air_Fall_ForPlayer_C", "ExecuteUbergraph_BP_Air_Fall_ForPlayer");

	Params::BP_Air_Fall_ForPlayer_C_ExecuteUbergraph_BP_Air_Fall_ForPlayer Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}
