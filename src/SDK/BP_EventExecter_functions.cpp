#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_EventExecter

#include "Basic.hpp"

#include "BP_EventExecter_classes.hpp"
#include "BP_EventExecter_parameters.hpp"


namespace SDK
{

// Function BP_EventExecter.BP_EventExecter_C.ExecuteUbergraph_BP_EventExecter
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_EventExecter_C::ExecuteUbergraph_BP_EventExecter(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EventExecter_C", "ExecuteUbergraph_BP_EventExecter");

	Params::BP_EventExecter_C_ExecuteUbergraph_BP_EventExecter Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_EventExecter.BP_EventExecter_C.ExecuteFacilityReception
// (BlueprintCallable, BlueprintEvent)

void UBP_EventExecter_C::ExecuteFacilityReception()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EventExecter_C", "ExecuteFacilityReception");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_EventExecter.BP_EventExecter_C.SelectFacilityReception
// (BlueprintCallable, BlueprintEvent)

void UBP_EventExecter_C::SelectFacilityReception()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EventExecter_C", "SelectFacilityReception");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_EventExecter.BP_EventExecter_C.SkipSequencer
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UBP_EventExecter_C::SkipSequencer()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EventExecter_C", "SkipSequencer");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_EventExecter.BP_EventExecter_C.ExecuteEvent
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FST_EventData                    EventData                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)

void UBP_EventExecter_C::ExecuteEvent(const struct FST_EventData& EventData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EventExecter_C", "ExecuteEvent");

	Params::BP_EventExecter_C_ExecuteEvent Parms{};

	Parms.EventData = std::move(EventData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_EventExecter.BP_EventExecter_C.CallEndEvent
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UBP_EventExecter_C::CallEndEvent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EventExecter_C", "CallEndEvent");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_EventExecter.BP_EventExecter_C.ExecuteFacilityReception_NoSelect
// (BlueprintCallable, BlueprintEvent)

void UBP_EventExecter_C::ExecuteFacilityReception_NoSelect()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EventExecter_C", "ExecuteFacilityReception_NoSelect");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_EventExecter.BP_EventExecter_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_EventExecter_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EventExecter_C", "ReceiveTick");

	Params::BP_EventExecter_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_EventExecter.BP_EventExecter_C.EndLevelSequence
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   BlendTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EViewTargetBlendFunction                BlendFunc                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   BlendExp                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bLockOutgoing                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    bCameraKeep                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_EventExecter_C::EndLevelSequence(float BlendTime, EViewTargetBlendFunction BlendFunc, float BlendExp, bool bLockOutgoing, bool bCameraKeep)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EventExecter_C", "EndLevelSequence");

	Params::BP_EventExecter_C_EndLevelSequence Parms{};

	Parms.BlendTime = BlendTime;
	Parms.BlendFunc = BlendFunc;
	Parms.BlendExp = BlendExp;
	Parms.bLockOutgoing = bLockOutgoing;
	Parms.bCameraKeep = bCameraKeep;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_EventExecter.BP_EventExecter_C.PlayLevelSequence
// (BlueprintCallable, BlueprintEvent)

void UBP_EventExecter_C::PlayLevelSequence()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EventExecter_C", "PlayLevelSequence");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_EventExecter.BP_EventExecter_C.ReceiveCloseTalkWindow
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UBP_EventExecter_C::ReceiveCloseTalkWindow()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EventExecter_C", "ReceiveCloseTalkWindow");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_EventExecter.BP_EventExecter_C.ReceiveSelectResult
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   SelectIndex                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_EventExecter_C::ReceiveSelectResult(int32 SelectIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EventExecter_C", "ReceiveSelectResult");

	Params::BP_EventExecter_C_ReceiveSelectResult Parms{};

	Parms.SelectIndex = SelectIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_EventExecter.BP_EventExecter_C.DrawTalkWindow
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   StartTextIndex                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_EventExecter_C::DrawTalkWindow(int32 StartTextIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EventExecter_C", "DrawTalkWindow");

	Params::BP_EventExecter_C_DrawTalkWindow Parms{};

	Parms.StartTextIndex = StartTextIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_EventExecter.BP_EventExecter_C.ChangeNextText
// (BlueprintCallable, BlueprintEvent)

void UBP_EventExecter_C::ChangeNextText()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EventExecter_C", "ChangeNextText");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_EventExecter.BP_EventExecter_C.ChangeStateAndExecuteBonfire
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   State                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_EventExecter_C::ChangeStateAndExecuteBonfire(int32 State)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EventExecter_C", "ChangeStateAndExecuteBonfire");

	Params::BP_EventExecter_C_ChangeStateAndExecuteBonfire Parms{};

	Parms.State = State;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_EventExecter.BP_EventExecter_C.ChangeTimeBonfire
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   ToHour                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_EventExecter_C::ChangeTimeBonfire(int32 ToHour)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EventExecter_C", "ChangeTimeBonfire");

	Params::BP_EventExecter_C_ChangeTimeBonfire Parms{};

	Parms.ToHour = ToHour;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_EventExecter.BP_EventExecter_C.SelectBonfire
// (BlueprintCallable, BlueprintEvent)

void UBP_EventExecter_C::SelectBonfire()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EventExecter_C", "SelectBonfire");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_EventExecter.BP_EventExecter_C.ExecuteBonFire
// (BlueprintCallable, BlueprintEvent)

void UBP_EventExecter_C::ExecuteBonFire()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EventExecter_C", "ExecuteBonFire");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_EventExecter.BP_EventExecter_C.InitLiftEvent
// (BlueprintCallable, BlueprintEvent)

void UBP_EventExecter_C::InitLiftEvent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EventExecter_C", "InitLiftEvent");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_EventExecter.BP_EventExecter_C.SelectLift
// (BlueprintCallable, BlueprintEvent)

void UBP_EventExecter_C::SelectLift()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EventExecter_C", "SelectLift");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_EventExecter.BP_EventExecter_C.ExecuteLiftEvent
// (BlueprintCallable, BlueprintEvent)

void UBP_EventExecter_C::ExecuteLiftEvent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EventExecter_C", "ExecuteLiftEvent");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_EventExecter.BP_EventExecter_C.SelectCoinGachaEvent
// (BlueprintCallable, BlueprintEvent)

void UBP_EventExecter_C::SelectCoinGachaEvent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EventExecter_C", "SelectCoinGachaEvent");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_EventExecter.BP_EventExecter_C.ExecuteCoinGachaEvent
// (BlueprintCallable, BlueprintEvent)

void UBP_EventExecter_C::ExecuteCoinGachaEvent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EventExecter_C", "ExecuteCoinGachaEvent");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_EventExecter.BP_EventExecter_C.ExecuteHubReception
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UBP_EventExecter_C::ExecuteHubReception()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EventExecter_C", "ExecuteHubReception");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_EventExecter.BP_EventExecter_C.SelectHubReception
// (BlueprintCallable, BlueprintEvent)

void UBP_EventExecter_C::SelectHubReception()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EventExecter_C", "SelectHubReception");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_EventExecter.BP_EventExecter_C.FacilityQuestOpenCheck
// (BlueprintCallable, BlueprintEvent)

void UBP_EventExecter_C::FacilityQuestOpenCheck()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EventExecter_C", "FacilityQuestOpenCheck");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_EventExecter.BP_EventExecter_C.SetNewText
// (BlueprintCallable, BlueprintEvent)

void UBP_EventExecter_C::SetNewText()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EventExecter_C", "SetNewText");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_EventExecter.BP_EventExecter_C.SetText
// (BlueprintCallable, BlueprintEvent)

void UBP_EventExecter_C::SetText()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EventExecter_C", "SetText");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_EventExecter.BP_EventExecter_C.ExecuteHubReception_NoSelect
// (BlueprintCallable, BlueprintEvent)

void UBP_EventExecter_C::ExecuteHubReception_NoSelect()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EventExecter_C", "ExecuteHubReception_NoSelect");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_EventExecter.BP_EventExecter_C.CreateLevelSequenceActors
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UObject*>                  Targets                                                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)

void UBP_EventExecter_C::CreateLevelSequenceActors(TArray<class UObject*>& Targets)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EventExecter_C", "CreateLevelSequenceActors");

	Params::BP_EventExecter_C_CreateLevelSequenceActors Parms{};

	Parms.Targets = std::move(Targets);

	UObject::ProcessEvent(Func, &Parms);

	Targets = std::move(Parms.Targets);
}


// Function BP_EventExecter.BP_EventExecter_C.UnLoadLevelSequenceAssets
// (Private, BlueprintCallable, BlueprintEvent)

void UBP_EventExecter_C::UnLoadLevelSequenceAssets()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EventExecter_C", "UnLoadLevelSequenceAssets");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_EventExecter.BP_EventExecter_C.Init
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_EventManager_C*               EventManager                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_LevelSequenceController_C*    LevelSequencePlayer                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_EventExecter_C::Init(class UBP_EventManager_C* EventManager, class UBP_LevelSequenceController_C* LevelSequencePlayer)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EventExecter_C", "Init");

	Params::BP_EventExecter_C_Init Parms{};

	Parms.EventManager = EventManager;
	Parms.LevelSequencePlayer = LevelSequencePlayer;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_EventExecter.BP_EventExecter_C.CreatePrimaryAssetIDs
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FName>                     Array                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
// TArray<struct FPrimaryAssetId>          SettingArray                                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)

void UBP_EventExecter_C::CreatePrimaryAssetIDs(TArray<class FName>& Array, TArray<struct FPrimaryAssetId>& SettingArray)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EventExecter_C", "CreatePrimaryAssetIDs");

	Params::BP_EventExecter_C_CreatePrimaryAssetIDs Parms{};

	Parms.Array = std::move(Array);
	Parms.SettingArray = std::move(SettingArray);

	UObject::ProcessEvent(Func, &Parms);

	Array = std::move(Parms.Array);
	SettingArray = std::move(Parms.SettingArray);
}


// Function BP_EventExecter.BP_EventExecter_C.PrintLadFailedAssetName
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UObject*>                  InputPin                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
// TArray<struct FPrimaryAssetId>          Array                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)

void UBP_EventExecter_C::PrintLadFailedAssetName(const TArray<class UObject*>& InputPin, TArray<struct FPrimaryAssetId>& Array)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EventExecter_C", "PrintLadFailedAssetName");

