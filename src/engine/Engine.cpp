#include "Engine.hpp"
#include "Window.hpp"
#include "Renderer.hpp"

namespace VoidEngine{
    Engine::Engine() : window("VoidEngine", 640, 480){
        // Nothing to do here
        renderer = Renderer();
    }

    Engine::~Engine(){
        // Nothing to do here
        // delete renderer;
    }

    void Engine::run(){
        window.pollEvents();
        window.swapBuffers();
        window.clear();
    }
}