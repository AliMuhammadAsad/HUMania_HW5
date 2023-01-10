#pragma once
#include <SDL.h>
#include "drawing.hpp"
#include "unit.hpp"

class Bee : public Unit{
    int frame = 0;
    bool hover = false; int hover_frame = 10;
    // bool ttd = false;
    public:
    char name = 'd';
    void fly();
    Bee(int x, int y);
    bool del_child();
};
