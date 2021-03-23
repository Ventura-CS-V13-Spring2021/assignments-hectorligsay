#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

int main()
{
  int empnum, emp_ID;
  string emp_name, dept_name;
  double salary;
  ofstream records;
  
  records.open("employee.txt");

  cout << "How many employees will be entered: \n";
  cin >> empnum;

  cout << "Input employee information below: \n";

  //for loop on entering the employee info line by line
  for (int i = 0; i < empnum; i++)
  {
    cout << "Employee ID: ";
    cin >> emp_ID;
    cout << "Employee name: ";
    cin >> emp_name;
    cout << "Department name: ";
    cin >> dept_name;
    cout << "Salary: ";
    cin >> salary;

    // adds input into the variables
    records << emp_ID << ' ' << emp_name << ' ' << dept_name << ' ' ;
    // precision to make code look nice
    records << fixed << setprecision(0) << salary << endl;
  }
  
  records.close();
}