#include <SDL3/SDL.h>

namespace engine {
    class Renderer{
        private:
            SDL_Renderer* renderer;
        public:
            Renderer();
            ~Renderer();
            
            void clear();
    };
}