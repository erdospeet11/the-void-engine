cmake_minimum_required(VERSION 3.20)

project(the-void-engine)

find_package(SDL3 REQUIRED)
find_package(glad REQUIRED)

add_executable(VoidEngine 
    game/main.cpp
    engine/Window.cpp
    engine/Window.hpp
    engine/Triangle.hpp
    engine/Triangle.cpp
)

target_link_libraries(VoidEngine PRIVATE sdl::sdl glad::glad)