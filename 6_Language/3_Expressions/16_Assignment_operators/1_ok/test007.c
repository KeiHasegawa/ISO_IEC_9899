/*
 * Check assignment operators work in constant-expression
 */
#include <stdio.h>

char a;
short int b;
int c;
long long int d;

void f(int n)
{
  printf("`f' called with %d\n", n);
  switch ( n ){
  case sizeof(a |= a):
    printf("case sizeof(a |= a):\n");
    break;
  case sizeof(b <<= b):
    printf("case sizeof(sizeof(b <<= b)):\n");
    break;
  case sizeof(c = c):
    printf("case sizeof(sizeof(c = c)):\n");
    break;
  case sizeof(d %= d):
    printf("case sizeof(sizeof(d %%= d)):\n");
    break;
  default:
    printf("default:\n");
    break;
  }
}

int main(void)
{
  f(sizeof a);
  f(sizeof b);
  f(sizeof c);
  f(sizeof d);
  return 0;
}
