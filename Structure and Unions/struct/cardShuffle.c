// Card shuffling and dealing program using structures
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define CARDS 52
#define FACES 13

// card structure definition
struct card {
  const char *face; // define pointer face
  const char *suit; // define pointer suit
};

typedef struct card Card; // new type name for struct card

// prototypes
void fillDeck(Card *const deck, const char *faces[], const char *suits[]);
void shuffle(Card *const deck);
void deal(const Card *const deck);

int main(void) {
  Card deck[CARDS]; // define array of cards

  // initialize faces array of pointers
  const char *faces[] = { "Ace", "Deuce", "Three", "Four", "Five",
                          "Six", "Seven", "Eight", "Nine", "Ten",
                          "Jack","Queen", "King"};
  // initialize suits array of pointers
  const char *suits[] = {"Hearts", "Diamonds", "Clubs", "Spades"};

  srand(time(NULL)); // randomize

  fillDeck(deck, faces, suits); // load the deck with cards 
  shuffle(deck); // put Cards in random order
  deal(deck); // deal all 52 Cards
}
 
// place strings into Card structures
void fillDeck(Card *const deck, const char *faces[],
              const char *suits[])
{
  // loop through deck
  for (size_t ii = 0; ii < CARDS; ii++) {
    deck[ii].face = faces[ii % FACES];
    deck[ii].suit = suits[ii / FACES];}
}

void shuffle(Card * const deck)
{
  // loop through deck randomly swapping cards
  for (size_t ii = 0; ii < CARDS; ii++) {
    size_t jj = rand() % CARDS;
    Card temp = deck[ii];
    deck[ii] = deck[jj];
    deck[jj] = temp;
    }
}

// deal cards
void deal(const Card *const deck)
{
  // loop through deck
  for (size_t ii = 0; ii < CARDS; ii++) {
    printf("%5s of %-8s%s", deck[ii].face, deck[ii].suit,
           (1 + ii) % 4 ? " " : "\n");
  }
}



