cmake_minimum_required(VERSION 3.16)
project(VoidEngine VERSION 1.0.0 LANGUAGES CXX)

# Set C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Find packages (provided by Conan)
find_package(SDL2 REQUIRED)
find_package(glm REQUIRED)
find_package(OpenGL REQUIRED)

# Create executable
add_executable(VoidEngine 
  engine/Engine.cpp
  engine/Window.cpp
  engine/Mesh.cpp
  engine/Renderer.cpp
  game/kendo.cpp
)

# Link libraries
target_link_libraries(VoidEngine 
  PRIVATE 
  SDL2::SDL2
  SDL2::SDL2main
  OpenGL::GL
  glm::glm
)
