#include <stdio.h>

int main()
{
  extern int f();
  printf("f return value : %d\n",f());
  extern int g();
  printf("g return value : %d\n",g());
  return 0;
}

int a = 1234;

int b = 5678;
