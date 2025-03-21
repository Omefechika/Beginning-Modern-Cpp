#include <iostream>
#include "Employee.h"
using namespace std;

Employee::Employee(std::string name, std::string company, int age)
    : Name{name}, Company{company}, Age{age}
{
}

// setters definitions
void Employee::setName(const string &name)
{
    this->Name = name;
}

void Employee::setCompany(const string &company)
{
    this->Company = company;
}

void Employee::setAge(const int &age)
{
    this->Age = age;
}

// getters definition
std::string Employee::getName() const { return Name; }
std::string Employee::getCompany() const { return Company; }
int Employee::getAge() const { return Age; }

// function displays employee info
void Employee::IntroduceYourself() const
{
    cout << "Name - " << Name << endl;
    cout << "Company - " << Company << endl;
    cout << "Age - " << Age << endl;
    cout << endl;
}

// promotion method definition
void Employee::AskForPromotion() const
{
    if (Age > 30)
    {
        cout << Name << " got promoted" << endl;
    }
    else
        cout << Name << " Sorry No promotion for you" << endl;
}