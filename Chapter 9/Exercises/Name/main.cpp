#include "Name.h"
#include <iostream>
using namespace std;

int main(){

    Name n1{"Richard", "Clancy", "Hoobs", "Sir"};

    cout << n1.getFirstName() << endl;
    cout << n1.getLastName() << endl;
    cout << n1.getMiddleName() << endl;
    cout << n1.getSalutation() << endl;

    cout << n1.toString() << endl;
}