/*
 * object types
 *
 * signed integer types : signed char, short int, int, long int, long long int
 */
#include <stdio.h>

void f(int x, int y)
{
  if ( x == y )
    printf("ok\n");
  else
    printf("error\n");
}

void g(void)
{
  f(sizeof(char),sizeof(signed char));
  f(sizeof(signed char),sizeof(unsigned char));
  f(sizeof(short),sizeof(unsigned short));
  f(sizeof(int),sizeof(unsigned int));
  f(sizeof(long),sizeof(unsigned long));
  f(sizeof(long long),sizeof(unsigned long long));
}

int main(void)
{
  g();
  return 0;
}
