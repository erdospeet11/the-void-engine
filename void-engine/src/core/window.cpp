#include "void-engine/include/core/window.h"

namespace void_engine {
    VWindow::VWindow(const char* title, int width, int height)
        : m_Title(title), m_Width(width), m_Height(height) {
        m_Window = glfwCreateWindow(m_Width, m_Height, m_Title.c_str(), NULL, NULL);
    }
}