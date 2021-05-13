#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

class Student
{
    private: 
        string name;
        int num_classes;
        string *class_list;

	public: 
        Student() : name(), num_classes(0), class_list(NULL) {}; // Constructor
        Student(string n, int num){};
        Student(Student &rhs); // Copy Constructor
        ~Student();//destructor
        Student &operator =(const Student &rhs);// Overloading assignment Operator
        void inputClass(); // Gets data from user
        void resetClass(); // Reset class list
        void printAll()     const;; // Prints to console
        string getName() const;
        int getNumclasses() const;

};
#endif