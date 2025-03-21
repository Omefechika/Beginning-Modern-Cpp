// main.cpp
// static data member tracking the number of instance of class object
#include <iostream>
#include "Employee.h"
using namespace std;

int main()
{
    // object instance before initialization
    cout << "Number of employee before instantiation of any objects is: "
         << Employee::getCount() << endl;
    cout << endl;

    {
        // creating two class instances
        Employee e1{"Susan", "Baker"};
        Employee e2{"Robert", "Jones"};

        // confirming static member
        cout << "Number of employee after instantiation of any objects is: "
             << Employee::getCount() << endl;
        cout << endl;

        // testing functions getFirstName and getLastName for e1 and e2
        cout << "Employee1: " << e1.getFirstName()
             << " " << e1.getLastName() << endl
             << "Employee2: " << e2.getFirstName()
             << " " << e2.getLastName() << endl;
        cout << endl;
    }
    // comnfirm static member after destructor call
    cout << "\nNumber of employee after destructor of objects is: "
         << Employee::getCount() << endl;
}