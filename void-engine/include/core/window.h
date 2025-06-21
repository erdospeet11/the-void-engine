#pragma once

#include <GLFW/glfw3.h>
#include <string>

/*
    VWindow is the class responsible for creating and managing the window.
*/

namespace void_engine {
    class VWindow {
        public:
            VWindow(const char* title, int width, int height);
            ~VWindow();
            bool shouldClose() const;
            void update();

        private:
            GLFWwindow* m_Window;
            std::string m_Title;
            int m_Width;
            int m_Height;
            bool m_VSync;
            bool m_Fullscreen;
            bool m_ShouldClose;
    };
}