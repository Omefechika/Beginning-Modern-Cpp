// Pointer.cpp : working with pointer in C++
// referencing Properties of pointer in C++
#include <iostream>
using namespace std;

int main() {
  int *countPtr{nullptr}; // pointer variable set to nullptr
  int counter{10};

  // point countPtr to counter memory address
  countPtr = &counter;

  // display counter address and address value stored in countPtr
  cout << "The address of counter: " << &counter
       << "\nThe value of countPtr: " << countPtr << endl;
  // display value countPtr pointer to
  cout << "The value stored in count: " << counter
       << "\nThe value of *countPtr: " << *countPtr << endl;

  return 0;
}
