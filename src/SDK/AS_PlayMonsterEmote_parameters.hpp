#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AS_PlayMonsterEmote

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "GameplayTags_structs.hpp"


namespace SDK::Params
{

// Function AS_PlayMonsterEmote.AS_PlayMonsterEmote_C.Received_NotifyBegin
// 0x00E8 (0x00E8 - 0x0000)
struct AS_PlayMonsterEmote_C_Received_NotifyBegin final
{
public:
	class USkeletalMeshComponent*                 MeshComp;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimSequenceBase*                      Animation;                                         // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         TotalDuration;                                     // 0x0010(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x0014(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                         Pad_15[0x3];                                       // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_24[0x4];                                       // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerCharacter*                       K2Node_DynamicCast_AsPlayer_Character;             // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_31[0x3];                                       // 0x0031(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0034(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_MonsterManager_C*                   CallFunc_GetMonsterManager_MonsterManager;         // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4C[0x4];                                       // 0x004C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AMonsterBase*>                   CallFunc_GetMonsters_ReturnValue;                  // 0x0050(0x0010)(ReferenceParm, HasGetValueTypeHash)
	class AMonsterBase*                           CallFunc_Array_Get_Item;                           // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6C[0x4];                                       // 0x006C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class ICharacterInterface>   K2Node_DynamicCast_AsCharacter_Interface;          // 0x0070(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0081(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_82[0x2];                                       // 0x0082(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayTag                           CallFunc_GetCurrentStateTag_ReturnValue;           // 0x0084(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_1;        // 0x008C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_FindLookAtRotation_ReturnValue;           // 0x0098(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         CallFunc_GetHP_ReturnValue;                        // 0x00A4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Roll;                        // 0x00A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Pitch;                       // 0x00AC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Yaw;                         // 0x00B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_FloatFloat_ReturnValue;           // 0x00B4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_B5[0x3];                                       // 0x00B5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRotator                               CallFunc_MakeRotator_ReturnValue;                  // 0x00B8(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_K2_SetActorRotation_ReturnValue;          // 0x00C4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetMonsterStatus_ReturnValue;             // 0x00C5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_C6[0x2];                                       // 0x00C6(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x00C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x00CC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x00CD(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_CE[0x2];                                       // 0x00CE(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayTag                           Temp_struct_Variable;                              // 0x00D0(0x0008)(NoDestructor, HasGetValueTypeHash)
	class UEmoteRuntimeOption*                    CallFunc_MakeEmoteRuntimeOption_ReturnValue;       // 0x00D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_MatchesTag_ReturnValue;                   // 0x00E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x00E1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(AS_PlayMonsterEmote_C_Received_NotifyBegin) == 0x000008, "Wrong alignment on AS_PlayMonsterEmote_C_Received_NotifyBegin");
static_assert(sizeof(AS_PlayMonsterEmote_C_Received_NotifyBegin) == 0x0000E8, "Wrong size on AS_PlayMonsterEmote_C_Received_NotifyBegin");
static_assert(offsetof(AS_PlayMonsterEmote_C_Received_NotifyBegin, MeshComp) == 0x000000, "Member 'AS_PlayMonsterEmote_C_Received_NotifyBegin::MeshComp' has a wrong offset!");
static_assert(offsetof(AS_PlayMonsterEmote_C_Received_NotifyBegin, Animation) == 0x000008, "Member 'AS_PlayMonsterEmote_C_Received_NotifyBegin::Animation' has a wrong offset!");
static_assert(offsetof(AS_PlayMonsterEmote_C_Received_NotifyBegin, TotalDuration) == 0x000010, "Member 'AS_PlayMonsterEmote_C_Received_NotifyBegin::TotalDuration' has a wrong offset!");
static_assert(offsetof(AS_PlayMonsterEmote_C_Received_NotifyBegin, ReturnValue) == 0x000014, "Member 'AS_PlayMonsterEmote_C_Received_NotifyBegin::ReturnValue' has a wrong offset!");
static_assert(offsetof(AS_PlayMonsterEmote_C_Received_NotifyBegin, CallFunc_GetOwner_ReturnValue) == 0x000018, "Member 'AS_PlayMonsterEmote_C_Received_NotifyBegin::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(AS_PlayMonsterEmote_C_Received_NotifyBegin, Temp_int_Array_Index_Variable) == 0x000020, "Member 'AS_PlayMonsterEmote_C_Received_NotifyBegin::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(AS_PlayMonsterEmote_C_Received_NotifyBegin, K2Node_DynamicCast_AsPlayer_Character) == 0x000028, "Member 'AS_PlayMonsterEmote_C_Received_NotifyBegin::K2Node_DynamicCast_AsPlayer_Character' has a wrong offset!");
static_assert(offsetof(AS_PlayMonsterEmote_C_Received_NotifyBegin, K2Node_DynamicCast_bSuccess) == 0x000030, "Member 'AS_PlayMonsterEmote_C_Received_NotifyBegin::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(AS_PlayMonsterEmote_C_Received_NotifyBegin, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000034, "Member 'AS_PlayMonsterEmote_C_Received_NotifyBegin::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(AS_PlayMonsterEmote_C_Received_NotifyBegin, CallFunc_GetMonsterManager_MonsterManager) == 0x000040, "Member 'AS_PlayMonsterEmote_C_Received_NotifyBegin::CallFunc_GetMonsterManager_MonsterManager' has a wrong offset!");
static_assert(offsetof(AS_PlayMonsterEmote_C_Received_NotifyBegin, Temp_int_Loop_Counter_Variable) == 0x000048, "Member 'AS_PlayMonsterEmote_C_Received_NotifyBegin::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(AS_PlayMonsterEmote_C_Received_NotifyBegin, CallFunc_GetMonsters_ReturnValue) == 0x000050, "Member 'AS_PlayMonsterEmote_C_Received_NotifyBegin::CallFunc_GetMonsters_ReturnValue' has a wrong offset!");
static_assert(offsetof(AS_PlayMonsterEmote_C_Received_NotifyBegin, CallFunc_Array_Get_Item) == 0x000060, "Member 'AS_PlayMonsterEmote_C_Received_NotifyBegin::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(AS_PlayMonsterEmote_C_Received_NotifyBegin, CallFunc_Array_Length_ReturnValue) == 0x000068, "Member 'AS_PlayMonsterEmote_C_Received_NotifyBegin::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(AS_PlayMonsterEmote_C_Received_NotifyBegin, K2Node_DynamicCast_AsCharacter_Interface) == 0x000070, "Member 'AS_PlayMonsterEmote_C_Received_NotifyBegin::K2Node_DynamicCast_AsCharacter_Interface' has a wrong offset!");
static_assert(offsetof(AS_PlayMonsterEmote_C_Received_NotifyBegin, K2Node_DynamicCast_bSuccess_1) == 0x000080, "Member 'AS_PlayMonsterEmote_C_Received_NotifyBegin::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(AS_PlayMonsterEmote_C_Received_NotifyBegin, CallFunc_Less_IntInt_ReturnValue) == 0x000081, "Member 'AS_PlayMonsterEmote_C_Received_NotifyBegin::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(AS_PlayMonsterEmote_C_Received_NotifyBegin, CallFunc_GetCurrentStateTag_ReturnValue) == 0x000084, "Member 'AS_PlayMonsterEmote_C_Received_NotifyBegin::CallFunc_GetCurrentStateTag_ReturnValue' has a wrong offset!");
static_assert(offsetof(AS_PlayMonsterEmote_C_Received_NotifyBegin, CallFunc_K2_GetActorLocation_ReturnValue_1) == 0x00008C, "Member 'AS_PlayMonsterEmote_C_Received_NotifyBegin::CallFunc_K2_GetActorLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AS_PlayMonsterEmote_C_Received_NotifyBegin, CallFunc_FindLookAtRotation_ReturnValue) == 0x000098, "Member 'AS_PlayMonsterEmote_C_Received_NotifyBegin::CallFunc_FindLookAtRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(AS_PlayMonsterEmote_C_Received_NotifyBegin, CallFunc_GetHP_ReturnValue) == 0x0000A4, "Member 'AS_PlayMonsterEmote_C_Received_NotifyBegin::CallFunc_GetHP_ReturnValue' has a wrong offset!");
static_assert(offsetof(AS_PlayMonsterEmote_C_Received_NotifyBegin, CallFunc_BreakRotator_Roll) == 0x0000A8, "Member 'AS_PlayMonsterEmote_C_Received_NotifyBegin::CallFunc_BreakRotator_Roll' has a wrong offset!");
static_assert(offsetof(AS_PlayMonsterEmote_C_Received_NotifyBegin, CallFunc_BreakRotator_Pitch) == 0x0000AC, "Member 'AS_PlayMonsterEmote_C_Received_NotifyBegin::CallFunc_BreakRotator_Pitch' has a wrong offset!");
static_assert(offsetof(AS_PlayMonsterEmote_C_Received_NotifyBegin, CallFunc_BreakRotator_Yaw) == 0x0000B0, "Member 'AS_PlayMonsterEmote_C_Received_NotifyBegin::CallFunc_BreakRotator_Yaw' has a wrong offset!");
static_assert(offsetof(AS_PlayMonsterEmote_C_Received_NotifyBegin, CallFunc_Greater_FloatFloat_ReturnValue) == 0x0000B4, "Member 'AS_PlayMonsterEmote_C_Received_NotifyBegin::CallFunc_Greater_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(AS_PlayMonsterEmote_C_Received_NotifyBegin, CallFunc_MakeRotator_ReturnValue) == 0x0000B8, "Member 'AS_PlayMonsterEmote_C_Received_NotifyBegin::CallFunc_MakeRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(AS_PlayMonsterEmote_C_Received_NotifyBegin, CallFunc_K2_SetActorRotation_ReturnValue) == 0x0000C4, "Member 'AS_PlayMonsterEmote_C_Received_NotifyBegin::CallFunc_K2_SetActorRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(AS_PlayMonsterEmote_C_Received_NotifyBegin, CallFunc_GetMonsterStatus_ReturnValue) == 0x0000C5, "Member 'AS_PlayMonsterEmote_C_Received_NotifyBegin::CallFunc_GetMonsterStatus_ReturnValue' has a wrong offset!");
static_assert(offsetof(AS_PlayMonsterEmote_C_Received_NotifyBegin, CallFunc_Add_IntInt_ReturnValue) == 0x0000C8, "Member 'AS_PlayMonsterEmote_C_Received_NotifyBegin::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(AS_PlayMonsterEmote_C_Received_NotifyBegin, CallFunc_Not_PreBool_ReturnValue) == 0x0000CC, "Member 'AS_PlayMonsterEmote_C_Received_NotifyBegin::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(AS_PlayMonsterEmote_C_Received_NotifyBegin, CallFunc_BooleanAND_ReturnValue) == 0x0000CD, "Member 'AS_PlayMonsterEmote_C_Received_NotifyBegin::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(AS_PlayMonsterEmote_C_Received_NotifyBegin, Temp_struct_Variable) == 0x0000D0, "Member 'AS_PlayMonsterEmote_C_Received_NotifyBegin::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(AS_PlayMonsterEmote_C_Received_NotifyBegin, CallFunc_MakeEmoteRuntimeOption_ReturnValue) == 0x0000D8, "Member 'AS_PlayMonsterEmote_C_Received_NotifyBegin::CallFunc_MakeEmoteRuntimeOption_ReturnValue' has a wrong offset!");
static_assert(offsetof(AS_PlayMonsterEmote_C_Received_NotifyBegin, CallFunc_MatchesTag_ReturnValue) == 0x0000E0, "Member 'AS_PlayMonsterEmote_C_Received_NotifyBegin::CallFunc_MatchesTag_ReturnValue' has a wrong offset!");
static_assert(offsetof(AS_PlayMonsterEmote_C_Received_NotifyBegin, CallFunc_Not_PreBool_ReturnValue_1) == 0x0000E1, "Member 'AS_PlayMonsterEmote_C_Received_NotifyBegin::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");

// Function AS_PlayMonsterEmote.AS_PlayMonsterEmote_C.Received_NotifyEnd
// 0x0070 (0x0070 - 0x0000)
struct AS_PlayMonsterEmote_C_Received_NotifyEnd final
{
public:
	class USkeletalMeshComponent*                 MeshComp;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimSequenceBase*                      Animation;                                         // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_24[0x4];                                       // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerCharacter*                       K2Node_DynamicCast_AsPlayer_Character;             // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_31[0x7];                                       // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_MonsterManager_C*                   CallFunc_GetMonsterManager_MonsterManager;         // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_44[0x4];                                       // 0x0044(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AMonsterBase*>                   CallFunc_GetMonsters_ReturnValue;                  // 0x0048(0x0010)(ReferenceParm, HasGetValueTypeHash)
	class AMonsterBase*                           CallFunc_Array_Get_Item;                           // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0064(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsPlayEmote_ReturnValue;                  // 0x0065(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_66[0x2];                                       // 0x0066(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AS_PlayMonsterEmote_C_Received_NotifyEnd) == 0x000008, "Wrong alignment on AS_PlayMonsterEmote_C_Received_NotifyEnd");
static_assert(sizeof(AS_PlayMonsterEmote_C_Received_NotifyEnd) == 0x000070, "Wrong size on AS_PlayMonsterEmote_C_Received_NotifyEnd");
static_assert(offsetof(AS_PlayMonsterEmote_C_Received_NotifyEnd, MeshComp) == 0x000000, "Member 'AS_PlayMonsterEmote_C_Received_NotifyEnd::MeshComp' has a wrong offset!");
static_assert(offsetof(AS_PlayMonsterEmote_C_Received_NotifyEnd, Animation) == 0x000008, "Member 'AS_PlayMonsterEmote_C_Received_NotifyEnd::Animation' has a wrong offset!");
static_assert(offsetof(AS_PlayMonsterEmote_C_Received_NotifyEnd, ReturnValue) == 0x000010, "Member 'AS_PlayMonsterEmote_C_Received_NotifyEnd::ReturnValue' has a wrong offset!");
static_assert(offsetof(AS_PlayMonsterEmote_C_Received_NotifyEnd, CallFunc_GetOwner_ReturnValue) == 0x000018, "Member 'AS_PlayMonsterEmote_C_Received_NotifyEnd::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(AS_PlayMonsterEmote_C_Received_NotifyEnd, Temp_int_Array_Index_Variable) == 0x000020, "Member 'AS_PlayMonsterEmote_C_Received_NotifyEnd::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(AS_PlayMonsterEmote_C_Received_NotifyEnd, K2Node_DynamicCast_AsPlayer_Character) == 0x000028, "Member 'AS_PlayMonsterEmote_C_Received_NotifyEnd::K2Node_DynamicCast_AsPlayer_Character' has a wrong offset!");
static_assert(offsetof(AS_PlayMonsterEmote_C_Received_NotifyEnd, K2Node_DynamicCast_bSuccess) == 0x000030, "Member 'AS_PlayMonsterEmote_C_Received_NotifyEnd::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(AS_PlayMonsterEmote_C_Received_NotifyEnd, CallFunc_GetMonsterManager_MonsterManager) == 0x000038, "Member 'AS_PlayMonsterEmote_C_Received_NotifyEnd::CallFunc_GetMonsterManager_MonsterManager' has a wrong offset!");
static_assert(offsetof(AS_PlayMonsterEmote_C_Received_NotifyEnd, Temp_int_Loop_Counter_Variable) == 0x000040, "Member 'AS_PlayMonsterEmote_C_Received_NotifyEnd::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(AS_PlayMonsterEmote_C_Received_NotifyEnd, CallFunc_GetMonsters_ReturnValue) == 0x000048, "Member 'AS_PlayMonsterEmote_C_Received_NotifyEnd::CallFunc_GetMonsters_ReturnValue' has a wrong offset!");
static_assert(offsetof(AS_PlayMonsterEmote_C_Received_NotifyEnd, CallFunc_Array_Get_Item) == 0x000058, "Member 'AS_PlayMonsterEmote_C_Received_NotifyEnd::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(AS_PlayMonsterEmote_C_Received_NotifyEnd, CallFunc_Array_Length_ReturnValue) == 0x000060, "Member 'AS_PlayMonsterEmote_C_Received_NotifyEnd::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(AS_PlayMonsterEmote_C_Received_NotifyEnd, CallFunc_Less_IntInt_ReturnValue) == 0x000064, "Member 'AS_PlayMonsterEmote_C_Received_NotifyEnd::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(AS_PlayMonsterEmote_C_Received_NotifyEnd, CallFunc_IsPlayEmote_ReturnValue) == 0x000065, "Member 'AS_PlayMonsterEmote_C_Received_NotifyEnd::CallFunc_IsPlayEmote_ReturnValue' has a wrong offset!");
static_assert(offsetof(AS_PlayMonsterEmote_C_Received_NotifyEnd, CallFunc_Add_IntInt_ReturnValue) == 0x000068, "Member 'AS_PlayMonsterEmote_C_Received_NotifyEnd::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");

}
