#include <iostream>
#include <random>
#include <string>
#include <time.h>
#include <array>
using namespace std;

void moveTortoise(int *);
void moveHare(int *);

static const size_t lengthofSquare{70};

int main()
{
    default_random_engine engine(static_cast<unsigned int>(time(0)));
    uniform_int_distribution<unsigned int> randomInt(1, 11);
    
}