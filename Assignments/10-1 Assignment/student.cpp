#include <iostream>
#include <cstdlib>
#include "student.hpp"

using namespace std;

Student::Student(const Student &rhs){   // copy constructor
    num_classes = rhs.num_classes;    
    name = rhs.name;
} 

Student::~Student(){     //Destructor
    delete [] class_list;
}

Student &Student::operator=(const Student &rhs) // overloading
{
    num_classes = rhs.num_classes;    
    name = rhs.name;
    class_list = new string[num_classes];
    for(int i = 0; i < num_classes; i++){
        *(class_list+i) = *(rhs.class_list+i); 
    }   
    return *this;
}

void Student::inputClass(){
    cout << "First Name: ";
    cin >> name;
    cout << "# of Classes:\n";
    cin >> num_classes;

    class_list = new string [num_classes];
    for (int i = 0; i < num_classes; i++){
        cout << "Class name " << (i+1) << ": \n";
        cin >> *(class_list+i);
    }
}

void Student::resetClass(){
    class_list = 0;
    num_classes = 0;
    name = ' ' ;
}

void Student::printAll() const{
    cout << "Student name: \n" << name << endl;
    cout << "Number of Classes: " << num_classes << endl;
    cout << "Class List:" << endl;
    for(int i = 0; i < num_classes; i++){
        cout << "*" << *(class_list+i) << endl;
    }
    cout << endl;
}

string Student::getName() const{
    return name;
}

int Student::getNumclasses() const{
    return num_classes;
}




