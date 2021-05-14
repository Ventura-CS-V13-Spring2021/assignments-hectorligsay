#include <iostream>
#include <cmath>
#include <algorithm>
#include <ctime>
#include <cstdlib>
using namespace std;

class integerArray{

private: 
  int numbers[6] = {};     // initializes array w/ 6 empty spaces
  int length = 0;               // length value is hidden
public:
  int getLength(void) ;     
  void sortArray(void); 
  void createArray(void);
  void printArray(void);
  int getNumDiv(int);
  // int getMaxAndVal(int);
};

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
      cout << endl;
    }
}

//    FINDS NUMBERS DIVISIBLE
int integerArray::getNumDiv(int){     
  int count = 0;
  int newArray[length];

  for (int i = 0; i < length; i++){ 
        int f = numbers[i];
      for (int j =1; j < numbers[i]; j++){
          if ( numbers[i] % j == 0 ){
              count ++;
          }
      }
      cout << "COUNT for " << numbers[i] << " is " << count << endl;
      newArray[i] = count;    // Assigns count to new array
    
      count = 0;            //resets the count for the next number
    }

  //      GETS THE MAX  w/ VALUE
  int maxidx = 0;
  int max = newArray[0];
  
  for (int i = 0; i<length; i++){
    if (max < newArray[i])  {
      maxidx = i;
      max = newArray[i];
    }
  }

        // GETS VALUE OF MAX
  for (int i = 0; i<length; i++){
    if (newArray[i] == max){
      cout << numbers[i] << endl;
    }
  }
  
}


// //      GETS THE MAX  w/ VALUE
// int integerArray::getMaxAndVal(int){
//   int maxidx = 0;
//   int max = newArray[0];
//   for (int i = 0; i<length; i++){
//     if (max < newArray[i])  {
//       maxidx = i;
//       max = newArray[i];
//     }
//   }

//         // GETS VALUE OF MAX
//   for (int i = 0; i<length; i++){
//     if (newArray[i] == max){
//       cout << numbers[i] << endl;
//     }
//   }
// }


int main(){
  integerArray a1;

  a1.createArray();
  a1.sortArray();
  a1.printArray();


}
