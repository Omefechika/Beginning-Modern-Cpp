#include <iostream>
#include <array>
#include <iomanip>
#include <random>
#include <ctime>
using namespace std;

// using the random engine library to produce uniformly_pseudorandom
// numbers between 1 - 6, the engine is called twice to simulate
// the roll of two dice.
static const size_t face{6}; // size for arrays holding 1-6 value
static default_random_engine engine(static_cast<unsigned int>(time(0)));
static uniform_int_distribution<unsigned int> randomInt(1, 6);

// function prototype
void sixBySixDieCombination(array<unsigned int, 6> &, array<unsigned int, 6> &);
void diceCombinationDistribution(array<unsigned int, 12> &);
int main()
{

    array<unsigned int, face> die1{1, 2, 3, 4, 5, 6}; // array of 6 elements
    array<unsigned int, face> die2{die1};             // copy of array die1
    array<unsigned int, 12> frequency{};

    // display results
    sixBySixDieCombination(die1, die2);
    cout << endl;
    diceCombinationDistribution(frequency);
}

void sixBySixDieCombination(array<unsigned int, 6> &die1, array<unsigned int, 6> &die2)
{
    int sumOFRoll{0}; // holds the sum of dice roll

    // display numeric heading
    for (size_t ii = 1; ii <= face; ii++)
    {
        cout << setw(5) << ii;
    }
    cout << endl; //

    // This show a 6*6 die roll combination
    // loop through die1
    for (auto const &value1 : die1)
    {
        cout << value1;
        // loop through die2
        for (auto const &value2 : die2)
        {
            sumOFRoll = value1 + value2;         // sum each rolled die face
            cout << setw(4) << sumOFRoll << ' '; // display result
        }
        cout << endl;
    }
}

void diceCombinationDistribution(array<unsigned int, 12> &frequency)
{
    // roll the two dice 36000000 and tally the
    // frequency of each combination
    for (unsigned int roll{1}; roll <= 36'000'000; roll++)
    {
        // increament the tally of each combination
        ++frequency[randomInt(engine) + randomInt(engine)];
    }

    cout << "Face" << setw(13) << "Frequency" << endl;
    // output each array element's value
    for (size_t face{2}; face <= frequency.size(); ++face)
    {
        cout << setw(4) << face << setw(13) << frequency[face] << endl;
    }
}
