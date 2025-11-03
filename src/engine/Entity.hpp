#pragma once

#include <glm/glm.hpp>
namespace VoidEngine {
    class Entity {
        public:
            Entity();
            ~Entity();
        private:
            glm::vec3 position;
            glm::vec3 rotation;
            glm::vec3 scale;
    };
}