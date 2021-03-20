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

    //These will show the actual numbers of lines that will be set
    // This is good to add for developers to check information
    //                              rdfile << N << endl;

    // Creates seed for rand numbs and avoids pseudorandom numbers 
    srand(time(0)); 
  
    // Below will loop numbers before user input N and shows them on N amount of lines.
    // Don't forget to initialize i or else it will NOT work
    // random() will create one set of random numbers
    // arc4random() will create new randoms every time you run it
    for (int i = 0; i<N ; i++)
    {
        rdnum = rand() % 100;
        rdfile << rdnum << endl;
    }

    rdfile.close();

}