#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ABP_DeC_TrainDoor_00a

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "AnimGraphRuntime_structs.hpp"
#include "DarwinGame_classes.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass ABP_DeC_TrainDoor_00a.ABP_DeC_TrainDoor_00a_C
// 0x0520 (0x0790 - 0x0270)
class UABP_DeC_TrainDoor_00a_C final : public USimpleOpenAnimInstance
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0270(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x0278(0x0030)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_6;                  // 0x02A8(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_5;                  // 0x02D0(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_4;                  // 0x02F8(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_3;                  // 0x0320(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_2;                  // 0x0348(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_1;                  // 0x0370(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult;                    // 0x0398(0x0028)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_3;                    // 0x03C0(0x0078)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_4;                       // 0x0438(0x0030)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_2;                    // 0x0468(0x0078)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_3;                       // 0x04E0(0x0030)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_1;                    // 0x0510(0x0078)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_2;                       // 0x0588(0x0030)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer;                      // 0x05B8(0x0078)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_1;                       // 0x0630(0x0030)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult;                         // 0x0660(0x0030)()
	struct FAnimNode_StateMachine                 AnimGraphNode_StateMachine;                        // 0x0690(0x00B0)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot;                                // 0x0740(0x0048)()

public:
	void AnimGraph(struct FPoseLink* AnimGraph_0);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_DeC_TrainDoor_00a_AnimGraphNode_TransitionResult_5DEB67124DAE4451B4D5A8AD162380E0();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_DeC_TrainDoor_00a_AnimGraphNode_TransitionResult_22AE83A340376F8AD33E0FB1CEBD79E3();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_DeC_TrainDoor_00a_AnimGraphNode_TransitionResult_3FE844D44D19EDA93EC179B2D64320D1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_DeC_TrainDoor_00a_AnimGraphNode_TransitionResult_B777265E47E809A3D13708BF580CB4D6();
	void ExecuteUbergraph_ABP_DeC_TrainDoor_00a(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ABP_DeC_TrainDoor_00a_C">();
	}
	static class UABP_DeC_TrainDoor_00a_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UABP_DeC_TrainDoor_00a_C>();
	}
};
static_assert(alignof(UABP_DeC_TrainDoor_00a_C) == 0x000010, "Wrong alignment on UABP_DeC_TrainDoor_00a_C");
static_assert(sizeof(UABP_DeC_TrainDoor_00a_C) == 0x000790, "Wrong size on UABP_DeC_TrainDoor_00a_C");
static_assert(offsetof(UABP_DeC_TrainDoor_00a_C, UberGraphFrame) == 0x000270, "Member 'UABP_DeC_TrainDoor_00a_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UABP_DeC_TrainDoor_00a_C, AnimGraphNode_Root) == 0x000278, "Member 'UABP_DeC_TrainDoor_00a_C::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(UABP_DeC_TrainDoor_00a_C, AnimGraphNode_TransitionResult_6) == 0x0002A8, "Member 'UABP_DeC_TrainDoor_00a_C::AnimGraphNode_TransitionResult_6' has a wrong offset!");
static_assert(offsetof(UABP_DeC_TrainDoor_00a_C, AnimGraphNode_TransitionResult_5) == 0x0002D0, "Member 'UABP_DeC_TrainDoor_00a_C::AnimGraphNode_TransitionResult_5' has a wrong offset!");
static_assert(offsetof(UABP_DeC_TrainDoor_00a_C, AnimGraphNode_TransitionResult_4) == 0x0002F8, "Member 'UABP_DeC_TrainDoor_00a_C::AnimGraphNode_TransitionResult_4' has a wrong offset!");
static_assert(offsetof(UABP_DeC_TrainDoor_00a_C, AnimGraphNode_TransitionResult_3) == 0x000320, "Member 'UABP_DeC_TrainDoor_00a_C::AnimGraphNode_TransitionResult_3' has a wrong offset!");
static_assert(offsetof(UABP_DeC_TrainDoor_00a_C, AnimGraphNode_TransitionResult_2) == 0x000348, "Member 'UABP_DeC_TrainDoor_00a_C::AnimGraphNode_TransitionResult_2' has a wrong offset!");
static_assert(offsetof(UABP_DeC_TrainDoor_00a_C, AnimGraphNode_TransitionResult_1) == 0x000370, "Member 'UABP_DeC_TrainDoor_00a_C::AnimGraphNode_TransitionResult_1' has a wrong offset!");
static_assert(offsetof(UABP_DeC_TrainDoor_00a_C, AnimGraphNode_TransitionResult) == 0x000398, "Member 'UABP_DeC_TrainDoor_00a_C::AnimGraphNode_TransitionResult' has a wrong offset!");
static_assert(offsetof(UABP_DeC_TrainDoor_00a_C, AnimGraphNode_SequencePlayer_3) == 0x0003C0, "Member 'UABP_DeC_TrainDoor_00a_C::AnimGraphNode_SequencePlayer_3' has a wrong offset!");
static_assert(offsetof(UABP_DeC_TrainDoor_00a_C, AnimGraphNode_StateResult_4) == 0x000438, "Member 'UABP_DeC_TrainDoor_00a_C::AnimGraphNode_StateResult_4' has a wrong offset!");
static_assert(offsetof(UABP_DeC_TrainDoor_00a_C, AnimGraphNode_SequencePlayer_2) == 0x000468, "Member 'UABP_DeC_TrainDoor_00a_C::AnimGraphNode_SequencePlayer_2' has a wrong offset!");
static_assert(offsetof(UABP_DeC_TrainDoor_00a_C, AnimGraphNode_StateResult_3) == 0x0004E0, "Member 'UABP_DeC_TrainDoor_00a_C::AnimGraphNode_StateResult_3' has a wrong offset!");
static_assert(offsetof(UABP_DeC_TrainDoor_00a_C, AnimGraphNode_SequencePlayer_1) == 0x000510, "Member 'UABP_DeC_TrainDoor_00a_C::AnimGraphNode_SequencePlayer_1' has a wrong offset!");
static_assert(offsetof(UABP_DeC_TrainDoor_00a_C, AnimGraphNode_StateResult_2) == 0x000588, "Member 'UABP_DeC_TrainDoor_00a_C::AnimGraphNode_StateResult_2' has a wrong offset!");
static_assert(offsetof(UABP_DeC_TrainDoor_00a_C, AnimGraphNode_SequencePlayer) == 0x0005B8, "Member 'UABP_DeC_TrainDoor_00a_C::AnimGraphNode_SequencePlayer' has a wrong offset!");
static_assert(offsetof(UABP_DeC_TrainDoor_00a_C, AnimGraphNode_StateResult_1) == 0x000630, "Member 'UABP_DeC_TrainDoor_00a_C::AnimGraphNode_StateResult_1' has a wrong offset!");
static_assert(offsetof(UABP_DeC_TrainDoor_00a_C, AnimGraphNode_StateResult) == 0x000660, "Member 'UABP_DeC_TrainDoor_00a_C::AnimGraphNode_StateResult' has a wrong offset!");
static_assert(offsetof(UABP_DeC_TrainDoor_00a_C, AnimGraphNode_StateMachine) == 0x000690, "Member 'UABP_DeC_TrainDoor_00a_C::AnimGraphNode_StateMachine' has a wrong offset!");
static_assert(offsetof(UABP_DeC_TrainDoor_00a_C, AnimGraphNode_Slot) == 0x000740, "Member 'UABP_DeC_TrainDoor_00a_C::AnimGraphNode_Slot' has a wrong offset!");

}
