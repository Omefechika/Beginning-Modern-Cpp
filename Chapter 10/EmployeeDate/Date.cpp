// Date.cpp
// Date class member-function definitions
#include <array>
#include <iostream>
#include <sstream>
#include <stdexcept>
#include "Date.h" // include Date class definition
using namespace std;

// constructor confirms proper value for month; calls
// utility function checkDay to confirm proper value for day
Date::Date(unsigned int mm, unsigned int dd, unsigned int yy)
    : month{mm}, day{checkDay(dd)}, year{checkDay(yy))}
{
    if (mm < 1 || mm > monthsPerYear)
    {
        throw invalid_argument("Error: Months must be 1-12")
    }

    // output Date object to show when its constructor is called
    cout << "Date object constructor for date " << toString() << endl;
}

// print Date object in MM/DD/YYYY format
string Date::toString() const
{
    ostringstream output;
    output << month << "/" << day << "/" << year;
    return output.str();
}

// output Date object for destructor call
Date::~Date()
{
    cout << "Date object destructor for date " << toString() << endl;
}

// utility function to confirm proper day value based on
// month and year; handles leap years, too
unsigned int Date::checkDay(int testDay) const
{
    static const array<int, monthsPerYear + 1> dayPerMonth{
        0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    // determine wheter testDay is valid for specified month
    if (testDay > 0 && testDay <= daysPerMonth[month])
    {
        return testDay;
    }

    // February 29 check for leap year
    if (month == 2 && testDay == 29 && (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)))
    {
        return testDay;
    }
    throw invalid_argument("Invalid day for current month and year");
}
