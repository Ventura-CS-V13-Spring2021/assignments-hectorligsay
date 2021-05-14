#include <cmath>
#include <algorithm>
#include <ctime>
#include <iomanip>
#include <cstdlib>
#include <iostream>
using namespace std;

// int getNumDiv(int i){      //Gets nums divided
//   int count = 0;            
//   for (int i; i < length; i++)
//   {
//     for (int j; j < 50; j++){
//       if (numbers[i] % j == 0)
//         count ++;
//     }
//   }

//   for (int j, j < i, )
//   return count;
// }

int main()
{

  srand(time(NULL));
  int N = rand() % 20;
  double     numbers[N];
  float count = 0;


  //  CREATES THE ARRAY FIRST
  for(int i=0; i<N; i++)
  {
      numbers[i] = rand() % 41 + (-20);
  }

  // print out all elements in array
  for(int i=0; i<N; i++)
  {
      cout << numbers[i] << "\t" ;
  }
  cout << endl;

  for (int i = 0; i < N; i++){ 
      int f = numbers[i];
    for (int j =0; j < N; j++){
        if ( numbers[i] == numbers[j] ){
            count ++;
            continue;
        }
    }
    cout << "COUNT for " << numbers[i] << " is " << count << endl;
    count = 0;
  }
  
}