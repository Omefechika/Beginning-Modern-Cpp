// rational.cpp
// class rational member function definitions
#include <cmath> // abs() for negative values
#include <sstream>
#include <iostream>
#include <numeric>
#include <string>
#include "rational.h"
using namespace std;
using std::string;

unsigned int Rational::gcd{0};

Rational::Rational(int num1, int num2)
    : numerator(num1), denominator(num2)
{
    // constructor body finds the GCD of the two numbers
    // using it to produce the reduced form of the fraction
    getGcd(num1, num2);
}

// reduced fraction form
void Rational::getGcd(int num1, int num2)
{
    int max{num1 > num2 ? num1 : num2};
    // avoid division by zero error,
    // if denominator value is 0, convert to 1
    if (num2 == 0)
    {
        num2 = 1;
    }

    // if negative value, use abs() functio
    if (num1 < 0 && num2 < 0)
    {
        num1 = abs(num1);
        num2 = abs(num2);
    }

    for (unsigned int ii{1}; ii < max; ii++)
    {
        // if a number divides both numbers without
        // a remainder, assign number to Rational::gcd
        if (num1 % ii == 0 && num2 % ii == 0)
        {
            Rational::gcd = ii;
        }
    }

    // divide private values by Rational::gcd
    numerator /= Rational::gcd;
    denominator /= Rational::gcd;
}

// adds two class objects
string Rational::add(const Rational &newRationalObject) const
{
    ostringstream output;

    // if objects denominator are equal
    if (denominator == newRationalObject.denominator)
    {
        int newNumerator = (numerator * newRationalObject.denominator) +
                           (newRationalObject.numerator * denominator);
        int newDenominator = (denominator * newRationalObject.denominator);

        newNumerator /= std::gcd(newNumerator, newDenominator);
        
        cout << newNumerator << " and " << newDenominator << endl;
        // ouput result
        output << "(" << numerator << "/" << denominator
               << ") + (" << newRationalObject.numerator
               << "/" << newRationalObject.denominator << ") = "
               << newNumerator << "/" << newDenominator/denominator;
    }
    else
    {
        
    }

    return output.str();
}

void Rational::subtract(const Rational &) {} // subtract two class objects
void Rational::multiply(const Rational &) {} // product of two class objects
void Rational::divide(const Rational &) {}   // qoutient of two class Rational::obostringstream output;

// string representationof a fraction
string Rational::toRationalString() const
{
    ostringstream output;
    output << "";
    return output.str();
}

// return fraction as a double
double Rational::toDouble()
{
    return 0.0;
}
