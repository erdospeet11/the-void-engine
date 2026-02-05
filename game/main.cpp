#include <SDL3/SDL.h>
#include <stdio.h>
#include <stdlib.h>

#include "engine/Window.hpp"
#include "engine/Renderer.hpp"

using namespace engine;


#define SCREEN_WIDTH 1280
#define SCREEN_HEIGHT 720

int main() {
    Window window = Window(1280, 720);
    while(window.isOpen()){
        window.pollEvents();
    }
}