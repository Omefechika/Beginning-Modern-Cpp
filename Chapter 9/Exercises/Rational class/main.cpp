#include <iostream>
#include "rational.h"
using namespace std;

int main()
{
    Rational r1{1, 2};
    Rational r2{1, 10};

    cout << r1.add(r2) << endl;
    cout << r2.subtract(r1) << endl;

    // testign string representation
    cout << "String representation: "
         << r1.toRationalString() << endl;
    cout << "String representation: "
         << r2.toRationalString() << endl;

    // testing toDouble function
    cout << r1.toDouble() << endl;
}