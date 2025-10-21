#pragma once

#include <string>
#include <vector>
#include <glm/glm.hpp>

#include "Shader.hpp"

namespace VoidEngine {
    struct Vertex{
        glm::vec3 position;
        glm::vec3 normal;
        glm::vec2 texcoords;
    };

    struct Texture{
        unsigned int id;
        std::string type;
    };

    class Mesh {
        public:
            //mesh data
            std::vector<Vertex> vertices;
            std::vector<unsigned int> indices;
            std::vector<Texture> textures;
            Mesh(std::vector<Vertex> vertices, std::vector<unsigned int> indices, std::vector<Texture> textures);
            void Draw(Shader& shader);

        private:
            std::string filename;
    };

    class Model : public Mesh {
        public:
            Model(std::string filename);
            void Draw(Shader& shader);
        private:
            std::vector<Mesh> meshes;
    };
}