// Employee.h
// Employee class definition showing composition.
// Member functions defined in Employee.cpp
#include <string>
#include "Date.h" // include Date class definition

#ifndef EMPLOYEE_H
#define EMPLOYEE_H

class Employee
{
public:
    Employee(const std::string &, const std::string &,
             const Date &, const Date &);
    std::string toString() const;
    ~Employee(); // provides confirmation of destructor order

private:
    // composition: member object
    std::string firstName;
    std::string lastName;
    const Date birthDay;
    const Date hireDate;
};
#endif