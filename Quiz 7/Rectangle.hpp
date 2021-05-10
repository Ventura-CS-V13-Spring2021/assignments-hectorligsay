#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "coordinate.hpp"

class Rectangle
{
private:
    Coordinate lb;
    Coordinate rt;
    Coordinate center;
    double area;

public:
    Rectangle(): lb(0), rt(0) {};
    Rectangle(Coordinate lbval, Coordinate rtval) : lb(lbval), rt(rtval) {};
    Coordinate getLB() const;
    Coordinate getRT() const;
    double getArea();
    Coordinate getCenter();
    void setLBRT(Coordinate lbval, Coordinate rtval);
    void printRectangle() const;
};