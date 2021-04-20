#include <iostream>
#include <cstdlib>
#include <ctime>
#include <fstream>
using namespace std;

int getRdnum(void);
int isGreater(int , int );

int main()
{
  int rdnum, prec;
  string answer;
  int N = 10;
  ofstream    rdfile;  

  rdfile.open("rdnum.txt");                                    
  srand(time(NULL)); 

  // Generates random numbers

  do
  {
    for (int i = 0; i<N ; i++)
    {
      rdnum = getRdnum();
      cout << rdnum << endl;   // This is to check the
      
      if (isGreater(rdnum, prec) == 1)
      {
        rdfile << rdnum <<  " is greater " << endl;
      }

    }
    cout << "Would you like to go again? " << endl;
    cin >> answer;
  } while (answer == "y" || answer == "Y");
  
  cout << "Thank you for playing! " << endl;


  rdfile.close();

}


int getRdnum(void)
{
  int rdnum;
  rdnum =(rand() % 51);
}

int isGreater(int n, int prec)
{
  int N = 10;
  for (int i = 0; i<N ; i++)
  {
    if (i == 0 )
    {
      prec = n;
    }

    if (prec < n)
    { return 1;
      prec = n;
    }
    else if (prec > n)
    {
      return 0;
    }
  }
}


