// This program will convert Celsius temperatures to Fahrenheit temperatures
#include <iostream>
using namespace std;

int main()
{
    // This will get user's input for temp in Fahrenheit and assign it to a variable
    
    float Celsius, fahrenheit;

    cout << "Hello! What is the temperature by Celcius?: ";
    cin >> Celsius;
    cout << endl;

    // This will calculate celsius amount to fahrenheit
    fahrenheit = (9.0 / 5.0) * Celsius + 32;

    // This is return the value in fahrenheit to the terminal
    cout <<"Celcius " << Celsius<< " is " <<fahrenheit <<" Farentheit.\n";

    return 0;

}