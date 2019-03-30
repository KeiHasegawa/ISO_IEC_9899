/*
 * Check if qualified pointer declaration is recognized.
 */
#include <stdio.h>

extern char* const pc;

extern int* volatile pi;

extern double* volatile pd;

int main()
{
  printf("%s\n", pc);
  printf("%d\n", *pi);
  printf("%f\n", *pd);
  return 0;
}

char* const pc = "\"char* const pc;\" declaration test";

int N = 1234;

int* volatile pi = &N;

double D = 3.25;

double* volatile pd = &D;
