#include <iostream>
#include <iomanip>
#include <array>

using namespace std;

int main()
{
	array<int, 5> n; // n is an array of 5 int values

	// initialiye elements of array n to 0
	for (size_t ii{ 0 }; ii < n.size(); ii++)
	{	
		n[ii] = 0; // set element at location ii to 0
	}

	cout << "Element" << setw(10) << "Value" << endl;

	// output each array element's value
	for (size_t jj{0}; jj < n.size(); jj++)
	{
		cout << setw(7) << jj << setw(10) << n[jj] << endl;
	}

	/*
	* This section deals with the initialization of an array with
	* an initalization list
	*/

	array<int, 5> _n{ 32, 27, 64, 18, 95 }; //initializing array n with a list

	cout << "Element" << setw(10) << "Value" << endl;

	// output each array element's value
	for (size_t xx{ 0 }; xx < _n.size(); xx++)
	{
		cout << setw(7) << xx << setw(10) << _n[xx] << endl;
	}

	// setting the values of each array element with calculation 
	// array size is a constant variable
	const size_t arraySize{ 5 };

	array<int, arraySize> values; // 5 element array, each set to 0

	// assigning even number values to array elements
	for (size_t ii{0}; ii < values.size(); ii++)
	{
		values[ii] = 2 + (2 * ii);
	}

	// output each array element's value
	cout << "Element" << setw(10) << "Values" << endl;

	for (size_t ii{ 0 }; ii < values.size(); ii++)
	{
		cout << setw(7) << ii << setw(10) << values[ii] << endl;
	}


	// Bar chart printing program 
	const size_t arraysize{ 11 };
	array<unsigned int, arraysize> a{ 0, 0, 0, 0, 0, 0, 1, 2, 4, 2, 1 };
	cout << "Grade Distrubution: " << endl;

	// for each elemnet of array a, output a bar of te chart
	for (size_t ii{ 0 }; ii < a.size(); ii++) {
		// output bar labels ("0-9:",...., "90-99", "100:")
		if (0 == ii)
		{
			cout << "0-9: ";
		}
		else if (10 == ii) {
			cout << "  100: ";
		}
		else
		{
			cout << ii * 10 << "-" << (ii * 10) + 9 << ": ";
		}
		for (size_t stars {0}; stars < a[ii]; stars++)
		{
			cout << '*';
		}

		cout << endl;
	}
	// end of function main
}