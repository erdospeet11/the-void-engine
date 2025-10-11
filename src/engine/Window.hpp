#pragma once

#include <SDL.h>
#include <SDL_opengl.h>
#include <string>

namespace VoidEngine {
    class Window {
        public:
            Window(const std::string& title, int width, int height);
            ~Window();
            void swapBuffers();
            void clear();
            bool shouldClose();
            void pollEvents();
        private:
            SDL_Window* window;
            SDL_GLContext glContext;
            bool quit;
    };
};