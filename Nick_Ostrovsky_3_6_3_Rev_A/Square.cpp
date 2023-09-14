#include <iostream>
#include "square.h"

    void square::publication() 
    {
        Figure::publication();
        set_name(name2);
        std::cout << "\n\t" << get_name() << std::endl;
        std::cout << "Sides: " << " Side A: " << a1 << " Side B: " << b1 << "Side C:  " << c1 << "Side D: " << d1 << std::endl;
        std::cout << " Angle A: " << _a1 << " Angle B: " << _b1 << " Angle C: " << _c1 << " Side D: " << _d1 << std::endl;
    }

