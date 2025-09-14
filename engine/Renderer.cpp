#include <stdio.h>
#include <stdlib.h>
#include <SDL2/SDL.h>
#include <GL/glew.h>
#include <glm/glm.hpp>
#include <vector>
#include "Renderer.hpp"
#include "Mesh.hpp"

using namespace glm;

Renderer::Renderer() {
    std::cout << "Renderer initialized" << std::endl;
}

Renderer::~Renderer() {
    std::cout << "Renderer destroyed" << std::endl;
}

void Renderer::Clear() {
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
}

void Renderer::Draw() {
    for (auto mesh : meshes) {
        if (mesh) mesh->render();
    }
}

void Renderer::Submit(Mesh* mesh) {
    meshes.push_back(mesh);
}