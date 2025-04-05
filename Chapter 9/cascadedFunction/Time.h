// Time.h
// Time class modified to enable cascaded member-function calls.
#include <string>

// Time class definition
// Member functions defined in Time.cpp
#ifndef TIME_H
#define TIME_H

class Time
{
public:
    explicit Time(int = 0, int = 0, int = 0); // default constructor

    // set functions (he Time& return type enables cascading)
    Time &setTime(int, int, int); // sets hour, minutes and second
    Time &setHour(int);
    Time &setMinute(int);
    Time &setSecond(int);

    // get functions return time values
    unsigned int getHour() const;
    unsigned int getMinutes() const;
    unsigned int getSecond() const;
    std::string toUniversalString() const; // 24-hour time format
    std::string toStandardString() const;  // 12-hour time format
    
private:
    unsigned int hour{0};   // 0 -23 (24-hour clock format)
    unsigned int minute{0}; // 0 - 59
    unsigned int second{0}; // 0 - 59
};
#endif