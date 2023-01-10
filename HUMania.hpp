#pragma once
#include<SDL.h>
#include "pigeon.hpp"
#include "bee.hpp"
#include "butterfly.hpp"
#include "unit.hpp"
#include "objectCreator.hpp"
#include<vector>
#include<list>
#include<typeinfo>
#include<iterator>
using namespace std;

class HUMania{

    //Right now we're creating one pigeon, just for practice. for details follow the guidlines 
    // Pigeon p1;

    //Create your list here
    vector<Unit*> flyers;
    // std::list<Unit*>::iterator it;

    public:
    void drawObjects(); 
    void createObject(int, int);
    void removeObject(Unit*);
    // create destructor which deletes all dynamic objects
};