#pragma once

#include "../F4Menu/Engine/Source/Runtime/Core/Public/CoreMinimal.h"
#include "../F4Menu/CoreUObject/Public/UObject/UObject.h"
#include "../F4Menu/CoreUObject/Public/UObject/Class.h"

bool InitializeHook();
void RenderGUI();
void __fastcall hkProcessEvent(UObject* Object, UFunction* Function, void* Params);