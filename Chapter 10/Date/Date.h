// Date.h
// Date class definition with overloaded increment operators.
#ifndef DATE_H
#define DATE_H

#include <array>
#include <ostream>

class Date {
  friend std::ostream &operator<<(std::ostream, const Date &);

public:
  Date(int m = 1, int d = 1, int y = 1900); // default constructor
  void setDate(int, int, int);              // set month, day, and year
  Date &operator++();                       // prefix increment operator
  Date operator++(int);                     // postfix increment operator
  Date &operator+=(unsigned int);           // add days, modify object
  static bool isLeapYear(int);              // is year a leap year
  bool endOfMonth(int) const;               // is day at the end of the month
private:
  unsigned int month;
  unsigned int day;
  unsigned int year;

  static const std::array<unsigned int, 13> days; // days per month
  void helpIncrement(); // utility function for incrementing date
};

#endif
