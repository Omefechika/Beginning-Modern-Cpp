// Employee.h
// class definition for an employee object
// class member function defined in Employee.cpp
#include <string>
using std::string;


#ifndef EMPLOYEE_H
#define EMPLOYEE_H

class Employee
{
public:
    string Name;
    string Company;
    int Age;

    // function displays current employee object data
    void IntroduceYourself() const;
};

#endif