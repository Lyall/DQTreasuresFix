#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_Menu_IconDelta_00

#include "Basic.hpp"

#include "W_Menu_IconDelta_00_classes.hpp"
#include "W_Menu_IconDelta_00_parameters.hpp"


namespace SDK
{

// Function W_Menu_IconDelta_00.W_Menu_IconDelta_00_C.ExecuteUbergraph_W_Menu_IconDelta_00
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Menu_IconDelta_00_C::ExecuteUbergraph_W_Menu_IconDelta_00(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_Menu_IconDelta_00_C", "ExecuteUbergraph_W_Menu_IconDelta_00");

	Params::W_Menu_IconDelta_00_C_ExecuteUbergraph_W_Menu_IconDelta_00 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_Menu_IconDelta_00.W_Menu_IconDelta_00_C.Update
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   DeltaTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Menu_IconDelta_00_C::Update(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_Menu_IconDelta_00_C", "Update");

	Params::W_Menu_IconDelta_00_C_Update Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_Menu_IconDelta_00.W_Menu_IconDelta_00_C.SetCursorPosition
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D                        Pos                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Menu_IconDelta_00_C::SetCursorPosition(const struct FVector2D& Pos)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_Menu_IconDelta_00_C", "SetCursorPosition");

	Params::W_Menu_IconDelta_00_C_SetCursorPosition Parms{};

	Parms.Pos = std::move(Pos);

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_Menu_IconDelta_00.W_Menu_IconDelta_00_C.UpdatePosition
// (Private, BlueprintCallable, BlueprintEvent)

void UW_Menu_IconDelta_00_C::UpdatePosition()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_Menu_IconDelta_00_C", "UpdatePosition");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_Menu_IconDelta_00.W_Menu_IconDelta_00_C.EasePositionLiner
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D                        BeforePos                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                        AfterPos                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                        ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FVector2D UW_Menu_IconDelta_00_C::EasePositionLiner(const struct FVector2D& BeforePos, const struct FVector2D& AfterPos)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_Menu_IconDelta_00_C", "EasePositionLiner");

	Params::W_Menu_IconDelta_00_C_EasePositionLiner Parms{};

	Parms.BeforePos = std::move(BeforePos);
	Parms.AfterPos = std::move(AfterPos);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function W_Menu_IconDelta_00.W_Menu_IconDelta_00_C.InitCursorPosition
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D                        Pos                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Menu_IconDelta_00_C::InitCursorPosition(const struct FVector2D& Pos)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_Menu_IconDelta_00_C", "InitCursorPosition");

	Params::W_Menu_IconDelta_00_C_InitCursorPosition Parms{};

	Parms.Pos = std::move(Pos);

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_Menu_IconDelta_00.W_Menu_IconDelta_00_C.GetCursorSlot
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UCanvasPanelSlot*                 CanvasSlot                                             (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Menu_IconDelta_00_C::GetCursorSlot(class UCanvasPanelSlot** CanvasSlot) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_Menu_IconDelta_00_C", "GetCursorSlot");

	Params::W_Menu_IconDelta_00_C_GetCursorSlot Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (CanvasSlot != nullptr)
		*CanvasSlot = Parms.CanvasSlot;
}

}
