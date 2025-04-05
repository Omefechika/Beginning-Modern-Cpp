// Time.h
// Time class definition
// Member functions are defined in Time.cpp
#include <string>

// prevent multiple inclusion of header
#ifndef TIME_H
#define TIME_H

// class Time definition
class Time
{
public:
    void setTime(int, int, int);           // set time's hour minute and second
    std::string toUniversalString() const; // 24-hours time string format
    std::string toStandardString() const;  // 12-hour time string format
private:
    unsigned int hour{0};    // 0-23 (24-hour clock format)
    unsigned int minute{0}; // 0-59
    unsigned int second{0};  // 0-59
};
#endif