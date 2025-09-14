cmake_minimum_required(VERSION 3.16)
project(VoidEngine VERSION 1.0.0 LANGUAGES CXX)

# Set C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include(FetchContent)

# SDL2
FetchContent_Declare(
  SDL2
  GIT_REPOSITORY https://github.com/libsdl-org/SDL.git
  GIT_TAG release-2.30.9
)

set(SDL2_DISABLE_INSTALL ON CACHE BOOL "" FORCE)
set(SDL_SHARED OFF CACHE BOOL "" FORCE)
set(SDL_STATIC ON CACHE BOOL "" FORCE)

FetchContent_MakeAvailable(SDL2)

# Find OpenGL
find_package(OpenGL REQUIRED)

# GLM
FetchContent_Declare(
  glm
  GIT_REPOSITORY https://github.com/g-truc/glm.git
  GIT_TAG 1.0.1
)
FetchContent_MakeAvailable(glm)

# Assimp
FetchContent_Declare(
  assimp
  GIT_REPOSITORY https://github.com/assimp/assimp.git
  GIT_TAG v5.4.3
)

set(ASSIMP_BUILD_TESTS OFF CACHE BOOL "" FORCE)
set(ASSIMP_INSTALL OFF CACHE BOOL "" FORCE)
set(ASSIMP_BUILD_ZLIB ON CACHE BOOL "" FORCE)

FetchContent_MakeAvailable(assimp)

# Find GLEW
find_package(GLEW REQUIRED)

# Create executable for engine demo
# add_executable(VoidEngine main.cpp)

# Create executable for kendo game
add_executable(KendoGame 
  game/kendo.cpp
  engine/Window.cpp
  engine/Renderer.cpp
  engine/Mesh.cpp
)

target_link_libraries(KendoGame 
  PRIVATE 
  SDL2::SDL2-static
  SDL2::SDL2main
  OpenGL::GL
  GLEW::GLEW
  glm::glm
  assimp
)
target_include_directories(KendoGame PRIVATE ${SDL2_INCLUDE_DIRS} ${CMAKE_SOURCE_DIR}/engine)
