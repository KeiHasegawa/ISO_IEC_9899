/*
 * Check if ISO sample works well.
 */
#include <stdio.h>

void f(int n, int j)
{
  printf("`f' called\n");
  {
    double a[n];
    a[j] = 4.4;
  lab3:
    a[j] = 3.3;
    goto lab4; // OK, going WITHIN scope of VLA.
    a[j] = 5.5;
    printf("error\n");
  lab4:
    a[j] = 6.6;
    printf("ok %f\n", a[j]);
  }
}

int main(void)
{
  f(4,3);
  return 0;
}





