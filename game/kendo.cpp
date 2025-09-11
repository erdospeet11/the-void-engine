#include "Engine.hpp"
#include "Window.hpp"
#include <stdio.h>
#include <iostream>

int main(){
    Engine engine;
    Window window("Kendo", 800, 600);
    
    try{
        engine.run();
    } catch (int errorCode){
        std::cout << "Error occurred: " << errorCode;
    }

}