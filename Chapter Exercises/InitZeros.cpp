/* Project: InitZeros
Creates two arrays of 100 elements with value 0
*/
#include <iostream>
#include <array>
#include <iomanip>
using namespace std;

int main()
{
    const size_t arraySize{100};
    array<int, arraySize> array1{};
    array<int, arraySize> array2{};

    // creating two arrays with 100 elements with value of zero
    for (size_t ii{0}; ii < array1.size(); ii++)
    {
        array1[ii] = 0;
        array2[ii] = 0;
        // this is valid
        // array1[ii] = array2[ii] = 0;
    }

    // display arrays
    cout << "Array" << setw(10) << "Value" << endl;
    
    // display array1
    cout << "Array1:[";
    for (size_t ii{0}; ii < array1.size(); ii++)
    {
        cout << array1[ii]<< ", ";
        if (ii == 9)
        {
            break;
        }
        
    }
    cout << "]";
    
    // Display second array
    cout << "\nArray2:[";
    for (size_t ii{0}; ii < array2.size(); ii++)
    {
        cout << array2[ii]<< ", ";
        if (ii == 9)
        {
            break;
        }
        
    }
    cout << "]" << endl;
}