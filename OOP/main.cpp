// main.cpp
#include <iostream>
#include "Employee.h"
using namespace std;

int main()
{
    Employee employee1;
    employee1.Name = "Saldina";
    employee1.Company = "YT-CodeBeauty";
    employee1.Age = 25;

    // formatted display of employee object details
    employee1.IntroduceYourself();
}