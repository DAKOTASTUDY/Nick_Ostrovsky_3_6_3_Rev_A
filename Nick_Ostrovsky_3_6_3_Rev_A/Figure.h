#pragma once
#include <iostream>
class Figure
{
private:
    int side_count;
    std::string name;
public:
    Figure() : side_count(0), name("Figure") {}
    Figure(int s_c, std::string n) : side_count(s_c), name(n) {}
    int get_side()
    ;
    int side_out()
   ;
    void set_name(std::string haise)
    ;
    virtual void publication()
   ;
    std::string get_name();
   

};