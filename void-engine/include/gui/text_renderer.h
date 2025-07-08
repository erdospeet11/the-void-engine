#pragma once

#include <ft2build.h>
#include FT_FREETYPE_H
#include <string>
#include <map>

namespace void_engine {
    struct Character {
        unsigned int textureID;
        int sizeX, sizeY;
        int bearingX, bearingY;
        unsigned int advance;
    };

    class TextRenderer {
    public:
        TextRenderer();
        ~TextRenderer();
        
        bool loadFont(const std::string& fontPath, unsigned int fontSize);
        void renderText(const std::string& text, float x, float y, float scale = 1.0f);
        
    private:
        FT_Library m_FreeType;
        FT_Face m_Face;
        std::map<char, Character> m_Characters;
        
        bool initializeOpenGL();
        void generateCharacters();
    };
} 