// Employee.cpp
// Employee class member-function definitions.
#include <iostream>
#include <sstream>
#include "Employee.h" // Employee class definition.
#include "Date.h"     // Date class definition.
using namespace std;

// constructor uses member initializer list to pass initilaizer
// values to constructors of a member objects
Employee::Employee(const string &first, const string &last,
                   const Date &dateOfBirth, const Date &dateOfHire)
    : // initialize object data members.
      firstName{first},
      lastName{last},
      birthDay{dateOfBirth},
      hireDate{dateOfHire}
{
    // output object to show constructor execution.
    cout << "Employee object constructor: "
         << firstName << ' ' << lastName << endl;
}

// print Employee object
string Employee::toString() const
{
    ostringstream output;
    output << lastName << ", " << firstName << " Hired: "
           << hireDate.toString() << " Birthday: " << birthDay.toString();
    return output.str();
}

// output Employee object to show destructor execution
Employee::~Employee()
{
    cout << "Employee object destructor: "
         << lastName << ", " << firstName << endl;
}