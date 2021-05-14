#include <iostream>
#include <algorithm>
#include <cmath>
#include <iomanip>
#include <ctime>
// #include "IntegerArray.hpp"
using namespace std;

class IntegerArray
{
  private:
    int numbers[10];    //holds array up to 10 elements
    int length = 0 ;

  public:
    int getLength(void);  // gets current length
    void sortArray(int flag); // if flag = 0, ascend else descend
    void fillUp(void);      // fills randnums 0-99
    void getPrimenumbers(void) const ;
    void printAll(void) const ;
};

int IntegerArray::getLength(void){
  return length;
}

void IntegerArray::sortArray(int flag){
    if (flag == 0)
    {
        //ascending
        sort(numbers, numbers + length);
        cout << "Ascending: \n";
        cout << "Sorted Array " << "\t";

        // Finds ascending
        for (int i = 0; i < length; i ++)
        {
            
            cout << numbers[i] << "\t";
        }   cout << "\n" << endl;
    }
    else 
    {    
        //descending
        sort(numbers, numbers + length, greater<int>());
        cout << "Descending: \n";
        cout << "Sorted Array " << "\t";

        for (int i = 0; i < length; i ++)
        {
            cout << numbers[i] << "\t";
        } cout << "\n" << endl;
    }
}

void IntegerArray::fillUp(void)
{
  srand(time(0));
  //Creates array first 

  int size = rand() % 11;

  for (int i =0; i < size; i++){
    numbers[i] = rand() % 100;
    if (numbers[i] == 0)
      continue;
    else
      length ++;
  }
}

void IntegerArray::printAll(void) const {
    for (int i=0; i < length; i++)
      cout << numbers[i] << "\t";
    cout << endl;
}

void IntegerArray::getPrimenumbers(void) const {
    int count = 0;
    for ( int i=0; i < length; i++) 
    {   
      int j;
      for (j = 2; j <= numbers[i]; j ++)
      {
          if (numbers[i] % j == 0)
              break;
      }

      if ( j >= numbers[i] )
      {              
        //cout << numbers[i] << " is a prime number." << endl;
        count ++;
      }
      else
          //cout << numbers[i] << " is not prime" << endl;
          continue;
    }
    cout << count << endl;
}


int main()

{

  IntegerArray N;
  N.fillUp();

  cout << endl;
  cout << "Original Array: " << endl;
  N.printAll();
  cout << endl;

  cout << "Current length is " << N.getLength() << endl;


  cout << "After sorting with ascending order : \n";
  N.sortArray(0);                   // if 0, ascending

  cout << "After sorting with descending order: \n";
  N.sortArray(1);                   // if 1, descending

  cout << "Number of Prime Numbers: ";
  N.getPrimenumbers();

}