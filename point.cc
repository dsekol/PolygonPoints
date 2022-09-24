//
// Created by sekol on 9/23/2022.
//

#include "point.h"
#include "fraction.h"

Point::Point(Fraction _x, Fraction _y){
    Point
        s;
    
}


Point Point::operator + (Point rhs) {
    //add two points
    Point
        s;
    s.x = x + rhs.x;
    s.y = y + rhs.y;
}


Point Point::operator - (Point rhs){
    //subtract two points
    Point
        s;
    s.x = x - rhs.x;
    s.y = y - rhs.y;
}

Point Point::operator * (Point rhs){
    //multiply a point by a fraction
    Fraction
        r;
    Point
        s;

    s.x = r*(x);
    s.y = r*(y);
}


bool Point::operator == (Point rhs) {

    if (x == rhs.x && y == rhs.y){
        return true;
    } else {
       return false;
   }

}
bool Point::operator != (Point rhs) {

    if(x != rhs.x || y != rhs.y){
        return true;
    } else {
        return false;
    }


}
