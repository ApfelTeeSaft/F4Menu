#ifndef GAME_H
#define GAME_H

#include <string>
#include <vector>

namespace UE4 {
    class UObject;
    class UClass;
}

namespace Game {
    UE4::UObject* GetEngine();
    UE4::UObject* GetWorld();
    UE4::UObject* GetPlayerController();
    UE4::UObject* GetPlayerState();
    UE4::UObject* GetPawn();
    UE4::UObject* GetGameMode();
    UE4::UObject* GetGameState();

    // Utility functions
    UE4::UObject* GetChild(UE4::UObject* parent, const std::string& name);
    template<typename T>
    std::vector<T*> GetChildAsTArray(UE4::UObject* parent, const std::string& name);
    UE4::UClass* StaticClassImpl(const std::string& className);
}

#endif // GAME_H