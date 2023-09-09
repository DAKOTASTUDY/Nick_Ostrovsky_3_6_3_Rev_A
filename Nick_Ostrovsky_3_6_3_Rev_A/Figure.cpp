#include <iostream>
#include "Figure.h"

    int Figure::get_side()
    {
        return side_count;
    };
    int Figure::side_out()
    {

        return get_side();
    };
    void Figure::set_name(std::string haise)
    {
        name = haise;


    };
    void Figure::publication()
    {
        std::cout << " \n\n\n\t Sides number: \n" << get_side() << std::endl;
    };
    std::string Figure::get_name()
    {
        return name;

    }

