#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
  const int   SIZE = 10;
  int     numbers[SIZE] = {5, 10, 75, 80, 25, 55, 95, 70, 60, 15};
  int     diff[SIZE];
  int   sum = 0;

  cout << "Original Array: " << endl;
  for (int i = 0; i<SIZE; i++)
  {
    sum += numbers[i];
    cout << numbers[i] << "\t";
  }

  cout << endl;
  cout << "+++++++++++++++++++++++++++++++++++++++++"<< endl;
  cout << endl;

  cout << "Difference: " << endl;
  for (int i = 0; i<SIZE; i++)
  {
    diff[i] = sum - numbers[i];
    cout << diff[i] << "\t";
  }

  cout << endl;
  cout << endl;
  cout << "Array size is: " << SIZE << endl;
  cout << "The sum of the array is : " << sum << endl; 
}
