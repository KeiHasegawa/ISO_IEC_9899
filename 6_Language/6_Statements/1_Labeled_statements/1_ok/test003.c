#include <stdio.h>

int label[] = { 1, 2, 3, 4 };

void f(int a)
{
  if (a)
    goto label;
  a = sizeof label/sizeof label[0];
  printf("a = %d\n", a);
  goto label2;

 label:
  printf("label[%d] = %d\n", a, label[a]);
 label2:
  ;
}

int main()
{
  f(0);
  f(1);
  return 0;
}
