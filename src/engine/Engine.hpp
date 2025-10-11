#pragma once

#include "Window.hpp"
#include "Renderer.hpp"

namespace VoidEngine{
    class Engine {
        public:
            Engine();
            ~Engine();
            void run();
        private:
            Window window;
            Renderer renderer;
    };
}