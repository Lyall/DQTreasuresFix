#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_Team_NameBox

#include "Basic.hpp"

#include "W_Team_NameBox_classes.hpp"
#include "W_Team_NameBox_parameters.hpp"


namespace SDK
{

// Function W_Team_NameBox.W_Team_NameBox_C.GetArrow
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UCanvasPanel*                     ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UCanvasPanel* UW_Team_NameBox_C::GetArrow()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_Team_NameBox_C", "GetArrow");

	Params::W_Team_NameBox_C_GetArrow Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}
