#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_MonsterDict_Content_Trivia

#include "Basic.hpp"

#include "DarwinGame_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass W_MonsterDict_Content_Trivia.W_MonsterDict_Content_Trivia_C
// 0x0010 (0x04A0 - 0x0490)
class UW_MonsterDict_Content_Trivia_C final : public UUIMonsterDict_Content_Trivia
{
public:
	class UWidgetAnimation*                       off;                                               // 0x0490(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       on;                                                // 0x0498(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"W_MonsterDict_Content_Trivia_C">();
	}
	static class UW_MonsterDict_Content_Trivia_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UW_MonsterDict_Content_Trivia_C>();
	}
};
static_assert(alignof(UW_MonsterDict_Content_Trivia_C) == 0x000008, "Wrong alignment on UW_MonsterDict_Content_Trivia_C");
static_assert(sizeof(UW_MonsterDict_Content_Trivia_C) == 0x0004A0, "Wrong size on UW_MonsterDict_Content_Trivia_C");
static_assert(offsetof(UW_MonsterDict_Content_Trivia_C, off) == 0x000490, "Member 'UW_MonsterDict_Content_Trivia_C::off' has a wrong offset!");
static_assert(offsetof(UW_MonsterDict_Content_Trivia_C, on) == 0x000498, "Member 'UW_MonsterDict_Content_Trivia_C::on' has a wrong offset!");

}
