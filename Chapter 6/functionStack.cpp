// functionStack.cpp : square function used to demostrate
// the function call stack and activation records.
#include <iostream>
using namespace std;

int square(int); // prototype for function square

int main(){
    int a{10}; // value to square

    cout << a << " squared: " << square(a) << endl; // display a squared
}

// returns the square of an integer
int square(int intVal){
    return intVal * intVal; // calculate and return square
}