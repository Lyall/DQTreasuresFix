#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_Loading_Train

#include "Basic.hpp"

#include "DarwinGame_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass W_Loading_Train.W_Loading_Train_C
// 0x0070 (0x0568 - 0x04F8)
class UW_Loading_Train_C final : public UUIStartLoopAnimation
{
public:
	class UWidgetAnimation*                       Wait;                                              // 0x04F8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Chara_Body_01;                                     // 0x0500(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Chara_Body_02;                                     // 0x0508(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Chara_Head_01;                                     // 0x0510(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Chara_Head_02;                                     // 0x0518(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Joint_01;                                          // 0x0520(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Joint_02;                                          // 0x0528(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Line_01;                                           // 0x0530(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Line_02;                                           // 0x0538(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Line_03;                                           // 0x0540(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 LineEffect_01;                                     // 0x0548(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Train_01;                                          // 0x0550(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Train_02;                                          // 0x0558(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Train_03;                                          // 0x0560(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"W_Loading_Train_C">();
	}
	static class UW_Loading_Train_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UW_Loading_Train_C>();
	}
};
static_assert(alignof(UW_Loading_Train_C) == 0x000008, "Wrong alignment on UW_Loading_Train_C");
static_assert(sizeof(UW_Loading_Train_C) == 0x000568, "Wrong size on UW_Loading_Train_C");
static_assert(offsetof(UW_Loading_Train_C, Wait) == 0x0004F8, "Member 'UW_Loading_Train_C::Wait' has a wrong offset!");
static_assert(offsetof(UW_Loading_Train_C, Chara_Body_01) == 0x000500, "Member 'UW_Loading_Train_C::Chara_Body_01' has a wrong offset!");
static_assert(offsetof(UW_Loading_Train_C, Chara_Body_02) == 0x000508, "Member 'UW_Loading_Train_C::Chara_Body_02' has a wrong offset!");
static_assert(offsetof(UW_Loading_Train_C, Chara_Head_01) == 0x000510, "Member 'UW_Loading_Train_C::Chara_Head_01' has a wrong offset!");
static_assert(offsetof(UW_Loading_Train_C, Chara_Head_02) == 0x000518, "Member 'UW_Loading_Train_C::Chara_Head_02' has a wrong offset!");
static_assert(offsetof(UW_Loading_Train_C, Joint_01) == 0x000520, "Member 'UW_Loading_Train_C::Joint_01' has a wrong offset!");
static_assert(offsetof(UW_Loading_Train_C, Joint_02) == 0x000528, "Member 'UW_Loading_Train_C::Joint_02' has a wrong offset!");
static_assert(offsetof(UW_Loading_Train_C, Line_01) == 0x000530, "Member 'UW_Loading_Train_C::Line_01' has a wrong offset!");
static_assert(offsetof(UW_Loading_Train_C, Line_02) == 0x000538, "Member 'UW_Loading_Train_C::Line_02' has a wrong offset!");
static_assert(offsetof(UW_Loading_Train_C, Line_03) == 0x000540, "Member 'UW_Loading_Train_C::Line_03' has a wrong offset!");
static_assert(offsetof(UW_Loading_Train_C, LineEffect_01) == 0x000548, "Member 'UW_Loading_Train_C::LineEffect_01' has a wrong offset!");
static_assert(offsetof(UW_Loading_Train_C, Train_01) == 0x000550, "Member 'UW_Loading_Train_C::Train_01' has a wrong offset!");
static_assert(offsetof(UW_Loading_Train_C, Train_02) == 0x000558, "Member 'UW_Loading_Train_C::Train_02' has a wrong offset!");
static_assert(offsetof(UW_Loading_Train_C, Train_03) == 0x000560, "Member 'UW_Loading_Train_C::Train_03' has a wrong offset!");

}
