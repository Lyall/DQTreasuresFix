#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: FieldLink_Glide

#include "Basic.hpp"


namespace SDK::Params
{

// Function FieldLink_Glide.FieldLink_Glide_C.ExecuteUbergraph_FieldLink_Glide
// 0x0050 (0x0050 - 0x0000)
struct FieldLink_Glide_C_ExecuteUbergraph_FieldLink_Glide final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AGPACharacter*                          CallFunc_GetLinkTarget_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AGPACharacter*                          CallFunc_GetLinkTarget_ReturnValue_1;              // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IObjectCommunicationInterface> K2Node_DynamicCast_AsObject_Communication_Interface; // 0x0020(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_31[0x7];                                       // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class ICharacterInterface>   K2Node_DynamicCast_AsCharacter_Interface;          // 0x0038(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(FieldLink_Glide_C_ExecuteUbergraph_FieldLink_Glide) == 0x000008, "Wrong alignment on FieldLink_Glide_C_ExecuteUbergraph_FieldLink_Glide");
static_assert(sizeof(FieldLink_Glide_C_ExecuteUbergraph_FieldLink_Glide) == 0x000050, "Wrong size on FieldLink_Glide_C_ExecuteUbergraph_FieldLink_Glide");
static_assert(offsetof(FieldLink_Glide_C_ExecuteUbergraph_FieldLink_Glide, EntryPoint) == 0x000000, "Member 'FieldLink_Glide_C_ExecuteUbergraph_FieldLink_Glide::EntryPoint' has a wrong offset!");
static_assert(offsetof(FieldLink_Glide_C_ExecuteUbergraph_FieldLink_Glide, CallFunc_GetLinkTarget_ReturnValue) == 0x000008, "Member 'FieldLink_Glide_C_ExecuteUbergraph_FieldLink_Glide::CallFunc_GetLinkTarget_ReturnValue' has a wrong offset!");
static_assert(offsetof(FieldLink_Glide_C_ExecuteUbergraph_FieldLink_Glide, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'FieldLink_Glide_C_ExecuteUbergraph_FieldLink_Glide::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(FieldLink_Glide_C_ExecuteUbergraph_FieldLink_Glide, CallFunc_GetLinkTarget_ReturnValue_1) == 0x000018, "Member 'FieldLink_Glide_C_ExecuteUbergraph_FieldLink_Glide::CallFunc_GetLinkTarget_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(FieldLink_Glide_C_ExecuteUbergraph_FieldLink_Glide, K2Node_DynamicCast_AsObject_Communication_Interface) == 0x000020, "Member 'FieldLink_Glide_C_ExecuteUbergraph_FieldLink_Glide::K2Node_DynamicCast_AsObject_Communication_Interface' has a wrong offset!");
static_assert(offsetof(FieldLink_Glide_C_ExecuteUbergraph_FieldLink_Glide, K2Node_DynamicCast_bSuccess) == 0x000030, "Member 'FieldLink_Glide_C_ExecuteUbergraph_FieldLink_Glide::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(FieldLink_Glide_C_ExecuteUbergraph_FieldLink_Glide, K2Node_DynamicCast_AsCharacter_Interface) == 0x000038, "Member 'FieldLink_Glide_C_ExecuteUbergraph_FieldLink_Glide::K2Node_DynamicCast_AsCharacter_Interface' has a wrong offset!");
static_assert(offsetof(FieldLink_Glide_C_ExecuteUbergraph_FieldLink_Glide, K2Node_DynamicCast_bSuccess_1) == 0x000048, "Member 'FieldLink_Glide_C_ExecuteUbergraph_FieldLink_Glide::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");

}

