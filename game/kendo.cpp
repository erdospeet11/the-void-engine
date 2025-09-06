#include "Engine.hpp"
#include <stdio.h>
#include <iostream>

int main(){
    Engine engine;

    try{
        engine.run();
    } catch (int errorCode){
        std::cout << "Error occurred: " << errorCode;
    }

}