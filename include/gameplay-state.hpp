#pragma once

namespace GlobalNamespace {
    class ScenesTransitionSetupData;
}

namespace MetaCore::Game::detail {
    // Internal lifecycle entry point. A null scene clears the current mode.
    void UpdateGameplayMode(GlobalNamespace::ScenesTransitionSetupData* scene);
}
