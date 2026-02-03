#include "Window.hpp"

namespace engine{

    void Window::init(){
        window = SDL_CreateWindow("Example: 0", 1280, 720, 0);
        renderer = SDL_CreateRenderer(window, NULL);
    }

    void Window::destroy(){
        SDL_DestroyRenderer(renderer);
        SDL_DestroyWindow(window);
    }
}
