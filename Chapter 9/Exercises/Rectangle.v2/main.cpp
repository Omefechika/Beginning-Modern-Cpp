#include "Rectangle.h"
#include <array>
#include <iostream>
#include <stdexcept>
using namespace std;

int main()
{
  array<float, 2> point1, point2, point3, point4;

  cout << "Enter four sets of points 'pointx = (x,y)'." << endl;

  while (true)
  {

    try
    {
      // point1 entry.
      cout << "Coordintes for point1(x, y): ";
      cin >> point1[0];
      cin >> point1[1];
      cout << endl;

      // point2 entry.
      cout << "Coordinates for point2 (x, y): ";
      cin >> point2[0];
      cin >> point2[1];
      cout << endl;

      // point3 entry.
      cout << "Coordinates for point3 (x, y): ";
      cin >> point3[0];
      cin >> point3[1];
      cout << endl;

      // point4 entry.
      cout << "Coordinates for point4 (x,y): ";
      cin >> point4[0];
      cin >> point4[1];
      cout << endl;

      // --creating a object.
      Rectangle rect(point1, point2, point3, point4);

      // --confirming length.
      cout << "Length: " << rect.calculateLength(point1, point2, point3, point4)
           << endl;

      // --confirming width.
      cout << "Width: " << rect.calculateWidth(point1, point2, point3, point4)
           << endl;

      // --perimeter.
      cout << "Perimeter: " << rect.Perimeter() << endl;

      // --Area
      cout << "Area: " << rect.Area() << endl;

      break; //
    }
    catch (invalid_argument &e)
    {
      cout << e.what() << "\nPlease re-enter Coordinates.";
    }
  }
  cout << "Program continue..." << endl;
} // end function main.
