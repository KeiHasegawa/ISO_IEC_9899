#include <stdio.h>

int a[20]; int b = &a[20] - &a[0];

int main(void)
{
  printf("b = %d\n", b);
  return 0;
}
