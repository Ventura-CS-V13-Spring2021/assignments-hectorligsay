#include <iostream>
using namespace std;

// this program allows user to input 3 random numbers from 0 to 99 and finds out which 
// numbers are duplicated  (whether it's all or two)

int main()
{
  int num1, num2, num3;
  
  cout << "Enter 3 random numbers (must range from 0 - 99): " << endl;
  cin >> num1 >> num2 >> num3;

  if ((num1 < 0) || (num1 > 99) || (num2 < 0) || (num2 > 99) || (num3 < 0) || (num3 > 99))
    {
      cout << "Not a valid entry"; 
    }
  else
    if (num1 == num2 && num1 == num3 && num2 == num3)
    {
      cout << "These numbers are all duplicates: \n" << num1 << endl << num2 << endl << num3 << endl;
    }
    else if ( !(num1 == num2) && !(num1 == num3) && !(num2 == num3))
    {
      cout << "There are no duplicated numbers. ";
    }
    else if (num1 == num2 || num1 == num3 || num2 == num3)
    {

      cout << "There are two duplicated numbers" << endl;
          if (num1 == num2)
              cout << num1 << " " << num2;
          else if (num1 == num3)
              cout << num1 << " " << num3;
          else if (num2 == num3)
              cout << num2 << " " << num3;
    }

  return 0;
}

