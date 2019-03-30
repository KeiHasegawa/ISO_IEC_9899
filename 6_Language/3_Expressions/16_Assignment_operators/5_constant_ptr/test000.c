#include <stdio.h>

int abcdef0;

int main(void)
{
  *(int*)ABCDEF0 = 1234;
  printf("%d\n", abcdef0);
  return 0;
}
