#include <iostream>
#include <iomanip>
using namespace std;

// This program checks for duplicated numbers within the input numbers

int main()
{
    int num1, num2, num3;

    cout << "Enter three integer values : \n";
    cin >> num1 >> num2 >> num3;

    if ((num1 < 0) || (num1 > 99) || (num2 < 0) || (num2 > 99) || (num3 < 0) || (num3 > 99))
        {cout << "This is not a valid entry";}
        
    else
        if (num1 == num2 && num1 == num3 && num2 == num3)
        {
            cout << "These numbers are all duplicated: " << num1 << " " << num2 << " " << num3;
            }
        else if ( !(num1 == num2) && !(num1 == num3) && !(num2 == num3))
        {
            cout << "There are no duplicated numbers";
            }
        else if (num1 == num2 || num1 == num3 || num2 == num3){
            cout << "There are two duplicated numbers" << endl;
                if (num1 == num2)
                    cout << num1 << " " << num2;
                else if (num1 == num3)
                    cout << num1 << " " << num3;
                else if (num2 == num3)
                    cout << num2 << " " << num3;
                    }
    return 0;
}