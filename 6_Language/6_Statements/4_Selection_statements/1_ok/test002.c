/*
 * Check if switch statement works well.
 */
#include <stdio.h>

void test000(int* p)
{
  switch ( *p ){
  case 0: printf("case 0:\n"); break;
  case 1: printf("case 1:\n"); break;
  case 2: printf("case 2:\n"); break;
  default: printf("default:\n"); break;
  }
}

void test001(char* p)
{
  switch ( *p ){
  case 'a': printf("case 'a':\n"); break;
  case 'b': printf("case 'b':\n"); break;
  case 'c': printf("case 'c':\n"); break;
  default: printf("default:\n"); break;
  }
}

int main(void)
{
  int n = 0;
  test000(&n);
  n = 1;
  test000(&n);
  n = 2;
  test000(&n);
  n = 3;
  test000(&n);
  char c = 'a';
  test001(&c);
  c = 'b';
  test001(&c);
  c = 'c';
  test001(&c);
  c = 'd';
  test001(&c);
  return 0;
}
