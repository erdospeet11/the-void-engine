#pragma once

#include <vector>

#include "Entity.hpp"

namespace VoidEngine {
    class PhysicsServer {
        public:
            PhysicsServer();
            ~PhysicsServer();
        private:
            Entity* entities[1000];
            int entityCount;

            void addEntity(Entity* entity);
            void removeEntity(Entity* entity);
            void updateEntity(Entity* entity);
            void drawEntity(Entity* entity);
            void physicsUpdate();
            void render();
    };
}