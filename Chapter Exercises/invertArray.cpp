/* Project : Invert Array
Program that inverts the order of elements in an array inline (i. e., without using a second
array for intermediate results)
*/
#include <array>
#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    const size_t arraySize{7};
    array<int, arraySize> list{1, 2, 5, 9, 11, 20, 26};

    //dispaly original array
    cout << "Source" << setw(5) << ": " ;
    for(auto item : list){
        cout << item << " ";
    }

    // display inverted array
    cout << "\nInverted : ";
    for(size_t ii{arraySize-1}; ii <= list.size(); --ii){
        cout << list[ii] << " ";
    }
    cout << endl;
}