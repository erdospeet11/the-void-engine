#include <iostream>
#include "../../void-engine/include/core/window.h"

int main() {
    void_engine::VWindow window("Void Game", 800, 600);
    while (!window.shouldClose()) {
        window.update();
    }
    return 0;
}