// main.cpp:
// Program to test class Time
// NOTE: This file must be compiled with Time.cpp
#include <iostream>
#include <stdexcept> // invalid:argument exception class
#include "Time.h"    // Class Time from Time.h
using namespace std;

// display a Time in 24-hour and 12-hour formats
void displayTime(const string &message, const Time &time){
    cout << message << "\nUniversal time: " << time.toUniversalString()
    << "\nStandard time: " << time.toStandardString() << "\n\n";
}

int main(){
    Time t; // Instantiate object t of class Time

    displayTime("Initial Time:", t); // display t's initial value (00:00:00)
    
    t.setTime(13, 27, 6); // change time
    displayTime("After setTime:", t); // display new time after time set

    // attempt time set with invalid values
    try
    {
        t.setTime(99, 99, 99); // out of range values
    }
    catch(invalid_argument& e)  
    {
        cout << "Exception: " << e.what() << "\n\n";
    }

    // display t's value after invalid value range
    displayTime("After attempting to set an invalid time:", t);
    
}