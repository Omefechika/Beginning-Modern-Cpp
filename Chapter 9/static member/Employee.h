// Employee.h : Member function defined in Employee.cpp
// Employee class definition with a static data member to
// track the number of Employee objects in memory
#include <string>
using std::string;

#ifndef EMPLOYEE_H
#define EMPLOYEE_H

// class employee definition
class Employee
{
public:
    Employee(const string &, const string &); // constructor
    ~Employee();                              // destructor
    string getFirstName() const;
    string getLastName() const;

    static unsigned int getCount(); // returns number of class instance created
private:
    string firstName{};
    string lastName{};

    // static data member
    static unsigned int count; // store count of instances created
};
#endif