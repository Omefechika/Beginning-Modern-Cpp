#include <iostream>
#include "Employee.h"
using namespace std;

Employee::IntroduceYourself() const{
    cout << "Name - " << Name << endl;
    cout << "Company - " << Company << endl;
    cout << "Age - " << Age << endl;
}