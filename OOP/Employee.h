// Employee.h
// class definition for an employee object
// class member function defined in Employee.cpp
#include <string>
using std::string;

#ifndef EMPLOYEE_H
#define EMPLOYEE_H

// creating a virtual function in an abstraction calss
class AbstractEmployee
{
    virtual void AskForPromotion() const = 0;
};

class Employee : AbstractEmployee
{
public:
    // Employee class constructor
    explicit Employee(string, string, int = 0);

    // setters prototype
    void setName(const string &);
    void setCompany(const string &);
    void setAge(const int &);

    // getters prototype
    string getName() const;
    string getCompany() const;
    int getAge() const;

    // function displays current employee object data
    void IntroduceYourself() const;

    void AskForPromotion() const override;

private:
    string Name{};
    string Company{};
    int Age{0};
};

#endif