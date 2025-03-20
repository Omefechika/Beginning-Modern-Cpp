// thisPointer.cpp:
// using the this pointer to refer to object member
#include <iostream>
using namespace std;

class Test
{
public:
    explicit Test(int);
    void print() const;

private:
    int x{0};
};

// constructor 
Test::Test(int value): x{value}{}; //initialize x to value

void Test::print() const{
    // implicit use of this pointer to access data member
    cout << "        x = " << x; 

    // explicitly dereference a pointer using this->
    cout << "\n  this->x = " << this->x;

    // dereferencing the 'this' pointer and dot operator
    cout << "\n(*this).x = " << (*this).x << endl;
}

int main(){
    Test testObject{12};
    testObject.print();
}