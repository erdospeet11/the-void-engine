cmake_minimum_required(VERSION 3.10)
project(VoidGame)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Find GLFW
find_package(glfw3 REQUIRED)

# Include directories
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/../)

# Source files
set(SOURCES
    src/main.cpp
    ../void-engine/src/core/window.cpp
)

# Create executable
add_executable(VoidGame ${SOURCES})

# Link libraries
target_link_libraries(VoidGame glfw) 