#include <iostream>                                         // #include <bits/stdc++.h>   Use this in Replit if INT_MIN & INT_MAX don't work
#include <fstream>                                                           
using namespace std;                                           

// Questions for Tutoring:      1) How do I find max and min without using INT_MAX & INT_MIN?
//                              2) How do I make this happen when the file is opened just once? 
//                              3) Why won't arc4random work in replit?

// This program will read integers from the file in FileIO2-4-1.cpp
// This will find the total number of integers we read, and the summatino
// of all integers, the minimum and maximum value, and avg value

int main()
{
    
    int rdnum, min = INT_MAX, max = INT_MIN, count = 0;
    float sum = 0, avg;
    ifstream rdfile;                                        // ifstream allows you to READ file only

    rdfile.open("rdnum.txt");                               // Opens the file                      

    cout << "-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-\n";
    cout << "The random numbers are: " << endl;             // Displays the random numbers

    
    // Find the SUM
    while (rdfile >> rdnum )                                // USE WHILE LOOP instead of for loop to check whatever user input because for loop is too limited 
    {                                                       // Also don't use fail status or else it'll write last line twice                                      
        sum += rdnum;                               
        cout << rdnum << endl;
        count ++;

        if (rdnum > max)
        {
            max = rdnum;
        }

        else if (rdnum < min)                                            
        {
            min = rdnum;
        }
        avg = sum / count;                                              

    }

    // PRINTS OUT TO CONSOLE
    cout << "-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-\n";
    cout << "There are " << count << " random numbers." << endl;
    cout << "The sum of these numbers is " << sum << '.' << endl; 
    cout << setprecision(2) << "The average of these numbers is " << avg << '.' << endl;
    cout << "The minimum is " << min << '.' << endl;
    cout << "The maximum is " << max << '.' << endl;    
    rdfile.close();
}