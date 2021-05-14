#include <iostream>
#include <cmath>
#include <algorithm>
#include <ctime>
#include <cstdlib>
using namespace std;

class integerArray{

private: 
  const int numbers[6];     // initializes array w/ 6 empty spaces
  int length;               // length value is hidden

public:
  int getLength(void) const;
  void sortArray(void);
  void createArray(void);
};

int IntegerArray::getLength(void) const{
  return length;                // returns legth's value from line 35
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

void printAll(void) const{
    for (int i=0; i < length; i++)
        cout << numbers[i] << "\t";
        cout << endl;
}

int getNumDiv(int i){      //Gets nums divided
  int count = 0;            
  for (int i; i < length; i++)
  {
    for (int j; j < 50; j++){
      if (numbers[i] % j == 0)
        count ++;
    }
  }
  return count;
}


int main(){
  
}
