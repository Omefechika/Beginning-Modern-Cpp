// Date.cpp
// Date class member-function definition
// mm = month; dd = day; yy = year
#include <sstream>
#include <string>
#include "Date.h" // include definition from Date.h
using namespace std;

// Date constructor (should do range check)
Date::Date(unsigned int mm, unsigned int dd, unsigned int yy)
    : month{mm}, day{dd}, year{yy} {};

string Date::toString() const
{
    ostringstream output;
    output << month << "/" << day << "/" << year;
    return output.str();
}