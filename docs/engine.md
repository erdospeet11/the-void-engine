# Engine Architecture

This document describes the core systems of The Void Engine.

```mermaid
classDiagram
    class Window {
        -SDL_Window* m_handle
        -int m_width
        -int m_height
        -bool m_isRunning
        +Window()
        +~Window()
        +bool init(const char* title, int w, int h)
        +void pollEvents()
        +bool isOpen() const
        +void close()
        +SDL_Window* getHandle() const
    }

    class Renderer {
        -SDL_Renderer* m_renderer
        +Renderer()
        +~Renderer()
        +bool init(const Window& window)
        +void setClearColor(uint8_t r, uint8_t g, uint8_t b, uint8_t a)
        +void clear()
        +void present()
        +void destroy()
        +SDL_Renderer* getNativeRenderer() const
    }

    class Application {
        -Window m_window
        -Renderer m_renderer
        -bool m_isRunning
        +Application()
        +bool init()
        +void run()
        -void processInput()
        -void update()
        -void render()
    }

    Application *-- Window : owns
    Application *-- Renderer : owns
    Renderer ..> Window : renders to
```

## System Components

- **Application**: The entry point and main loop controller. It orchestrates the lifecycle of the Window and Renderer.
- **Window**: Encapsulates the SDL_Window, managing window state (size, title) and OS-level events.
- **Renderer**: Wraps the SDL_Renderer, providing high-level commands for clearing the screen, drawing primitives, and presenting the back buffer.
