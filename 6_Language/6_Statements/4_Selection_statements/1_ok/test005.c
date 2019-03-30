/*
 * Check if nested if statement works well
 */
#include <stdio.h>

void f(), g(), h();

void ff(int a, int b, int c)
{
  printf("a = %d, b = %d, c = %d\n", a, b, c);
  if (a) {
    if (b) {
      if (c)
	f();
    }
    else {
      if (c)
	g();
    }
  }
  else {
    if (b) {
      if (c)
	h();
    }
    else {
      if (c)
	f(), g(), h();
    }
  }
}

int main()
{
  ff(0, 0, 0);
  ff(0, 0, 1);
  ff(0, 2, 0);
  ff(0, 2, 3);
  ff(4, 0, 0);
  ff(4, 0, 5);
  ff(4, 6, 0);
  ff(4, 6, 7);
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
