#include <iostream>
#include <iomanip>
#include <stdlib.h>
using namespace std;
//This program enters 5 random numbers and will find a number greater than the previous number

int main()
{
  int num1, num2, num3,num4, num5;
  int max, max2;
  int i;

  num1 = arc4random() % 100;
  num2 = arc4random() % 100;
  num3 = arc4random() % 100;
  num4 = arc4random() % 100;
  num5 = arc4random() % 100;

  if ((num1 < 0) || (num2 < 0) || (num3 < 0) || (num4 < 0) || (num5 < 0))
        {cout << "This is not a valid entry";
        }
  else  
    if ( max < num2 )
      max = num2;
    else if ( max < num3 )
      max = num3;  
    else if ( max < num4 )
      max = num4;  
    else if ( max < num5 )
      max = num5;
    
  if (max = num2)
    


  cout << max << endl;


}

