#include <iostream>
#include <array>
#include <string>
#include <iomanip>

class GradeBook2D
{
public:
    static const size_t students{10};
    static const size_t tests{3};

    GradeBook2D(const std::string &name,
                std::array<std::array<int, tests>, students> &gradesArray)
        : _courseName(name),
          _grades(gradesArray) {}

    void setCourseName(const std::string name)
    {
        _courseName = name;
    }

private:
    std::string _courseName;
    std::array<std::array<int, tests>, students> _grades;
};
