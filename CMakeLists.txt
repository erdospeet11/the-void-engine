cmake_minimum_required(VERSION 3.15)
project(VoidEngine)

find_package(SDL2 REQUIRED)

find_package(assimp REQUIRED)

find_package(glm REQUIRED)

add_executable(${PROJECT_NAME} 
    src/game/main.cpp
    src/engine/Window.cpp
    src/engine/Engine.cpp
    src/engine/Renderer.cpp
    src/engine/Camera.cpp
)


target_include_directories(${PROJECT_NAME} PRIVATE src)

target_link_libraries(${PROJECT_NAME} SDL2::SDL2 assimp::assimp glm::glm)