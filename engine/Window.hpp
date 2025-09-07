#pragma once
#include <SDL2/SDL.h>
#include <string>

class Window {
public:
    Window(const std::string& title, int width, int height);
    ~Window();
    bool isOpen() const;
    void pollEvents();
    SDL_Window* getSDLWindow() const;
    void swapBuffers();
    SDL_GLContext getGLContext() const;
private:
    SDL_Window* window;
    SDL_GLContext glContext;
    SDL_Event event;
    bool open;
};