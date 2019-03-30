/*
 * Check if ISO sample works well.
 */
#include <stdio.h>

int counter;

int reinitialize;

void g(void)
{
  printf("`g' called\n");
  reinitialize = 1;
}

int h(void)
{
  printf("`h' called\n");
  return counter;
}

void f(void)
{
  printf("`f' called\n");
  goto first_time;
  for (;;) {
    // determine next operation
    g();
    if (reinitialize) {
      // reinitialize-only code
      reinitialize = 0;
      if ( h() )
	break;
    first_time:
      // general initialization code
      counter = -1;
      continue;
    }
    // handle other operations
    printf("counter = %d\n", counter);
  }
}

int main(void)
{
  f();
  return 0;
}
