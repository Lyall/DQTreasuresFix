#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_PlayerCamera

#include "Basic.hpp"

#include "BP_PlayerCamera_classes.hpp"
#include "BP_PlayerCamera_parameters.hpp"


namespace SDK
{

// Function BP_PlayerCamera.BP_PlayerCamera_C.ExecuteUbergraph_BP_PlayerCamera
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PlayerCamera_C::ExecuteUbergraph_BP_PlayerCamera(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerCamera_C", "ExecuteUbergraph_BP_PlayerCamera");

	Params::BP_PlayerCamera_C_ExecuteUbergraph_BP_PlayerCamera Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerCamera.BP_PlayerCamera_C.ShowCameraInfo
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                                    bEnd                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_PlayerCamera_C::ShowCameraInfo(bool bEnd)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerCamera_C", "ShowCameraInfo");

	Params::BP_PlayerCamera_C_ShowCameraInfo Parms{};

	Parms.bEnd = bEnd;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerCamera.BP_PlayerCamera_C.MoveWhileDebug
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void ABP_PlayerCamera_C::MoveWhileDebug()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerCamera_C", "MoveWhileDebug");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PlayerCamera.BP_PlayerCamera_C.Rotate
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          Input                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PlayerCamera_C::Rotate(const struct FVector& Input)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerCamera_C", "Rotate");

	Params::BP_PlayerCamera_C_Rotate Parms{};

	Parms.Input = std::move(Input);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerCamera.BP_PlayerCamera_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_PlayerCamera_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerCamera_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PlayerCamera.BP_PlayerCamera_C.InitializePos
// (BlueprintCallable, BlueprintEvent)

void ABP_PlayerCamera_C::InitializePos()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerCamera_C", "InitializePos");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PlayerCamera.BP_PlayerCamera_C.ChangeCamera
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   BlendTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EViewTargetBlendFunction                BlendFunc                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PlayerCamera_C::ChangeCamera(float BlendTime, EViewTargetBlendFunction BlendFunc)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerCamera_C", "ChangeCamera");

	Params::BP_PlayerCamera_C_ChangeCamera Parms{};

	Parms.BlendTime = BlendTime;
	Parms.BlendFunc = BlendFunc;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerCamera.BP_PlayerCamera_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PlayerCamera_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerCamera_C", "ReceiveTick");

	Params::BP_PlayerCamera_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerCamera.BP_PlayerCamera_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)

void ABP_PlayerCamera_C::ReceiveDestroyed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerCamera_C", "ReceiveDestroyed");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PlayerCamera.BP_PlayerCamera_C.DirectionMode
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bEnd                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// ECameraDirectionType                    Type                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PlayerCamera_C::DirectionMode(bool bEnd, ECameraDirectionType Type)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerCamera_C", "DirectionMode");

	Params::BP_PlayerCamera_C_DirectionMode Parms{};

	Parms.bEnd = bEnd;
	Parms.Type = Type;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerCamera.BP_PlayerCamera_C.UpdateCameraInfo
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_PlayerCamera_C::UpdateCameraInfo()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerCamera_C", "UpdateCameraInfo");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PlayerCamera.BP_PlayerCamera_C.尾の竜石__UpdateFunc
// (BlueprintEvent)

void ABP_PlayerCamera_C::m_____________UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerCamera_C", "尾の竜石__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PlayerCamera.BP_PlayerCamera_C.尾の竜石__FinishedFunc
// (BlueprintEvent)

void ABP_PlayerCamera_C::m_____________FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerCamera_C", "尾の竜石__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PlayerCamera.BP_PlayerCamera_C.LoadData
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_PlayerCamera_C::LoadData()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerCamera_C", "LoadData");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PlayerCamera.BP_PlayerCamera_C.GetOwnerID
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                             ID                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PlayerCamera_C::GetOwnerID(class FName* ID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerCamera_C", "GetOwnerID");

	Params::BP_PlayerCamera_C_GetOwnerID Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (ID != nullptr)
		*ID = Parms.ID;
}


// Function BP_PlayerCamera.BP_PlayerCamera_C.GetCamera
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCameraComponent*                 ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UCameraComponent* ABP_PlayerCamera_C::GetCamera()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerCamera_C", "GetCamera");

	Params::BP_PlayerCamera_C_GetCamera Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}
