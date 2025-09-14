#pragma once
#include <GL/glew.h>
#include <glm/glm.hpp>

class Mesh {
public:
    Mesh();
    virtual ~Mesh();
    virtual void render();
protected:
    GLuint VAO, VBO, EBO;
    GLuint shaderProgram;
    glm::vec3 position;
    glm::vec3 rotation;
    glm::vec3 scale;
};

class CubeMesh : public Mesh {
public:
    CubeMesh();
    void render() override;
};