#include "../engine/Window.hpp"
#include "../engine/Engine.hpp"
#include "../engine/Mesh.hpp"

#include <assimp/Importer.hpp>
#include <assimp/scene.h>
#include <assimp/postprocess.h>

int main(int argc, char* args[])
{
    //VoidEngine::Engine engine;
    //engine.run();

    // Create window with OpenGL context
    VoidEngine::Window window("void", 640*2, 480*2);


    // ------------------------------------------------------------
    //                        ASSIMP TESTING
    // ------------------------------------------------------------
    Assimp::Importer importer;
    const aiScene* scene = importer.ReadFile("../src/game/assets/models/wizard.glb", aiProcess_Triangulate | aiProcess_FlipUVs);
    if (!scene) {
        std::cerr << "Error: " << importer.GetErrorString() << std::endl;
        return 1;
    }
    const aiMesh* mesh = scene->mMeshes[0];
    std::cout << "Mesh: " << mesh << std::endl;
    std::cout << "Mesh: " << mesh->mName.C_Str() << std::endl;

    // Main loop
    while (!window.shouldClose()) {
        window.pollEvents();

        // Clear screen
        window.clear();

        // Render
        window.render();

        // Swap buffers
        window.swapBuffers();
    }

    return 0;
}