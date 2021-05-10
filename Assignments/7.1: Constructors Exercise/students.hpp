#ifndef STUDENTS_H      //if not defined
#define STUDENTS_H       // defined this keyword

#include "DOB.hpp"
#include "address.hpp"

class Students
{
private:
    string sname;
    int id;
    DOB dob;
    address addr;
public:
    Students() : sname(NULL), id(0), dob() {}; 
    Students(string stname, int idnum, DOB date, address adrss1) 
            : sname(stname), id (idnum), dob (date), addr(adrss1) {}; 
    int getID()     const;
    string getSname()   const;
    DOB getDOB() const;
    void setSname(string name);
    void setID(int num);
    void setDOB(DOB date); //how did we create a variable here inside a function
    address getaddr() const;
    void printStudent() const;
    void setAddress(address b);
};
#endif