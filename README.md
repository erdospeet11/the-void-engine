void Engine v1.0 

cool stuff

- OpenGL 4.3? : Rendering
- SDL 2 : Window, Sound, Input, Events
- Jolt : Physics, Collisions
- Imgui : UI

<p align="center">
  <img src="https://i.pinimg.com/originals/c3/16/27/c3162775635d404d6462187ea4b5941f.gif" alt="VBlack Hole" />
</p>

How to build and run:

```
mkdir build
cd build
cmake ..
make
./VoidEngine
```

Engine
├── Game (manages overall game state, rules, assets)
│   ├── Level (specific game levels/scenes)
│   │   ├── Actor (game objects/entities)
│   │   ├── Camera
│   │   └── Scene Graph
│   ├── AssetManager (textures, models, sounds)
│   └── GameRules (scoring, win conditions, etc.)
├── Renderer (OpenGL rendering system)
├── Input (SDL2 input handling)
├── Audio (SDL2 audio system)
└── Physics (Jolt integration)