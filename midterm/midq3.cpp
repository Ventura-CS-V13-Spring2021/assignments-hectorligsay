#include <iostream>
#include <cstdlib>
#include <fstream>
using namespace std;


int getRdnum(void);
int findMin(int , int , int );
int findMax(int , int , int );
int getDifference(int, int);
void fileWrite(ofstream&, int difference);

int main()
{
  int rdnum, num1, num2, num3;
  int max, min, difference;
  int N = 3;
  ofstream    midterm;                           

  midterm.open("question3.txt");                        
                           
  srand(time(NULL)); 
  // Generates random numbers 
  
  num1 = getRdnum();
  num2 = getRdnum();
  num3 = getRdnum();

  cout << num1 << " " << num2 << " " << num3 << " " << endl;

  max = findMax(num1, num2, num3);
  min = findMin(num1, num2, num3);

  cout << "Max is : " << max << " Min is : " << min << endl;

  difference = getDifference(max,min);

  cout << "The difference is : " << difference << endl;

  // This will ONLY write difference into the file
  fileWrite(midterm, difference); 

  midterm.close();
}

int getRdnum(void)
{
  int rdnum;
  rdnum =(rand() % 51);
}

int findMax(int num1, int num2, int num3)
{
  int max;
  if (num1 > num2)        
    {
        max = num1;
    }
    else 
        max = num2;

    if (max < num3)
    {
        max = num3;
    }
}

int findMin(int num1, int num2, int num3)
{
  int min;
  if (num1 < num2)        
    {
        min = num1;
    }
    else 
        min = num2;

    if (min > num3)
    {
        min = num3;
    }

}

int getDifference(int max, int min)
{
  int difference;

  difference = max - min;

  return difference;
}

void fileWrite(ofstream &write, int difference)
{
  write << difference << endl; 
}