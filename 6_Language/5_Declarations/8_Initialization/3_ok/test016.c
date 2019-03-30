#include <stdio.h>

int a[20], *b = &*(10+a);

int main(void)
{
  if ( b != a )
    printf("ok\n");
  else
    printf("error\n");
  b -= 10;
  if ( a == b )
    printf("ok\n");
  else
    printf("error\n");
  return 0;
}
