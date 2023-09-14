#pragma once
#include "Figure.h"
#include "error.h"
class Triangle : public Figure
{
protected:
    int a1, b1, c1;
    int _a1, _b1, _c1;

public:

    Triangle() : Figure(3, "Triangle"), a1(10), b1(10), c1(10), _a1(33), _b1(33), _c1(33) {};
    Triangle(int a, int b, int c, int a_, int b_, int c_) : Figure(3, " Triangle "), a1(a), b1(b), c1(c), _a1(a_), _b1(b_), _c1(c_) { if ((_a1 + _b1 + _c1) > 180) { throw error("Summ of triangle angles is greater then 180.", 1); } };

    void publication() override; 
    


};
