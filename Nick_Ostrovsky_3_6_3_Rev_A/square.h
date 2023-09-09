#pragma once
#include <iostream>
#include "Quad.h"
class square : public Quad
{
protected:
    //    int a1, b1, c1, d1;
    //    int _a1, _b1, _c1, _d1;
    std::string name2 = "square";
public:
    square() : Quad(10, 10, 10, 10, 90, 90, 90, 90) {};
    square(int a) : Quad(a, a, a, a, 90, 90, 90, 90) {};
    //    void get_name() { std::cout << name << std::endl; }

    void publication() override
        ;

};