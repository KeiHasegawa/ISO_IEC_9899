/*
 * Check if conversion from `long double' to `short int' works well.
 */
#include <stdio.h>

short int x = 0x1234;
short int y = 0x5678;
short int z = 0x9abc;

long double a = 65535.5L;

int main()
{
  printf("x = %d\n",x);
  printf("y = %d\n",y);
  printf("z = %d\n",z);
  x = a;
  y = 65535.5L;
  printf("x = %d\n",x);
  printf("y = %d\n",y);
  printf("z = %d\n",z);
  return 0;
}
