#include "Engine.hpp"
#include "Window.hpp"
#include "Renderer.hpp"
#include "Mesh.hpp"
#include <stdio.h>
#include <iostream>
#include <GL/glew.h>

int main(){
    Window window("Kendo", 800, 600);
    if (!window.isOpen()) {
        std::cerr << "Failed to open window!" << std::endl;
        return -1;
    }
    // Set OpenGL viewport and clear color
    glViewport(0, 0, 800, 600);
    glClearColor(0.1f, 0.1f, 0.1f, 1.0f);
    Renderer renderer;
    Mesh* testMesh = new Mesh();
    renderer.Submit(testMesh);
    while (window.isOpen()) {
        renderer.Clear();
        renderer.Draw();
        window.swapBuffers();
        window.pollEvents();
    }
    delete testMesh;
    return 0;
}