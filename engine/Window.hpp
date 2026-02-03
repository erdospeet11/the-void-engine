#include <SDL3/SDL.h>

namespace engine{
    class Window{
        private:
            SDL_Window* window;
            SDL_Renderer* renderer;

        public:
            void init();
            void destroy();
    };

}