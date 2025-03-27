#include "Name.h"
#include <iostream>
using namespace std;

int main(){

    Name n1{"cat", "dogs", "chipmonk", "Sir"};
    
    cout << n1.getFirstName() << endl;
    n1.setFirstName("Richard");

    cout << n1.getFirstName() << endl;
    cout << n1.getLastName() << endl;
    cout << n1.getMiddleName() << endl;
    cout << n1.getSalutation() << endl;

    cout << n1.toString() << endl;
}