#include <stdio.h>

int x = 1;
int y = -1;
int z = -5;


int main()
{
  int a = 1234;
  printf("x = %d\n", x);
  printf("y = %d\n", y);
  printf("z = %d\n", z);
  y = a;
  printf("x = %d\n", x);
  printf("y = %d\n", y);
  printf("z = %d\n", z);
  return 0;
}
