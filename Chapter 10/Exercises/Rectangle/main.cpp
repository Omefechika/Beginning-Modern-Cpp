#include <iostream>
#include "Rectangle.h"

using namespace std;

int main()
{
    float length{0}, width{0};

    while (true) // Loop until valid input is provided
    {
        try
        {
            cout << "Enter length: ";
            cin >> length;
            cout << "Enter width: ";
            cin >> width;

            Rectangle rect{length, width}; // Create Rectangle

            // Parameter and Area results
            cout << "The Parameter of a rectangle with length: "
                 << rect.getLength() << " , Width: "
                 << rect.getWidth() << " = "
                 << rect.Parameter() << endl;

            cout << "The Area of a rectangle with length: "
                 << rect.getLength() << " , Width: "
                 << rect.getWidth() << " = "
                 << rect.Area() << endl;
            cout << endl;

            // changing values
            rect.setLengthAndWidth();

            // Parameter and Area results
            cout << "The Parameter of a rectangle with length: "
                 << rect.getLength() << " , Width: "
                 << rect.getWidth() << " = "
                 << rect.Parameter() << endl;

            cout << "The Area of a rectangle with length: "
                 << rect.getLength() << " , Width: "
                 << rect.getWidth() << " = "
                 << rect.Area() << endl;
            break; // Exit loop if successful
        }
        catch (const invalid_argument &e)
        {
            cout << e.what() << " Please try again.\n";
        }
    }

    cout << "Program continues..." << endl;
    return 0;
}