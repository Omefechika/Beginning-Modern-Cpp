// Rectanlge.h
// A Ractangle class with lenght and width attributes
// class member function defined in Rectangle.cpp
#include <string>

#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle
{
public:
    // setting default value to constructor
    Rectangle(float = 1.0, float = 1.0);
    float getLength() const;
    float getWidth() const;
    void setLengthAndWidth();
    void validateAttributes(float &, float &);
    float Parameter(); // return parameter .
    float Area();      // returns area.

private:
    float length, width;
};
#endif