#ifndef SQUARE_H
#define SQUARE_H

class Square {
    protected:
        int side;
    public:
        Square();
        Square(int s);
        ~Square();
        int getArea();
        int getPerimeter();
        void print();
};
#endif