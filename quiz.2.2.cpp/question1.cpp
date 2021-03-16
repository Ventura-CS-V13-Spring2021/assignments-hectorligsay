#include <iostream>
#include <iomanip>
using namespace std;
//This program enters 5 random numbers and will find a number greater than the previous number

int main()
{
  int num1, num2, num3,num4, num5;

  num1 = rand() % 100;
  num2 = rand() % 100;
  num3 = rand() % 100;
  num4 = rand() % 100;
  num5 = rand() % 100;

  cout << num1 << num2 << num3 << num4 << num5;


}