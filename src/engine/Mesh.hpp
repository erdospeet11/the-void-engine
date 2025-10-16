#pragma once

#include <string>

namespace VoidEngine {
    class Mesh {
        public:
            Mesh(const std::string& filename);
            ~Mesh() = default;
        private:
            std::string filename;
    };

    class PlaneMesh : public Mesh{
        public:
            PlaneMesh();
            ~PlaneMesh() = default;
        private:
            float width;
            float height;
    };
}