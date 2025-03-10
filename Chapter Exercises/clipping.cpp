/*Project: Clipping
Colors of single picture elements (pixel ) in images and videos are often represented by numbers in
the range [0, 255] ⊂ N0 . However, applying image processing can result in values < 0 or > 255.
Write a program that first creates a 2D array that, amongst others, contains values outside the
valid range [0, 255]. Run through the array and replace negative values by 0 and values which are
too large by 255 (clipping) */

#include <iostream>
#include <array>
#include <iomanip>
using namespace std;

static const size_t rows{4};
static const size_t column{4};

// function prototype
void imageProcessing(array<array<signed int, column>, rows> &);

int main()
{
    array<array<signed int, column>, rows> pixel{
        {-4, -3, -2, -1},
        {0, 1, 2, 3},
        {252, 253, 254, 255},
        {256, 257, 258, 259}};

    cout << "Source data: " << endl;
    // loop through the row
    for (auto const &row : pixel)
    {
        // display each pixel value in current row
        for (auto const &item : row)
        {
            cout << item << setw(3) << " ";
        }
        cout << endl;
    }

    // clip pixel values and display
    // new proccessed values
    imageProcessing(pixel);

    cout << "\nClipped to [0 -255] " << endl;
    // loop through the row
    for (auto const &row : pixel)
    {
        // display each pixel value in current row
        for (auto const &item : row)
        {
            cout << item << setw(3) << " ";
        }
        cout << endl;
    }
}

void imageProcessing(array<array<signed int, column>, rows> &imagePixel)
{
    int lowerLimit{0};
    int upperLimit{255};

    // loop through the row
    for (auto &row : imagePixel)
    {
        // loop through each value of current row
        for (auto &currentPixel : row)
        {
            // if current pixel value is lesser than 0
            // set to lowerLimit
            if (currentPixel < lowerLimit)
            {
                currentPixel = lowerLimit;
            }
            // set current pixel to 255, if value is greater than upperlimit
            else if (currentPixel > upperLimit)
            {
                currentPixel = upperLimit;
            }
        }
    }
}