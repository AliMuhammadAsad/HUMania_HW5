#pragma once
#include "butterfly.hpp"

Butterfly::Butterfly(int x, int y) : Unit(){
    Unit::srcRect = {256, 24, 174, 134};
    Unit::moverRect = {x, y, 50, 50};
}

void Butterfly::fly(){
    moverRect.x += 3; //moverRect.y += 5;
    if(moverRect.x > 1000) moverRect.x = 0;
    if(anime_up == false){
        if(moverRect.y <= 560) moverRect.y += 3;
        else if(moverRect.y > 560){moverRect.y -= 3; anime_up = true;}
    }
    else if(anime_up == true){
        if(moverRect.y >= 0) moverRect.y -= 3;
        else if(moverRect. y < 0){moverRect.y += 3; anime_up = false;}
    }

    switch(frame){
        case 0: srcRect = {257, 182, 192, 214}; frame = 1; break;
        case 1: srcRect = {248, 433, 247, 178} ; frame = 2; break;
        case 2: srcRect = {256, 24, 174, 134}; frame = 0; break;
    }
}