cmake_minimum_required(VERSION 3.16)
project(VoidEngine VERSION 1.0.0 LANGUAGES CXX)

# Set C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include(FetchContent)

# SDL2
find_package(PkgConfig REQUIRED)
pkg_check_modules(SDL2 REQUIRED sdl2)

# Find OpenGL
find_package(OpenGL REQUIRED)

# GLM
FetchContent_Declare(
  glm
  GIT_REPOSITORY https://github.com/g-truc/glm.git
  GIT_TAG 0.9.9.8
)
FetchContent_MakeAvailable(glm)

# Create executable
add_executable(VoidEngine main.cpp)

# Link libraries
target_link_libraries(VoidEngine 
  PRIVATE 
  ${SDL2_LIBRARIES}
  OpenGL::GL
  glm::glm
)

target_include_directories(VoidEngine PRIVATE ${SDL2_INCLUDE_DIRS})