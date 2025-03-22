// quadractic.cpp
// class function members definition
#include <iostream>
#include <cmath> // for sqrt function
#include <array>
#include "quadratic.h"
using namespace std;

// default value for first coefficient of x
double Quadratic::defaultValue{1};
unsigned int Quadratic::count{0}; // tracks created object instances

// constructor
Quadratic::Quadratic(double aVal, double bVal, double cVal)
    : aValue{aVal}, bValue{bVal}, cValue{cVal}
{
    // performing value check for ax², where a can not be equal 0
    if (aVal == 0)
    {
        aValue = Quadratic::defaultValue; // set to default value
    }
    ++count; // increament on creation of new class instance

    // perform constructor check
    cout << "Equation" << Quadratic::count << " created:  "
         << aValue << constValue << "²"
         << " + " << bValue << constValue
         << " + " << cValue << " = 0" << endl;
}

// adds two quadratic class objects
void Quadratic::add(const Quadratic &newQuadObj)
{
    Quadratic::toString();
    cout << " + ";
    newQuadObj.toString();
    {
        cout << " = "
             << (aValue + newQuadObj.aValue) << constValue << "²"
             << "+" << (bValue + newQuadObj.bValue) << constValue
             << "+" << (cValue + newQuadObj.cValue);
    }
    cout << endl;
}

// substracts two class objects
void Quadratic::substract(const Quadratic &newQuadObj)
{
    Quadratic::toString();
    cout << " - ";
    newQuadObj.toString();
    {
        cout << " = "
             << (aValue - newQuadObj.aValue) << constValue << "²"
             << "+" << (bValue - newQuadObj.bValue) << constValue
             << "+" << (cValue - newQuadObj.cValue);
    }
    cout << endl;
}

// string representation of quadratic equation
void Quadratic::toString() const
{
    cout << "(" << aValue << constValue << "²"
         << "+" << bValue << constValue
         << "+" << cValue << ")";
}

// solve the equation using the formular
void Quadratic::solve()
{
    std::array<double, 2> x{0}; // x is an array that holds the 2 values of the quadratic equation

    if (((bValue * bValue) - (4 * aValue * cValue)) > 0.0)
    {
        // first quadratic root
        x[0] = (-bValue + sqrtf32((bValue * bValue) -
                                  (4 * aValue * cValue))) /
               2 * aValue;
        // second quadratic root
        x[1] = (-bValue - sqrtf32((bValue * bValue) -
                                  (4 * aValue * cValue))) /
               2 * aValue;

        // display quadratic roots
        cout << ":" << " [x1: " << x[0] << "]"
             << " [x2: " << x[1] << "]" << endl;
    }
    else
        cout << ": No Real Roots" << endl;
}
