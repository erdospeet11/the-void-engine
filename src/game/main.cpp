#include "../engine/Window.hpp"

//Screen dimension constants
const int SCREEN_WIDTH = 640;
const int SCREEN_HEIGHT = 480;

int main(int argc, char* args[])
{
    // Create window with OpenGL context
    VoidEngine::Window window("Void Engine", SCREEN_WIDTH, SCREEN_HEIGHT);

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