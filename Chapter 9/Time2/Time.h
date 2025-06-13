// Time.h
// Time class version 2, class containg a constructor with
// default arguments. Member functions defined in Time.cpp
#include <string>

// prevents multiple inclusions of header
#ifndef TIME_H
#define TIME_H

// Time class definition
class Time
{
public:
    explicit Time(int = 0, int = 0, int = 0); // default constructor

    // set functions
    void setTime(int, int, int); // set hour, minute, and second
    void setHour(int);           // set hour (after validate)
    void setMinute(int);         // set minutes (after validation )
    void setSecond(int);         // set second (after validation)

    // get functions
    unsigned int getHour() const;   // return Hour
    unsigned int getMinute() const; // return minute
    unsigned int getSecond() const; // return second

    std::string toUniversalString() const; // 24-hour time format string
    std::string toStandardString() const;  // 12-hours time format string

private:
    unsigned int hour{12}; // 0 -23 (24-hour clock format)
    unsigned int minute{0}; // 0 - 59
    unsigned int second{0}; // 0 - 59
};
#endif