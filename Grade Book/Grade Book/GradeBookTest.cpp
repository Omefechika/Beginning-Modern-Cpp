// Create GradeBook object using an array of grades.
#include <array>
#include "GradeBook.h" // GradeBook class definitoin 
#include <string>
using namespace std;

int main()
{
	// 1D array of student grades
	const array<int, GradeBook::students> grades{
		87, 68, 94, 100, 83, 78, 85, 91, 76, 87 };
	const string courseName{ "CS101 Introduction to C++ Programming" };

	GradeBook myGradeBook(courseName, grades);
	myGradeBook.displayMessage();
	myGradeBook.processGrades();
	
}

