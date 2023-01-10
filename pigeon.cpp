#pragma once
#include "pigeon.hpp"
// pigeon implementation will go here.


// in project implementation this draw function should only be in superclass
// void Pigeon::draw(){
//     SDL_RenderCopy(Drawing::gRenderer, Drawing::assets, &srcRect, &moverRect);
// }
Pigeon::Pigeon(int x, int y) : Unit(){
    // src coorinates from assets.png file, they have been found using spritecow.com
    Unit::srcRect = {7,88,160,103};

    // it will display pigeon on x = 30, y = 40 location, the size of pigeon is 50 width, 60 height
    Unit::moverRect = {x, y, 50, 50};
}

// fly() is overrided from the superclass
void Pigeon::fly(){
    // 
    moverRect.x += 5;
    if(moverRect.x > 1000) moverRect.x = 0;
    switch(frame){
        case 0: srcRect = {0, 237, 153, 84}; frame = 1; break;
        case 1: srcRect = {2, 361, 159, 124} ; frame = 2; break;
        case 2: srcRect = {7, 88, 155, 103}; frame = 0; break;
    }
}

