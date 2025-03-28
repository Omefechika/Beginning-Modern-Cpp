#include <stdexcept>
#include <sstream>
#include <iostream>
#include "Rectangle.h"
using namespace std;

Rectangle::Rectangle(float length, float width)
    : length(length),
      width(width)
{
    validateAttributes(length, width); // validate input
}

void Rectangle::validateAttributes(float &length, float &width)
{

    // check if input are floating point value
    if (static_cast<float>(length) == length &&
        static_cast<float>(width) == width)
    {
        // checks input range
        if ((length > 0.0 && length < 20.0) && (width > 0.0 && width < 20.0))
        {
            // assign input to data members
            this->length = length;
            this->width = width;
        }
        else
            throw invalid_argument("Length and width must be between 0 and 20.");
    }
}

// setting a new value for class object
void Rectangle::setLengthAndWidth()
{
    float newLength;
    float newWidth;
    while (true) // Loop until valid input is provided
    {
        try
        {
            cout << "Enter a new length: ";
            cin >> newLength;
            cout << "Enter a new width: ";
            cin >> newWidth;

            validateAttributes(newLength, newWidth); // validate new input
            this->length = newLength;
            this->width = newWidth;
            break; // Exit loop if successful
        }
        catch (const invalid_argument &e)
        {
            cout << e.what() << " Please try again.\n";
        }
    }
}

// getting present data member values
float Rectangle::getLength() const
{
    return length;
}

// getting present data member values
float Rectangle::getWidth() const
{
    return width;
}

// calculate the parameter of the rectangle
float Rectangle::Parameter()
{
    return 2.0 * (length * width);
}

// calculate Area of rectangle
float Rectangle::Area()
{
    return length * width;
}
