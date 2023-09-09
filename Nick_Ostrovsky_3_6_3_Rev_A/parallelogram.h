#pragma once
#include <iostream>
#include "Quad.h"

class parallelogram : public Quad
{
protected:
    //    int a1, b1, c1, d1;
    //    int _a1, _b1, _c1, _d1;
    std::string name1 = "parallelogram";
public:
    parallelogram() : Quad(30, 40, 30, 40, 40, 60, 40, 60) {};
    parallelogram(int a, int b) : Quad(a, b, a, b, 90, 90, 90, 90) {};
    //    void get_name() { std::cout << name << std::endl; }

    void publication() override;
    

};

