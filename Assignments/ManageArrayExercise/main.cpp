#include <iostream>
#include <iostream>
#include <cmath>
#include "arrayfunction.hpp"
using namespace std;

//main.cpp

int main()
{
    IntegerArray        N;

    cout << endl;
    cout << "ORIGINAL ARRAY \n";
    N.fillUp();
    N.printAll();
    cout << "Current length is " << N.getLength() << endl;
    cout << endl;

    // Get last elm 
    cout << "The last element is : " ;
    N.getLastelm();
    cout << endl;

    cout << endl;
    cout << "After sorting (least to greatest): \n";
    N.sortAsc();
    N.printAll();
    cout << "Current length is " << N.getLength() << endl;
    cout << endl;
    

    cout << "Removing the last element: \n" ;
    N.removeLastelm();
    N.printAll();
    cout << "Current length is " << N.getLength() << endl;
    cout << endl;

    cout << "Append the element: \n";
    N.appendElement(100);
    N.printAll();
    cout << "Current length is " << N.getLength() << endl;
    cout << endl;
}