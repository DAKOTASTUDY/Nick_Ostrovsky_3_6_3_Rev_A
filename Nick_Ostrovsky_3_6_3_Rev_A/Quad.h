#pragma once
#include <iostream>
#include "Figure.h"
class Quad : public Figure
{
protected:
    int a1, b1, c1, d1;
    int _a1, _b1, _c1, _d1;

public:
    Quad() : Figure(4, "Quad"), a1(10), b1(10), c1(10), d1(10), _a1(33), _b1(33), _c1(33), _d1(33) {};
    Quad(int a, int b, int c, int d, int a_, int b_, int c_, int d_) : Figure(4, " Quad "), a1(a), b1(b), c1(c), d1(d), _a1(a_), _b1(b_), _c1(c_), _d1(c) {};


    void publication() override;

};
