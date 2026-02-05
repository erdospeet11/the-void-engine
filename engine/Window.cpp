#include "Window.hpp"

namespace engine{
    Window::Window(int w, int h) : width(w), height(h), m_handle(nullptr), is_Running(false) {
        SDL_Window *window = SDL_CreateWindow("Example: 0", w, h, 0);
    }

    void Window::destroy(){

    }
}
