// Name.h
// class function member defined in name.cpp
#include <string>
using std::string;

#ifndef NAME_H
#define NAME_H

class Name
{
private:
    string firstName{}, lastName{};
    string middleName{}, salutation;

public:
    // constructor
    explicit Name(string, string, string, string);

    // string representationof full name
    string toString() const;

    // getters and setters for all class data members
    string getFirstName() const;
    void setFirstName(string);

    string getLastName() const;
    void setLastName(string);

    string getMiddleName() const;
    void setMiddleName(string);

    string getSalutation() const;
    void setSalutation(string);
};
#endif