#pragma once
#include <iostream>
#include "Quad.h"
class rectangle : public Quad
{
protected:
    //    int a1, b1, c1, d1, s;
    //    int _a1, _b1, _c1, _d1;
    std::string name1 = "rectangle";
public:
    rectangle() : Quad(10, 10, 10, 10, 90, 90, 90, 90) {};
    rectangle(int a, int b) : Quad(a, a, b, b, 90, 90, 90, 90) {};


    void publication() override
        ;


};