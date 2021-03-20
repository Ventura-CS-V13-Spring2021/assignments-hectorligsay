#include <iostream>
#include <cstdlib>
#include <ctime>
#include <fstream>
using namespace std;

// This program will write the given number N of integers to a file
// The integers written to file will be determined by rand num generation
// # of integers N is determined by user input
// Generated N random numbers are stored into file 
int main()
{

    int rdnum;
    int N;
    ofstream    rdfile;                                         //ofstream will WRITE the file only

    rdfile.open("rdnum.txt");                                   // Opens file

    cout << "Enter the number of random numbers\n";             // lets user know what to type

    cin >> N;                                                   // Gives user's value to N


    // Creates seed for rand numbs and avoids pseudorandom number creation
    srand(time(NULL)); 
    
  
    for (int i = 0; i<N ; i++)
    {
        rdnum =(rand() % 100) + 1;
        rdfile << rdnum << endl;
    }

    rdfile.close();

}