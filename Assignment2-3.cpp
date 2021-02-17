#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    char  selection;
    cout << "Enter your choice among A, B, C\n";
    cin >> selection;

    switch (selection)
    {
        case 'A':
            cout << "Your choice is A\n";
            break;
        case 'B':
            cout << "Your choice is B\n";
            break;
        case 'C':
            cout << "Your choice is C\n";
            break;
        default:
            cout << "Not good choice\n";
            break;
    }

     return 0;
}