#include "student.hpp"

using namespace std;

int main(){
  Student stud, stud_copy;
  
  cout << "+-+-+-+-+-+-+-+-=-+-+-";
  cout << "Input Data" << 
  "+-+-+-+-+-+-+-+-=-+-+-\n";
  stud.inputClass();//get inputClass

  cout << "+-+-+-+-+-+-+-+-=-+-+-";
  cout << "Student information" << 
  "+-+-+-+-+-+-+-+-=-+-+-\n";
  
  stud.printAll(); //student A
  
  
  stud_copy = stud;  // uses assignment operator
  // stud_copy(stud);
  cout << "Copy of Student Info: " << endl;
  stud_copy.printAll();
  
  stud.resetClass(); //Resets class

  cout << "Student information after clearing:" << endl;
  stud.printAll(); // No class information at all
}