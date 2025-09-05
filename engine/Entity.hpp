#pragma once
#include "Mesh.hpp"

class Entity{
    public:
        Entity(Mesh* mesh = nullptr);
        ~Entity();
        void render();
    private:
        Mesh* _mesh;
};