	Params::BP_EventExecter_C_PrintLadFailedAssetName Parms{};

	Parms.InputPin = std::move(InputPin);
	Parms.Array = std::move(Array);

	UObject::ProcessEvent(Func, &Parms);

	Array = std::move(Parms.Array);
}


// Function BP_EventExecter.BP_EventExecter_C.PrintAsyncLoadResults
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Condition                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class FString>                   TargetArray                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
// TArray<class FString>                   InputPin                                               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)

void UBP_EventExecter_C::PrintAsyncLoadResults(bool Condition, const TArray<class FString>& TargetArray, TArray<class FString>& InputPin)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EventExecter_C", "PrintAsyncLoadResults");

	Params::BP_EventExecter_C_PrintAsyncLoadResults Parms{};

	Parms.Condition = Condition;
	Parms.TargetArray = std::move(TargetArray);
	Parms.InputPin = std::move(InputPin);

	UObject::ProcessEvent(Func, &Parms);

	InputPin = std::move(Parms.InputPin);
}


// Function BP_EventExecter.BP_EventExecter_C.PrintAsyncLoadSequenceName
// (Private, BlueprintCallable, BlueprintEvent)

void UBP_EventExecter_C::PrintAsyncLoadSequenceName()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EventExecter_C", "PrintAsyncLoadSequenceName");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_EventExecter.BP_EventExecter_C.PrintLoadResult
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Result                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_EventExecter_C::PrintLoadResult(bool Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EventExecter_C", "PrintLoadResult");

	Params::BP_EventExecter_C_PrintLoadResult Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_EventExecter.BP_EventExecter_C.CSInput
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   DelataTime                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    GamePaused                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FKeyInput                        KeyInput                                               (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FKeyInput                        OutKeyInput                                            (Parm, OutParm)
// struct FEventReply                      Reply                                                  (Parm, OutParm)

void UBP_EventExecter_C::CSInput(float DelataTime, bool GamePaused, const struct FKeyInput& KeyInput, struct FKeyInput* OutKeyInput, struct FEventReply* Reply)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EventExecter_C", "CSInput");

	Params::BP_EventExecter_C_CSInput Parms{};

	Parms.DelataTime = DelataTime;
	Parms.GamePaused = GamePaused;
	Parms.KeyInput = std::move(KeyInput);

	UObject::ProcessEvent(Func, &Parms);

	if (OutKeyInput != nullptr)
		*OutKeyInput = std::move(Parms.OutKeyInput);

	if (Reply != nullptr)
		*Reply = std::move(Parms.Reply);
}


// Function BP_EventExecter.BP_EventExecter_C.CSDisableInput
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_EventExecter_C::CSDisableInput()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EventExecter_C", "CSDisableInput");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_EventExecter.BP_EventExecter_C.CSEnableInput
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_EventExecter_C::CSEnableInput()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EventExecter_C", "CSEnableInput");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_EventExecter.BP_EventExecter_C.GetTextData
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             TextID                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           Text                                                   (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
// class FName                             NextTextID                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    isSystemMessage                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_EventExecter_C::GetTextData(class FName TextID, class FString* Text, class FName* NextTextID, bool* isSystemMessage)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EventExecter_C", "GetTextData");

	Params::BP_EventExecter_C_GetTextData Parms{};

	Parms.TextID = TextID;

	UObject::ProcessEvent(Func, &Parms);

	if (Text != nullptr)
		*Text = std::move(Parms.Text);

	if (NextTextID != nullptr)
		*NextTextID = Parms.NextTextID;

	if (isSystemMessage != nullptr)
		*isSystemMessage = Parms.isSystemMessage;
}


// Function BP_EventExecter.BP_EventExecter_C.SetDrawTextInfo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDrawTextInfo                    DrawDataInfo                                           (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FST_EventTalktBranchData         TextBranchDataNew                                      (BlueprintVisible, BlueprintReadOnly, Parm)

void UBP_EventExecter_C::SetDrawTextInfo(const struct FDrawTextInfo& DrawDataInfo, const struct FST_EventTalktBranchData& TextBranchDataNew)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EventExecter_C", "SetDrawTextInfo");

	Params::BP_EventExecter_C_SetDrawTextInfo Parms{};

	Parms.DrawDataInfo = std::move(DrawDataInfo);
	Parms.TextBranchDataNew = std::move(TextBranchDataNew);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_EventExecter.BP_EventExecter_C.GetTextID
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             Text_ID                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_EventExecter_C::GetTextID(class FName* Text_ID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EventExecter_C", "GetTextID");

	Params::BP_EventExecter_C_GetTextID Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Text_ID != nullptr)
		*Text_ID = Parms.Text_ID;
}


