#include <array>
#include <iomanip>
#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
  int *countPtr{nullptr};
  int counter{10};

  // point countPtr to counter
  countPtr = &counter;

  cout << "The address of counter: " << countPtr << endl;

  return 0;
}
