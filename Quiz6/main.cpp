#include <iostream>
#include "IntegerArray.hpp"
using namespace std;

int main()
{

  IntegerArray N;
  N.fillUp();

  cout << endl;
  cout << "Original Array: " << endl;
  N.printAll();
  cout << endl;

  cout << "Current length is " << N.getLength() << endl;


  cout << "After sorting with ascending order : \n";
  N.sortArray(0);                   // if 0, ascending
  N.printAll();

  cout << "After sorting with descending order: \n";
  N.sortArray(1);                   // if 1, descending
  N.printAll();

  cout << "Number of Prime Numbers: ";
  N.getPrimenumbers();


}