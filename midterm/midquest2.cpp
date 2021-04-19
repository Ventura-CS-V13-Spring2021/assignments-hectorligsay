#include <iostream>
#include <cstdlib>
#include <ctime>
#include <fstream>
using namespace std;

int getRdnum(void);
int isGreater(int n);


int main()
{
  int rdnum, flag;
  int N = 10;
  ofstream    rdfile;                                         //ofstream will WRITE the file only     

  rdfile.open("rdnum.txt");                        
                           
  srand(time(NULL)); 
  // Generates random numbers 
  for (int i = 0; i<N ; i++)
  {
    rdnum = getRdnum();

    if (flag == 0);
    {
      exit (0);
    }
    else
      isGreater(rdnum);
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
  int prec, rdnum;
  if ( rdnum == 0 )
  {
    prec = rdnum;
    return 0;
  }

  if (prec < rdnum)
  {
    cout << rdnum << endl;
    return 1;
  }
  prec = rdnum;

  
}