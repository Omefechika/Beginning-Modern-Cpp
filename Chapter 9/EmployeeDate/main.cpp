// main.cpp
// Demonstrating composition : an object wiht member functions.
#include <iostream>
#include "Date.h"
#include "Employee.h"
using namespace std;

int main(){
    Date birth{7, 29, 1949};
    Date hire{3, 12, 1988};
    Employee manager{"Bob", "Blue", birth, hire};

    cout << "\n" << manager.toString() << endl;
}