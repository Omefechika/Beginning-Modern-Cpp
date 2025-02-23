#include <array>
#include <iomanip>
#include "ProductionSlip.hpp"
#include <iostream>
using namespace std;

int main()
{

    const int craftPeople{3};
    const int products{4};
    const int frequencySize{4};

    array<array<int, products>, craftPeople> _stock{}; // array to hold each production slip entry
    array<int, frequencySize> frequency{};
    // get information from each production slip
    char moreData;
    int craftperson;
    int productid;

    // keep entering a production slip and increment the number
    // of times a product id is entered
    do
    {
        // input craftperson ID
        cout << "Enter craftPerson Number (1-3): ";
        cin >> craftperson;

        // enter a product ID
        cout << "Enter product number (1-3): ";
        cin >> productid;

        if (craftperson >= 1 && craftperson <= craftPeople &&
            productid >= 1 && productid <= products)
        {
            ++frequency[productid];
        }
        else
        {
            cout << "Invalid craftsperson or product number!" << endl; // error message for invalid entery
        }

        // Ask the user if they want to enter more data
        cout << "Do you want to enter another slip (y/n)? ";
        cin >> moreData;

    } while (moreData == 'y' || moreData == 'Y');

    for (size_t ii = 1; ii <= _stock.size(); ii++)
    {
        for(size_t yy = 1; yy <= frequency.size(); yy++)
        {
            cout << _stock[ii][yy] << frequency[yy] << endl;
        }
    }
    
}