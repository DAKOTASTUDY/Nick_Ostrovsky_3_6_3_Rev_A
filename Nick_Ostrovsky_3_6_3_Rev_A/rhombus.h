#pragma once
#include <iostream>
#include "Quad.h"
#include "error.h"

class rhombus : public Quad
{
protected:
    //    int a1, b1, c1, d1, s;
    //    int _a1, _b1, _c1, _d1;
    std::string name1 = "rhombus";
public:
    rhombus() : Quad(30, 40, 30, 40, 40, 60, 40, 60) {};
    rhombus(int a, int b, int _a, int _b) : Quad(a, b, a, b, _a, _b, _a, _b) {
        if (((a1 != c1) || (b1 != d1)) || ((_a1 != _c1) || (_b1 != _d1))) { throw error("Rhombus is incorrect.", 7); }
    };
    //    void get_name() { std::cout << name << std::endl; }
    //
    void publication() override
        ;

};