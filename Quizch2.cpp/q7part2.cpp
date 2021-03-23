#include <iostream>                                         
#include <fstream>   
#include <iomanip>                                                
using namespace std;    

// This program will astore Employee Record info and store it in "employee.txt"

int main()
{

    // initiates variables
    int emp_ID, count = 0; 
    float sum = 0, avg;
    string emp_name, dept_name;
    double salary, total;  
    ifstream records;
    
    records.open("employee.txt");

    // verifies if file exists
    if (records.fail())
    {
        cerr << "Error. File not found.";
        exit (0);
    }

    //Set the template on console
    cout << "ID: " << setw(12) << "Name:" << setw(16)<< "Department:" << setw(19) << "Salary:\n" ; 


    //Assigns data to a variable and separates them line by line
    while (records >> emp_ID >> emp_name >> dept_name >> salary)
    {

        sum += salary;
        cout << emp_ID << setw(12) << emp_name << setw(16)<< dept_name << setw(18) << salary << endl;
        count ++;
        
        avg = sum / count;                  //Assigns average
    }

    // Prints to console w/ precision for cleanliness
    cout << endl;
    cout << fixed << setprecision(2) << "Total salary: $" << sum << endl;
    cout << fixed << setprecision(2) << "Average salary: $" << avg << endl;
    

    records.close();

}