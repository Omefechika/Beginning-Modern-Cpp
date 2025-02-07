// Ex3_01 : Bitwise Operations
// Examming how each bitwise operator works
#include <iostream>
#include <format>

using namespace std;

int main()
{
	// Bitwise shift operator
	unsigned short number{16387 };
	cout << format("Number in binary {:0b}\n", number) << endl;
	
	// shifting 2 bits to the left
	auto result{ static_cast<unsigned short>(number << 2) };
	cout << format("Number in binary {:0b}", result) << endl;
	cout << format("Number in decimal {}\n", result) << endl;
	
	// shifting 2 bits to the right
	result = static_cast<unsigned short>(number >> 2) ;
	cout << format("Number in binary {:0b}", result) << endl;
	cout << format("Number in decimal {}", result) << endl;
}