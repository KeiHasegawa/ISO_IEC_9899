#include <stdio.h>


int main()
{
  long int x = 1L;
  long int y = 2L;
  long int z = 3L;

  printf("x = %ld\n",x);
  printf("y = %ld\n",y);
  printf("z = %ld\n",z);
  y = 4L;
  printf("x = %ld\n",x);
  printf("y = %ld\n",y);
  printf("z = %ld\n",z);
  return 0;
}
