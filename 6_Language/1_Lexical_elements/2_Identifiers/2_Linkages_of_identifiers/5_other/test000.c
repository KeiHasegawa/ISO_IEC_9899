#include <stdio.h>


int a = 1;

int main(void)
{
  printf("a = %d\n", a);
  {
    int a = 2;
    printf("a = %d\n", a);
  }
  {
    int a = 3;
    printf("a = %d\n", a);
  }
  printf("a = %d\n", a);
  return 0;
}
