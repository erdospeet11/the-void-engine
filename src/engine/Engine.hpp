#pragma once

#include "Window.hpp"
#include "Renderer.hpp"
#include "PhysicsServer.hpp"

namespace VoidEngine{
    class Engine {
        public:
            Engine();
            ~Engine();
            void run();
        private:
            Window window;
            Renderer renderer;
            PhysicsServer physicsServer;
    };
}