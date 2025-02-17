#pragma once
#include "framework.h"

extern SDK::UEngine* Engine;
extern SDK::UWorld* World;
extern SDK::APlayerController* AF4PlayerController;
extern SDK::ACharacter* PlayerCharacter;
extern SDK::ULevel* Level;
extern SDK::TArray<SDK::AActor*>* Actors;

void InitializeGlobals();