#include <iostream>
#include <cstdlib>
#include <ctime>
#include <fstream>
using namespace std;

int getRdnum(void);
int isGreater(int n);

int main()
{
  int N = 10, num;
  ofstream    rdfile;                      

  rdfile.open("rdnum.txt");                                   
                           
  
  for (int i = 0; i<N ; i++)
  {
    num = getRdnum();
    
    if (isGreater(num) == 1)
    {
      rdfile << num << endl;
    }
  }

  rdfile.close();

}

int getRdnum(int rdnum)
{
  srand(time(NULL)); 
  rdnum =(rand() % 51);
  return rdnum;
}

int isGreater(int num)
{
  int prec, i;

  if ( i == 0 )
    {
      prec = num;
      return 0;
    }

    if (prec < num)
    {
      return 1;
    }
    prec = num;
}