#include "Rectangle.hpp"
#include "Coordinate.hpp"
#include <iostream>
using namespace std;

int main()
{
    Coordinate lbval(0.0, 0.0);
    Coordinate rtval(10.0, 10.0);


    Rectangle r1(lbval, rtval);
    // Rectangle r1;

    //Print's first rectangle's info
    cout << "FIRST RECTANGLE: " << endl;
    r1.printRectangle();
    cout << endl;

    //Prints 2nd rectangle's info
    cout << "SECOND RECTANGLE: " << endl;
    lbval.setXY(-20.0, -20.0);
    rtval.setXY(20.0, 20.0);
    r1.setLBRT(lbval, rtval);
    r1.printRectangle();

}