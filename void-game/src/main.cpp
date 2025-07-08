#include <iostream>
#include "../../void-engine/include/core/window.h"
#include "../../void-engine/include/gui/text_renderer.h"

int main() {
    void_engine::VWindow window("Void Game", 800, 600);
    void_engine::TextRenderer textRenderer;
    
    textRenderer.loadFont("/usr/share/fonts/truetype/dejavu/DejaVuSans.ttf", 24);
    
    while (!window.shouldClose()) {
        textRenderer.renderText("Hello World!", 25.0f, 25.0f, 1.0f);
        
        window.update();
    }
    return 0;
}