
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
#include "error.h"

void print_info(Figure* figure);
int main()
{
    Figure a;
    Figure* _a = &a;
    try {
        Triangle b{ 111, 111, 111, 180, 180, 180 };
        Triangle* _b = &b;
        print_info(_b);
    }
    catch (error k1) {
        std::cout << k1.idnf <<"\t Error number:\t" << k1.num << std::endl;
    
        //Triangle* _b = &b;
    };
 //   Triangle* _b = &b;
    try {
       
        right_angle_triangle d;
        right_angle_triangle* m = &d;
        print_info(m);
    }
    catch (error k1) {
        std::cout << k1.idnf << "\t Error number:\t" << k1.num << std::endl;

        //Triangle* _b = &b;
    };
    /*right_angle_triangle d;
    right_angle_triangle* m = &d;*/

    try {
        
        isosceles_triangle e{ 333, 44, 60, 60, 60 };
        isosceles_triangle* _e = &e;
        print_info(_e);


    }
    catch (error k1) {
        std::cout << k1.idnf << "\t Error number:\t" << k1.num << std::endl;

       
    };

    try {

        equilateral_triangle f;
        equilateral_triangle* f1 = &f;
        print_info(f1);
    }
    catch (error k1) {
        std::cout << k1.idnf << "\t Error number:\t" << k1.num << std::endl;


    };

    try {

        rectangle k22;
        rectangle* k221 = &k22;
        print_info(k221);
    }
    catch (error k1) {
        std::cout << k1.idnf << "\t Error number:\t" << k1.num << std::endl;


    };
    try {

        square l;
        square* l1 = &l;
        print_info(l1);
    }
    catch (error k1) {
        std::cout << k1.idnf << "\t Error number:\t" << k1.num << std::endl;


    };
    try {

        parallelogram z;
        parallelogram* z1 = &z;
        print_info(z1);
    }
    catch (error k1) {
        std::cout << k1.idnf << "\t Error number:\t" << k1.num << std::endl;


    };
    try {

        rhombus n;
        rhombus* n1 = &n;
        print_info(n1);
    }
    catch (error k1) {
        std::cout << k1.idnf << "\t Error number:\t" << k1.num << std::endl;


    };

    /*isosceles_triangle e{ 333, 44, 60, 60, 60 };
    isosceles_triangle* _e = &e;*/
  //  equilateral_triangle f;
    //equilateral_triangle* f1 = &f;
    /*rectangle k22;
    rectangle* k221 = &k22;*/
    /*square l;
    square* l1 = &l;*/
   /* parallelogram z;
    parallelogram* z1 = &z;*/
    /*rhombus n;
    rhombus* n1 = &n;*/
    print_info(_a);
    //print_info(_b);
   // print_info(m);
   // print_info(_e);
   // print_info(f1);
    /*print_info(k221);*/
    /*print_info(l1);*/
   /* print_info(z1);
    print_info(n1);*/
    return 0;
}

void print_info(Figure* figure)
{
    figure->publication();
}
