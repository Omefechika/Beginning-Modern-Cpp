// Rectangle.cpp
// class member function implementation
#include "Rectangle.h"
#include <array>
#include <cmath>
#include <iostream>
#include <sstream>
#include <stdexcept>
using namespace std;

const unsigned int Rectangle::Rectangle::_Size{2};

// constructor
Rectangle::Rectangle(const array<float, Rectangle::_Size> &point1,
                     const array<float, Rectangle::_Size> &point2,
                     const array<float, Rectangle::_Size> &point3,
                     const array<float, Rectangle::_Size> &point4) {
  /*
   * verification of test values
   * if co-ordinate points form a Rectangle, then set values
   * as rectangle's length and width.*/
  setPoints(point1, point2, point3, point4);
  isSquare(length1, width1);
}

void Rectangle::setPoints(const array<float, Rectangle::_Size> &point1,
                          const array<float, Rectangle::_Size> &point2,
                          const array<float, Rectangle::_Size> &point3,
                          const array<float, Rectangle::_Size> &point4) {
  // check if rectangle is in the first quadrant and range limit
  float lengthAC;
  float lengthBD;

  if (point1[0] >= 0.0 && point1[1] <= 20.0) {
    if (point2[0] >= 0.0 && point2[1] <= 20.0) {
      if (point3[0] >= 0.0 && point3[1] <= 20.0) {
        if (point4[0] >= 0.0 && point4[1] <= 20.0) {
          //  Check the Lengths of the Diagonals
          //  In a rectangle, the diagonals are equal in length:
          //  AC=(x3​−x1​)2+(y3​−y1​)2
          //  BD=(x4−x2)2+(y4−y2)2

          lengthAC = hypot((point3[0] - point1[0]), (point3[1] - point1[1]));
          lengthBD = hypot((point4[0] - point2[0]), (point4[1] - point2[1]));
          if (lengthAC == lengthBD) {
          } else {
            ostringstream output;
            output << "The following values entered are out of range "
                   << "therefore a rectangle can not be created" << endl;
            throw invalid_argument(
                output.str()); // trying to throw output.str() as error message.
          }
        }
      }
    }
  }
  // Calculate dimensions
  calculateLength(point1, point2, point3, point4);
  calculateWidth(point1, point2, point3, point4);
}

// check if co-ordinates forms a square
// both length and width are of the same value
void Rectangle::isSquare(float &length, float &width) {
  if (length == width) {
    cout << "co-ordinates entered forms a square\n";
  }
}

float Rectangle::calculateLength(const array<float, Rectangle::_Size> &point1,
                                 const array<float, Rectangle::_Size> &point2,
                                 const array<float, Rectangle::_Size> &point3,
                                 const array<float, Rectangle::_Size> &point4) {
  length1 = point3[0] - point2[0]; // horizontal upper length
  length2 = point4[0] - point1[0]; // horizontal lower legth

  // return any length value
  return fabs(length1);
}

float Rectangle::calculateWidth(const array<float, Rectangle::_Size> &point1,
                                const array<float, Rectangle::_Size> &point2,
                                const array<float, Rectangle::_Size> &point3,
                                const array<float, Rectangle::_Size> &point4) {
  width1 = point2[1] - point1[1]; // left side width
  width2 = point3[1] - point4[1]; // rigth side width

  // return and width value.
  return fabs(width1);
}

// calculate Perimeter
float Rectangle::Perimeter() { return 2 * (length1 + width1); }

// calculate Area of rectangle.
float Rectangle::Area() { return length1 * width1; }
