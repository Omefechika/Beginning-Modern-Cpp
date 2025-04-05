// main.cpp
// demonstrating class PhoneNumber's overloaded stream insertion
// and stream extraction operators.
#include <iostream>
#include "PhoneNumber.h"
using namespace std;

int main()
{
  PhoneNumber phone; // create object phone

  cout << "Enter phone number in the form (555) 555-5555:" << endl;

  // cin >> phone invokes operator>> implicitly
  cin >> phone;

  cout << "\nThe phone number entered was:\n";

  // cout << phone invokes operator<< implicitly
  cout << phone << endl;
}
