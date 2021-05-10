#include "Coordinate.hpp"
#include "Rectangle.hpp"
#include <iostream>
using namespace std;

Coordinate Rectangle::getLB() const{
    return lb;
}
Coordinate Rectangle::getRT() const{
    return rt;
}
double getArea(){
    return area;
    //area = ((rt.getx() - lb.getx())- (rt.gety() - lb.gety()) )* 2;
}
Coordinate setCenter(Coordinate val1, Coordinate val2){

    double centerval1 = (rt.getx() - lb.getx()) / 2 ;
    double centerval2 = (rt.gety() - lb.gety()) / 2 ;
    
}
void Rectangle::setLBRT(Coordinate lbval, Coordinate rtval){
    lb = lbval;
    rt = rtval;
}
void printRectangle() const{
    
}
