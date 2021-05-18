#include <iostream>
#include <cmath>
#include <algorithm>
#include <ctime>
#include <cstdlib>
using namespace std;

class integerArray{

private: 
  int numbers[19] = {};     // initializes array w/ 19 empty spaces
  int countArray[10] = {};
  int length = 0;               // length value is hidden
public:
  int getNumbers(int);
  int getLength(void) ;     
  void sortArray(void); 
  void createArray(void);
  void printArray(void);
  int getCount(void);
  

};

//    Returns Array 
int integerArray::getNumbers(int){
  return *numbers;
}

//    RETURNS LENGTH VALUE FROM LINE 42
int integerArray::getLength(void){
  return length;                
}

//      SORT IN DESCENDING ORDER
void integerArray::sortArray(void){       
  sort(numbers, numbers + length, greater<int>());
}


//  Creates array w/ random elements and random array size
void integerArray::createArray(void){     
  srand(time(NULL));     //initializes randoms 
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
    for (int j =0; j < length; j++){
      if ( numbers[i] == numbers[j] ){
        count ++;
        *countArray = count;
        continue;
      }
    
    for (int k = 0; k < length; k++){
      if (k=0)
      {
        continue;
      }
        if (countArray[k] == countArray[k-1])
        {
          break;
        }
        else{
          cout << numbers[i] << "\t" << count << endl;
          count = 0;
        }
    }
    }

  }
  cout << endl;
}

int main(){
  integerArray a1;

  // Creates array and prints original
  cout << "ORIGINAL ARRAY: \t\t\n";
  a1.createArray();
  a1.printArray();
 
  // Sorts in descending order and prints that order
  cout << "DESCENDING ARRAY: \t\t\n";
  a1.sortArray();
  a1.printArray();

  // Gets occurences of values in array
  cout << "\nGETS ARRAY COUNTS: \n";
  // a1.uniqueNum();
  a1.getCount();
}
