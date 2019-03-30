#include <stdio.h>


int main(void)
{
  goto label;
  printf("error\n");
 label:
  printf("ok\n");
  return 0;
}
