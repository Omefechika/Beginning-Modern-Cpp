// Time.cpp
// Time member function definition
#include <iomanip>
#include <stdexcept>
#include <sstream>
#include <string>
#include "Time.h" // include class definition from Time.h
using namespace std;

// Time constructor initializes each data member
Time::Time(int hour, int minute, int second)
{
    setTime(hour, minute, second); // validate and set
}

// set new Time value using universal time
void Time::setTime(int h, int m, int s)
{
    setHour(h);   // set private field hour
    setMinute(m); // set private field minute
    setSecond(s); // set private field second
}

// validate and set hour value
void Time::setHour(int h)
{
    if (h >= 0 && h < 24)
    {
        hour = h;
    }
    else
    {
        throw invalid_argument("Hour must be 0-24");
    }
}

// validate and set minute value
void Time::setMinute(int m)
{
    if (m >= 0 && m < 59)
    {
        minute = m;
    }
    else
    {
        throw invalid_argument("Minute must be 0-60");
    }
}

// validate and set second value
void Time::setSecond(int s)
{
    if (s >= 0 && s < 59)
    {
        second = s;
    }
    else
    {
        throw invalid_argument("Second must be 0-60");
    }
}

// return hour value
unsigned int Time::getHour() const
{
    return hour;
}

// return minute value
unsigned int Time::getMinute() const
{
    return minute;
}

// return second value
unsigned int Time::getSecond() const
{
    return second;
}

// return Time as a string in universal-time format (HH:MM:SS)
std::string Time::toUniversalString() const
{
    ostringstream output;
    output << setfill('0') << setw(2) << getHour() << ":"
           << setw(2) << getMinute() << ":" << setw(2) << getSecond();
    return output.str();
}

// return Time as string in standard-time format (HH:MM:SS AM or PM)
string Time::toStandardString() const
{
    ostringstream output;
    output << ((getHour() == 0 || getHour() == 12) ? 12 : getHour() % 12)
           << ":" << setfill('0') << setw(2) << getMinute() << ":" << setw(2)
           << getSecond() << (hour < 12 ? " AM" : " PM");
    return output.str();
}