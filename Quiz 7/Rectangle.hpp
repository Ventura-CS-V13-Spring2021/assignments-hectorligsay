#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "Coordinate.hpp"

class Rectangle
{
private:
    Coordinate lb;
    Coordinate rt;
    Coordinate center;
    double area;

public:
    Rectangle() : lb(0,0), rt(0,0) {} ;
    Rectangle(Coordinate lbval, Coordinate rtval)  
    {
        lb = lbval;
        rt = rtval;
        // Get the center
        double coordinate1 = (lb.getX()+(rt.getX() - lb.getX())) / 2 ;
        double coordinate2 = (lb.getY()+(rt.getY() - lb.getY())) / 2 ;
        center.setXY(coordinate1, coordinate2);
        // Gets the area
        area = ((rt.getX() - lb.getX()) * (rt.getY() - lb.getY()) );
    } ;
    Coordinate getLB() const;
    Coordinate getRT() const;
    double getArea();
    Coordinate getCenter();
    void setLBRT(Coordinate lbval, Coordinate rtval);
    void printRectangle() const;
};

#endif