cmake_minimum_required(VERSION 3.15)
project(VoidEngine)

find_package(SDL2 REQUIRED)

find_package(assimp REQUIRED)

find_package(glm REQUIRED)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# Add globs
file(GLOB GAME_SOURCES "src/game/*.cpp")
file(GLOB ENGINE_SOURCES "src/engine/*.cpp")

add_executable(${PROJECT_NAME} 
    ${GAME_SOURCES}
    ${ENGINE_SOURCES}
)


target_include_directories(${PROJECT_NAME} PRIVATE src)

target_link_libraries(${PROJECT_NAME} SDL2::SDL2 assimp::assimp glm::glm)