#pragma once
#include <stdio.h>

#include "Window.hpp"

class Engine {
    public:
        int myNum;
        void run(){
            printf("Hello");
        }
        Engine(){}
    private:
        int _window;       //TODO: Change to Window class
        int _game;         //TODO: Change to Game class
        int _renderer;     //TODO: Change to Renderer class
        int _input;        //TODO: Change to Input class
        int _audio;        //TODO: Change to Audio class
        int _physics;      //TODO: Change to Physics class
};