// Function BP_EventExecter.BP_EventExecter_C.ChangePlayerToEventState
// (Private, BlueprintCallable, BlueprintEvent)

void UBP_EventExecter_C::ChangePlayerToEventState()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EventExecter_C", "ChangePlayerToEventState");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_EventExecter.BP_EventExecter_C.AddTextIndex
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_EventExecter_C::AddTextIndex()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EventExecter_C", "AddTextIndex");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_EventExecter.BP_EventExecter_C.AddTextID
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NextTextID                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_EventExecter_C::AddTextID(class FName NextTextID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EventExecter_C", "AddTextID");

	Params::BP_EventExecter_C_AddTextID Parms{};

	Parms.NextTextID = NextTextID;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_EventExecter.BP_EventExecter_C.FastTravel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   SelectResult                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_EventExecter_C::FastTravel(int32 SelectResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EventExecter_C", "FastTravel");

	Params::BP_EventExecter_C_FastTravel Parms{};

	Parms.SelectResult = SelectResult;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_EventExecter.BP_EventExecter_C.SetPlayerStop
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_EventExecter_C::SetPlayerStop()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EventExecter_C", "SetPlayerStop");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_EventExecter.BP_EventExecter_C.CheckSelectText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_EventExecter_C::CheckSelectText()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EventExecter_C", "CheckSelectText");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_EventExecter.BP_EventExecter_C.TimeChange
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   ToHour                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_EventExecter_C::TimeChange(int32 ToHour)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EventExecter_C", "TimeChange");

	Params::BP_EventExecter_C_TimeChange Parms{};

	Parms.ToHour = ToHour;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_EventExecter.BP_EventExecter_C.CreateFastTravelSelectText
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           FastTravelText                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                           ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)

