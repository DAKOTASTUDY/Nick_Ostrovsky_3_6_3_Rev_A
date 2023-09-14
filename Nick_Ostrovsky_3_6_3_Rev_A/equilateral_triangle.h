#pragma once
#include <iostream>
#include "Triangle.h"
#include "error.h"
class equilateral_triangle : public Triangle
{
protected:
    //    int a1, b1, c1;
    //    int _a1, _b1, _c1;
    std::string name1 = "equilateral_triangle";
public:

    equilateral_triangle() : Triangle(30, 30, 30, 60, 60, 60) {};
    equilateral_triangle(int a) : Triangle(a, a, a, 60, 60, 60) { if (((a1 != b1) && (a1 != c1))) { throw error("Sides are not equal.", 2); } };
    void publication() override
   ;


};

