#include <iostream>
#include "Triangle.h"



    void Triangle::publication() 
    {
        Figure::publication();
        std::cout << "\n " << get_name() << std::endl;
        std::cout << "Sides: " << " Side A: " << a1 << " Side B " << b1 << "Side C " << c1 << std::endl;
        std::cout << " Angles: " << " Angle A " << _a1 << " Angle B " << _b1 << " Angle C " << _c1 << std::endl;
    }


