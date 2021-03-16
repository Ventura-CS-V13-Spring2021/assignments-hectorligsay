#include <iostream>
#include <iomanip>
using namespace std;

// this program finds the prime numbers in the given range
// Requirement:
// input (2 positive integers)
// output (The list of prime number list in given range)


int main()
{
    int range1 , range2 ;
    int i, p;


    do{
        cout << "Enter the range (first number must be smaller than second): " << endl;
        cin >> range1 >> range2;
    } while (range1 >= range2 || range1 <2 || range2 <0) ;
    
    for ( p = range1; p <= range2; p++ )
    {
        if ( p== 0 || p== 1)
            continue;
        for (i = 2; i <= (p/ 2); i ++)
            if (p % i == 0)
                break;

        if ( i > (p/2) )
            cout << p << " is a prime number." << endl;

    }
    return 0;
}