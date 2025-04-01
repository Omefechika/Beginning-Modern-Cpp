#include <iostream>
#include <array>
using namespace std;

int main()
{
	const size_t arraySize{ 5 };
	array<int, arraySize> items{ 1, 2, 3, 4, 5};

	// display items before modification
	cout << "Items before modification: ";
	for (int item : items)
	{
		cout << item << " ";
	}

	// multiply the elements of items by 2
	for (int& itemRef : items) {
		itemRef *= 2;
	}
	
	// display items after modification
	cout << "\nItems after modification: ";
	for (int item : items) {
		cout << item << " " ;
	}
	cout << endl;
}