/* Project : SegmentDisplay
Many technical devices display digits by 7 segment displays. The segments are
typically denoted by letters a to g and switched on or off by dedicated control wires.
Write a function that expects a digit as argument and prints the corresponding values of the
control wires a to g to the console. Use the data in Figure 5.1 stored in a 2D matrix. Sample
output
*/
#define OFF " ";   // LED in OFF state
#define ON1 "---"; // LED in horizontal ON state
#define ON2 "|";   // LED in vertical ON state
#include <iostream>
#include <array>
#include <iomanip>
#include <cctype>
#include <string>
using namespace std;

const size_t rows{10};
const size_t columns{7};

// function prototype
void displaySign(array<unsigned int, columns> &, array<string, columns> &);
void displaySegment(unsigned int digit); // take only a positive integer as value

int main()
{
    unsigned int digit;

    // query user for number input
    cout << "Enter a number from (0-9): ";

    do
    {
        cin >> digit;

        // check for bad input
        if (digit >= 0 && digit <= 9)
        {
            break;
        }
        else
        {
            cout << "Enter a valid number (0-9): ";
        }

    } while (true);
    cout << endl; // clear buffer

    displaySegment(digit); // display user input
}

void displaySegment(unsigned int digit)
{

    // array holds the control signal of a 7 segment dispaly
    array<string, columns> alphaColumn{"a",
                                       "b",
                                       "c", "d",
                                       "e", "f", "g"};
    array<array<unsigned int, columns>, rows> segmentControl{
        {1, 1, 1, 1, 1, 1, 0},
        {0, 1, 1, 0, 0, 0, 0},
        {1, 1, 0, 1, 1, 0, 1},
        {1, 1, 1, 1, 0, 0, 1},
        {0, 1, 1, 0, 0, 1, 1},
        {1, 0, 1, 1, 0, 1, 1},
        {1, 0, 1, 1, 1, 1, 1},
        {1, 1, 1, 0, 0, 0, 0},
        {1, 1, 1, 1, 1, 1, 1},
        {1, 1, 1, 1, 0, 1, 1}};
    array<unsigned int, columns> displayNumber{};

    cout << "Control for 7 segment display: \n";
    for (auto item : alphaColumn)
    {
        cout << " " << item << " |";
    }
    cout << "\n---+---+---+---+---+---+---\n";

    // loop through the segmentControl array row
    for (size_t row{0}; row < segmentControl.size(); row++)
    {
        if (row == digit) // if the current row is the digit entered
        {
            for (size_t element{0}; element < columns; element++)
            {
                cout << " " << segmentControl[row][element] << " |";
                displayNumber[element] = segmentControl[row][element];
            }
        }
    }
    cout << "\n\nDisplay: " << endl;

    // display the number is 7-segment display form
    displaySign(displayNumber, alphaColumn);
}

// function displaSign takes two arrays, loops through the int array
// and performs a ON/OFF logic on the string array to display
// a number in 7 segment display form
void displaySign(array<unsigned int, columns> &number,
                 array<string, columns> &alphabet)
{

    // using multiple switch statement to check the state of each element
    // of the number array
    // if the array element is 1: assume the LED is in ON state, else
    // LED is in OFF state.
    switch (number[0])
    {
    case 1:
        alphabet[0] = ON1 break;

    default:
        alphabet[0] = OFF;
        break;
    }

    switch (number[1])
    {
    case 1:
        alphabet[1] = ON2 break;

    default:
        alphabet[1] = OFF;
        break;
    }

    switch (number[2])
    {
    case 1:
        alphabet[2] = ON2 break;

    default:
        alphabet[2] = OFF;
        break;
    }

    switch (number[3])
    {
    case 1:
        alphabet[3] = ON1 break;

    default:
        alphabet[3] = OFF;
        break;
    }

    switch (number[4])
    {
    case 1:
        alphabet[4] = ON2 break;

    default:
        alphabet[4] = OFF;
        break;
    }

    switch (number[5])
    {
    case 1:
        alphabet[5] = ON2 break;

    default:
        alphabet[5] = OFF;
        break;
    }

    switch (number[6])
    {
    case 1:
        alphabet[6] = ON1 break;

    default:
        alphabet[6] = OFF;
        break;
    }

    // printing out desired number using multiple cout statements
    cout << " " << alphabet[0] << endl;
    cout << alphabet[5] << setw(4) << alphabet[1] << endl;
    cout << " " << alphabet[6] << endl;
    cout << alphabet[4] << setw(4) << alphabet[2] << endl;
    cout << " " << alphabet[3] << endl;
}