#include "Coordinate.hpp"
#include "Rectangle.hpp"
#include <iostream>
using namespace std;

Coordinate getLB() const;
Coordinate getRT() const;
double getArea();
Coordinate getCenter();
void setLBRT(Coordinate lbval, Coordinate rtval);
void printRectangle() const;