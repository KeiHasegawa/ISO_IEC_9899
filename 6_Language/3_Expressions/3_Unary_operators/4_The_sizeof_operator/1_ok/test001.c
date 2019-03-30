/*
 * Check if the result type of sizeof operator is unsigned integer type.
 */
#include <stdio.h>

void test00(void)
{
  if ( -sizeof(char) > sizeof(char) )
    printf("ok\n");
  else
    printf("error\n");
}

int main(void)
{
  test00();
  return 0;
}
