#ifndef ADDRESS_H      //if not defined
#define ADDRESS_H       // defined this keyword

#include <string>
using namespace std;
class address
{
private:
   string street;
   string state;
   int zip;

public:
   address() : street(NULL), state(NULL), zip(0) {};
   address(string str, string st, int z) : street(str), state(st), zip(z) {} ;
   string getStreet() const;
   string getState() const;
   int getZip() const;
   void printAddress() const;
   void setStreet(string a);
   void setState(string st);
   void setZip(int z);
   void setAddress(string stname, string st, int z);
};
#endif