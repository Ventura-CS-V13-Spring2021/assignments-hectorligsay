#include <iostream>                                         
#include <fstream>                                                           
using namespace std;    

// This program will ask for user input to create a range of numbers, and then check if these numbers are prime.

int main()
{
    int range1 , range2 ;
    int p, i;

    do
    {
    cout << "Enter two numbers for the range (first number MUST be smaller): " << endl;     
    cin >> range1 >> range2;                                                            //Asks for user input and assigns to variable
    }

    while (!(range1 <= range2));                                                        //If range1 is greater than range 2, it will ask for input again (verifier)

    for ( p = range1; p <= range2; p++ )                                                //Goes through the range of numbers 
    {
    for (i = 2; i <= p; i ++)                                                           //Checks if there are other numbers that can divide into the selected number
        if (p % i == 0)                                                                    
            break;                                                                      //Breaks out of loop once the number can be divisible by i

    // Once broken out of loop, if i is greater than or equal to p, then we know that the number is only divisible by itself and 1. 
    // ELSE: The number isn't prime! 
    if ( i >= p )                                                                           
        cout << p << " is a prime number." << endl;
    else
        cout << p << " is not prime" << endl;
    }

    

}