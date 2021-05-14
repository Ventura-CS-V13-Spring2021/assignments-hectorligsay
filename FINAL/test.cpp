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
    const int N=6;
    int     numbers[N];
    float count = 0;

    srand(time(0));
    //  CREATES THE ARRAY FIRST
    for(int i=0; i<N; i++)
    {
        numbers[i] = rand() % 10;
    }

    // print out all elements in array
    for(int i=0; i<N; i++)
    {
        cout << numbers[i] << "\t" ;
    }
    cout << endl;

    for (int i = 0; i < N; i++)
    { 
    int f = numbers[i];
    for (int j =0; j < f; j++){
        int l = f % j;
        if ( l == 0 ){
            count ++;
        }
        cout << "COUNT" << count << endl;
    }
    }
    
}