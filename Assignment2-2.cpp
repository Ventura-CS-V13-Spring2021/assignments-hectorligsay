#include <iostream>
#include <iomanip>
using namespace std;

// This program checks for duplicated numbers within the input numbers

int main()
{
    int num1, num2, num3;

    cout << "Enter three integer values : \n";
    cin >> num1 >> num2 >> num3;

    if (num1 == num2 && num1 == num3 && num2 == num3)
        cout << "All numbers are the same";
    else if ( !(num1 == num2) && !(num1 == num3) && !(num2 == num3))
        cout << "All numbers are distinct";
    else if (num1 == num2 || num1 == num3 || num2 == num3)
        cout << "There are two duplicated numbers";
    return 0;
}