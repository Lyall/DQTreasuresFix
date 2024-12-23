#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Air_LookAtJump

#include "Basic.hpp"

#include "BP_Air_LookAtJump_classes.hpp"
#include "BP_Air_LookAtJump_parameters.hpp"


namespace SDK
{

// Function BP_Air_LookAtJump.BP_Air_LookAtJump_C.Exit
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UBP_Air_LookAtJump_C::Exit()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Air_LookAtJump_C", "Exit");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Air_LookAtJump.BP_Air_LookAtJump_C.ExecuteUbergraph_BP_Air_LookAtJump
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Air_LookAtJump_C::ExecuteUbergraph_BP_Air_LookAtJump(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Air_LookAtJump_C", "ExecuteUbergraph_BP_Air_LookAtJump");

	Params::BP_Air_LookAtJump_C_ExecuteUbergraph_BP_Air_LookAtJump Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Air_LookAtJump.BP_Air_LookAtJump_C.CalculateJumpVelocity
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FVector                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FVector UBP_Air_LookAtJump_C::CalculateJumpVelocity() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Air_LookAtJump_C", "CalculateJumpVelocity");

	Params::BP_Air_LookAtJump_C_CalculateJumpVelocity Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

