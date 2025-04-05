// PhoneNumber.cpp: class Implementation
// Overload stream insertion and stream extraction
// for class PhoneNumber.
#include "PhoneNumber.h"
#include <iomanip>
#include <type_traits>
using namespace std;

// overloaded stream insertion operator; cannot be a member function
ostream &operator<<(ostream &output, const PhoneNumber &number) {
  output << "Area code: " << number.areaCode
         << "\nExchange: " << number.exchange << "\nLine: " << number.line
         << "\n"
         << "(" << number.areaCode << ")" << number.exchange << "-"
         << number.line << "\n";

  // enables cout << a << b << c;
  return output;
}

istream &operator>>(istream &input, PhoneNumber &number) {
  input.ignore(); // skip (
  input >> setw(3) >> number.areaCode;
  input.ignore(2); // skip ) ans space
  input >> setw(3) >> number.exchange; // input exchange
  input.ignore();
  input >> setw(4) >> number.line;
  return input;
}

