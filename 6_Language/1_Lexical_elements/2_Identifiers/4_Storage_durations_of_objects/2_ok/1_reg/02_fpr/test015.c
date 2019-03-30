#include <stdio.h>

double f(void){ return 20.0; }
double g(void){ return 4.0; }


int main(void)
{
  int i;

  for (i = 0; i < 10; i++)
    printf("%f %f\n", f(), g());
  return 0;
}
