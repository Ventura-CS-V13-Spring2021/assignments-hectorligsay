#include <iostream>
#include <cstdlib>
#include <ctime>
#include <fstream>
using namespace std;

int getRdnum(void);
int isGreater(int &, int &);

int main()
{
  int rdnum, flag, prec;
  int N = 10;
  ofstream    rdfile;  

  rdfile.open("rdnum.txt");                                    
  srand(time(NULL)); 

  // Generates random numbers
  for (int i = 0; i<N ; i++)
  {
    rdnum = getRdnum();
    cout << rdnum << endl;

    if ( i == 0 )
    {
      prec = rdnum;
    }

    
    if (isGreater(rdnum, prec) == 1)
    {
      rdfile << rdnum << endl;
    }
    prec = rdnum;

  }

  rdfile.close();

}




int getRdnum(void)
{
  int rdnum;
  rdnum =(rand() % 51);
}

int isGreater(int &n, int &prec)
{
  if (prec < n)
  {
    return 1;
  }
  else
  {
    return 0;
  }
}






/*
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
    cout << rdnum << endl;

    for (int j = 0; j < N; j ++)
    {
      if (flag == 0)
      {
        continue;
      }
      else if (isGreater(rdnum) == 1)
      {
        rdfile << rdnum << endl;
      }
    }

  }      
  rdfile.close();
}

int getRdnum(void)
{
  int rdnum;
  rdnum =(rand() % 51);
}

int isGreater(int &n)
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
  



for (int j = 0; j < N; j++)
  {
    do
    {
      isGreater(rdnum);
      rdfile << rdnum << endl;
    } while (1);
    exit(0);

}*/