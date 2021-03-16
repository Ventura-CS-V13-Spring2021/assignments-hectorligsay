#include <iostream>
using namespace std;

int main()
{
    int i;
    int range1, range2;

    range1 = 2;
    range2 = 10;
 
    for (range1; range1 <= range2; range1++) 
    {
        int small = 0;
        for (i = 2; i <= (range1/2); i++) 
        {
            if (range1 % i == 0) 
            {
                small ++ ; 
                break;
            }
        }

        if (  (small == 0 ) && range1!= 1) { cout << range1<< " is prime\n"; }
        else { cout << range1 << " is not prime\n"; }
    }
}