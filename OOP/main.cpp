// main.cpp
#include <iostream>
#include "Employee.h"
using namespace std;

int main()
{
    Employee employee1("Saldina",
                       "YT-CodeBeauty",
                       25);
    // formatted display of employee object details
    employee1.IntroduceYourself();

    // new employee object instance
    Employee employee2("John",
                       "Amazon",
                        35);
    employee2.IntroduceYourself();

    employee2.setName("Alex");
    employee2.IntroduceYourself();

    // testing getters
    cout << employee1.getName() << " is " << employee1.getAge() 
    << " years old" << endl;

    cout << employee2.getName() << " is " << employee2.getAge() 
    << " years old" << endl;
}