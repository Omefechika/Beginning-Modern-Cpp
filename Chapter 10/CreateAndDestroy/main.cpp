// main.cpp
// Order in which constructors and destructore are called
#include <iostream>
#include "CreateAndDestroy.h"
using namespace std;

void create(); // prototype

// creating a global object
CreateAndDestroy first{1, "(global before main)"};

int main(){
    cout << "\nMAIN FUNCTION: EXECUTION BEGINS" << endl;
    CreateAndDestroy second{2, "(local in main)"};
    static CreateAndDestroy third{3, "(local static inmain)"};

    create(); // call function to create objects

    cout << "\nMAIN FUNCTION: EXECUTION RESUMES" << endl;
    CreateAndDestroy fourth{4, "(loacl in main)"};
    cout << "\nMAIN FUNCTION: EXECUTION ENDS" << endl;
}

// function to create object
void create(){
    cout << "\nCREATE FUNCTION: EXECUTION BEGINS" << endl;
    CreateAndDestroy fifth{5, "(local in create)"};
    static CreateAndDestroy sixth{6, "(local static in create)"};
    CreateAndDestroy seventh{7, "(local in create)"};
    cout << "\nCREATE FUNCTION: EXECUTION ENDS" << endl;
}