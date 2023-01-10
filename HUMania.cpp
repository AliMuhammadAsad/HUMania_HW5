#pragma once
#include <iostream>
#include <typeinfo>
#include <iterator>
#include "HUMania.hpp"
using namespace std;

void HUMania::drawObjects(){
    // call draw functions of all the objects here
    // p1.draw();
    // for(Unit *d: flyers){
    //     d->draw(); d->fly();
    //     cout << "Type id is: "  << typeid(d).name() << endl;
    //     if(d->del_child() == true){
    //         delete d; cout << "Object Bee has been deleted from list\n";
    //     }
    // }
    for(int f = 0; f < flyers.size(); f++){
        flyers[f]->draw(); flyers[f]->fly();
        if(flyers[f]->del_child() == true){
            delete flyers[f]; flyers.erase(flyers.begin() + f);
            cout << "Bee has been deleted\n";
        }
    }
}

// creates new objects
void HUMania::createObject(int x, int y){
    std::cout << "Mouse clicked at: " << x << " -- " << y << std::endl;
    ObjectCreator obj;
    Unit *flying_object = obj.getObject(x, y);
    flyers.push_back(flying_object);
}

void HUMania::removeObject(Unit*){
    for(Unit *d: flyers){
        delete d;
    }
    flyers.clear();
}