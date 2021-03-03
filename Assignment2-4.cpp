#include <iostream>
#include <iomanip>
using namespace std;

// This program displays the alphabets by using ASCII code values 65-90

// ex: use while loop and print 5 characters per line
// A B C D E
// F G H I J
// K L M N O
// ...
// Z

int main()
{
    
    int i = 65;

    while (i < 91)
    {
        if (i % 5 == 4)
        {
            cout << static_cast<char>(i)<< " " << endl;
        } 
        else
        {
            cout << static_cast<char>(i) << " ";
        }

        i ++;
    }
    return 0;
}