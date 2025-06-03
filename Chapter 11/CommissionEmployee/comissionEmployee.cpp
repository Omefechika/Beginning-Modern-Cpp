// CommissionEmployee.cpp
// class CommissionEmployee member-function definitions.
#include "comissionEmployee.h"
#include <stdexcept>
#include <string>
using namespace std;

// constructor
CommissionEmployee::CommissionEmployee(const string &first, const string &last,
                                       const string &ssn, double sales,
                                       double rate) {
  firstName = first;
  lastName = last;
  socialSecurityNumber = ssn;
  setGrossSales(sales);
  setCommissionRate(rate);
}

// set first name
void CommissionEmployee::setFirstName(const string &first) {
  firstName = first;
}
// return first name
string CommissionEmployee::getFirstName() const { return firstName; }

// last name
void CommissionEmployee::setLastName(const string &last) { lastName = last; }
// return last name
string CommissionEmployee::getLastName() const { return lastName; }
