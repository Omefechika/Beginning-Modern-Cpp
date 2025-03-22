// Quadratic.h
// Class for performing quadratic equation calculations.
// Quadratic member function defined in quadratic.cpp.
// where a != 0.
#include <string>
#include <array>
using std::string;

// check against duplicate inclusion.
#ifndef QUADRATIC_H
#define QUADRATIC_H

// class definition.
class Quadratic
{
public:
    static double defaultValue;
    // constructor with default arguments
    Quadratic(double aVal = 1, double bVal = 0, double cVal = 0);
    void add(const Quadratic &);       // adds two quadratic class objects
    void substract(const Quadratic &); // substracts two class objects
    void toString() const;             // string representation of quadratic equation
    void solve();                      // solve the equation using the formular

private:
    double aValue;
    double bValue;
    double cValue;
    const char constValue{'x'};
    static unsigned int count; // hold number of instances created
};
#endif