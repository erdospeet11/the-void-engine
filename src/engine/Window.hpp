#pragma once

#include <SDL.h>
#include <SDL_opengl.h>
#include <string>

#include "Renderer.hpp"

namespace VoidEngine {
    class Window {
        public:
            Window(const std::string& title, int width, int height);
            ~Window();
            void swapBuffers();
            void clear();
            bool shouldClose();
            void pollEvents();
            void render();
        private:
            SDL_Window* window;
            SDL_GLContext glContext;
            Renderer renderer;
            bool quit;
    };
};