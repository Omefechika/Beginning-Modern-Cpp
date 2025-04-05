// Employee.cpp
// Employee class member-function definitions.
#include <iostream>
#include "Employee.h" // class definition
using namespace std;

// define and initialize static data member at global namespace scope
unsigned int Employee::getCount() { return count; }

// initialize static data member at global namespace scope
unsigned int Employee::count{0};

Employee::Employee(const string &f_Name, const string &l_Name)
    : firstName(f_Name), lastName(l_Name)
{
    ++count; // increament count on every object instance od Employee
    cout << "Employee constructor for " << firstName
         << " " << lastName << endl;
}


string Employee::getFirstName() const { return firstName; }
string Employee::getLastName() const { return lastName; }


Employee::~Employee()
{
    cout << "~Employee() called for " << firstName << lastName << endl;
    --count; // decreament count of every destructor call on a class object
}