#include <SDL3/SDL.h>

namespace engine{
    class Window{
        private:
            SDL_Window* m_handle;
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
    };

}