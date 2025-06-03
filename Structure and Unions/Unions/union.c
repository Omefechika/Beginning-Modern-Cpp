// displaying the value of a union in both member data types
#include <stdio.h>

// number union definition
union number {
  int x;
  double y;
};

int main(void) {
  union number value;

  value.x = 100;  
  puts("Put 100 in the int member and print both members:");
  printf("int: %d\ndouble: %.2f\n\n", value.x, value.y);

  value.y = 100.0;
  puts("Put 100 in the int member and print both members:");
  printf("int: %d\ndouble: %.2f\n\n", value.x, value.y);
}
