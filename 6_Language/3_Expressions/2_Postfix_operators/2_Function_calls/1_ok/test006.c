/*
 * Check if case label is recognized,
 * where label is specified with sizeof of function call.
 */

#include <stdio.h>

extern char f(void);
extern short g(void);
extern int h(void);

extern void i(int);

int main(void)
{
  i(sizeof(char));
  i(sizeof(short));
  i(sizeof(int));
  return 0;
}

void i(int n)
{
  switch ( n ){
  case sizeof f():
    printf("case sizeof f()\n");
    break;
  case sizeof g():
    printf("case sizeof g()\n");
    break;
  case sizeof h():
    printf("case sizeof h()\n");
    break;
  }
}
