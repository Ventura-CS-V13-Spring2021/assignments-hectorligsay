#include <iostream>
#include <cstdlib>
#include <string>
#include <iomanip>
#include "student.hpp"

using namespace std;

Student::Student(Student &rhs){ // copy constructor
    
    num_classes = rhs.num_classes;
    name = rhs.name;
    class_list = new string[num_classes];
        for (int i = 0; i < num_classes; i++){
            class_list[i] = rhs.class_list[i];
        }
} 

Student::~Student()     //Destructor
{
    delete [] class_list;
}

Student &Student::operator =(const Student &rhs) // overloading
{
    num_classes = rhs.num_classes;    
    name = rhs.name;
    if(num_classes > 0)
    {
        class_list = new string[num_classes];
        for(int i = 0; i < num_classes; i++)
        class_list[i] = rhs.class_list[i];    
    }
    return *this;
}

void Student::inputClass()
{
    cout << "Student Name:\n";
    cin >> name;
    cout << "How many Classes:\n";
    cin >> num_classes;
    cin.ignore(2,'\n');

    class_list = new string [num_classes];
    for (int i = 0; i < num_classes; i++){
        cout << "Class name " << (i+1) << " : ";
        getline(cin, class_list[i]);
    }
    cout << endl;
}

void Student::resetClass()
{
    class_list = NULL;
    num_classes = 0;
    name = ' ' ;
}

void Student::printAll() const
{
    cout << "Student name: " << name << endl;
    cout << "Class List:" << endl;
    for(int i = 0; i < num_classes; i++){
        cout << setw(2) << right << class_list[i] << endl;
    }
    cout << endl;
}

string Student::getName() const
{
    return name;
}

int Student::getNumclasses() const
{
    return num_classes;
}




