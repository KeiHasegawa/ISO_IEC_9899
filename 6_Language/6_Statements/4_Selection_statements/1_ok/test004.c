/*
 * Check if nested switch statement works well.
 */

#include <stdio.h>

void f();
void g();
void h();

int ff(int a, int b)
{
  switch (a) {
  case 1:
    switch (b) {
    case 2:
      f();
      break;
    default:
      g();
      break;
    }
    break;
  default:
    h();
    break;
  }
}

int main()
{
  ff(1, 2);
  ff(1, 3);
  ff(2, 2);
  return 0;
}

void f()
{
  printf("`f' called\n");
}

void g()
{
  printf("`g' called\n");
}
  
void h()
{
  printf("`h' called\n");
}
