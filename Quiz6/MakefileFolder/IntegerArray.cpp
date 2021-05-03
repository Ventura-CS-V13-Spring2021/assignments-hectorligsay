#include <algorithm>
#include <cmath>
#include <iomanip>
#include <ctime>
#include "IntegerArray.hpp"
#include <iostream>
using namespace std;


int IntegerArray::getLength(void){
  return length;
}

void IntegerArray::sortArray(int flag){
    if (flag == 0)
    {
      //ascending
      sort(numbers, numbers + length);
      cout << "Sorted Array " << "\t";
    }
    else 
    {    
      //descending
      sort(numbers, numbers + length,greater<int>());
      cout << "Sorted Array " << "\t";
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