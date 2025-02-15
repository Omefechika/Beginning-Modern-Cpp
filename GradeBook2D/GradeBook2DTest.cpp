#include <array>
#include "GradeBook2D.h"
using namespace std;

int main()
{
    array<array<int, GradeBook2D::tests>, GradeBook2D::students> grades{
        {87, 96, 70},
        {68, 87, 90},
        {94, 100, 90},
        {100, 81, 82},
        {83, 65, 85},
        {78, 87, 65},
        {85, 75, 83},
        {91, 94, 100},
        {76, 72, 84},
        {87, 93, 73},
    };

    const std::string courseName{"CS101 Introduction to C++ Programming"};
    // two dimensional array of student grades
    GradeBook2D myGradeBook(courseName, grades);
    // myGradeBook.displayMessage();
    // myGradeBook.processGrades();
}

/*

// Testing 2d array

const size_t rows{2};
const size_t columns{3};

// function prototype to print a 2*3 2d array
void printArray(const array<array<int, columns>, rows>& a);

int main(void){
    array<array<int, columns>, rows>array1{1, 2, 3, 4, 5};
    array<array<int, columns>, rows> array2{1,2,3, 4,5, 6};

    cout << "Values in array1 by rows are:" << endl;
    printArray(array1);

    cout <<"\nValues in array2 by rows are:" << endl;
    printArray(array2);
}

// output array with two rows and three columns
void printArray(const array<array<int, columns>,rows>& a){
    // loop through the array's row
    for(auto const& row : a){
        // loop through the elements of each row
        for(auto const& element : row){
            cout << element << ' ';
        }
        cout << endl;
    }
}*/