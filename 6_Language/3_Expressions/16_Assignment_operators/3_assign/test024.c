#include <stdio.h>

int x = 1;
int y = -1;
int z = -5;


int main()
{
  printf("x = %d\n", x);
  printf("y = %d\n", y);
  printf("z = %d\n", z);
  y = z;
  printf("x = %d\n", x);
  printf("y = %d\n", y);
  printf("z = %d\n", z);
  return 0;
}
