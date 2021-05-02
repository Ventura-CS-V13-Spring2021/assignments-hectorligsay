#include <iostream>
#include "IntegerArray.hpp"
using namespace std;


int main()

{

  IntegerArray N;

  cout << "Original Array: \n";
  N.fillUp();
  N.printAll();

  cout << "Current length: " << N.getLength() << endl;
  cout << endl;


  cout << "After sorting with ascending order:\n";
  N.sortArray(0);
  N.printAll();
  cout << endl;


  cout << "After sorting with descending order:\n";
  N.sortArray(1);
  N.printAll();
  cout << endl;


  cout << "The number of prime numbers: " ;
  N.getPrimenumbers(); 

}