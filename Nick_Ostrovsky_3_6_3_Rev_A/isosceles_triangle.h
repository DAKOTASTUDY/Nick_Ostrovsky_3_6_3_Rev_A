#pragma once
#include <iostream>
#include "Triangle.h"
#include "error.h"
class isosceles_triangle : public Triangle
{
protected:
    //    int a1, b1, c1;
    //    int _a1, _b1, _c1;
    std::string name1 = "isosceles_triangle";
public:

    isosceles_triangle() : Triangle(10, 30, 10, 80, 50, 50) {};
    isosceles_triangle(int a, int b, int a_, int b_, int c_) : Triangle(a, b, a, a_, b_, c_) {
        if (a1 != c1) { throw error("A not equal to C.", 3); }
    };
    void publication() override;
    


};