# Game Architecture

This document describes the game-level objects and scene management.

```mermaid
classDiagram
    class World {
        -vector~Entity*~ m_entities
        +addEntity(entity: Entity) void
        +removeEntity(entity: Entity) void
        +update(deltaTime: float) void
        +getEntities() vector~Entity*~
    }
    class Entity {
        -Vector3 position
        -Vector3 rotation
        -Vector3 scale
        -Mesh* m_mesh
        +update(deltaTime: float) void
        +getPosition() Vector3
    }

    World "1" *-- "*" Entity : manages
    Entity "0..*" -- "1" World : exists in
```

## Scene Management

- **World**: The container for all active game entities. It handles updating logic and provides entities to the renderer.
- **Entity**: The base class for all objects in the game world. Each entity has a transform (position, rotation, scale) and a mesh for rendering.
