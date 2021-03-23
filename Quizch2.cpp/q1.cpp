#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

// This program generates 5 random numbers in range 0-99. It will find a number that is greater than the previous number

int main()
{
  //Initializes variables
  int num1, num2, num3, num4, num5;
  int max, nextmax;

  //sets random seed to run new rand number every time program is ran
  srand(time(NULL));

  //sets random numbers from 0-99 to variables
  num1 = rand() % 100;
  num2 = rand() % 100;
  num3 = rand() % 100;
  num4 = rand() % 100;
  num5 = rand() % 100;

  // Finds the max number
  if(num1 > num2)
    {
      max = num1;
    }
    else if (num1 < num2)
    {
      max = num2;
    }
  if (max < num3)
    {
      max = num3;
    }
  if (max < num4)
    {
      max = num4;
    }
  if (max < num5)
    {
      max = num5;
    }
  
  // Finds the 2nd greatest number
  if (max == num1)
    if num2 < num3


}