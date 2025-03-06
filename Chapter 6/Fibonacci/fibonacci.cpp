// fibonacci.cpp : Testing the recursive fibonacci definition
#include <iostream>
#include "fibonacci.h"
#include <ctime>
using namespace std;

int main()
{
    // demonstrating for a non-negative integer value
    unsigned int num; // store user value
    cout << "Enter a value: ";
    cin >> num;

    // invoke fibonacci template
    cout << "\nFibonacci series for " << num << ": " << endl;
    for (unsigned int counter{0}; counter <= num; counter++)
    {
        cout << "fibonacci(" << counter << ") = "
             << fibonacci(counter) << endl;
    }

    cout << "fibonacci(100) = "
             << fibonacci(100) << endl;
}