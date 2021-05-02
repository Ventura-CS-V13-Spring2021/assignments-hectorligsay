#include <iostream>
#include <cmath>
#include <iomanip>
#include "IntegerArray.hpp"
using namespace std;

class IntegerArray
{
  private:
    int numbers[10];    //holds array up to 10 elements
    int length = 0;

  public:
    int getLength(void) const;  // gets current length
    void sortArray(int flag); // if flag = 0, ascend else descend
    void fillUp(void);      // fills randnums 0-99
    void getPrimenumber(void) const;
    void printAll(void) const;
};

int IntegerArray::getLength(void) const     
{
  return length;
}

void sortArray(int flag)
{
  if (flag == 0)
    for (int i = 0; i < 10; i++)
      
}

int main()

{

    IntegerArray N;


    N.fillUp();

    N.printAll();

    cout << "Current length is " << N.getLength() << endl;


    cout << "After sorting with ascending order : \n ";

    N.sortArray(0);

    N.printAll();


    cout << "After sorting with descending order: \n ";

    N.sortArray(1);

    N.printAll();


    cout << "The number of prime numbers " << N.getPrimenumbers() << endl;

}