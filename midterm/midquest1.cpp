#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

int main()
{

  string studentname;
  int score1, score2;
  int count = 0;
  float sum = 0, avg;
  ifstream studentinfo;

  studentinfo.open("students.txt");

  // verifies if file exists
  if (studentinfo.fail())
  {
      cerr << "Error. File not found.";
      exit (0);
  }

  //Set the template on console
  cout << "Name:" << setw(12) << "Score 1:" << setw(16)<< "Score 2:" << setw(16) << "Sum:" << setw(16) << "Average:\n";

  while (studentinfo >> studentname >> score1 >> score2)
  {
    sum = score1 + score2;
    cout << studentname << setw(12) << score1 << setw(16) << score2 << ave
  }

}