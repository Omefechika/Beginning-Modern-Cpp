// CommissionEmployee.h
// Class definition  represents an commission employee .
// member function defined in commissionEmployee.cpp

#ifndef COMMISSION_H
#define COMMISSION_H

#include <string>

class CommissionEmployee {
public:
  CommissionEmployee(const std::string &, const std::string &,
                     const std::string &, double = 0.0, double = 0.0);

  void setFirstName(const std::string&); // set first name
  std::string getFirstName() const;

  // set-return last name
  void setLastName(const std::string&);
  std::string getLastName()const;

  // set and return SSN
  void setSocialSecurityNumber(const std::string&);
  std::string getSocialSecurityNumber() const;

  //set and get commission rate (percentage)
  void setCommissionRate(double);
  double getCommissionRate()const;

  // set and get gross sales amount
  void setGrossSales(double);
  double getGrossSales() const;

  double earnings() const; // calculate earnings
  std::string toString() const;// create string representation
private:
  std::string firstName;
  std::string lastName;
  std::string socialSecurityNumber;
  double grossSales; // gross weekly sales
  double commissionRate; // percentage per commission.  
};

#endif
