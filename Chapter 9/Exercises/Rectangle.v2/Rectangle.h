// Rectangle.h
// class member function defined in Rectangle.cpp
// Creating a Rectangle class object, which is an improvment
// of the provious version using cartesian co-ordinates to
// store length and width values
#include <array>
#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle {
public:
  Rectangle(const std::array<float, 2> &, const std::array<float, 2> &,
            const std::array<float, 2> &, const std::array<float, 2> &);
  // predicate function : square
  void isSquare(float &, float &);

  // check if points values makes a rectangle
  void setPoints(const std::array<float, 2> &, const std::array<float, 2> &,
                 const std::array<float, 2> &, const std::array<float, 2> &);
  float calculateLength(const std::array<float, 2> &,
                        const std::array<float, 2> &,
                        const std::array<float, 2> &,
                        const std::array<float, 2> &);
  float calculateWidth(const std::array<float, 2> &,
                       const std::array<float, 2> &,
                       const std::array<float, 2> &,
                       const std::array<float, 2> &);
  float Perimeter();
  float Area();

private:
  float length1;
  float length2;
  float width1;
  float width2;
  static const unsigned int _Size;
};
#endif
