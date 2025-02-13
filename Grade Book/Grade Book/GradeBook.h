// Definition of class GradeBook that uses an array to store test grades
#pragma once
#include <string>
#include <array>
#include <iostream>
#include <iomanip> // stream manipulator

// GradeBook definition
class GradeBook
{
public:
	// const number of students who took the test; array size
	static const size_t students{ 10 }; // note public data

	// constructor initialiyes courseName and grade array
	GradeBook(const std::string& name,
		const std::array<int, students>& gradesArray)
		: courseName{ name }, grades{gradesArray} {
	}

	// function to set course name
	void setCourseName(const std::string& name) {
		courseName = name; // store the course name
	}

	// function to retreive course name
	const std::string& getCourseName() const {
		return courseName;
	}

	// display a welcome message to the GradeBook user
	void displayMessage() {
		// call getCourseName to get the name of the GradeBook's name
		std::cout << "Welcomer to the grade book for\n" << getCourseName()
			<< "!" << std::endl;
	}

	// perform various operations on the data (none modify the data)
	void processGrades() const {
		outputGrades(); // output grade array

		// call function getAverage to calculate the average grade
		std::cout << std::setprecision(2) << std::fixed;
		std::cout << "\nClass average is " << getAverage() << std::endl;

		// call  functions getMinimum and getMaximum
		std::cout << "lowest grade is " << getMinimum()
			<< "\nHigest grade is " << getMaximum() << std::endl;

		outputBarChart(); // display grade distribution chart
	}

	void outputGrades() const{
		std::cout << "\nThe grades are: \n\n";

		// output each student's grade
		for (size_t student{ 0 } ; student < grades.size(); student++)
		{
			std::cout << "Student " << std::setw(2) << student + 1 <<
				": " << std::setw(2) << grades[student] << std::endl;
		}
	}

	// determine the average score of grades
	double getAverage() const {
		int total{ 0 }; // initialiye total

		// sum grades in array
		for (int grade : grades){
			total += grade;
		}

		// return average grade
		return static_cast<double>(total) / grades.size();
	}

	// find minimum grade
	int getMinimum() const {
		int lowGrade{ INT16_MAX }; // assume lowest grade is systems int max value
		
		// loop through grade array
		for (int grade : grades) {
			// if current grade is lower than lowGrade, assign it to lowGrade
			if (grade < lowGrade) {
				lowGrade = grade; // new lowest grade
			}
		}
		return lowGrade;
	}

	// find maximumgrade
	int getMaximum() const {
		int highGrade{ INT_MIN }; // assume highest grade is systems int lowest value

		// loop through each grade array
		for (int grade : grades) {
			// if current grade is higher that highGrade
			// assign to highGrade 
			if (grade > highGrade) {
				highGrade = grade; // newest highest grade
			}
		}

		return highGrade; // return highest grade
	}

	// output bar chart displaying grade distribution
	void outputBarChart() const {
		std::cout << "\nGrade distribution:" << std::endl;

		// stores frequency of grades in each range of 10 grades
		const size_t frequencySize{ 11 }; // ignore 0 index
		std::array<unsigned int, frequencySize> frequency{}; // init to 0s

		// for each grade, increment the appropriate frequency
		for (int grade : grades) {
			++frequency[grade / 10];
		}

		// for each grade frequency, print bar in chart
		for (size_t count{ 0 }; count < frequencySize; count++) {
			if (0 == count) {
				std::cout << "  0-9: ";
			}
			else if (10 == count)
			{
				std::cout << "  100: ";
			}
			else
			{
				std::cout << count * 10 << "-" << (count * 10) + 9 << ": ";
			}

			// print bar of asterisks
			for (unsigned int stars{ 0 }; stars < frequency[count]; ++stars) {
				std::cout << '*';
			}
			std::cout << std::endl;
		}
	}

private:
	std::string courseName; // course name for this grade book
	std::array<int, students> grades; // array of student grades
};

