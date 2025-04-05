#include <iostream>
#include <stdexcept>
#include <string>
#include <type_traits>

using namespace std;

int main() {
  string s1{"happy"};
  string s2 = "birthday";
  string s3; // empty string.

  // test overloading functionality
  cout << "s1 is \"" << s1 << "\"; s2 is \"" << s2 << "\"; s3 is \"" << s3
       << '\"' << "\n\nThe results of comparing s2 and s1:" << boolalpha
       << "\ns2 == s1 yields " << (s2 == s1) << "\ns2 != s1 yields "
       << (s2 != s1) << "\ns2 > s1 yields " << (s2 > s1) << "\ns2 < s1 yields "
       << (s2 < s1) << "\ns2 >= s1 yields " << (s2 >= s1)
       << "\ns2 <= s1 yields " << (s2 <= s1);

  // test string member function empty
  cout << "\n\nTesting s3.empty():\n";

  if (s3.empty()) {
    cout << "S3 is empty; assigning s1 to s3;\n";
    s3 = s1; // assign s1 to s3
    cout << "s3 is \"" << s3 << "\"";
  }

  // test overloaded string concatenation assignment operator
  cout << "\n\ns1 += s2 yields s1 = ";
  s1 + s2; // concatenation
  cout << s1;

  // test substr function
  cout << "The sub-string of s1 starting at location 0 for \n"
       << "14 characters, s1.substring(0,14), is:\n"
       << s1.substr(0, 14) << "\n\n";

  // test copy constructor
  string s4{s1};
  cout << "\ns4 = " << s4 << "\n\n";

  // test subscript out of range with string member function "at"
  try {
    cout << "Attempt to assign 'd' to s1.at(100) yields:\n";
    s1.at(100) = 'd'; //ERROR: Subscript out of range.
  } catch (out_of_range& exception) {
    cout << "An exception occurred: " << exception.what() << endl;
   }
}
