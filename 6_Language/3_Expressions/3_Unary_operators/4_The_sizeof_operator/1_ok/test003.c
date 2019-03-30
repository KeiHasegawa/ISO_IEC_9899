/*
 * Check if variable length array works well if the dimension is specified
 * by sizeof opeartor.
 */
#include <stdio.h>

void f(int n, char (*p)[n], long double (*q)[sizeof *p])
{
  printf("`f' called\n");
  printf("\"%s\"\n", *p);
  for ( int i = 0 ; i < sizeof *p ; ++i )
    printf(" %Lf", (*q)[i]);
  printf("\n");
}

int main(void)
{
  char a[][10] = { "program" };
  long double b[][10] = {
    { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 }
  };
  f(10,&a[0],&b[0]);
  return 0;
}
