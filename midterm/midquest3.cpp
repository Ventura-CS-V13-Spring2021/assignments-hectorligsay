#include <iostream>
#include <cstdlib>
#include <ctime>
#include <fstream>
using namespace std;

int getRdnum(int &);
//int findMin(int);
//int findMax(int);
//int getDifference(int min, int max);

int main()
{
  int rdnum;
  int N = 3;
                           
  srand(time(NULL)); 
  // Generates random numbers 
  for (int i = 0; i<N ; i++)
  {
    rdnum = getRdnum();
    cout << rdnum << endl;
  }
}

int getRdnum(int &num)
{
  int rdnum;
  rdnum =(rand() % 9);
  return rdnum;
}