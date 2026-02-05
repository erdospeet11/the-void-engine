#pragma once
#include <SDL3/SDL.h>
#include "engine/Renderer.hpp"
namespace engine{
    class Window{
        private:
            SDL_Window* m_handle;
            SDL_GLContext renderer;
            int height;
            int width;
            bool is_Running;
        public:
            Window(int w, int h);
            void destroy();
            void pollEvents();
            bool isOpen();
            void close();
            SDL_Window* getHandle();
            void render();
    };
}