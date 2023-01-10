#pragma once
#include<SDL.h>
#include "drawing.hpp"
#include "unit.hpp"

class Pigeon : public Unit{
    int frame = 0;
    
    public:
    char name = 'p';
    Pigeon(int x, int y);
    void fly();
};