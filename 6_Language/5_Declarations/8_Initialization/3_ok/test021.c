#include <stdio.h>

int a[] = { 10, 20, 30, 40, 50 };

int main(void)
{
  int i;

  for (i = 0; i < 5 ; i++ )
    printf("a[%d] = %d\n", i, a[i]);

  return 0;
}
