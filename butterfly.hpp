#pragma once
#include <SDL.h>
#include "drawing.hpp"
#include "unit.hpp"

class Butterfly : public Unit{
    int frame = 0;
    bool anime_up = false;
    bool ttd = false;
    public:
    char name = 'b';
    void fly();
    Butterfly(int x, int y);
};
