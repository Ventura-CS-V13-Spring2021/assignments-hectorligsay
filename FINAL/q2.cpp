#include <iostream>
#include <cmath>
#include <algorithm>
#include <ctime>
#include <cstdlib>
using namespace std;

class integerArray{
private: 
  int numbers[20] = {};     // initializes array w/ 6 empty spaces
  int length;               // length value is hidden

public:
  int getLength(void)   ;
  void sortArray(void);
  void createArray(void);
  void printArray(void);
};

int integerArray::getLength(void) {
  return length;                
}

void integerArray::sortArray(void){       //ASCENDS
  //To ascend the order
  sort(numbers, numbers + length);
}

void integerArray::createArray(void){     //creates array w/ 6 rand elements
  
  srand(time(0));     //initializes randoms 
  for (int i=0; i< length; i++){  
    numbers[i] = rand() % 100;
    length++;                     // gets length value
  }
}

void integerArray::printArray(void) {
    for (int i=0; i < length; i++){
      cout << numbers[i] << "\t";
      cout << endl;
    }
}

int main(){
  integerArray arr1;

  arr1.printArray();
  arr1.sortArray();

  // sorted
  arr1.printArray();

}