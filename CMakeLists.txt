cmake_minimum_required(VERSION 3.15)
project(VoidEngine)

find_package(SDL2 REQUIRED)

add_executable(${PROJECT_NAME} src/engine src/game/main.cpp)

target_link_libraries(${PROJECT_NAME} SDL2::SDL2)