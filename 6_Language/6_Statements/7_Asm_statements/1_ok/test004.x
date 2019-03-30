#include <stdio.h>

int array[] = {
  0, 1, 2, 3, 4, 5
};

int* x = &array[0];
int y = 456;

int main(void)
{
  printf("x[2] = %d, y = %d\n", x[2], y);
  asm("mov %1, %0" : "=r"(x[2]) : "r"(y+4));
  printf("x[2] = %d, y = %d\n", x[2], y);

  printf("array : ");
  for ( int i = 0 ; i != sizeof array/sizeof array[0] ; ++i )
    printf(" %d", array[i]);
  printf("\n");
  return 0;
}
