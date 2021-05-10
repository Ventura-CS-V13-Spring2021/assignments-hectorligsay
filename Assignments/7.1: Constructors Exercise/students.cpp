#include "students.hpp"
#include <iostream>
using namespace std;

int Students::getID()     const{
    return id;
}
string Students::getSname()   const{
    return sname;
}
DOB Students::getDOB() const{
    return dob;
}
void Students::setSname(string name){
    sname = name;
}
void Students::setID(int num){
    id = num;
}
void Students::setDOB(DOB date){
    dob = date;
}
address Students::getaddr() const{
    return addr;
}
void Students::printStudent() const{
    cout << sname << " " << id << " " ;
    dob.printDate() ;
    addr.printAddress();
    cout << endl;
}
void Students::setAddress(address b) {
    addr = b;
}