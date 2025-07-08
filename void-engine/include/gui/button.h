#pragma once

#include <string>
#include <GLFW/glfw3.h>

/*
    VButton is the class responsible for creating and managing the button.
*/

namespace void_engine {
    class VButton {
        public:
            VButton(int x, int y, int width, int height, std::string text);
            void render();
            void buttonPressed();

        private:
            int m_X;
            int m_Y;
            int m_Width;
            int m_Height;
            std::string m_Text;
            bool m_IsPressed;
            bool m_IsHovered;
            bool m_IsClicked;
            bool m_IsReleased;
    };
}