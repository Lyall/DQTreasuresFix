#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Player

#include "Basic.hpp"

#include "BP_Player_classes.hpp"
#include "BP_Player_parameters.hpp"


namespace SDK
{

// Function BP_Player.BP_Player_C.ExecuteUbergraph_BP_Player
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Player_C::ExecuteUbergraph_BP_Player(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Player_C", "ExecuteUbergraph_BP_Player");

	Params::BP_Player_C_ExecuteUbergraph_BP_Player Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Player.BP_Player_C.Talk
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           Partner                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsCameraEnabled                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    IsEnd                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Player_C::Talk(class AActor* Partner, bool IsCameraEnabled, bool IsEnd)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Player_C", "Talk");

	Params::BP_Player_C_Talk Parms{};

	Parms.Partner = Partner;
	Parms.IsCameraEnabled = IsCameraEnabled;
	Parms.IsEnd = IsEnd;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Player.BP_Player_C.ChangeOpeMode
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EOperationModeEnum                      Mode                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Player_C::ChangeOpeMode(EOperationModeEnum Mode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Player_C", "ChangeOpeMode");

	Params::BP_Player_C_ChangeOpeMode Parms{};

	Parms.Mode = Mode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Player.BP_Player_C.FastTravel
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   ID                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Player_C::FastTravel(const int32 ID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Player_C", "FastTravel");

	Params::BP_Player_C_FastTravel Parms{};

	Parms.ID = ID;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Player.BP_Player_C.ResetRotation
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRotator                         NewRotation                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Player_C::ResetRotation(const struct FRotator& NewRotation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Player_C", "ResetRotation");

	Params::BP_Player_C_ResetRotation Parms{};

	Parms.NewRotation = std::move(NewRotation);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Player.BP_Player_C.SwitchToCutSceneMode
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsEnd                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Player_C::SwitchToCutSceneMode(bool IsEnd)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Player_C", "SwitchToCutSceneMode");

	Params::BP_Player_C_SwitchToCutSceneMode Parms{};

	Parms.IsEnd = IsEnd;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Player.BP_Player_C.Aim
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    End                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Player_C::Aim(bool End)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Player_C", "Aim");

	Params::BP_Player_C_Aim Parms{};

	Parms.End = End;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Player.BP_Player_C.ShowTransformInfoForDebug
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsShow                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Player_C::ShowTransformInfoForDebug(bool IsShow)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Player_C", "ShowTransformInfoForDebug");

	Params::BP_Player_C_ShowTransformInfoForDebug Parms{};

	Parms.IsShow = IsShow;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Player.BP_Player_C.ReadyToShot
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Complete                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Player_C::ReadyToShot(bool Complete)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Player_C", "ReadyToShot");

	Params::BP_Player_C_ReadyToShot Parms{};

	Parms.Complete = Complete;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Player.BP_Player_C.OnReceiveHit
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EObjectEffectionEnum                    Type                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           Instigator_0                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Player_C::OnReceiveHit(EObjectEffectionEnum Type, class AActor* Instigator_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Player_C", "OnReceiveHit");

	Params::BP_Player_C_OnReceiveHit Parms{};

	Parms.Type = Type;
	Parms.Instigator_0 = Instigator_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Player.BP_Player_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_Player_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Player_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Player.BP_Player_C.EndRigidTime
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Player_C::EndRigidTime()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Player_C", "EndRigidTime");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Player.BP_Player_C.StartRigidTime
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Player_C::StartRigidTime()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Player_C", "StartRigidTime");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Player.BP_Player_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Player_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Player_C", "ReceiveTick");

	Params::BP_Player_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Player.BP_Player_C.Launch
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          Velocity                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Player_C::Launch(const struct FVector& Velocity)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Player_C", "Launch");

	Params::BP_Player_C_Launch Parms{};

	Parms.Velocity = std::move(Velocity);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Player.BP_Player_C.Restart
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          Location                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                         Rotation                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Player_C::Restart(const struct FVector& Location, const struct FRotator& Rotation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Player_C", "Restart");

	Params::BP_Player_C_Restart Parms{};

	Parms.Location = std::move(Location);
	Parms.Rotation = std::move(Rotation);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Player.BP_Player_C.SwitchToBattleMode
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsEnd                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    SkipMotion                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Player_C::SwitchToBattleMode(bool IsEnd, bool SkipMotion)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Player_C", "SwitchToBattleMode");

	Params::BP_Player_C_SwitchToBattleMode Parms{};

	Parms.IsEnd = IsEnd;
	Parms.SkipMotion = SkipMotion;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Player.BP_Player_C.DebugPrint
// (BlueprintCallable, BlueprintEvent)

void ABP_Player_C::DebugPrint()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Player_C", "DebugPrint");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Player.BP_Player_C.BackToIdle
// (BlueprintCallable, BlueprintEvent)

void ABP_Player_C::BackToIdle()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Player_C", "BackToIdle");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Player.BP_Player_C.StartBattleTimer
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Player_C::StartBattleTimer()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Player_C", "StartBattleTimer");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Player.BP_Player_C.InpActEvt_Three_K2Node_InputKeyEvent_0
// (BlueprintEvent)
// Parameters:
// struct FKey                             Key                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_Player_C::InpActEvt_Three_K2Node_InputKeyEvent_0(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Player_C", "InpActEvt_Three_K2Node_InputKeyEvent_0");

	Params::BP_Player_C_InpActEvt_Three_K2Node_InputKeyEvent_0 Parms{};

	Parms.Key = std::move(Key);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Player.BP_Player_C.InpActEvt_RightAlt_K2Node_InputKeyEvent_1
// (BlueprintEvent)
// Parameters:
// struct FKey                             Key                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_Player_C::InpActEvt_RightAlt_K2Node_InputKeyEvent_1(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Player_C", "InpActEvt_RightAlt_K2Node_InputKeyEvent_1");

	Params::BP_Player_C_InpActEvt_RightAlt_K2Node_InputKeyEvent_1 Parms{};

	Parms.Key = std::move(Key);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Player.BP_Player_C.InitializeTarget
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Player_C::InitializeTarget()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Player_C", "InitializeTarget");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Player.BP_Player_C.ShowRestartMessage
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Player_C::ShowRestartMessage()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Player_C", "ShowRestartMessage");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Player.BP_Player_C.GetOriginID
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class FName ABP_Player_C::GetOriginID()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Player_C", "GetOriginID");

	Params::BP_Player_C_GetOriginID Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_Player.BP_Player_C.ChangeCameraState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                     NextState                                              (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void ABP_Player_C::ChangeCameraState(const struct FGameplayTag& NextState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Player_C", "ChangeCameraState");

	Params::BP_Player_C_ChangeCameraState Parms{};

	Parms.NextState = std::move(NextState);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Player.BP_Player_C.GetDarwinCamera
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ADarwinCamera*                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class ADarwinCamera* ABP_Player_C::GetDarwinCamera()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Player_C", "GetDarwinCamera");

	Params::BP_Player_C_GetDarwinCamera Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_Player.BP_Player_C.GetTargetToInteract
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AActor*                           ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class AActor* ABP_Player_C::GetTargetToInteract() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Player_C", "GetTargetToInteract");

	Params::BP_Player_C_GetTargetToInteract Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_Player.BP_Player_C.IsReadyToShot
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABP_Player_C::IsReadyToShot() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Player_C", "IsReadyToShot");

	Params::BP_Player_C_IsReadyToShot Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}
