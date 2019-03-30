#include <stdio.h>


char f()
{
  return 'a';
}

int main(void)
{
  printf("return value : '%c'\n",f());
  return 0;
}
