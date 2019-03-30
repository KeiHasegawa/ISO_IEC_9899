#include <stdio.h>


int main()
{
  int x = 1;
  int y = -1;
  int z = -5;

  printf("x = %d\n", x);
  printf("y = %d\n", y);
  printf("z = %d\n", z);
  x = 5678;
  printf("x = %d\n", x);
  printf("y = %d\n", y);
  printf("z = %d\n", z);
  return 0;
}
