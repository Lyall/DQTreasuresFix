#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ST_EffectList

#include "Basic.hpp"


namespace SDK
{

// UserDefinedStruct ST_EffectList.ST_EffectList
// 0x0030 (0x0030 - 0x0000)
struct FST_EffectList final
{
public:
	TSoftClassPtr<class UClass>                   EffectRef_17_4D9652744B9320C2833814A478BEFC83;     // 0x0000(0x0028)(Edit, BlueprintVisible, DisableEditOnTemplate, HasGetValueTypeHash)
	int32                                         PresetCount_5_99E2582343E54FA42D29C5B007C64D83;    // 0x0028(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FST_EffectList) == 0x000008, "Wrong alignment on FST_EffectList");
static_assert(sizeof(FST_EffectList) == 0x000030, "Wrong size on FST_EffectList");
static_assert(offsetof(FST_EffectList, EffectRef_17_4D9652744B9320C2833814A478BEFC83) == 0x000000, "Member 'FST_EffectList::EffectRef_17_4D9652744B9320C2833814A478BEFC83' has a wrong offset!");
static_assert(offsetof(FST_EffectList, PresetCount_5_99E2582343E54FA42D29C5B007C64D83) == 0x000028, "Member 'FST_EffectList::PresetCount_5_99E2582343E54FA42D29C5B007C64D83' has a wrong offset!");

}

