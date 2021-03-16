#include <iostream>
#include <iomanip>
#include <cstdlib.h>
using namespace std;
//This program enters 5 random numbers and will find a number greater than the previous number

int main()
{
  int num1, num2, num3,num4, num5;
  int max, nxt;

  num1 = arc4random() % 100;
  num2 = arc4random() % 100;
  num3 = arc4random() % 100;
  num4 = arc4random() % 100;
  num5 = arc4random() % 100;

  if ( max < num2 )
    max = num2;
  if ( max < num3 )
    max = num3;  
  if ( max < num4 )
    max = num4;  
  if ( max < num5 )
    max = num5;   

  cout << max << endl;


}