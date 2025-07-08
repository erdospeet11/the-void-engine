#include "void-engine/include/gui/text_renderer.h"
#include <GLFW/glfw3.h>
#include <iostream>

namespace void_engine {
    TextRenderer::TextRenderer() : m_Face(nullptr) {
        if (FT_Init_FreeType(&m_FreeType)) {
            std::cerr << "ERROR::FREETYPE: Could not init FreeType Library" << std::endl;
        }
    }

    TextRenderer::~TextRenderer() {
        if (m_Face) {
            FT_Done_Face(m_Face);
        }
        FT_Done_FreeType(m_FreeType);
        
        for (auto& pair : m_Characters) {
            glDeleteTextures(1, &pair.second.textureID);
        }
    }

    bool TextRenderer::loadFont(const std::string& fontPath, unsigned int fontSize) {
        if (FT_New_Face(m_FreeType, fontPath.c_str(), 0, &m_Face)) {
            std::cerr << "ERROR::FREETYPE: Failed to load font: " << fontPath << std::endl;
            return false;
        }

        FT_Set_Pixel_Sizes(m_Face, 0, fontSize);

        generateCharacters();
        
        return true;
    }

    void TextRenderer::generateCharacters() {
        glPixelStorei(GL_UNPACK_ALIGNMENT, 1);

        for (unsigned char c = 0; c < 128; c++) {
            if (FT_Load_Char(m_Face, c, FT_LOAD_RENDER)) {
                std::cerr << "ERROR::FREETYTPE: Failed to load Glyph" << std::endl;
                continue;
            }

            unsigned int texture;
            glGenTextures(1, &texture);
            glBindTexture(GL_TEXTURE_2D, texture);
            glTexImage2D(
                GL_TEXTURE_2D,
                0,
                GL_RED,
                m_Face->glyph->bitmap.width,
                m_Face->glyph->bitmap.rows,
                0,
                GL_RED,
                GL_UNSIGNED_BYTE,
                m_Face->glyph->bitmap.buffer
            );

            glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_CLAMP_TO_EDGE);
            glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_CLAMP_TO_EDGE);
            glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
            glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);

            Character character = {
                texture,
                static_cast<int>(m_Face->glyph->bitmap.width),
                static_cast<int>(m_Face->glyph->bitmap.rows),
                m_Face->glyph->bitmap_left,
                m_Face->glyph->bitmap_top,
                static_cast<unsigned int>(m_Face->glyph->advance.x)
            };
            m_Characters.insert(std::pair<char, Character>(c, character));
        }
        glBindTexture(GL_TEXTURE_2D, 0);
    }

    void TextRenderer::renderText(const std::string& text, float x, float y, float scale) {
        std::cout << "Rendering text: " << text << " at (" << x << ", " << y << ")" << std::endl;
    }
} 