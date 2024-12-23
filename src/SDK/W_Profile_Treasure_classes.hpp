#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_Profile_Treasure

#include "Basic.hpp"

#include "DarwinGame_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass W_Profile_Treasure.W_Profile_Treasure_C
// 0x0040 (0x0630 - 0x05F0)
class UW_Profile_Treasure_C final : public UUIProfile_Treasure
{
public:
	class UWidgetAnimation*                       Out;                                               // 0x05F0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       In;                                                // 0x05F8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UW_Hub_ArtifactPoint_03_C*              W_Hub_ArtifactPoint_03;                            // 0x0600(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Hub_StatusTitle_C*                   W_Hub_StatusTitle;                                 // 0x0608(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Menu_IconArrow_C*                    W_Menu_IconArrow;                                  // 0x0610(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Profile_RankBase_C*                  W_Profile_RankBase_1st;                            // 0x0618(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Profile_RankBase_C*                  W_Profile_RankBase_2st;                            // 0x0620(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Profile_RankBase_C*                  W_Profile_RankBase_3st;                            // 0x0628(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"W_Profile_Treasure_C">();
	}
	static class UW_Profile_Treasure_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UW_Profile_Treasure_C>();
	}
};
static_assert(alignof(UW_Profile_Treasure_C) == 0x000008, "Wrong alignment on UW_Profile_Treasure_C");
static_assert(sizeof(UW_Profile_Treasure_C) == 0x000630, "Wrong size on UW_Profile_Treasure_C");
static_assert(offsetof(UW_Profile_Treasure_C, Out) == 0x0005F0, "Member 'UW_Profile_Treasure_C::Out' has a wrong offset!");
static_assert(offsetof(UW_Profile_Treasure_C, In) == 0x0005F8, "Member 'UW_Profile_Treasure_C::In' has a wrong offset!");
static_assert(offsetof(UW_Profile_Treasure_C, W_Hub_ArtifactPoint_03) == 0x000600, "Member 'UW_Profile_Treasure_C::W_Hub_ArtifactPoint_03' has a wrong offset!");
static_assert(offsetof(UW_Profile_Treasure_C, W_Hub_StatusTitle) == 0x000608, "Member 'UW_Profile_Treasure_C::W_Hub_StatusTitle' has a wrong offset!");
static_assert(offsetof(UW_Profile_Treasure_C, W_Menu_IconArrow) == 0x000610, "Member 'UW_Profile_Treasure_C::W_Menu_IconArrow' has a wrong offset!");
static_assert(offsetof(UW_Profile_Treasure_C, W_Profile_RankBase_1st) == 0x000618, "Member 'UW_Profile_Treasure_C::W_Profile_RankBase_1st' has a wrong offset!");
static_assert(offsetof(UW_Profile_Treasure_C, W_Profile_RankBase_2st) == 0x000620, "Member 'UW_Profile_Treasure_C::W_Profile_RankBase_2st' has a wrong offset!");
static_assert(offsetof(UW_Profile_Treasure_C, W_Profile_RankBase_3st) == 0x000628, "Member 'UW_Profile_Treasure_C::W_Profile_RankBase_3st' has a wrong offset!");

}

