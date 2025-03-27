// Rational.h
// class for performing fractional arithmetic
// class member function defined in rational.cpp
#include <string>
using std::string;

#ifndef RATIONAL_H
#define RATIONAL_H

class Rational
{
public:
    Rational(int = 1, int = 1); // constructor with default parameters
    void getGcd(int, int);      // holds the GCD of both numerator and denominator

    // member functions for arithmetic operations,
    // results are stored in the reduced form
    string add(const Rational &) const; // adds two class objects
    string subtract(const Rational &);    // subtract two class objects
    void multiply(const Rational &);    // product of two class objects
    void divide(const Rational &);      // qoutient of two class objects
    string toRationalString() const;    // string representationof a fraction
    void toDouble();                  // return fraction as a double

private:
    int numerator;
    int denominator;
    static unsigned int gcd;
};
#endif
