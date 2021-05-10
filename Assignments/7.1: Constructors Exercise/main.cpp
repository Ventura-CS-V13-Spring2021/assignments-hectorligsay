#include "students.hpp"
#include "address.hpp"
#include "DOB.hpp"
#include <iostream>
using namespace std;

int main()
{
   DOB student_dob(12, 24, 2000);
   address student_address("4667 Telegraph Road", "CA", 93003);

//          Original information
   Students s1("Johns", 9001001, student_dob, student_address);
   cout << "\n" << "Original:" << endl;
   s1.printStudent();

//          Changed year
   DOB newdob = s1.getDOB();
   newdob.setYear(2020);
   s1.setDOB(newdob);
   cout << "Changed Year: "  << "\n";
   s1.printStudent();


//          Changed address
   student_dob.setDOB(1, 1, 2020);
   student_address.setAddress("1000 Grand ave", "CA", 90001);
   s1.setDOB(student_dob);
   s1.setAddress(student_address);
   cout << "Changed Address: " << "\n" ;
   s1.printStudent();
}