#pragma once
#include "bee.hpp"

Bee::Bee(int x, int y) : Unit(){
    Unit::srcRect = {63, 619, 151, 166};
    Unit::moverRect = {x, y, 50, 50};
}

void Bee::fly(){
    switch(frame){
        case 0: srcRect = {234, 630, 163, 162}; frame = 1; break;
        case 1: srcRect = {409, 650, 171, 147} ; frame = 2; break;
        case 2: srcRect = {63, 619, 151, 166}; frame = 0; break;
    }

    //The hover functionality is implemented over here
    if(hover == false){
        moverRect.x += 5;
        int prob = rand() % 100;
        if(prob == 73 || prob == 37 || prob == 69 || prob == 42 || prob == 13) hover = true;
    } //Calculates probability for hover -> 5% chance -> 5% chance to randomly get any of these numbers from 0-99 [100 numbers and 5 choices]
    else if(hover == true){
        if(hover_frame != 0) hover_frame--;
        else if(hover_frame == 0){
            hover = false; hover_frame = 10;
        }
    } //If hover is true and 10 frames haven't passed yet, then it increases frames count, else it will reset frame count and hover will be set to false for bee to move again.
}

bool Bee::del_child(){
    if(moverRect.x >= 1000) return true;
    else return false;
}