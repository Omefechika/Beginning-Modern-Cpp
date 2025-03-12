// Fig. 9.16: fig09_16.cpp
// Demonstrating that class objects can be assigned
// to each other using default memberwise assignment.
#include <iostream>
#include "Date.h" // include definition of class Date from Date.h
using namespace std;

int main()
{
    Date date1{7, 4, 2004};
    Date date2{}; // date2 defaults to 1/1/2000

    cout << "date1 = " << date1.toString()
         << "\ndate2 = " << date2.toString() << "\n\n";

    date2 = date1; // default memberwise assignment

    cout << "After default memberwise assignment, date2 = "
         << date2.toString() << endl;
}