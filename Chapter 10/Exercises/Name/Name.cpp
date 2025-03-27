// Name.h
// Function members definition
#include <sstream>
#include "Name.h"
#include <iostream>

// Constructor
Name::Name(std::string fName, std::string lName,
           std::string midName, std::string salutation)
    : firstName{fName}, lastName{lName},
      middleName{midName}, salutation{salutation}
{
    // empty constructor body
}

// string representation of class object in
// fullname format: “salutation lastName, firstName middleName”
std::string Name::toString() const
{
    std::ostringstream output;

    output << this->salutation << " " << lastName << ", "
           << firstName << " " << middleName;
    return output.str();
}

void Name::setFirstName(std::string fName)
{
    firstName = fName;
}

std::string Name::getFirstName() const { return firstName; }

// Last Name
void Name::setLastName(std::string lName)
{
    lastName = lName;
}
std::string Name::getLastName() const { return lastName; }

// Middle Name
void Name::setMiddleName(std::string midName)
{
    middleName = midName;
}

std::string Name::getMiddleName() const { return middleName; }

// Salutation
void Name::setSalutation(std::string salutation)
{
    this->salutation = salutation;
}

std::string Name::getSalutation() const { return salutation; }
