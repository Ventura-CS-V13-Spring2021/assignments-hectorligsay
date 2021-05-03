#include <iostream>
#include <cmath>
#include <algorithm>
#include "arrayfunction.hpp"
using namespace std;

//GETS THE LENGTH
int IntegerArray::getLength(void)
{
    return length;
}

//GETS LAST ELEMENT
int IntegerArray::getLastelm(void){
    cout << numbers[length-1];
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