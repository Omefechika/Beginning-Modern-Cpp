// Date.cpp
// Date class member- and friend- function definitions
#include "Date.h"
#include <array>
#include <functional>
#include <stdexcept>
using namespace std;

// initialize static member; one class-wide copy
const array<unsigned int, 13> Date::days{0,  31, 28, 31, 30, 31, 30,
                                         31, 31, 30, 31, 30, 31};

// Date constructor
Date::Date(int month, int day, int year) { setDate(month, day, year); }

void Date::setDate(int mm, int dd, int yy) {
  if (mm >= 1 && mm <= 12) {
    month = mm;
  } else {
    throw invalid_argument{"Month must be 1-12"};
  }

  if (yy >= 1900 && yy <= 2100) {
    year = yy;
  } else {
    throw invalid_argument{"Year must be >= 1900 and <= 2100"};
  }

  // test for a leap year.
  if ((mm == 2 && isLeapYear(year) && dd >= 1 && dd <= 29) ||
      (dd >= 1 && dd <= days[mm])) {
    day = dd;
  } else {
    throw invalid_argument{"Day is out of range for current month and year"};
  }
}

Date& Date::operator++()
{
  helpIncrement(); // increment date
  return *this; // reference return to create an lvalue
}

// overload 

