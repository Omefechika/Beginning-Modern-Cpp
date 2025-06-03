// Structure member operator and
// structure pointer operator

// define a structure
#include <stddef.h>
#include <stdio.h>

struct cards
{
  const char *face[4];
  const char *suit[11];
}myCard;

// using typedef
typedef struct{
  const char *face;
  const char *suit;
} Card;


int main(void)
{
  struct cards  myCard = {{"Hearts", "Spade", "Diamonds", "Clubs"},
                         {"1", "2", "3","4","5", "6",
                          "7", "8", "9", "10", "Ace"}};

  struct cards *cardPtr = &myCard;

  Card face[4] = {};
  Card suit[11];
  
  
  for (size_t ii = 0; ii < 4; ii++) {
    for (size_t xx = 0; xx <11; xx++) {
      printf("%s of %s\n", myCard.suit[xx], myCard.face[ii]);
      }
  }

  printf("\n%s of %s\n", cardPtr->suit[10]="1", cardPtr->face[1]="Hearts");
  
}