class FString UBP_EventExecter_C::CreateFastTravelSelectText(const class FString& FastTravelText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EventExecter_C", "CreateFastTravelSelectText");

	Params::BP_EventExecter_C_CreateFastTravelSelectText Parms{};

	Parms.FastTravelText = std::move(FastTravelText);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_EventExecter.BP_EventExecter_C.SetNextText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_EventExecter_C::SetNextText()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EventExecter_C", "SetNextText");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_EventExecter.BP_EventExecter_C.SetSelectPos
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_EventExecter_C::SetSelectPos()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EventExecter_C", "SetSelectPos");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_EventExecter.BP_EventExecter_C.CallReleaseStigmata
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_EventExecter_C::CallReleaseStigmata()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EventExecter_C", "CallReleaseStigmata");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_EventExecter.BP_EventExecter_C.OpenStigmataReleseText
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_EventExecter_C::OpenStigmataReleseText()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EventExecter_C", "OpenStigmataReleseText");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_EventExecter.BP_EventExecter_C.SkipLevelSequence
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_EventExecter_C::SkipLevelSequence()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EventExecter_C", "SkipLevelSequence");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_EventExecter.BP_EventExecter_C.GetCurrentEventType
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// EEventType                              ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

EEventType UBP_EventExecter_C::GetCurrentEventType()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EventExecter_C", "GetCurrentEventType");

	Params::BP_EventExecter_C_GetCurrentEventType Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_EventExecter.BP_EventExecter_C.Can Open Facility Quest
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             InputPin                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ret                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_EventExecter_C::Can_Open_Facility_Quest(const class FName InputPin, bool* ret)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EventExecter_C", "Can Open Facility Quest");

	Params::BP_EventExecter_C_Can_Open_Facility_Quest Parms{};

	Parms.InputPin = InputPin;

	UObject::ProcessEvent(Func, &Parms);

	if (ret != nullptr)
		*ret = Parms.ret;
}


