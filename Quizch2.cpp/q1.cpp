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

  if (max == num1)            //Removes num1 if it's the max 
    {
      if (num2 < num3)
      {
        nextmax = num3;
      }
        else if (num2 > num3)
        nextmax = num2;
      if (nextmax < num4)
        nextmax = num4;
      if (nextmax < num5)
        nextmax = num5;
    }

  if (max == num2)            //Removes num2 if it's the max 
    {
      if (num1 < num3)
      {
        nextmax = num3;
      }
        else if (num1 > num3)
        nextmax = num1;
      if (nextmax < num4)
        nextmax = num4;
      if (nextmax < num5)
        nextmax = num5;
    }

  if (max == num3)            //Removes num3 if it's the max 
    {
      if (num1 < num2)
      {
        nextmax = num2;
      }
        else if (num1 > num2)
        nextmax = num1;
      if (nextmax < num4)
        nextmax = num4;
      if (nextmax < num5)
        nextmax = num5;
    }

  if (max == num4)            //Removes num4 if it's the max 
    {
      if (num1 < num2)
      {
        nextmax = num2;
      }
        else if (num1 > num2)
        nextmax = num1;
      if (nextmax < num3)
        nextmax = num3;
      if (nextmax < num5)
        nextmax = num5;
    }

  if (max == num5)            //Removes num5 if it's the max 
    {
      if (num1 < num2)
      {
        nextmax = num2;
      }
        else if (num1 > num2)
        nextmax = num1;
      if (nextmax < num3)
        nextmax = num3;
      if (nextmax < num4)
        nextmax = num4;
    }

  cout << "The list of random numbers are the following: " << endl;
  cout << num1 << ' ' << num2 << ' ' << num3 << ' ' << num4 << ' ' << num5 << ' '<< endl;
  cout << "The max number is " << max << '.' <<endl;
  cout << "The next highest number is " << nextmax << '.' << endl;

}