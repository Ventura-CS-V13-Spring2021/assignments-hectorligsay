#ifndef DOB_H      //if not defined
#define DOB_H      // defined this keyword


class DOB
{
private:
   int month;
   int day;
   int year;

public:
   DOB() : month(0), day(0), year(0) {};
   DOB(int m, int d, int y) : month(m), day(d), year(y) {};
   int getMonth() const;
   int getDay() const;
   int getYear() const;
   void printDate() const; // Print all member variable to display the date of birth.
   void setDOB(int m, int d, int y);
   void setMonth(int m);
   void setDay(int d);
   void setYear(int y);
};
#endif

//test for construct
