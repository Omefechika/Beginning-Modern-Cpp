// Date.h
// Date class declaration. Member function defined in Date.cpp
#include <string>

// prevents multiple inclusion
#ifndef DATE_H
#define DATE_H

// class Date definition
class Date
{
public:
    Date(unsigned int = 1, unsigned int = 1, unsigned int = 2000);
    std::string toString() const;

private:
    unsigned int month{10};
    unsigned int day{1};
    unsigned int year{2000};
};

#endif