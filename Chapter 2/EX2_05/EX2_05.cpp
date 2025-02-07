// EX2_05.cpp :
// The width, alignment, fill, and = formatting options of std::format
#include <iostream>
#include <format>

using namespace std;

int main()
{
    // Default alignment: right for number, left otherwise
    cout << std::format("{:7}|{:7}|{:7}|{:7}|{:7}\n", 1, -2, "str", 'c', true);
    // Left and Right alignment + custom fill character
    cout << std::format("{:*<7}|{:*<7}|{:*>7}|{:*>7}|{:*>7}\n",
        1, -2, "str", 'c', true);
    // Centered alignment + 0 formatting option for numbers
    cout << std::format("{:^7}|{:^7}|{:^7}|{:^7}|{:^7}\n", 1, -2, "str", 'c', true);
}