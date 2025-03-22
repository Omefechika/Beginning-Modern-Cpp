// main.cpp
// testing the functionality of class Quadractic
#include <iostream>
#include "quadratic.h"
using namespace std;

int main()
{
    // creating a class object instance
    Quadratic e1{1, -8, 5};
    // creating a new object instance
    Quadratic e2{10, -3, -90};
    // creating a new object instance
    Quadratic e3;
    cout << endl;

    cout << "Subtraction Function" << endl;
    e1.substract(e2); // perform subtraction of 2 quadractic functions
    cout << endl;

    cout << "Addition Function" << endl;
    e1.add(e2);
    cout << endl;

    // testing solve member function
    e3.toString();
    e3.solve();
}