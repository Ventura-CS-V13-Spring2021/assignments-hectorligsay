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
    int     numbers[N], newarray[N];
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

    //SORTS ARRAY
    sort(numbers, numbers + N);
    for(int i=0; i<N; i++)
    {
      cout << numbers[i] << "\t" ;
    }
    cout << endl;


    // FINDS NUMBERS DIVISIBLE
    for (int i = 0; i < N; i++){ 
        int f = numbers[i];
      for (int j =1; j < numbers[i]; j++){
          if ( numbers[i] % j == 0 ){
              count ++;
          }
      }
      cout << "COUNT for " << numbers[i] << " is " << count << endl;
      newarray[i] = count;    // Assigns count to new array

      count = 0;            //resets the count for the next number
    }
    // print out all elements in array
    for(int i=0; i<N; i++)
    {
        cout << newarray[i] << "\t" ;
    }
    cout << endl;

  // find min/max
  int    max, maxidx = 0;

  max = newarray[0];
  for (int i = 0; i<N; i++){
    if (max < newarray[i]){
      maxidx = i;
      max = newarray[i];
    }
  }

  cout << "MAX : " << max << endl;

  // returns the index of max value
  for (int i = 0; i<N; i++){
    if (newarray[i] == max){
      cout << numbers[i] << endl;
    }
  }
}
