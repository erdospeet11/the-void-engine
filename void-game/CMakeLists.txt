cmake_minimum_required(VERSION 3.10)
project(VoidGame)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Find GLFW, FreeType, and OpenGL
find_package(glfw3 REQUIRED)
find_package(OpenGL REQUIRED)
find_package(PkgConfig REQUIRED)
pkg_check_modules(FREETYPE REQUIRED freetype2)

# Include directories
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/../)
include_directories(${FREETYPE_INCLUDE_DIRS})
include_directories(/usr/include/freetype2)

# Source files
set(SOURCES
    src/main.cpp
    ../void-engine/src/core/window.cpp
    ../void-engine/src/gui/text_renderer.cpp
)

# Create executable
add_executable(VoidGame ${SOURCES})

# Link libraries
target_link_libraries(VoidGame glfw ${FREETYPE_LIBRARIES} ${OPENGL_LIBRARIES}) 