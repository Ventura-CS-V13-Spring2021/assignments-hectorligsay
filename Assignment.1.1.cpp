// This program calculates the amount of generated ticket sales
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    const double Class_A = 15.00;
    const double Class_B = 12.00;
    const double Class_C = 9.00;

    // This will ask user for input and save it to a variable

    float a_input;
    float b_input;
    float c_input;

    cout << "How many tickets per class was sold? \n";
    cout << "Class A: ";
    cin >> a_input ;
    cout << "Class B: ";
    cin >> b_input ;
    cout << "Class C: ";
    cin >> c_input;
    cout << "\n";

    
    // This will compute the total of each class' sales and the total altogether

    double a_total = a_input * Class_A;
    double b_total = b_input * Class_B;
    double c_total = c_input * Class_C;
    double everything = a_total + b_total + c_total;

    // This will set the precision for the dollar ammounts
    cout << fixed << setprecision(2) ;

    // This will display the separate totals and the total amount altogether
    cout << "Total sales for Class A: $" << a_total << "." << endl;

    cout << "Total sales for Class B: $ "<< b_total << "." << endl;

    cout << "Total sales for Class C: $" << c_total << "." << endl;

    cout << "Total sales for all classes: $" << everything <<".";

    return 0;

}