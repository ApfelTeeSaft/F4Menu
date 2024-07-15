#pragma once

#include "CoreMinimal.h"
#include "UObject/UObject.h"
#include "UObject/Class.h"
#include "Engine/Engine.h"
#include "Engine/World.h"
#include "GameFramework/Actor.h"
#include "GameFramework/PlayerController.h"

bool InitializeHook();
void RenderGUI();
void __fastcall hkProcessEvent(UObject* Object, UFunction* Function, void* Params);