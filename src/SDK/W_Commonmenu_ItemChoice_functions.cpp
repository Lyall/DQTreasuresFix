#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_Commonmenu_ItemChoice

#include "Basic.hpp"

#include "W_Commonmenu_ItemChoice_classes.hpp"
#include "W_Commonmenu_ItemChoice_parameters.hpp"


namespace SDK
{

// Function W_Commonmenu_ItemChoice.W_Commonmenu_ItemChoice_C.GetArrow
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UCanvasPanel*                     ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UCanvasPanel* UW_Commonmenu_ItemChoice_C::GetArrow()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_Commonmenu_ItemChoice_C", "GetArrow");

	Params::W_Commonmenu_ItemChoice_C_GetArrow Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

