//
// Created by sekol on 9/23/2022.
//
#include "fraction.h"

#ifndef _POINT_H
#define _POINT_H

class Point {

public:


    Point(Fraction _x=0,Fraction _y=0);
    ~Point() = default;

    Point operator+(Point rhs);
    Point operator-(Point rhs);
    Point operator*(Point rhs);

    bool operator==(Point rhs);
    bool operator!=(Point rhs);

    Fraction get_x() { return x; }
    Fraction get_y() { return y; }

private:
    Fraction
            x,
            y;

};

std::istream &operator>>(std::istream &is,Point &f);
std::ostream &operator<<(std::basic_istream<char> os, Point f);




#endif