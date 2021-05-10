#include "Coordinate.hpp"
#include "Rectangle.hpp"
#include <iostream>
using namespace std;

Rectangle::Rectangle() 
    {Coordinate x; Coordinate y; setLBRT(x,y);}
Rectangle::Rectangle(Coordinate lbval, Coordinate rtval)  
    {setLBRT(lbval,rtval);}

Coordinate Rectangle::getLB() const{
    return lb;
}
Coordinate Rectangle::getRT() const{
    return rt;
}
double Rectangle::getArea(){
    return area;
}
Coordinate Rectangle::getCenter(){
    return center;
}
void Rectangle::setLBRT(Coordinate lbval, Coordinate rtval){
    lb = lbval;
    rt = rtval;

    // Get the center
    double coordinate1 = (lb.getX()+(rt.getX() - lb.getX())) / 2 ;
    double coordinate2 = (lb.getY()+(rt.getY() - lb.getY())) / 2 ;
    center.setXY(coordinate1, coordinate2);

    // Gets the area
    area = ((rt.getX() - lb.getX()) * (rt.getY() - lb.getY()) );
 
}
void Rectangle::printRectangle() const{
    cout << "Left Bottom coordinate: " << endl;
    lb.printXY();
    cout << "Right Top coordinate: " << endl;
    rt.printXY();
    cout << "Center coordinate: " << endl;
    center.printXY() ;
    cout << "Area: " << area << endl;
}