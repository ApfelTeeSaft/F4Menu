#include "Game.h"
#include "Classes.hpp"
#include "UE4.hpp"
#include "SDK/SDK/Engine_classes.hpp"
#include "SDK/SDK/CoreUObject_classes.hpp"

namespace Game {
    UE4::UObject* GetEngine() {
        // Assuming there is a method to get the engine instance
        return UE4::UObject::FindObject<UE4::UObject>("EngineName");
    }

    UE4::UObject* GetWorld() {
        auto GameViewport = GetChild(GetEngine(), "GameViewport");
        auto World = GetChild(GameViewport, "World");
        return World;
    }

    UE4::UObject* GetPlayerController() {
        auto OwningGameInstance = GetChild(GetWorld(), "OwningGameInstance");
        std::vector<UE4::UObject*> LocalPlayers = GetChildAsTArray<UE4::UObject>(OwningGameInstance, "LocalPlayers");
        auto PlayerController = GetChild(LocalPlayers[0], "PlayerController");
        return PlayerController;
    }

    UE4::UObject* GetPlayerState() {
        auto PlayerState = GetChild(GetPlayerController(), "PlayerState");
        return PlayerState;
    }

    UE4::UObject* GetPawn() {
        auto Pawn = GetChild(GetPlayerController(), "Pawn");
        return Pawn;
    }

    UE4::UObject* GetGameMode() {
        auto AuthorityGameMode = GetChild(GetWorld(), "AuthorityGameMode");
        return AuthorityGameMode;
    }

    UE4::UObject* GetGameState() {
        auto GameState = GetChild(GetGameMode(), "GameState");
        return GameState;
    }

    // Utility function implementations
    UE4::UObject* GetChild(UE4::UObject* parent, const std::string& name) {
        if (parent) {
            // Assuming parent->GetChildren() returns a list of child objects
            for (auto& child : parent->GetChildren()) {
                if (child->GetName() == name) {
                    return child;
                }
            }
        }
        return nullptr;
    }

    template<typename T>
    std::vector<T*> GetChildAsTArray(UE4::UObject* parent, const std::string& name) {
        std::vector<T*> children;
        if (parent) {
            for (auto& child : parent->GetChildren()) {
                if (child->GetName() == name) {
                    if (auto castedChild = dynamic_cast<T*>(child)) {
                        children.push_back(castedChild);
                    }
                }
            }
        }
        return children;
    }

    UE4::UClass* StaticClassImpl(const std::string& className) {
        return UE4::UObject::FindClass(className);
    }
}

template std::vector<UE4::UObject*> Game::GetChildAsTArray<UE4::UObject>(UE4::UObject* parent, const std::string& name);