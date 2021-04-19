// This program will find the greatest value out of the 3 numbers input form user 

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int num1, num2, num3;
    int current_max;

    cout << "Enter 3 random numbers: ";
    cin >> num1 >> num2 >> num3;

    current_max = num1;

    if ( current_max < num2 )
        current_max = num2;
    if ( current_max < num3 )
        current_max = num3;

    cout << "The max value is " << current_max << endl;

    return 0;

}