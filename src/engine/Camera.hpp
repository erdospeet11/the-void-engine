#pragma once

#include <glm/glm.hpp>

namespace VoidEngine {
    class Camera {
        public:
            Camera(glm::vec3 position, glm::vec3 rotation);
            ~Camera();
        private:
            glm::vec3 position;
            glm::vec3 rotation;
    };
}