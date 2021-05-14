#include <iostream>
#include <cmath>
#include <algorithm>
#include <ctime>
#include <cstdlib>
using namespace std;

class integerArray{
private: 
  // int numbers[length] = {};     // initializes array w/ 6 empty spaces
  int length = rand() % 20;               // length value is hidden
  int count = 0;

public:
  int numbers[length] = {};
  int getLength(int)   ;
  int getCount(int) ;
  int length (int);
  void sortArray(void);
  void createArray(void);
  void printArray(void);
  void getDuplicate(void);
};

int integerArray::getLength(int) {   //gets length
  return length;                
}

int integerArray::getCount(int) {   //gets count
  return count;
}

void integerArray::sortArray(void){       //ASCENDS
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
      cout << *(numbers+i) << "\t";
      cout << endl;
    }
}

void integerArray::getDuplicate(void){
  for (int i = 0; i < length; i++){ 
      int f = numbers[i];
    for (int j =0; j < length; j++){
        if ( numbers[i] == numbers[j] ){
            count ++;
            continue;
        }
    }
    cout << "COUNT for " << numbers[i] << " is " << count << endl;
    count = 0;
  }
}

int main(){
  integerArray arr1;

  arr1.printArray();
  arr1.sortArray();

  // sorted
  arr1.printArray();

  // Get getDuplicate
  arr1.getDuplicate();

}