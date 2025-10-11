#include "../engine/Window.hpp"
#include "../engine/Engine.hpp"

int main(int argc, char* args[])
{
    VoidEngine::Engine engine;

    engine.run();

    // Create window with OpenGL context
    VoidEngine::Window window("void", 640*2, 480*2);

    // Main loop
    while (!window.shouldClose()) {
        window.pollEvents();

        // Clear screen
        window.clear();

        // Render

        // Swap buffers
        window.swapBuffers();
    }

    return 0;
}