#include <stdio.h>

void f(int n)
{
  int a[n], i;
  for ( i = 0 ; i  < n ; i++ ){
    a[i] = i;
    printf("a[%d] = %d\n", i, a[i]);
  }
}

int main(void)
{
  f(3);
  return 0;
}
