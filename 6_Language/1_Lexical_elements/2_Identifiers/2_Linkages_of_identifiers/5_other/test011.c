#include <stdio.h>

int main(void)
{
  for ( int i = 0 ; i < 2 ; ++i )
    printf("i = %d\n", i);
  int x;
  for ( int j = 0 ; j < 3 ; ++j )
    printf("x = %d\n", x = j);
  return 0;
}
