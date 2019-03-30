#include <stdio.h>

int label = 123;

void g()
{
  printf("g called label = %d\n", label);
}

void h()
{
  printf("h called label = %d\n", label);
}

void f(int a)
{
  if (a)
    goto label;
  g();
  label = 567;
  goto label2;

 label:
  h();
 label2:
  ;
}

int main()
{
  f(0);
  f(1);
  return 0;
}
