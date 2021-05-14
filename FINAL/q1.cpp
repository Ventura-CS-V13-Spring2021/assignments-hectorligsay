#include <iostream>
#include <cmath>
#include<algorithm>
#include <ctime>
#include <cstdlib>
using namespace std;

class integerArray{

private: 
  int numbers[6];
  int length;

public:
  int getLength(void) const;
  void sortArray(void);
  void createArray(void);
};

int IntegerArray::getLength(void) const{
    return length;
}

void sortArray(void){       //ASCENDS
  //To ascend the order
  sort(numbers, numbers + length);
}

void integerArray::createArray(void){     //creates array w/ 6 rand elements
  srand(time(0));     //initializes randoms 
  for (int i=0; i< length; i++){  
    numbers[i] = rand() % 100;
    length++;
  }
}

void printAll(void) const{
    for (int i=0; i < length; i++)
        cout << numbers[i] << "\t";
    cout << endl;
}

int getNumDiv(int i){                 //Gets nums divided

}

int main(){
  
}
