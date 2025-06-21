#include <iostream>
#include "include/core/window.h"

int main() {
    void_engine::VWindow window("Void Window", 800, 600);
    while (!window.shouldClose()) {
        window.update();
    }
    return 0;
}