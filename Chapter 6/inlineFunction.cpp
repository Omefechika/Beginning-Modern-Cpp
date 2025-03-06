// inlineFunction.cpp : inline function that calculates the volumn of a cube
#include <iostream>
using namespace std;

// function definition and implementation
inline double cube(const double side)
{
    return side * side * side;
}

int main()
{
    double sideValue; // store value entered by user
    cout << "Enter the side length of your cube: ";
    cin >> sideValue;

    // calculate cube and display result
    cout << "Volumne of cube wiht side " << sideValue
         << " is " << cube(sideValue) << endl;
}