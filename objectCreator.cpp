#pragma once
#include "objectCreator.hpp"

Unit* ObjectCreator::getObject(int x, int y){
    int val = rand() % 3;
    if(val == 0){
        Unit* flying_object = new Pigeon(x, y);
        return flying_object;
    }
    else if(val == 1){
        Unit* flying_object = new Butterfly(x, y);
        return flying_object;
    }
    else if(val == 2){
        Unit* flying_object = new Bee(x, y);
        return flying_object;
    }
}