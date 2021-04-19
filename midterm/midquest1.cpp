#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

int main()
{

  string studentname;
  int score1, score2, num80;
  int count = 0;
  float sum = 0;
  double avg;
  ifstream studentinfo;

  studentinfo.open("students.txt");

  // verifies if file exists
  if (studentinfo.fail())
  {
      cerr << "Error. File not found.";
      exit (0);
  }

  while (studentinfo >> studentname >> score1 >> score2)
  {
    sum = score1 + score2;
    avg = sum / 2;
    cout << "Student name: " << studentname << setw(12) << "Score 1: " << score1 << setw(16) << "Score 2: " << score2 << setw(16) << "Sum: " << sum << setw(16) << "Average: " << avg << endl;

    if (avg>80)
    {
      num80 ++;
    }
  }
  cout << "*******************************************" << endl;
  cout << "The total number of students who has the average > 80 : " << num80 << " students" << endl;
  
  studentinfo.close();

  return 0;
}