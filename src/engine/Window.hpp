#include <SDL.h>
#include <string>

namespace VoidEngine {

class Window {
    public:
        Window(const std::string& title, int width, int height);
        ~Window();
        void update();
        void clear();
    private:
        SDL_Window* window;
        SDL_Renderer* renderer;
    };
};