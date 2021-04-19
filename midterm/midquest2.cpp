#include <iostream>
#include <cstdlib>
#include <ctime>
#include <fstream>
using namespace std;

int getRdnum(void);
int isGreater(int n);


int main()
{
  int rdnum, prec;
  int N = 10;
  ofstream    rdfile;                                         //ofstream will WRITE the file only     

  rdfile.open("rdnum.txt");                        
                           
  srand(time(NULL)); 
  // Generates random numbers 
  for (int i = 0; i<N ; i++)
  {
    rdnum = getRdnum();
    cout << rdnum << endl;

    if (isGreater(rdnum) == 0)
    {
      continue;
    }
    else if (isGreater(rdnum) == 1)
    {
      rdfile << rdnum << endl;
    }

    cout << rdnum << "TEST" << endl;

  }      


  rdfile.close();
}

int getRdnum(void)
{
  int rdnum;
  rdnum =(rand() % 51);
}

int isGreater(int n)
{
  int prec;
  for (int i = 0; i < 10; i++)
  {
    if ( i == 0 )
    {
      prec = n;
      return 0;
    }
    if (prec < n)
    {
      cout << n << endl;
      return 1;
    }
    prec = n;
  }
  
}