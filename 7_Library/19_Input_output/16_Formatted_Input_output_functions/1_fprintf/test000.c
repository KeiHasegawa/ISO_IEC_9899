#include <math.h>
#include <stdio.h>
/* ... */

void f(char**, char**, int*, int*, int*);

int main()
{
  char *weekday, *month; // pointers to strings
  int day, hour, min;
  f(&weekday, &month, &day, &hour, &min);
  fprintf(stdout, "%s, %s %d, %.2d:%.2d\n", weekday, month, day, hour, min);
  fprintf(stdout, "pi = %.5f\n", 4 * atan(1.0));
  return 0;
}

void f(char** a, char** b, int* c, int* d, int* e)
{
  *a = "Sunday";
  *b = "July";
  *c = 3;
  *d = 10;
  *e = 2;
}
