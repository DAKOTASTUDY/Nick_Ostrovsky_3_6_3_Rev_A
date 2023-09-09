#pragma once
#include <iostream>
#include "Triangle.h"
class right_angle_triangle : public Triangle
{
protected:
    
    std::string name1 = "right_angle_triangle";
public:

    right_angle_triangle() : Triangle((10), 10, 10, 45, 45, 90) {};
    right_angle_triangle(int a, int b, int c, int a_, int b_) : Triangle(a, b, c, a_, b_, 90) {};

    void publication() override;
   


};