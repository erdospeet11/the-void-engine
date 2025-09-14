#pragma once

#include <iostream>
#include <vector>

#include "Mesh.hpp"

class Renderer {
public:
    Renderer();
    ~Renderer();

    void Clear();
    void Draw();
    void Submit(Mesh* mesh);
private:
    std::vector<Mesh*> meshes;
};