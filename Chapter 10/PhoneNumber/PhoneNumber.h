// PhoneNumber.h: Class definition
// PhoneNumber member function defined in Phonenumber.cpp

#ifndef PHONENUMBER_H
#define PHONENUMBER_H

#include <istream>
#include <ostream>
#include <string>

class PhoneNumber {
public:
  friend std::ostream &operator<<(std::ostream &, const PhoneNumber &);
  friend std::istream &operator>>(std::istream &, PhoneNumber &);

private:
  std::string areaCode; // 3-digit area code
  std::string exchange; // 3-digit exchange
  std::string line;     // 4-digit line
};
#endif
