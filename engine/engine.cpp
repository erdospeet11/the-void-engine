#include "engine.hpp"

#include <stdio.h>
#include <stdlib.h>
#include <SDL2/SDL.h>
#include <GL/gl.h>
#include <glm/glm.hpp>

using namespace glm;

Engine::Engine()
{
    printf("Engine Initalized!");
}

Engine::~Engine()
{
    printf("Engine Destroyed!");
}

void Engine::run()
{
    printf("Engine is running!");
}