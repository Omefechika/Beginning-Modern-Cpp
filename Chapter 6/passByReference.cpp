// passByReference.cpp : Understading the difference between
// pass-by-value and pass-by-reference
#include <iostream>
using namespace std;

// function prototype
int squareByValue(int);        // pass-by-value
void squareByReference(int &); // pass-by-reference

int main()
{
    int x{2}; // value passed to squareByValue
    int z{4}; // value passed to squareByReference

    // demostrate pass-by-value
    cout << "x = " << x << " before squareByValue\n";
    cout << "Value returned by squareByValue: "
         << squareByValue(x) << endl;
    cout << "x = " << x << " after squareByValue\n"
         << endl;

    // demonstrate squareByReference
    cout << "z = " << z << " before squareByReference" << endl;
    squareByReference(z);
    cout << "z = " << z << " after squareByReference" << endl;
}

// squareByValue multiples a number by itself, stores the result in number
// and return the squared of number
int squareByValue(int number)
{
    return number *= number; // caller's argument not modified
}

// squareByReference multiples numberRef by itself, stores the result in
//  numberRef which refers to the caller's argument. returns modified result
void squareByReference(int &numberRef)
{
    numberRef *= numberRef;
}