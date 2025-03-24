#include <iostream>
#include "rational.h"
using namespace std;

int main()
{
    Rational r1{1, 3};
    Rational r2{1, 3};

    cout << r1.add(r2) << endl;
}