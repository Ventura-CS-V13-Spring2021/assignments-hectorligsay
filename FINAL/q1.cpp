#include <iostream>
#include <cmath>
#include <algorithm>
#include <ctime>
#include <iomanip>
#include <cstdlib>
using namespace std;

class integerArray{

private: 
  int numbers[6] = {};     // initializes array w/ 6 empty spaces
  int length = 0;               // length value is hidden
  int newArray[6] = {};
public:
  int getNumbers(int);
  int getnewArray(int);  
  int getLength(void) ;     
  void sortArray(void); 
  void createArray(void);
  void printArray(void);
  int getNumDiv(void);

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
    numbers[i] = rand() % 100;
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

//    FINDS NUMBERS DIVISIBLE (except by itself)
//    Finds max value of Factors
//    Prints out the number or numbers w/ highest factors
int integerArray::getNumDiv(void){     
  int count = 0;
  int newArray[length];

  for (int i = 0; i < length; i++){ 
      for (int j =1; j < numbers[i]; j++){
          if ( (numbers[i] % j == 0) && !(numbers[i] / j == 1)){
              count ++;
          }
      }
      cout << "Factors of " << numbers[i] << ": " << count << endl;
      newArray[i] = count;    // Assigns count to new array
    
      count = 0;            //resets the count for the next number
    }

    
  cout << endl;
 
  int maxidx = 0;
  int max = newArray[0];

  // cout << "NEW ARRAY : " << endl;
  // for(int i=0; i<length; i++)
  // {
  //   cout << newArray[i] << "\t" ;
  // }
  // cout << endl;
  

  //Gets the MAX value of the factors 
  for (int i = 0; i<length; i++){
    if (max < newArray[i]) {
      maxidx = i;
      max = newArray[i];
    }
  }
  cout << "MAX number of factors is: " << max << endl;


  //GETS VALUE OF MAX value
  cout << "Numbers(s) with the highest factors: " << endl;
  for (int i = 0; i<length; i++){
    if ( newArray[i] == max){
      cout << numbers[i] << endl;
    }
  }
}


int main(){
  integerArray a1;

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
  a1.getNumDiv();

}
