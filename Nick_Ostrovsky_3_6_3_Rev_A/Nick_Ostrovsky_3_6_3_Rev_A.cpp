
#include <iostream>
#include "Figure.h"
#include "triangle.h"
#include "Right_angle_triangle.h"
#include "isosceles_triangle.h"
#include "equilateral_triangle.h"
#include "rectangle.h"
#include "square.h"
#include "Quad.h"
#include "parallelogram.h"
#include "rhombus.h"

void print_info(Figure* figure);
int main()
{
    Figure a;
    Figure* _a = &a;
    Triangle b{ 111, 111, 111, 180, 180, 180 };
    Triangle* _b = &b;
    right_angle_triangle d;
    right_angle_triangle* m = &d;
    isosceles_triangle e{ 333, 44, 60, 60, 60 };
    isosceles_triangle* _e = &e;
    equilateral_triangle f;
    equilateral_triangle* f1 = &f;
    rectangle k;
    rectangle* k1 = &k;
    square l;
    square* l1 = &l;
    parallelogram z;
    parallelogram* z1 = &z;
    rhombus n;
    rhombus* n1 = &n;
    print_info(_a);
    print_info(_b);
    print_info(m);
    print_info(_e);
    print_info(f1);
    print_info(k1);
    print_info(l1);
    print_info(z1);
    print_info(n1);
    return 0;
}

void print_info(Figure* figure)
{
    figure->publication();
}
