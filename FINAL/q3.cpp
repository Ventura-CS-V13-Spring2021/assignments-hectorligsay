#include <cstdlib>
#include <iostream> 
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
        Student(const Student &rhs); // Copy Constructor
        ~Student();//destructor
        Student &operator=(const Student &rhs);// Overloading assignment Operator
        void inputClass(); // Gets data from user
        void resetClass(); // Reset class list
        void printAll()     const;; // Prints to console
        string getName() const;
        int getNumclasses() const;

};

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
    name = " " ;
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




int main()
{
    Student stud, stud_copy;
    
    cout << "-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-";
    cout << "Input Data" << 
    "-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-\n";
    stud.inputClass();//get inputClass

    cout << "-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-";
    cout << "Student information" << 
    "-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-\n";
    
    stud.printAll(); //student A
    
    
    stud_copy = stud;  // uses assignment operator
    // stud_copy(stud);
    cout << "Copy of Student Info: " << endl;
    stud_copy.printAll();
    
    stud.resetClass(); //Resets class

    cout << "Student information after clearing:" << endl;
    stud.printAll(); // No class information at all
}