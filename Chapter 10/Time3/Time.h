// Time.h
// Time class declaration
// member function implemented in Time.cpp

// prevent multiple inclusion
#ifndef TIME_H
#define TIME_H
class Time
{
public:
    void setTime(int, int, int);
    unsigned int getHour() const;
    unsigned int &badSetHour(int); // dangerous reference return

private:
    unsigned int hour{0};
    unsigned int minute{0};
    unsigned int second{0};
};

#endif
