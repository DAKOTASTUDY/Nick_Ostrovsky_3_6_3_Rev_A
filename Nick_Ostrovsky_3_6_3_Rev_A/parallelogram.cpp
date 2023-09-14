#include <iostream>
#include "parallelogram.h"



    void parallelogram::publication() 
    {
        Figure::publication();
        set_name(name1);
        std::cout << "\n\t" << get_name() << std::endl;
        std::cout << "Sides: " << " Side A: " << a1 << " Side B: " << b1 << "Side C: " << c1 << "Side D: " << d1 << std::endl;
        std::cout << "Angles: " << " Angle A: " << _a1 << " Angle B: " << _b1 << " Angle C: " << _c1 << " Side D: " << _d1 << std::endl;
    }


