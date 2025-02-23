/* Project: CopyArray
Program that copied the values of an array to a second array of same size. You are free
to chose the size and values of the original array.
*/
#include <iomanip>
#include <iostream>
#include <array>
using namespace std;

int main()
{
    // create two array, fisrt array initialized
    // second init to 0
    const size_t size{6};
    array<int, size> list1{1, 2, 5, 9, 11, 20};
    int list2[size] = {0}; // c-style definition 

    // loop through list1 and set elements of list2
    // to elements of list1
    for (size_t ii{0}; ii < list1.size(); ii++)
    {
        list2[ii] = list1[ii];
    }

    // display values in both arrays
    cout << "Source: ";
    for (auto item : list1)
    {
        cout << item << " ";
    }

    cout << "\nCopy" << setw(4) << ": ";
    for (auto item : list2)
    {
        cout << item << " ";
    }
    cout << endl;
}