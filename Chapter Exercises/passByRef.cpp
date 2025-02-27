// passByRef.cpp : passing a value to a function by reference
// using a pointer
#include <cstddef>
#include <iomanip>
#include <iostream>
#include <memory>
using namespace std;

static const int arraySize{6}; // size of the array

// function prototype
void cubeByReference(int *);
void squareByReference(int *);

int main() {
  int numberList[arraySize] = {0};

  // numberList array of factors of 5 upto 30
  for (size_t ii{0}, idx{5}; ii < arraySize && idx <= 30; ii++, idx += 5) {
    numberList[ii] = idx;
  }
  cout << "Original " << setw(7) << "Squared" << setw(7) << "Cubed" << endl;
  for (size_t ii{0}; ii < arraySize; ii++) {
    cout << setw(8) << numberList[ii] << setw(8);
    // pass the current element of the numberList to cubeByReference and
    // squareByReference
    squareByReference((&numberList[ii]));
    cubeByReference(&numberList[ii]);
  }
  cout << endl;

  cout << "\n\nChecking: " << endl;
  for (size_t ii{0}; ii < arraySize; ii++) {
    cout << numberList[ii] << endl;
  }
}

// computes the cube of numbers passed
void cubeByReference(int *number) {
  *number = *number * *number * *number;
  cout << *number << setw(6);
  cout << endl;
}

// compute the square of numbers
void squareByReference(int *number) {
  *number = *number * *number;
  cout << static_cast<float>(*number) << " ";
}
