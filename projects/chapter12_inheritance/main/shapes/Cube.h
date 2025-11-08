#ifndef CUBE_H
#define CUBE_H

#include "Square.h"

//with private inheritance, the base class public members become hidden in the derived class
//with public inheritance, the base class public members become public in the derived class

class Cube: public Square {
    public:
        Cube();
        Cube(int s);
        ~Cube();
        int getVolume();
        int getSurfaceArea();
        void print();
};

#endif