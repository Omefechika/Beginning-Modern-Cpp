// Rectanlge.h
// A Ractangle class with lenght and width attributes
// class member function defined in Rectangle.cpp
#include <array>
#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle
{
public:
    // setting default value to constructor
    Rectangle(float = 1.0, float = 1.0);
    array<float, Size> getLengthAndWidth() const;
    void setLengthAndWidth(float, float);
    float Parameter();
    float Area();

private:
    float length, width;
    static unsigned int _Size;
};
#endif