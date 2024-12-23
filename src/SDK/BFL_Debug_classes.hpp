#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BFL_Debug

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BFL_Debug.BFL_Debug_C
// 0x0000 (0x0030 - 0x0030)
class UBFL_Debug_C final : public UBlueprintFunctionLibrary
{
public:
	static void m__________________1(class FName m________, class UObject* m_WorldContext);
	static void m_______________0(class UObject* m_WorldContext);
	static void IsSwitchOn(class FName m________, class UObject* m_WorldContext, bool* on);
	static void m_______________________(class UObject* m_WorldContext);
	static void m____________________(class UObject* m_WorldContext);
	static void m___________________________________(class UObject* m_WorldContext);
	static void m__________________0(class UObject* m_WorldContext);
	static void DrawDebugLine(const struct FVector& StartPosition, const struct FVector& Direction, float Length, const struct FLinearColor& Color, float Duration, float Thickness, class UObject* m_WorldContext);
	static void m______________(class UObject* m_WorldContext);
	static void m_____________________________(class UObject* m_WorldContext);
	static float GetActionDebugParamValue(class FName ListName, class FName IndexName, class FName ParamName, class UObject* m_WorldContext);
	static float AddActionDebugParamValue(class FName ListName, class FName IndexName, class FName ParamName, float AddValue, class UObject* m_WorldContext);
	static void m___________(class UObject* m_WorldContext);
	static void m_________________(class UObject* m_WorldContext);
	static void PrintStringOnlyDisplay(const class FString& inString, const struct FLinearColor& TextColor, float Duration, class UObject* m_WorldContext);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BFL_Debug_C">();
	}
	static class UBFL_Debug_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBFL_Debug_C>();
	}
};
static_assert(alignof(UBFL_Debug_C) == 0x000008, "Wrong alignment on UBFL_Debug_C");
static_assert(sizeof(UBFL_Debug_C) == 0x000030, "Wrong size on UBFL_Debug_C");

}

