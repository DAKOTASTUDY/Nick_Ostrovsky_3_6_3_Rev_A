#pragma once
#include <iostream>
#include "Triangle.h"
class equilateral_triangle : public Triangle
{
protected:
    //    int a1, b1, c1;
    //    int _a1, _b1, _c1;
    std::string name1 = "equilateral_triangle";
public:

    equilateral_triangle() : Triangle(30, 30, 30, 60, 60, 60) {};
    equilateral_triangle(int a) : Triangle(a, a, a, 60, 60, 60) {};
    void publication() override
   ;


};

