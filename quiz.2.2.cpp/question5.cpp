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
    int p, i;

        cout << "Enter the range (first number must be larger than second): " << endl;
        cin >> range1 >> range2;

    for ( p = range1; p <= range2; p++ )
    {
        for (i = 2; i <= (p/2); i ++)
            if (p % i == 0)
                break;

        if ( i >= (p/2) )
            cout << p << " is a prime number." << endl;
        else
            cout << p << " is not prime" << endl;
    }
    return 0;
}