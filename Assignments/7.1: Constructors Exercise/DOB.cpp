#include "DOB.hpp"
#include <iostream>
using namespace std;

int DOB::getMonth() const{
    return month;
}
int DOB::getDay() const{
    return day;
}
int DOB::getYear() const{
    return year;
}
void DOB::printDate() const{ // Print all member variable to display the date of birth.
    cout << month << "/" << day << "/" << year << endl;
}
void DOB::setDOB(int m, int d, int y){
    month = m;
    day = d;
    year = y;
}
void DOB::setMonth(int m){
    month = m;
}
void DOB::setDay(int d){
    day = d;
}
void DOB::setYear(int y){
    year = y;
}