#include "Window.hpp"
#include <GL/glew.h>

Window::Window(const std::string& title, int width, int height) {
    if (SDL_Init(SDL_INIT_VIDEO) < 0) {
        window = nullptr;
        open = false;
        return;
    }
    SDL_GL_SetAttribute(SDL_GL_CONTEXT_MAJOR_VERSION, 3);
    SDL_GL_SetAttribute(SDL_GL_CONTEXT_MINOR_VERSION, 3);
    SDL_GL_SetAttribute(SDL_GL_CONTEXT_PROFILE_MASK, SDL_GL_CONTEXT_PROFILE_CORE);
    window = SDL_CreateWindow(title.c_str(), SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, width, height, SDL_WINDOW_OPENGL | SDL_WINDOW_SHOWN);
    glContext = SDL_GL_CreateContext(window);
    if (glContext) {
        glewExperimental = GL_TRUE;
        GLenum err = glewInit();
        if (err != GLEW_OK) {
            open = false;
            return;
        }
    }
    open = window != nullptr && glContext != nullptr;
    SDL_GL_SetSwapInterval(1); // Enable vsync
}

Window::~Window() {
    if (glContext) SDL_GL_DeleteContext(glContext);
    if (window) SDL_DestroyWindow(window);
    SDL_Quit();
}

bool Window::isOpen() const {
    return open;
}

void Window::pollEvents() {
    while (SDL_PollEvent(&event)) {
        if (event.type == SDL_QUIT) {
            open = false;
        }
    }
}

SDL_Window* Window::getSDLWindow() const {
    return window;
}

SDL_GLContext Window::getGLContext() const {
    return glContext;
}

void Window::swapBuffers() {
    SDL_GL_SwapWindow(window);
}
