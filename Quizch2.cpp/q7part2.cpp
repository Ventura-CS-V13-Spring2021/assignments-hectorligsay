#include <iostream>
#include <fstream>
using namespace std;

int main()
{
  int empnum;
  string emp_name, dept_name;
  double salary;
  ofstream records;
  
  records.open("employee.txt");

  cout << "How many employees will be entered: \n";
  cin >> empnum;

  cout << "Input employee information below: \n";

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
  }
  
  records << emp_ID << ' ' << emp_name << ' ' << dept_name << ' ' ;
  records << salary << endl;
  
}