#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_LevelSequenceController

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "DarwinGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_LevelSequenceController.BP_LevelSequenceController_C
// 0x0030 (0x0168 - 0x0138)
class UBP_LevelSequenceController_C final : public USequencerController
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0138(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBP_EventExecter_C*                     EventExector;                                      // 0x0140(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsLooping;                                         // 0x0148(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsPlayLevelSequence;                               // 0x0149(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_14A[0x2];                                      // 0x014A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         SubSequenceLength;                                 // 0x014C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         SubSequenceFrame;                                  // 0x0150(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         DefaultBigStarEmissive;                            // 0x0154(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         DefaultSmallStarEmissive;                          // 0x0158(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         DefaultSmallStarReduce;                            // 0x015C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_EnvironmentLighting_C*              ChangeEnvironmentLighting;                         // 0x0160(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_LevelSequenceController(int32 EntryPoint);
	void CallOpenDrawTalkWindow(const class FString& TextID);
	void ReceiveBeginPlay();
	void PlayLevelSequence();
	void SetLooping(int32 SequenceLength);
	void EndSubLevelSequence();
	void PlaySubSequence(class ALevelSequenceActor* SubLevelSequence);
	void CallDrawTalkWindow_Old(const int32 MassageStartIndex);
	void CallSetDrawTextInfo(const struct FDrawTextInfo& DrawTextInfo, const struct FST_EventTalktBranchData& TextBranch);
	void CallEndLevelSequence(float BlendTime, EViewTargetBlendFunction BlendFunc, float BlendExp, bool bLockOutgoing, bool bCameraKeep);
	void Init(class UBP_EventExecter_C* BP_EventExector);
	void StopPlayingSequence();
	void PlaySub();
	void SkipPlayingSequence();
	void SkipLevelSequence(class ULevelSequencePlayer* SkipLevelSequence_0);
	void PrintCurrentCamera();
	void StopPlayedSequence();
	void StopMainSequence();
	void PrintStopLog(const class UObject* Object);
	bool CanStopSequencePlayer(class UMovieSceneSequencePlayer* StopTargetPlayer);
	void ResetStarEmissive(class ABP_EnvironmentLighting_C* BP_EnviromentLighting);
	void Set_Star_Emissive(class ABP_EnvironmentLighting_C* BP_EnviromentLighting, float BigStarEmissive, float SmallStarEmissive);
	void InitSky(class ABP_EnvironmentLighting_C* ChangeEnvironmentLighting_0);
	void ResetSkyPalam();
	void IsPlayingLevelSequence(bool* return_0);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_LevelSequenceController_C">();
	}
	static class UBP_LevelSequenceController_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_LevelSequenceController_C>();
	}
};
static_assert(alignof(UBP_LevelSequenceController_C) == 0x000008, "Wrong alignment on UBP_LevelSequenceController_C");
static_assert(sizeof(UBP_LevelSequenceController_C) == 0x000168, "Wrong size on UBP_LevelSequenceController_C");
static_assert(offsetof(UBP_LevelSequenceController_C, UberGraphFrame) == 0x000138, "Member 'UBP_LevelSequenceController_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_LevelSequenceController_C, EventExector) == 0x000140, "Member 'UBP_LevelSequenceController_C::EventExector' has a wrong offset!");
static_assert(offsetof(UBP_LevelSequenceController_C, IsLooping) == 0x000148, "Member 'UBP_LevelSequenceController_C::IsLooping' has a wrong offset!");
static_assert(offsetof(UBP_LevelSequenceController_C, IsPlayLevelSequence) == 0x000149, "Member 'UBP_LevelSequenceController_C::IsPlayLevelSequence' has a wrong offset!");
static_assert(offsetof(UBP_LevelSequenceController_C, SubSequenceLength) == 0x00014C, "Member 'UBP_LevelSequenceController_C::SubSequenceLength' has a wrong offset!");
static_assert(offsetof(UBP_LevelSequenceController_C, SubSequenceFrame) == 0x000150, "Member 'UBP_LevelSequenceController_C::SubSequenceFrame' has a wrong offset!");
static_assert(offsetof(UBP_LevelSequenceController_C, DefaultBigStarEmissive) == 0x000154, "Member 'UBP_LevelSequenceController_C::DefaultBigStarEmissive' has a wrong offset!");
static_assert(offsetof(UBP_LevelSequenceController_C, DefaultSmallStarEmissive) == 0x000158, "Member 'UBP_LevelSequenceController_C::DefaultSmallStarEmissive' has a wrong offset!");
static_assert(offsetof(UBP_LevelSequenceController_C, DefaultSmallStarReduce) == 0x00015C, "Member 'UBP_LevelSequenceController_C::DefaultSmallStarReduce' has a wrong offset!");
static_assert(offsetof(UBP_LevelSequenceController_C, ChangeEnvironmentLighting) == 0x000160, "Member 'UBP_LevelSequenceController_C::ChangeEnvironmentLighting' has a wrong offset!");

}
