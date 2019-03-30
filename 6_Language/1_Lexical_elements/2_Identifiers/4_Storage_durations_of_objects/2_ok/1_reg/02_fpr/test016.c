#include <stdio.h>

double f(void){ return 20.0; }
double g(void){ return 4.0; }


int main(void)
{
  double op2 = f();
  if (op2 != 0.0)
    printf("%f\n",g() / op2);
  else
    printf("error: zero divisor\n");
  return 0;
}
