// Ex2_02.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
import <format>;


int main()
{
	unsigned int yards{}, feet{}, inches{};

	// Convert a distance in yards, feet, and inches to inches
	std::cout << "Enter a distance as yards, feet, and inches "
		<< "with the three values separated by spaces: ";
	std::cin >> yards >> feet >> inches;

	const unsigned feet_per_yard{ 3 };
	const unsigned inches_per_foot{ 12 };
	unsigned total_inches{};
	total_inches = inches + inches_per_foot * (yards * feet_per_yard + feet);
	
	std::cout << std::format("This distance corresponds to {} inches.\n",
		total_inches) << std::endl;
	
	// Convert a distance in inches to yards, feet, and inches
	std::cout << "Enter a distance in inches: ";
	std::cin >> total_inches;
	
	feet = total_inches / inches_per_foot;
	inches = total_inches % inches_per_foot;
	yards = feet / feet_per_yard;
	feet %=  feet_per_yard;
	
	std::cout << "This distance corresponds to "
		<< yards << " yards "
		<< feet << " feet "
		<< inches << " inches." << std::endl;

	std::cout << "\nWorking with the sizeof() operator" << std::endl;

	int height{ 74 };
	std::cout << "The height varaible occupies " << sizeof height
		<< " bytes." << std::endl;
	std::cout << "Tpe \"Long Long \" occupies " << sizeof(long long)
		<< " bytes." << std::endl;
	std::cout << "The result of the expression height * height/2 occupies " 
		<< sizeof(height * height/2) << " bytes." << std::endl;
}