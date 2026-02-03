#include <glad/gl.h>
#include <SDL3/SDL.h>

namespace engine {
    unsigned int VBO;

    void initGraphics() {
        glGenBuffers(1, &VBO); 
    }
}