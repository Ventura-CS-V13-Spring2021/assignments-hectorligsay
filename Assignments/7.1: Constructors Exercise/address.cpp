// IntegerArray.hpp

#include "address.hpp"
#include <iostream>
using namespace std;

string address::getStreet() const{
    return street;
}
string address::getState() const{
    return state;
}
int address::getZip() const{
    return zip;
}
void address::printAddress() const{
    cout << street << ", " << state << ", " << zip << endl;
}
void address::setStreet(string a){
    street = a;
}
void address::setState(string st){
    state = st;
}
void address::setZip(int z){
    zip = z;
}
void address::setAddress(string stname, string st, int z){
    street = stname;
    state = st;
    zip = z;
}