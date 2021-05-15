#include <iostream>
#include <cmath>
#include <algorithm>
#include <ctime>
#include <iomanip>
#include <cstdlib>
#include <bits/stdc++.h>
using namespace std;

class integerArray{

private: 
  int numbers[19] = {};     // initializes array w/ 19 empty spaces
  int length = 0;               // length value is hidden
  int newArray[19] = {};
public:
  int getNumbers(int);
  int getnewArray(int);  
  int getLength(void) ;     
  void sortArray(void); 
  void createArray(void);
  void printArray(void);
  int getCount(void);

};

int integerArray::getNumbers(int){
  return *numbers;
}

int integerArray::getnewArray(int){
  return *newArray;
}

//    RETURNS LENGTH VALUE FROM LINE 42
int integerArray::getLength(void){
  return length;                
}

//      SORT IN DESCENDING ORDER
void integerArray::sortArray(void){       
  sort(numbers, numbers + length, greater<int>());
}


//  CREATES ARRAY W/ 6 RANDOM VALUES
void integerArray::createArray(void){     
  srand(time(0));     //initializes randoms 
  int size = rand() % 20;

  for (int i=0; i< size; i++){  
    numbers[i] = rand() % 41 + (-20);
    length++;                     // gets LENGTH value
  }
}

//    PRINTS THE ARRAY
void integerArray::printArray(void) {
    for (int i=0; i < length; i++){
      cout << numbers[i] << "\t";
    }
    cout << endl;
}

// GETS COUNT OF NUMBERS 
int integerArray::getCount(void){     
  int count = 0;
  cout << "N" << "\t" << "Count" << endl;
  for (int i = 0; i < length; i++){ 
      int f = numbers[i];
    for (int j =0; j < length; j++){
        if ( numbers[i] == numbers[j] ){
            count ++;
            continue;
        }
    }
    cout << numbers[i] << "\t" << count << endl;
    count = 0;
  }
  cout << endl;
}


int main(){
  integerArray a1, a2;

  // Creates array and prints original
  cout << "ORIGINAL ARRAY: \t\t\n";
  a1.createArray();
  a1.printArray();
 

  // Sorts in ascending order and prints that order
  cout << "SORTED ARRAY: \t\t\n";
  a1.sortArray();
  a1.printArray();

  // Gets the factors of each number in array
  cout << "\nFACTORS OF EACH NUMBER IN ARRAY: \n";
  a1.getCount();

}