// Function BP_EventExecter.BP_EventExecter_C.Is Open Facility Quest Order UIParent Mode
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class FName>                     HubReceptionQuestIDs                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
// bool                                    return_0                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_EventExecter_C::Is_Open_Facility_Quest_Order_UIParent_Mode(TArray<class FName>& HubReceptionQuestIDs, bool* return_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EventExecter_C", "Is Open Facility Quest Order UIParent Mode");

	Params::BP_EventExecter_C_Is_Open_Facility_Quest_Order_UIParent_Mode Parms{};

	Parms.HubReceptionQuestIDs = std::move(HubReceptionQuestIDs);

	UObject::ProcessEvent(Func, &Parms);

	HubReceptionQuestIDs = std::move(Parms.HubReceptionQuestIDs);

	if (return_0 != nullptr)
		*return_0 = Parms.return_0;
}


// Function BP_EventExecter.BP_EventExecter_C.IsBoneFireChangeTime
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    IsTimeChange                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_EventExecter_C::IsBoneFireChangeTime(bool* IsTimeChange)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EventExecter_C", "IsBoneFireChangeTime");

	Params::BP_EventExecter_C_IsBoneFireChangeTime Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (IsTimeChange != nullptr)
		*IsTimeChange = Parms.IsTimeChange;
}


// Function BP_EventExecter.BP_EventExecter_C.UpdateDailyFacilityQuest
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             UpdateQuestID                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             FlagName                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_EventExecter_C::UpdateDailyFacilityQuest(class FName UpdateQuestID, class FName FlagName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EventExecter_C", "UpdateDailyFacilityQuest");

	Params::BP_EventExecter_C_UpdateDailyFacilityQuest Parms{};

	Parms.UpdateQuestID = UpdateQuestID;
	Parms.FlagName = FlagName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_EventExecter.BP_EventExecter_C.ChangeCurrentAperture
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_EventExecter_C::ChangeCurrentAperture()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EventExecter_C", "ChangeCurrentAperture");

	UObject::ProcessEvent(Func, nullptr);
}

}

