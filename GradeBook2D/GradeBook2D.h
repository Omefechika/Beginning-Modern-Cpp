// GradeBook2d contains the definition of the gradebook class
// Note: variables starting with a '_' are class members
#include <iostream>
#include <array>
#include <string>
#include <iomanip>
#include <climits>

class GradeBook2D
{
public:
    // students and tests are statis to this file
    static const size_t students{10};
    static const size_t tests{3};

    GradeBook2D(const std::string &name,
                std::array<std::array<int, tests>, students> &gradesArray)
        : _courseName(name),
          _grades(gradesArray)
    {
        // empty body
    }

    // function to set the course name
    void setCourseName(const std::string name)
    {
        _courseName = name;
    }

    // function to retrieve the course name
    //  the function returns a const string because name is defined as such
    const std::string getCourseName() const
    {
        return _courseName;
    }

    // display a welcome message to the GradeBook user
    void displayMessage() const
    {
        // call getCourseName to retrieve this GradeBook course name
        std::cout << "Welcome to the grade book for\n"
                  << getCourseName() << "!" << std::endl;
    }

    // perform various operations on the data
    void processGrades() const
    {
        outputGrades(); // output grades array

        // call function getMinimum and getMaximum
        std::cout << "\nLowest grade in the grade book is: " << getMinimum()
                  << "\nHighest grade in the grade book is: " << getMaximum()
                  << std::endl;

        outputBarChart(); // display grade distribution chart
    }

    // find minimum grade in the entire gradebook
    int getMinimum() const
    {
        int lowGrade{INT_MAX}; // assume lowest grade is INT_MAX

        // loop through row of _grades array
        for (auto const &row : _grades)
        {
            // loop through column of current row
            for (auto const &element : row)
            {
                if (element < lowGrade) // if current grade is lower than lowGrade
                {
                    lowGrade = element; // assign element to lowGrade
                }
            }
        }

        return lowGrade; // return the lowest grade
    }

    // find maximum grade in the entire gradebook
    int getMaximum() const
    {
        int highGrade{INT_MIN}; // assume highest grade is INT_MIN

        // loop through the row in _grades array
        for (auto const &row : _grades)
        {
            // loop through column of current row
            for (auto const &element : row)
            {
                if (element > highGrade)
                {
                    highGrade = element; // assign element to highGrade
                }
            }
        }

        return highGrade; // return the highest grade
    }

    // determine average grade for particular set of grade
    double getAverage(const std::array<int, tests> &setOfGrades) const
    {
        int total{0}; // initialize total

        // sum grades in array
        for (int grade : setOfGrades)
        {
            total += grade;
        }

        // return average of grades
        return static_cast<double>(total) / setOfGrades.size();
    }

    // output barchart displaying grade distribution
    void outputBarChart() const
    {
        std::cout << "\nOverall grade distribution:" << std::endl;

        // store frequency of grades in each range of 10 grades
        const size_t frequencySize{11};
        std::array<unsigned int, frequencySize> frequency{}; // init to 0s

        // for each grade, increment the appropriate frequency
        for (auto const &student : _grades)
        {
            for (auto const &test : student)
            {
                ++frequency[test / 10];
            }
        }

        // for each grade frequency, print bar in chart
        for (size_t count{0}; count < frequency.size(); count++)
        {
            // output bar label ("0-9", ...., "90-99", "100")
            if (0 == count)
            {
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

            // print bar chart
            for (unsigned int stars{0}; stars < frequency[count]; stars++)
            {
                std::cout << '*';
            }

            // new line
            std::cout << std::endl;
        }
    }

    // output contents of the grede array
    void outputGrades() const
    {
        // align column headers
        std::cout << "\nThe grades are:\n\n"
                  << "            ";

        // create column heading for each of the tests
        for (size_t test{0}; test < tests; test++)
        {
            std::cout << "Test " << test + 1 << "  ";
        }

        std::cout << "Average" << std::endl;

        // create rows/columsn of text representing array grades
        for (size_t student{0}; student < _grades.size(); student++)
        {
            std::cout << "Student " << std::setw(2) << student + 1;

            // output student's grades
            for (size_t test{0}; test < _grades[student].size(); test++)
            {
                std::cout << std::setw(8) << _grades[student][test];
            }

            // call member function getAverage to calculate student's
            // average; pass one row of grade as the argument
            std::cout << std::setw(9) << std::setprecision(2) << std::fixed
                      << getAverage(_grades[student]) << std::endl;
        }
    }

    // class contains only 2 member variables
    // _courseName const value to hold the name of the course
    // _grades an array-of-array Template variable to hold the
    // grades of the students in 2D form
private:
    std::string _courseName;
    std::array<std::array<int, tests>, students> _grades;
};
