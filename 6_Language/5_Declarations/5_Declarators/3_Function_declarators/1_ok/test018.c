#include <stdio.h>

typedef void F1(double);

typedef F1* F2(float);

typedef F2* F3(int);

F1 f1;

void (*f2(float x))(double y)
{
  printf("f2 called with %f\n", x);
  return f1;
}

F3 f3;

void (*(*f3(int a))(float b))(double c)
{
  printf("f3 called with %d\n", a);
  return f2;
}

int main()
{
  F2* pf2 = f3(1);
  F1* pf1 = pf2(2);
  pf1(3);
  return 0;
}

F2 f2;

void f1(double z)
{
  printf("f1 called with %f\n", z);
}
