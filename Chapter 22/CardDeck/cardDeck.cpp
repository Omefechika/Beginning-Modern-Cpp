#include <iostream>
#include <string>

using namespace std;

struct Card {
  std::string face;
  std::string suit;
} oneCard, deck[52], *cardPtr;


int main()
{
  cout << sizeof(oneCard) << endl;
  cout << sizeof(deck[0]) << endl;
  cout << sizeof(*cardPtr) << endl;
  cout << sizeof(Card) << endl;
  
}
