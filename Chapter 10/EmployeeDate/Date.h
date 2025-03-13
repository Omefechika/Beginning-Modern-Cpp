 // Date.h
// Date class definition; Member function defined in Date.cpp
#include <string>

#ifndef DATE_H
#define DATE_H

class Date
{
public:
// monthsPerYear is a variable local to this file
    static const unsigned int monthsPerYear{12}; // months in a year
    explicit Date(unsigned int = 1, unsigned int = 1, unsigned int = 1900);
    std::string toString() const; // date string in MM/DD/YYYY format
    ~Date(); // provided to confirm destructor order

private:
    unsigned int month; // 1-12
    unsigned int day; // 1-31 based on month
    unsigned int year; // any year

    // utility function to check if day is proper for month and year
    unsigned int checkDay(int) const;
};

#endif