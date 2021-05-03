// This is for the makefile exercise in the folder
#include <iostream>
#include <iomanip>
#include <cmath>
#include <algorithm>
using namespace std;

class IntegerArray
{
    private:
        int numbers[10];   // int array w/ the capacity 10
        int length = 0;         // the number of elements

    public:             
        int getLength() ;    
        void fillUp(void); 
        void sortAsc(void);   
        int getLastelm(void);   
        void removeLastelm(void);
        void appendElement(int v);   
        void printAll(void) const;                  
};

//GETS THE LENGTH
int IntegerArray::getLength(void)
{
    return length;
}

//GETS LAST ELEMENT
int IntegerArray::getLastelm(void){
  cout << numbers [length - 1];
}
// ASCENDING ORDER
void IntegerArray::sortAsc(void){
    //ascending
    sort(numbers, numbers + length);\
}

//ADDS # TO ARRAY
void IntegerArray::appendElement(int v) 
{
    numbers[length] = v;
    length ++;
}

//FILLS ARRAY
void IntegerArray::fillUp(void)
{
    int size = 10;
    srand(time(0));
    //Creates array first 
    for (int i =0; i < size; i++){
        numbers[i] = rand() % 100;
        if (numbers[i] == 0)
        continue;
        else
        length ++;
    }
}


//REMOVES LAST ELEMENT OF ARRAY
void IntegerArray::removeLastelm(void)
{
    length --;
}

// PRINTS
void IntegerArray::printAll(void) const
{
    for (int i=0; i < length; i++)
        cout << numbers[i] << "\t";
    cout << endl;
}

//main.cpp

int main()
{
    IntegerArray        N;

    cout << endl;
    cout << "ORIGINAL ARRAY \n";
    N.fillUp();
    N.printAll();
    cout << "Current length is " << N.getLength() << endl;


    // Get last elm 
    cout << "The last element is : " ;
    N.getLastelm();
    cout << endl;


    cout << endl;
    cout << "After sorting (least to greatest): \n";
    N.sortAsc();
    N.printAll();
    cout << "Current length is " << N.getLength() << endl;
    cout << endl;

    cout << "Removing the last element: \n" ;
    N.removeLastelm();
    N.printAll();
    cout << "Current length is " << N.getLength() << endl;
    cout << endl;

    cout << "Append the element: \n";
    N.appendElement(100);
    N.printAll();
    cout << "Current length is " << N.getLength() << endl;
    cout << endl;
}