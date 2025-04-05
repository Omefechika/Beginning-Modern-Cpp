#include <iostream>
using namespace std;

// count class definition
class Count
{
    friend void setX(Count &, int); // friend declaration
    friend int increByVal(Count &, int); // a new friend declaration

public:
    int getX() const { return x; }

private:
    int x{0};
};

// function setX can modify private data of Count
// because setX is declared as a friend of Count
void setX(Count &c, int val)
{
    // c represents the class object and
    // x represents the class's private data member
    c.x = val; // changes the private data member value of the class
}

int increByVal(Count &c, int numVal)
{
    return c.x += numVal;
}

int main()
{
    int number{10};
    Count counter;

    cout << "counter.x after instantiation: " << counter.getX() << endl;
    setX(counter, 8); // set x value using friend function
    cout << "Counter.x after call to setX friend function: "
         << counter.getX() << endl;

    // increment last value of a by a number
    increByVal(counter, number);
    cout << "Counter.x has been incrememnted by: "
         << counter.getX() << endl;
}