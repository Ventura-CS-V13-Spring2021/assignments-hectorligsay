#include <iostream>
#include <cmath>
#include <algorithm>
#include <ctime>
#include <iomanip>
#include <cstdlib>
using namespace std;

class integerArray{

private: 
  int numbers[N] = {};     // initializes array w/ 6 empty spaces
  int newArray[N] = {};
  int length = 0;            

public:
  int getnewArray(int);  
  int getLength(void) ;     
  void sortArray(void);  // To Descend
  void createArray(void);
  void printArray(void);
  int getOccurences(void);

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

//      SORT IN ASCENDING ORDER
void integerArray::sortArray(void){       
  sort(numbers, numbers + length);
}


//  CREATES ARRAY W/ 6 RANDOM VALUES
void integerArray::createArray(void){     
  srand(time(0));     //initializes randoms 
  int size = 6;

  for (int i=0; i< size; i++){  
    numbers[i] = rand() % 41 + (-20;
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

//    FINDS OCCURENCES
int integerArray::getOccurences(void){     
  int count = 0;
  int newArray[length];

  for (int i = 0; i < length; i++){ 
    for (int j =1; j < numbers[i]; j++){
        if ( (numbers[i] == j){
          count ++;
        }
    }
      cout << "Factors of " << numbers[i] << ": " << count << endl;
      newArray[i] = count;    // Assigns count to new array
    
      count = 0;            //resets the count for the next number
    }

    
}


//      GETS THE MAX  w/ VALUE
int integerArray::getMax(void){
  return max;
  //cout << "Max is" << max << endl;
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
  a1.getOccurences();

}
