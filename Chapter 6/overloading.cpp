// overloading.cpp : Overloadded square function
// the function returns the square of a number based on it's datatype
#include <iostream>
using namespace std;

// function square for int values
int square(int x){
    cout << "Square of integer " << x << " is ";
    return x*x;
}

// function square for double value
double square(double y){
    cout <<"Square of double " << y << " is ";
    return y * y;
}

int main(){
    cout << square(7) << endl; // calls int version 
    cout << square(7.5) << endl; // call to double version
}