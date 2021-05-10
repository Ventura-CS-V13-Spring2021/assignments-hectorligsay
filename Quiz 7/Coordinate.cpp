#include "Coordinate.hpp"
#include <iostream>
using namespace std;

int Coordinate::getX() const{
    return x;
}
int Coordinate::getY() const{
    return y;
}
void Coordinate::setXY(double xval, double yval){
    x = xval;
    y = yval;
}
void Coordinate::printXY() const{
    cout << "X-val: " << x << "/ Y-val: " << y << endl;
}