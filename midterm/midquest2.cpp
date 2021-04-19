#include <iostream>
#include <cstdlib>
#include <ctime>
#include <fstream>
using namespace std;

//int getRdnum(void);
//int isGreater(int n);


int main()
{

  int rdnum, prec;
  int N = 10;
  ofstream    rdfile;                                         //ofstream will WRITE the file only

  rdfile.open("rdnum.txt");                                   
                           

  srand(time(NULL)); 
  
  for (int i = 0; i<N ; i++)
  {
    rdnum =(rand() % 51);

    cout << rdnum << endl;

    if ( i == 0 )
    {
      prec = rdnum;
      continue;
    }

    if (prec < rdnum)
    {
      rdfile << rdnum << endl;
    }
    prec = rdnum;
  }

  rdfile.close();

}