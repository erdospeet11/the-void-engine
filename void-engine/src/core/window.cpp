#include "void-engine/include/core/window.h"
#include <iostream>

namespace void_engine {
    VWindow::VWindow(const char* title, int width, int height) : m_Title(title), m_Width(width), m_Height(height), m_ShouldClose(false) {
        if (!glfwInit()) {
            std::cerr << "Failed to initialize GLFW" << std::endl;
            return;
        }
        
        m_Window = glfwCreateWindow(m_Width, m_Height, m_Title.c_str(), NULL, NULL);
        if (!m_Window) {
            std::cerr << "Failed to create GLFW window" << std::endl;
            glfwTerminate();
            return;
        }
        
        glfwMakeContextCurrent(m_Window);
    }

    VWindow::~VWindow() {
        if (m_Window) {
            glfwDestroyWindow(m_Window);
        }
        glfwTerminate();
    }

    bool VWindow::shouldClose() const {
        return m_ShouldClose;
    }

    void VWindow::update() {
        if (m_Window) {
            glfwPollEvents();
            glfwSwapBuffers(m_Window);
            m_ShouldClose = glfwWindowShouldClose(m_Window);
        }
    }
}